extern void pm_runtime_init(struct device *dev);
extern void pm_runtime_remove(struct device *dev);
static inline void pm_runtime_init(struct device *dev)
static inline void pm_runtime_remove(struct device *dev)
extern int pm_async_enabled;
extern struct list_head dpm_list;
static inline struct device *to_device(struct list_head *entry)
extern void device_pm_init(struct device *dev);
extern void device_pm_add(struct device *);
extern void device_pm_remove(struct device *);
extern void device_pm_move_before(struct device *, struct device *);
extern void device_pm_move_after(struct device *, struct device *);
extern void device_pm_move_last(struct device *);
static inline void device_pm_init(struct device *dev)
static inline void device_pm_remove(struct device *dev)
static inline void device_pm_add(struct device *dev)
static inline void device_pm_move_before(struct device *deva,
struct device *devb)
static inline void device_pm_move_after(struct device *deva,
struct device *devb)
static inline void device_pm_move_last(struct device *dev)
extern int dpm_sysfs_add(struct device *dev);
extern void dpm_sysfs_remove(struct device *dev);
extern void rpm_sysfs_remove(struct device *dev);
extern int wakeup_sysfs_add(struct device *dev);
extern void wakeup_sysfs_remove(struct device *dev);
static inline int dpm_sysfs_add(struct device *dev)
static inline void dpm_sysfs_remove(struct device *dev)
static inline void rpm_sysfs_remove(struct device *dev)
static inline int wakeup_sysfs_add(struct device *dev)
static inline void wakeup_sysfs_remove(struct device *dev)
