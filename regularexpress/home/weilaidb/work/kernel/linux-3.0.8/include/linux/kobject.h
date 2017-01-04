#define _KOBJECT_H_
#define UEVENT_HELPER_PATH_LEN		256
#define UEVENT_NUM_ENVP			32
#define UEVENT_BUFFER_SIZE		2048
extern char uevent_helper[];
extern u64 uevent_seqnum;
enum kobject_action ;
struct kobject ;
extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
__attribute__((format(printf, 2, 3)));
extern int kobject_set_name_vargs(struct kobject *kobj, const char *fmt,
va_list vargs);
static inline const char *kobject_name(const struct kobject *kobj)
extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int __must_check kobject_add(struct kobject *kobj,
struct kobject *parent,
const char *fmt, ...)
__attribute__((format(printf, 3, 4)));
extern int __must_check kobject_init_and_add(struct kobject *kobj,
struct kobj_type *ktype,
struct kobject *parent,
const char *fmt, ...)
__attribute__((format(printf, 4, 5)));
extern void kobject_del(struct kobject *kobj);
extern struct kobject * __must_check kobject_create(void);
extern struct kobject * __must_check kobject_create_and_add(const char *name,
struct kobject *parent);
extern int __must_check kobject_rename(struct kobject *, const char *new_name);
extern int __must_check kobject_move(struct kobject *, struct kobject *);
extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);
extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);
struct kobj_type ;
struct kobj_uevent_env ;
struct kset_uevent_ops ;
struct kobj_attribute ;
extern const struct sysfs_ops kobj_sysfs_ops;
struct sock;
struct kset ;
extern void kset_init(struct kset *kset);
extern int __must_check kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * __must_check kset_create_and_add(const char *name,
const struct kset_uevent_ops *u,
struct kobject *parent_kobj);
static inline struct kset *to_kset(struct kobject *kobj)
static inline struct kset *kset_get(struct kset *k)
static inline void kset_put(struct kset *k)
static inline struct kobj_type *get_ktype(struct kobject *kobj)
extern struct kobject *kset_find_obj(struct kset *, const char *);
extern struct kobject *kset_find_obj_hinted(struct kset *, const char *,
struct kobject *);
extern struct kobject *kernel_kobj;
extern struct kobject *mm_kobj;
extern struct kobject *hypervisor_kobj;
extern struct kobject *power_kobj;
extern struct kobject *firmware_kobj;
#if defined(CONFIG_HOTPLUG)
int kobject_uevent(struct kobject *kobj, enum kobject_action action);
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
char *envp[]);
int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
__attribute__((format (printf, 2, 3)));
int kobject_action_type(const char *buf, size_t count,
enum kobject_action *type);
static inline int kobject_uevent(struct kobject *kobj,
enum kobject_action action)
static inline int kobject_uevent_env(struct kobject *kobj,
enum kobject_action action,
char *envp[])
static inline __attribute__((format(printf, 2, 3)))
int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
static inline int kobject_action_type(const char *buf, size_t count,
enum kobject_action *type)
