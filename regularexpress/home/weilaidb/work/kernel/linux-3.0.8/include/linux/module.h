#define _LINUX_MODULE_H
#define MODULE_SUPPORTED_DEVICE(name)
#define MODULE_SYMBOL_PREFIX CONFIG_SYMBOL_PREFIX
#define MODULE_SYMBOL_PREFIX ""
#define MODULE_NAME_LEN MAX_PARAM_PREFIX_LEN
struct kernel_symbol
;
struct modversion_info
;
struct module;
struct module_attribute ;
struct module_version_attribute  __attribute__ ((__aligned__(sizeof(void *))));
extern ssize_t __modver_version_show(struct module_attribute *,
struct module *, char *);
struct module_kobject
;
extern int init_module(void);
extern void cleanup_module(void);
struct exception_table_entry;
const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
const struct exception_table_entry *last,
unsigned long value);
void sort_extable(struct exception_table_entry *start,
struct exception_table_entry *finish);
void sort_main_extable(void);
void trim_init_extable(struct module *m);
#define MODULE_GENERIC_TABLE(gtype,name)			\
extern const struct gtype##_id __mod_##gtype##_table		\
__attribute__ ((unused, alias(__stringify(name))))
extern struct module __this_module;
#define THIS_MODULE (&__this_module)
#define MODULE_GENERIC_TABLE(gtype,name)
#define THIS_MODULE ((struct module *)0)
#define MODULE_INFO(tag, info) __MODULE_INFO(tag, tag, info)
#define MODULE_ALIAS(_alias) MODULE_INFO(alias, _alias)
#define MODULE_LICENSE(_license) MODULE_INFO(license, _license)
#define MODULE_AUTHOR(_author) MODULE_INFO(author, _author)
#define MODULE_DESCRIPTION(_description) MODULE_INFO(description, _description)
#define MODULE_PARM_DESC(_parm, desc) \
__MODULE_INFO(parm, _parm, #_parm ":" desc)
#define MODULE_DEVICE_TABLE(type,name)		\
MODULE_GENERIC_TABLE(type##_device,name)
#if defined(MODULE) || !defined(CONFIG_SYSFS)
#define MODULE_VERSION(_version) MODULE_INFO(version, _version)
#define MODULE_VERSION(_version)					\
static struct module_version_attribute ___modver_attr = ;								\
static const struct module_version_attribute			\
__used __attribute__ ((__section__ ("__modver")))		\
* __moduleparam_const __modver_attr = &___modver_attr
#define MODULE_FIRMWARE(_firmware) MODULE_INFO(firmware, _firmware)
const struct exception_table_entry *search_exception_tables(unsigned long add);
struct notifier_block;
extern int modules_disabled;
void *__symbol_get(const char *symbol);
void *__symbol_get_gpl(const char *symbol);
#define symbol_get(x) ((typeof(&x))(__symbol_get(MODULE_SYMBOL_PREFIX #x)))
struct module_use ;
#define __CRC_SYMBOL(sym, sec)					\
extern void *__crc_##sym __attribute__((weak));		\
static const unsigned long __kcrctab_##sym		\
__used							\
__attribute__((section("___kcrctab" sec "+" #sym), unused))	\
= (unsigned long) &__crc_##sym;
#define __CRC_SYMBOL(sym, sec)
#define __EXPORT_SYMBOL(sym, sec)				\
extern typeof(sym) sym;					\
__CRC_SYMBOL(sym, sec)					\
static const char __kstrtab_##sym[]			\
__attribute__((section("__ksymtab_strings"), aligned(1))) \
= MODULE_SYMBOL_PREFIX #sym;                    	\
static const struct kernel_symbol __ksymtab_##sym	\
__used							\
__attribute__((section("___ksymtab" sec "+" #sym), unused))	\
=
#define EXPORT_SYMBOL(sym)					\
__EXPORT_SYMBOL(sym, "")
#define EXPORT_SYMBOL_GPL(sym)					\
__EXPORT_SYMBOL(sym, "_gpl")
#define EXPORT_SYMBOL_GPL_FUTURE(sym)				\
__EXPORT_SYMBOL(sym, "_gpl_future")
#define EXPORT_UNUSED_SYMBOL(sym) __EXPORT_SYMBOL(sym, "_unused")
#define EXPORT_UNUSED_SYMBOL_GPL(sym) __EXPORT_SYMBOL(sym, "_unused_gpl")
#define EXPORT_UNUSED_SYMBOL(sym)
#define EXPORT_UNUSED_SYMBOL_GPL(sym)
enum module_state
;
struct module
;
#define MODULE_ARCH_INIT
extern struct mutex module_mutex;
static inline int module_is_live(struct module *mod)
struct module *__module_text_address(unsigned long addr);
struct module *__module_address(unsigned long addr);
bool is_module_address(unsigned long addr);
bool is_module_percpu_address(unsigned long addr);
bool is_module_text_address(unsigned long addr);
static inline int within_module_core(unsigned long addr, struct module *mod)
static inline int within_module_init(unsigned long addr, struct module *mod)
struct module *find_module(const char *name);
struct symsearch ;
const struct kernel_symbol *find_symbol(const char *name,
struct module **owner,
const unsigned long **crc,
bool gplok,
bool warn);
bool each_symbol_section(bool (*fn)(const struct symsearch *arr,
struct module *owner,
void *data), void *data);
int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
char *name, char *module_name, int *exported);
unsigned long module_kallsyms_lookup_name(const char *name);
int module_kallsyms_on_each_symbol(int (*fn)(void *, const char *,
struct module *, unsigned long),
void *data);
extern void __module_put_and_exit(struct module *mod, long code)
__attribute__((noreturn));
#define module_put_and_exit(code) __module_put_and_exit(THIS_MODULE, code);
unsigned int module_refcount(struct module *mod);
void __symbol_put(const char *symbol);
#define symbol_put(x) __symbol_put(MODULE_SYMBOL_PREFIX #x)
void symbol_put_addr(void *addr);
static inline void __module_get(struct module *module)
static inline int try_module_get(struct module *module)
extern void module_put(struct module *module);
static inline int try_module_get(struct module *module)
static inline void module_put(struct module *module)
static inline void __module_get(struct module *module)
#define symbol_put(x) do  while(0)
#define symbol_put_addr(p) do  while(0)
int ref_module(struct module *a, struct module *b);
#define module_name(mod)			\
()
const char *module_address_lookup(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset,
char **modname,
char *namebuf);
int lookup_module_symbol_name(unsigned long addr, char *symname);
int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);
const struct exception_table_entry *search_module_extables(unsigned long addr);
int register_module_notifier(struct notifier_block * nb);
int unregister_module_notifier(struct notifier_block * nb);
extern void print_modules(void);
extern void module_update_tracepoints(void);
extern int module_get_iter_tracepoints(struct tracepoint_iter *iter);
#define EXPORT_SYMBOL(sym)
#define EXPORT_SYMBOL_GPL(sym)
#define EXPORT_SYMBOL_GPL_FUTURE(sym)
#define EXPORT_UNUSED_SYMBOL(sym)
#define EXPORT_UNUSED_SYMBOL_GPL(sym)
static inline const struct exception_table_entry *
search_module_extables(unsigned long addr)
static inline struct module *__module_address(unsigned long addr)
static inline struct module *__module_text_address(unsigned long addr)
static inline bool is_module_address(unsigned long addr)
static inline bool is_module_percpu_address(unsigned long addr)
static inline bool is_module_text_address(unsigned long addr)
#define symbol_get(x) ()
#define symbol_put(x) do  while(0)
#define symbol_put_addr(x) do  while(0)
static inline void __module_get(struct module *module)
static inline int try_module_get(struct module *module)
static inline void module_put(struct module *module)
#define module_name(mod) "kernel"
static inline const char *module_address_lookup(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset,
char **modname,
char *namebuf)
static inline int lookup_module_symbol_name(unsigned long addr, char *symname)
static inline int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name)
static inline int module_get_kallsym(unsigned int symnum, unsigned long *value,
char *type, char *name,
char *module_name, int *exported)
static inline unsigned long module_kallsyms_lookup_name(const char *name)
static inline int module_kallsyms_on_each_symbol(int (*fn)(void *, const char *,
struct module *,
unsigned long),
void *data)
static inline int register_module_notifier(struct notifier_block * nb)
static inline int unregister_module_notifier(struct notifier_block * nb)
#define module_put_and_exit(code) do_exit(code)
static inline void print_modules(void)
static inline void module_update_tracepoints(void)
static inline int module_get_iter_tracepoints(struct tracepoint_iter *iter)
extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;
#define symbol_request(x) try_then_request_module(symbol_get(x), "symbol:" #x)
#define __MODULE_STRING(x) __stringify(x)
extern void set_all_modules_text_rw(void);
extern void set_all_modules_text_ro(void);
static inline void set_all_modules_text_rw(void)
static inline void set_all_modules_text_ro(void)
void module_bug_finalize(const Elf_Ehdr *, const Elf_Shdr *,
struct module *);
void module_bug_cleanup(struct module *);
static inline void module_bug_finalize(const Elf_Ehdr *hdr,
const Elf_Shdr *sechdrs,
struct module *mod)
static inline void module_bug_cleanup(struct module *mod)
