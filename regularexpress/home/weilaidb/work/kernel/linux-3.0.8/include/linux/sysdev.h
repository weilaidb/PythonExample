#define _SYSDEV_H_
struct sys_device;
struct sysdev_class_attribute;
struct sysdev_class ;
struct sysdev_class_attribute ;
#define _SYSDEV_CLASS_ATTR(_name,_mode,_show,_store) 		\
#define SYSDEV_CLASS_ATTR(_name,_mode,_show,_store) 		\
struct sysdev_class_attribute attr_##_name = 		\
_SYSDEV_CLASS_ATTR(_name,_mode,_show,_store)
extern int sysdev_class_register(struct sysdev_class *);
extern void sysdev_class_unregister(struct sysdev_class *);
extern int sysdev_class_create_file(struct sysdev_class *,
struct sysdev_class_attribute *);
extern void sysdev_class_remove_file(struct sysdev_class *,
struct sysdev_class_attribute *);
struct sysdev_driver ;
extern int sysdev_driver_register(struct sysdev_class *, struct sysdev_driver *);
extern void sysdev_driver_unregister(struct sysdev_class *, struct sysdev_driver *);
struct sys_device ;
extern int sysdev_register(struct sys_device *);
extern void sysdev_unregister(struct sys_device *);
struct sysdev_attribute ;
#define _SYSDEV_ATTR(_name, _mode, _show, _store)		\
#define SYSDEV_ATTR(_name, _mode, _show, _store)		\
struct sysdev_attribute attr_##_name =			\
_SYSDEV_ATTR(_name, _mode, _show, _store);
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);
static inline int
sysdev_create_files(struct sys_device *d, struct sysdev_attribute **a)
static inline void
sysdev_remove_files(struct sys_device *d, struct sysdev_attribute **a)
struct sysdev_ext_attribute ;
extern ssize_t sysdev_show_ulong(struct sys_device *, struct sysdev_attribute *,
char *);
extern ssize_t sysdev_store_ulong(struct sys_device *,
struct sysdev_attribute *, const char *, size_t);
extern ssize_t sysdev_show_int(struct sys_device *, struct sysdev_attribute *,
char *);
extern ssize_t sysdev_store_int(struct sys_device *,
struct sysdev_attribute *, const char *, size_t);
#define _SYSDEV_ULONG_ATTR(_name, _mode, _var)				\
#define SYSDEV_ULONG_ATTR(_name, _mode, _var)			\
struct sysdev_ext_attribute attr_##_name = 		\
_SYSDEV_ULONG_ATTR(_name, _mode, _var);
#define _SYSDEV_INT_ATTR(_name, _mode, _var)				\
#define SYSDEV_INT_ATTR(_name, _mode, _var)			\
struct sysdev_ext_attribute attr_##_name = 		\
_SYSDEV_INT_ATTR(_name, _mode, _var);
