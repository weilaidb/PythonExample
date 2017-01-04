static DEFINE_MUTEX(param_lock);
struct kmalloced_param ;
static LIST_HEAD(kmalloced_params);
static void *kmalloc_parameter(unsigned int size)
static void maybe_kfree_parameter(void *param)
static inline char dash2underscore(char c)
static inline int parameq(const char *input, const char *paramname)
static int parse_one(char *param,
char *val,
const struct kernel_param *params,
unsigned num_params,
int (*handle_unknown)(char *param, char *val))
static char *next_arg(char *args, char **param, char **val)
int parse_args(const char *name,
char *args,
const struct kernel_param *params,
unsigned num,
int (*unknown)(char *param, char *val))
#define STANDARD_PARAM_DEF(name, type, format, tmptype, strtolfn)      	\
int param_set_##name(const char *val, const struct kernel_param *kp) \
\
int param_get_##name(char *buffer, const struct kernel_param *kp) \
\
struct kernel_param_ops param_ops_##name = ;								\
EXPORT_SYMBOL(param_set_##name);				\
EXPORT_SYMBOL(param_get_##name);				\
EXPORT_SYMBOL(param_ops_##name)
STANDARD_PARAM_DEF(byte, unsigned char, "%c", unsigned long, strict_strtoul);
STANDARD_PARAM_DEF(short, short, "%hi", long, strict_strtol);
STANDARD_PARAM_DEF(ushort, unsigned short, "%hu", unsigned long, strict_strtoul);
STANDARD_PARAM_DEF(int, int, "%i", long, strict_strtol);
STANDARD_PARAM_DEF(uint, unsigned int, "%u", unsigned long, strict_strtoul);
STANDARD_PARAM_DEF(long, long, "%li", long, strict_strtol);
STANDARD_PARAM_DEF(ulong, unsigned long, "%lu", unsigned long, strict_strtoul);
int param_set_charp(const char *val, const struct kernel_param *kp)
EXPORT_SYMBOL(param_set_charp);
int param_get_charp(char *buffer, const struct kernel_param *kp)
EXPORT_SYMBOL(param_get_charp);
static void param_free_charp(void *arg)
struct kernel_param_ops param_ops_charp = ;
EXPORT_SYMBOL(param_ops_charp);
int param_set_bool(const char *val, const struct kernel_param *kp)
EXPORT_SYMBOL(param_set_bool);
int param_get_bool(char *buffer, const struct kernel_param *kp)
EXPORT_SYMBOL(param_get_bool);
struct kernel_param_ops param_ops_bool = ;
EXPORT_SYMBOL(param_ops_bool);
int param_set_invbool(const char *val, const struct kernel_param *kp)
EXPORT_SYMBOL(param_set_invbool);
int param_get_invbool(char *buffer, const struct kernel_param *kp)
EXPORT_SYMBOL(param_get_invbool);
struct kernel_param_ops param_ops_invbool = ;
EXPORT_SYMBOL(param_ops_invbool);
static int param_array(const char *name,
const char *val,
unsigned int min, unsigned int max,
void *elem, int elemsize,
int (*set)(const char *, const struct kernel_param *kp),
u16 flags,
unsigned int *num)
static int param_array_set(const char *val, const struct kernel_param *kp)
static int param_array_get(char *buffer, const struct kernel_param *kp)
static void param_array_free(void *arg)
struct kernel_param_ops param_array_ops = ;
EXPORT_SYMBOL(param_array_ops);
int param_set_copystring(const char *val, const struct kernel_param *kp)
EXPORT_SYMBOL(param_set_copystring);
int param_get_string(char *buffer, const struct kernel_param *kp)
EXPORT_SYMBOL(param_get_string);
struct kernel_param_ops param_ops_string = ;
EXPORT_SYMBOL(param_ops_string);
#define to_module_attr(n) container_of(n, struct module_attribute, attr)
#define to_module_kobject(n) container_of(n, struct module_kobject, kobj)
extern struct kernel_param __start___param[], __stop___param[];
struct param_attribute
;
struct module_param_attrs
;
#define to_param_attr(n) container_of(n, struct param_attribute, mattr)
static ssize_t param_attr_show(struct module_attribute *mattr,
struct module *mod, char *buf)
static ssize_t param_attr_store(struct module_attribute *mattr,
struct module *owner,
const char *buf, size_t len)
#define __modinit
#define __modinit __init
void __kernel_param_lock(void)
EXPORT_SYMBOL(__kernel_param_lock);
void __kernel_param_unlock(void)
EXPORT_SYMBOL(__kernel_param_unlock);
static __modinit int add_sysfs_param(struct module_kobject *mk,
const struct kernel_param *kp,
const char *name)
static void free_module_param_attrs(struct module_kobject *mk)
int module_param_sysfs_setup(struct module *mod,
const struct kernel_param *kparam,
unsigned int num_params)
void module_param_sysfs_remove(struct module *mod)
void destroy_params(const struct kernel_param *params, unsigned num)
static struct module_kobject * __init locate_module_kobject(const char *name)
static void __init kernel_add_sysfs_param(const char *name,
struct kernel_param *kparam,
unsigned int name_skip)
static void __init param_sysfs_builtin(void)
ssize_t __modver_version_show(struct module_attribute *mattr,
struct module *mod, char *buf)
extern const struct module_version_attribute *__start___modver[];
extern const struct module_version_attribute *__stop___modver[];
static void __init version_sysfs_builtin(void)
static ssize_t module_attr_show(struct kobject *kobj,
struct attribute *attr,
char *buf)
static ssize_t module_attr_store(struct kobject *kobj,
struct attribute *attr,
const char *buf, size_t len)
static const struct sysfs_ops module_sysfs_ops = ;
static int uevent_filter(struct kset *kset, struct kobject *kobj)
static const struct kset_uevent_ops module_uevent_ops = ;
struct kset *module_kset;
int module_sysfs_initialized;
struct kobj_type module_ktype = ;
static int __init param_sysfs_init(void)
subsys_initcall(param_sysfs_init);
