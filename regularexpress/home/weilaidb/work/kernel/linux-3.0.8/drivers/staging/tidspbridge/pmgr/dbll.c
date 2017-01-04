#define MAXBUCKETS 211
#define MAXEXPR 128
#define DOFF_ALIGN(x) (((x) + 3) & ~3UL)
struct dbll_tar_obj ;
struct dbll_stream ;
struct ldr_symbol ;
struct dbll_alloc ;
struct dbll_init_obj ;
struct dbll_library_obj ;
struct dbll_symbol ;
static void dof_close(struct dbll_library_obj *zl_lib);
static int dof_open(struct dbll_library_obj *zl_lib);
static s32 no_op(struct dynamic_loader_initialize *thisptr, void *bufr,
ldr_addr locn, struct ldr_section_info *info,
unsigned bytsize);
static int dbll_read_buffer(struct dynamic_loader_stream *this, void *buffer,
unsigned bufsize);
static int dbll_set_file_posn(struct dynamic_loader_stream *this,
unsigned int pos);
static struct dynload_symbol *dbll_find_symbol(struct dynamic_loader_sym *this,
const char *name);
static struct dynload_symbol *dbll_add_to_symbol_table(struct dynamic_loader_sym
*this, const char *name,
unsigned module_id);
static struct dynload_symbol *find_in_symbol_table(struct dynamic_loader_sym
*this, const char *name,
unsigned moduleid);
static void dbll_purge_symbol_table(struct dynamic_loader_sym *this,
unsigned module_id);
static void *allocate(struct dynamic_loader_sym *this, unsigned memsize);
static void deallocate(struct dynamic_loader_sym *this, void *mem_ptr);
static void dbll_err_report(struct dynamic_loader_sym *this, const char *errstr,
va_list args);
static int dbll_rmm_alloc(struct dynamic_loader_allocate *this,
struct ldr_section_info *info, unsigned align);
static void rmm_dealloc(struct dynamic_loader_allocate *this,
struct ldr_section_info *info);
static int connect(struct dynamic_loader_initialize *this);
static int read_mem(struct dynamic_loader_initialize *this, void *buf,
ldr_addr addr, struct ldr_section_info *info,
unsigned bytes);
static int write_mem(struct dynamic_loader_initialize *this, void *buf,
ldr_addr addr, struct ldr_section_info *info,
unsigned nbytes);
static int fill_mem(struct dynamic_loader_initialize *this, ldr_addr addr,
struct ldr_section_info *info, unsigned bytes,
unsigned val);
static int execute(struct dynamic_loader_initialize *this, ldr_addr start);
static void release(struct dynamic_loader_initialize *this);
static u16 name_hash(void *key, u16 max_bucket);
static bool name_match(void *key, void *sp);
static void sym_delete(void *value);
static u32 refs;
static int redefined_symbol;
static int gbl_search = 1;
void dbll_close(struct dbll_library_obj *zl_lib)
int dbll_create(struct dbll_tar_obj **target_obj,
struct dbll_attrs *pattrs)
void dbll_delete(struct dbll_tar_obj *target)
void dbll_exit(void)
bool dbll_get_addr(struct dbll_library_obj *zl_lib, char *name,
struct dbll_sym_val **sym_val)
void dbll_get_attrs(struct dbll_tar_obj *target, struct dbll_attrs *pattrs)
bool dbll_get_c_addr(struct dbll_library_obj *zl_lib, char *name,
struct dbll_sym_val **sym_val)
int dbll_get_sect(struct dbll_library_obj *lib, char *name, u32 *paddr,
u32 *psize)
bool dbll_init(void)
int dbll_load(struct dbll_library_obj *lib, dbll_flags flags,
struct dbll_attrs *attrs, u32 *entry)
int dbll_open(struct dbll_tar_obj *target, char *file, dbll_flags flags,
struct dbll_library_obj **lib_obj)
int dbll_read_sect(struct dbll_library_obj *lib, char *name,
char *buf, u32 size)
void dbll_unload(struct dbll_library_obj *lib, struct dbll_attrs *attrs)
static void dof_close(struct dbll_library_obj *zl_lib)
static int dof_open(struct dbll_library_obj *zl_lib)
static u16 name_hash(void *key, u16 max_bucket)
static bool name_match(void *key, void *sp)
static int no_op(struct dynamic_loader_initialize *thisptr, void *bufr,
ldr_addr locn, struct ldr_section_info *info, unsigned bytsize)
static void sym_delete(void *value)
static int dbll_read_buffer(struct dynamic_loader_stream *this, void *buffer,
unsigned bufsize)
static int dbll_set_file_posn(struct dynamic_loader_stream *this,
unsigned int pos)
static struct dynload_symbol *dbll_find_symbol(struct dynamic_loader_sym *this,
const char *name)
static struct dynload_symbol *find_in_symbol_table(struct dynamic_loader_sym
*this, const char *name,
unsigned moduleid)
static struct dynload_symbol *dbll_add_to_symbol_table(struct dynamic_loader_sym
*this, const char *name,
unsigned module_id)
static void dbll_purge_symbol_table(struct dynamic_loader_sym *this,
unsigned module_id)
static void *allocate(struct dynamic_loader_sym *this, unsigned memsize)
static void deallocate(struct dynamic_loader_sym *this, void *mem_ptr)
static void dbll_err_report(struct dynamic_loader_sym *this, const char *errstr,
va_list args)
static int dbll_rmm_alloc(struct dynamic_loader_allocate *this,
struct ldr_section_info *info, unsigned align)
static void rmm_dealloc(struct dynamic_loader_allocate *this,
struct ldr_section_info *info)
static int connect(struct dynamic_loader_initialize *this)
static int read_mem(struct dynamic_loader_initialize *this, void *buf,
ldr_addr addr, struct ldr_section_info *info,
unsigned nbytes)
static int write_mem(struct dynamic_loader_initialize *this, void *buf,
ldr_addr addr, struct ldr_section_info *info,
unsigned bytes)
static int fill_mem(struct dynamic_loader_initialize *this, ldr_addr addr,
struct ldr_section_info *info, unsigned bytes, unsigned val)
static int execute(struct dynamic_loader_initialize *this, ldr_addr start)
static void release(struct dynamic_loader_initialize *this)
struct find_symbol_context ;
void find_symbol_callback(void *elem, void *user_data)
bool dbll_find_dsp_symbol(struct dbll_library_obj *zl_lib, u32 address,
u32 offset_range, u32 *sym_addr_output,
char *name_output)
