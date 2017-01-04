struct cod_manager ;
struct cod_libraryobj ;
static u32 refs = 0L;
static struct dbll_fxns ldr_fxns = ;
static bool no_op(void);
static s32 cod_f_close(struct file *filp)
static struct file *cod_f_open(const char *psz_file_name, const char *sz_mode)
static s32 cod_f_read(void __user *pbuffer, s32 size, s32 count,
struct file *filp)
static s32 cod_f_seek(struct file *filp, s32 offset, s32 origin)
static s32 cod_f_tell(struct file *filp)
void cod_close(struct cod_libraryobj *lib)
int cod_create(struct cod_manager **mgr, char *str_zl_file)
void cod_delete(struct cod_manager *cod_mgr_obj)
void cod_exit(void)
int cod_get_base_lib(struct cod_manager *cod_mgr_obj,
struct dbll_library_obj **plib)
int cod_get_base_name(struct cod_manager *cod_mgr_obj, char *sz_name,
u32 usize)
int cod_get_entry(struct cod_manager *cod_mgr_obj, u32 *entry_pt)
int cod_get_loader(struct cod_manager *cod_mgr_obj,
struct dbll_tar_obj **loader)
int cod_get_section(struct cod_libraryobj *lib, char *str_sect,
u32 *addr, u32 *len)
int cod_get_sym_value(struct cod_manager *cod_mgr_obj, char *str_sym,
u32 *pul_value)
bool cod_init(void)
int cod_load_base(struct cod_manager *cod_mgr_obj, u32 num_argc, char *args[],
cod_writefxn pfn_write, void *arb, char *envp[])
int cod_open(struct cod_manager *hmgr, char *sz_coff_path,
u32 flags, struct cod_libraryobj **lib_obj)
int cod_open_base(struct cod_manager *hmgr, char *sz_coff_path,
dbll_flags flags)
int cod_read_section(struct cod_libraryobj *lib, char *str_sect,
char *str_content, u32 content_size)
static bool no_op(void)
