#define _PLATFORM_DEVICE_H_
struct mfd_cell;
struct platform_device ;
#define platform_get_device_id(pdev)	((pdev)->id_entry)
#define to_platform_device(x) container_of((x), struct platform_device, dev)
extern int platform_device_register(struct platform_device *);
extern void platform_device_unregister(struct platform_device *);
extern struct bus_type platform_bus_type;
extern struct device platform_bus;
extern struct resource *platform_get_resource(struct platform_device *, unsigned int, unsigned int);
extern int platform_get_irq(struct platform_device *, unsigned int);
extern struct resource *platform_get_resource_byname(struct platform_device *, unsigned int, const char *);
extern int platform_get_irq_byname(struct platform_device *, const char *);
extern int platform_add_devices(struct platform_device **, int);
extern struct platform_device *platform_device_register_resndata(
struct device *parent, const char *name, int id,
const struct resource *res, unsigned int num,
const void *data, size_t size);
static inline struct platform_device *platform_device_register_simple(
const char *name, int id,
const struct resource *res, unsigned int num)
static inline struct platform_device *platform_device_register_data(
struct device *parent, const char *name, int id,
const void *data, size_t size)
extern struct platform_device *platform_device_alloc(const char *name, int id);
extern int platform_device_add_resources(struct platform_device *pdev,
const struct resource *res,
unsigned int num);
extern int platform_device_add_data(struct platform_device *pdev, const void *data, size_t size);
extern int platform_device_add(struct platform_device *pdev);
extern void platform_device_del(struct platform_device *pdev);
extern void platform_device_put(struct platform_device *pdev);
struct platform_driver ;
extern int platform_driver_register(struct platform_driver *);
extern void platform_driver_unregister(struct platform_driver *);
extern int platform_driver_probe(struct platform_driver *driver,
int (*probe)(struct platform_device *));
static inline void *platform_get_drvdata(const struct platform_device *pdev)
static inline void platform_set_drvdata(struct platform_device *pdev, void *data)
extern struct platform_device *platform_create_bundle(struct platform_driver *driver,
int (*probe)(struct platform_device *),
struct resource *res, unsigned int n_res,
const void *data, size_t size);
struct early_platform_driver ;
#define EARLY_PLATFORM_ID_UNSET -2
#define EARLY_PLATFORM_ID_ERROR -3
extern int early_platform_driver_register(struct early_platform_driver *epdrv,
char *buf);
extern void early_platform_add_devices(struct platform_device **devs, int num);
static inline int is_early_platform_device(struct platform_device *pdev)
extern void early_platform_driver_register_all(char *class_str);
extern int early_platform_driver_probe(char *class_str,
int nr_probe, int user_only);
extern void early_platform_cleanup(void);
#define early_platform_init(class_string, platdrv)		\
early_platform_init_buffer(class_string, platdrv, NULL, 0)
#define early_platform_init_buffer(class_string, platdrv, buf, bufsiz)	\
static __initdata struct early_platform_driver early_driver = ;									\
static int __init early_platform_driver_setup_func(char *buffer)	\
\
early_param(class_string, early_platform_driver_setup_func)
#define early_platform_init_buffer(class_string, platdrv, buf, bufsiz)	\
static inline char *early_platform_driver_setup_func(void)		\
extern int platform_pm_prepare(struct device *dev);
extern void platform_pm_complete(struct device *dev);
#define platform_pm_prepare	NULL
#define platform_pm_complete	NULL
extern int platform_pm_suspend(struct device *dev);
extern int platform_pm_suspend_noirq(struct device *dev);
extern int platform_pm_resume(struct device *dev);
extern int platform_pm_resume_noirq(struct device *dev);
#define platform_pm_suspend		NULL
#define platform_pm_resume		NULL
#define platform_pm_suspend_noirq	NULL
#define platform_pm_resume_noirq	NULL
extern int platform_pm_freeze(struct device *dev);
extern int platform_pm_freeze_noirq(struct device *dev);
extern int platform_pm_thaw(struct device *dev);
extern int platform_pm_thaw_noirq(struct device *dev);
extern int platform_pm_poweroff(struct device *dev);
extern int platform_pm_poweroff_noirq(struct device *dev);
extern int platform_pm_restore(struct device *dev);
extern int platform_pm_restore_noirq(struct device *dev);
#define platform_pm_freeze		NULL
#define platform_pm_thaw		NULL
#define platform_pm_poweroff		NULL
#define platform_pm_restore		NULL
#define platform_pm_freeze_noirq	NULL
#define platform_pm_thaw_noirq		NULL
#define platform_pm_poweroff_noirq	NULL
#define platform_pm_restore_noirq	NULL
#define USE_PLATFORM_PM_SLEEP_OPS \
.prepare = platform_pm_prepare, \
.complete = platform_pm_complete, \
.suspend = platform_pm_suspend, \
.resume = platform_pm_resume, \
.freeze = platform_pm_freeze, \
.thaw = platform_pm_thaw, \
.poweroff = platform_pm_poweroff, \
.restore = platform_pm_restore, \
.suspend_noirq = platform_pm_suspend_noirq, \
.resume_noirq = platform_pm_resume_noirq, \
.freeze_noirq = platform_pm_freeze_noirq, \
.thaw_noirq = platform_pm_thaw_noirq, \
.poweroff_noirq = platform_pm_poweroff_noirq, \
.restore_noirq = platform_pm_restore_noirq,
#define USE_PLATFORM_PM_SLEEP_OPS
