#define CREATE_TRACE_POINTS
#define ARCH_SHF_SMALL 0
# define debug_align(X) ALIGN(X, PAGE_SIZE)
# define debug_align(X) (X)
#define MOD_NUMBER_OF_PAGES(BASE, SIZE) (((SIZE) > 0) ?		\
(PFN_DOWN((unsigned long)(BASE) + (SIZE) - 1) -	\
PFN_DOWN((unsigned long)BASE) + 1)	\
: (0UL))
#define INIT_OFFSET_MASK (1UL << (BITS_PER_LONG-1))
DEFINE_MUTEX(module_mutex);
EXPORT_SYMBOL_GPL(module_mutex);
static LIST_HEAD(modules);
struct list_head *kdb_modules = &modules;
int modules_disabled = 0;
static DECLARE_WAIT_QUEUE_HEAD(module_wq);
static BLOCKING_NOTIFIER_HEAD(module_notify_list);
static unsigned long module_addr_min = -1UL, module_addr_max = 0;
int register_module_notifier(struct notifier_block * nb)
EXPORT_SYMBOL(register_module_notifier);
int unregister_module_notifier(struct notifier_block * nb)
EXPORT_SYMBOL(unregister_module_notifier);
struct load_info ;
static inline int strong_try_module_get(struct module *mod)
static inline void add_taint_module(struct module *mod, unsigned flag)
void __module_put_and_exit(struct module *mod, long code)
EXPORT_SYMBOL(__module_put_and_exit);
static unsigned int find_sec(const struct load_info *info, const char *name)
static void *section_addr(const struct load_info *info, const char *name)
static void *section_objs(const struct load_info *info,
const char *name,
size_t object_size,
unsigned int *num)
extern const struct kernel_symbol __start___ksymtab[];
extern const struct kernel_symbol __stop___ksymtab[];
extern const struct kernel_symbol __start___ksymtab_gpl[];
extern const struct kernel_symbol __stop___ksymtab_gpl[];
extern const struct kernel_symbol __start___ksymtab_gpl_future[];
extern const struct kernel_symbol __stop___ksymtab_gpl_future[];
extern const unsigned long __start___kcrctab[];
extern const unsigned long __start___kcrctab_gpl[];
extern const unsigned long __start___kcrctab_gpl_future[];
extern const struct kernel_symbol __start___ksymtab_unused[];
extern const struct kernel_symbol __stop___ksymtab_unused[];
extern const struct kernel_symbol __start___ksymtab_unused_gpl[];
extern const struct kernel_symbol __stop___ksymtab_unused_gpl[];
extern const unsigned long __start___kcrctab_unused[];
extern const unsigned long __start___kcrctab_unused_gpl[];
#define symversion(base, idx) NULL
#define symversion(base, idx) ((base != NULL) ? ((base) + (idx)) : NULL)
static bool each_symbol_in_section(const struct symsearch *arr,
unsigned int arrsize,
struct module *owner,
bool (*fn)(const struct symsearch *syms,
struct module *owner,
void *data),
void *data)
bool each_symbol_section(bool (*fn)(const struct symsearch *arr,
struct module *owner,
void *data),
void *data)
EXPORT_SYMBOL_GPL(each_symbol_section);
struct find_symbol_arg ;
static bool check_symbol(const struct symsearch *syms,
struct module *owner,
unsigned int symnum, void *data)
static int cmp_name(const void *va, const void *vb)
static bool find_symbol_in_section(const struct symsearch *syms,
struct module *owner,
void *data)
const struct kernel_symbol *find_symbol(const char *name,
struct module **owner,
const unsigned long **crc,
bool gplok,
bool warn)
EXPORT_SYMBOL_GPL(find_symbol);
struct module *find_module(const char *name)
EXPORT_SYMBOL_GPL(find_module);
static inline void __percpu *mod_percpu(struct module *mod)
static int percpu_modalloc(struct module *mod,
unsigned long size, unsigned long align)
static void percpu_modfree(struct module *mod)
static unsigned int find_pcpusec(struct load_info *info)
static void percpu_modcopy(struct module *mod,
const void *from, unsigned long size)
bool is_module_percpu_address(unsigned long addr)
static inline void __percpu *mod_percpu(struct module *mod)
static inline int percpu_modalloc(struct module *mod,
unsigned long size, unsigned long align)
static inline void percpu_modfree(struct module *mod)
static unsigned int find_pcpusec(struct load_info *info)
static inline void percpu_modcopy(struct module *mod,
const void *from, unsigned long size)
bool is_module_percpu_address(unsigned long addr)
#define MODINFO_ATTR(field)	\
static void setup_modinfo_##field(struct module *mod, const char *s)  \
\
static ssize_t show_modinfo_##field(struct module_attribute *mattr,   \
struct module *mod, char *buffer)             \
\
static int modinfo_##field##_exists(struct module *mod)               \
\
static void free_modinfo_##field(struct module *mod)                  \
\
static struct module_attribute modinfo_##field = ;
MODINFO_ATTR(version);
MODINFO_ATTR(srcversion);
static char last_unloaded_module[MODULE_NAME_LEN+1];
EXPORT_TRACEPOINT_SYMBOL(module_get);
static int module_unload_init(struct module *mod)
static int already_uses(struct module *a, struct module *b)
static int add_module_usage(struct module *a, struct module *b)
int ref_module(struct module *a, struct module *b)
EXPORT_SYMBOL_GPL(ref_module);
static void module_unload_free(struct module *mod)
static inline int try_force_unload(unsigned int flags)
static inline int try_force_unload(unsigned int flags)
struct stopref
;
static int __try_stop_module(void *_sref)
static int try_stop_module(struct module *mod, int flags, int *forced)
unsigned int module_refcount(struct module *mod)
EXPORT_SYMBOL(module_refcount);
static void free_module(struct module *mod);
static void wait_for_zero_refcount(struct module *mod)
SYSCALL_DEFINE2(delete_module, const char __user *, name_user,
unsigned int, flags)
static inline void print_unload_info(struct seq_file *m, struct module *mod)
void __symbol_put(const char *symbol)
EXPORT_SYMBOL(__symbol_put);
void symbol_put_addr(void *addr)
EXPORT_SYMBOL_GPL(symbol_put_addr);
static ssize_t show_refcnt(struct module_attribute *mattr,
struct module *mod, char *buffer)
static struct module_attribute refcnt = ;
void module_put(struct module *module)
EXPORT_SYMBOL(module_put);
static inline void print_unload_info(struct seq_file *m, struct module *mod)
static inline void module_unload_free(struct module *mod)
int ref_module(struct module *a, struct module *b)
EXPORT_SYMBOL_GPL(ref_module);
static inline int module_unload_init(struct module *mod)
static ssize_t show_initstate(struct module_attribute *mattr,
struct module *mod, char *buffer)
static struct module_attribute initstate = ;
static struct module_attribute *modinfo_attrs[] = ;
static const char vermagic[] = VERMAGIC_STRING;
static int try_to_force_load(struct module *mod, const char *reason)
static unsigned long maybe_relocated(unsigned long crc,
const struct module *crc_owner)
static int check_version(Elf_Shdr *sechdrs,
unsigned int versindex,
const char *symname,
struct module *mod,
const unsigned long *crc,
const struct module *crc_owner)
static inline int check_modstruct_version(Elf_Shdr *sechdrs,
unsigned int versindex,
struct module *mod)
static inline int same_magic(const char *amagic, const char *bmagic,
bool has_crcs)
static inline int check_version(Elf_Shdr *sechdrs,
unsigned int versindex,
const char *symname,
struct module *mod,
const unsigned long *crc,
const struct module *crc_owner)
static inline int check_modstruct_version(Elf_Shdr *sechdrs,
unsigned int versindex,
struct module *mod)
static inline int same_magic(const char *amagic, const char *bmagic,
bool has_crcs)
static const struct kernel_symbol *resolve_symbol(struct module *mod,
const struct load_info *info,
const char *name,
char ownername[])
static const struct kernel_symbol *
resolve_symbol_wait(struct module *mod,
const struct load_info *info,
const char *name)
static inline bool sect_empty(const Elf_Shdr *sect)
struct module_sect_attr
;
struct module_sect_attrs
;
static ssize_t module_sect_show(struct module_attribute *mattr,
struct module *mod, char *buf)
static void free_sect_attrs(struct module_sect_attrs *sect_attrs)
static void add_sect_attrs(struct module *mod, const struct load_info *info)
static void remove_sect_attrs(struct module *mod)
struct module_notes_attrs ;
static ssize_t module_notes_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static void free_notes_attrs(struct module_notes_attrs *notes_attrs,
unsigned int i)
static void add_notes_attrs(struct module *mod, const struct load_info *info)
static void remove_notes_attrs(struct module *mod)
static inline void add_sect_attrs(struct module *mod,
const struct load_info *info)
static inline void remove_sect_attrs(struct module *mod)
static inline void add_notes_attrs(struct module *mod,
const struct load_info *info)
static inline void remove_notes_attrs(struct module *mod)
static void add_usage_links(struct module *mod)
static void del_usage_links(struct module *mod)
static int module_add_modinfo_attrs(struct module *mod)
static void module_remove_modinfo_attrs(struct module *mod)
static int mod_sysfs_init(struct module *mod)
static int mod_sysfs_setup(struct module *mod,
const struct load_info *info,
struct kernel_param *kparam,
unsigned int num_params)
static void mod_sysfs_fini(struct module *mod)
static int mod_sysfs_setup(struct module *mod,
const struct load_info *info,
struct kernel_param *kparam,
unsigned int num_params)
static void mod_sysfs_fini(struct module *mod)
static void module_remove_modinfo_attrs(struct module *mod)
static void del_usage_links(struct module *mod)
static void mod_sysfs_teardown(struct module *mod)
static int __unlink_module(void *_mod)
void set_page_attributes(void *start, void *end, int (*set)(unsigned long start, int num_pages))
static void set_section_ro_nx(void *base,
unsigned long text_size,
unsigned long ro_size,
unsigned long total_size)
static void unset_module_core_ro_nx(struct module *mod)
static void unset_module_init_ro_nx(struct module *mod)
void set_all_modules_text_rw(void)
void set_all_modules_text_ro(void)
static inline void set_section_ro_nx(void *base, unsigned long text_size, unsigned long ro_size, unsigned long total_size)
static void unset_module_core_ro_nx(struct module *mod)
static void unset_module_init_ro_nx(struct module *mod)
static void free_module(struct module *mod)
void *__symbol_get(const char *symbol)
EXPORT_SYMBOL_GPL(__symbol_get);
static int verify_export_symbols(struct module *mod)
static int simplify_symbols(struct module *mod, const struct load_info *info)
static int apply_relocations(struct module *mod, const struct load_info *info)
unsigned int __weak arch_mod_section_prepend(struct module *mod,
unsigned int section)
static long get_offset(struct module *mod, unsigned int *size,
Elf_Shdr *sechdr, unsigned int section)
static void layout_sections(struct module *mod, struct load_info *info)
static void set_license(struct module *mod, const char *license)
static char *next_string(char *string, unsigned long *secsize)
static char *get_modinfo(struct load_info *info, const char *tag)
static void setup_modinfo(struct module *mod, struct load_info *info)
static void free_modinfo(struct module *mod)
static const struct kernel_symbol *lookup_symbol(const char *name,
const struct kernel_symbol *start,
const struct kernel_symbol *stop)
static int is_exported(const char *name, unsigned long value,
const struct module *mod)
static char elf_type(const Elf_Sym *sym, const struct load_info *info)
static bool is_core_symbol(const Elf_Sym *src, const Elf_Shdr *sechdrs,
unsigned int shnum)
static void layout_symtab(struct module *mod, struct load_info *info)
static void add_kallsyms(struct module *mod, const struct load_info *info)
static inline void layout_symtab(struct module *mod, struct load_info *info)
static void add_kallsyms(struct module *mod, const struct load_info *info)
static void dynamic_debug_setup(struct _ddebug *debug, unsigned int num)
static void dynamic_debug_remove(struct _ddebug *debug)
static void *module_alloc_update_bounds(unsigned long size)
static void kmemleak_load_module(const struct module *mod,
const struct load_info *info)
static inline void kmemleak_load_module(const struct module *mod,
const struct load_info *info)
static int copy_and_check(struct load_info *info,
const void __user *umod, unsigned long len,
const char __user *uargs)
static void free_copy(struct load_info *info)
static int rewrite_section_headers(struct load_info *info)
static struct module *setup_load_info(struct load_info *info)
static int check_modinfo(struct module *mod, struct load_info *info)
static void find_module_sections(struct module *mod, struct load_info *info)
static int move_module(struct module *mod, struct load_info *info)
static int check_module_license_and_versions(struct module *mod)
static void flush_module_icache(const struct module *mod)
static struct module *layout_and_allocate(struct load_info *info)
static void module_deallocate(struct module *mod, struct load_info *info)
static int post_relocation(struct module *mod, const struct load_info *info)
static struct module *load_module(void __user *umod,
unsigned long len,
const char __user *uargs)
static void do_mod_ctors(struct module *mod)
SYSCALL_DEFINE3(init_module, void __user *, umod,
unsigned long, len, const char __user *, uargs)
static inline int within(unsigned long addr, void *start, unsigned long size)
static inline int is_arm_mapping_symbol(const char *str)
static const char *get_ksymbol(struct module *mod,
unsigned long addr,
unsigned long *size,
unsigned long *offset)
const char *module_address_lookup(unsigned long addr,
unsigned long *size,
unsigned long *offset,
char **modname,
char *namebuf)
int lookup_module_symbol_name(unsigned long addr, char *symname)
int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size,
unsigned long *offset, char *modname, char *name)
int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
char *name, char *module_name, int *exported)
static unsigned long mod_find_symname(struct module *mod, const char *name)
unsigned long module_kallsyms_lookup_name(const char *name)
int module_kallsyms_on_each_symbol(int (*fn)(void *, const char *,
struct module *, unsigned long),
void *data)
static char *module_flags(struct module *mod, char *buf)
static void *m_start(struct seq_file *m, loff_t *pos)
static void *m_next(struct seq_file *m, void *p, loff_t *pos)
static void m_stop(struct seq_file *m, void *p)
static int m_show(struct seq_file *m, void *p)
static const struct seq_operations modules_op = ;
static int modules_open(struct inode *inode, struct file *file)
static const struct file_operations proc_modules_operations = ;
static int __init proc_modules_init(void)
module_init(proc_modules_init);
const struct exception_table_entry *search_module_extables(unsigned long addr)
bool is_module_address(unsigned long addr)
struct module *__module_address(unsigned long addr)
EXPORT_SYMBOL_GPL(__module_address);
bool is_module_text_address(unsigned long addr)
struct module *__module_text_address(unsigned long addr)
EXPORT_SYMBOL_GPL(__module_text_address);
void print_modules(void)
void module_layout(struct module *mod,
struct modversion_info *ver,
struct kernel_param *kp,
struct kernel_symbol *ks,
struct tracepoint * const *tp)
EXPORT_SYMBOL(module_layout);
void module_update_tracepoints(void)
int module_get_iter_tracepoints(struct tracepoint_iter *iter)
