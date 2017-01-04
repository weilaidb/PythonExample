#define _LINUX_PM_WAKEUP_H
# error "please don't include this file directly"
struct wakeup_source ;
static inline bool device_can_wakeup(struct device *dev)
static inline bool device_may_wakeup(struct device *dev)
extern struct wakeup_source *wakeup_source_create(const char *name);
extern void wakeup_source_destroy(struct wakeup_source *ws);
extern void wakeup_source_add(struct wakeup_source *ws);
extern void wakeup_source_remove(struct wakeup_source *ws);
extern struct wakeup_source *wakeup_source_register(const char *name);
extern void wakeup_source_unregister(struct wakeup_source *ws);
extern int device_wakeup_enable(struct device *dev);
extern int device_wakeup_disable(struct device *dev);
extern void device_set_wakeup_capable(struct device *dev, bool capable);
extern int device_init_wakeup(struct device *dev, bool val);
extern int device_set_wakeup_enable(struct device *dev, bool enable);
extern void __pm_stay_awake(struct wakeup_source *ws);
extern void pm_stay_awake(struct device *dev);
extern void __pm_relax(struct wakeup_source *ws);
extern void pm_relax(struct device *dev);
extern void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec);
extern void pm_wakeup_event(struct device *dev, unsigned int msec);
static inline void device_set_wakeup_capable(struct device *dev, bool capable)
static inline bool device_can_wakeup(struct device *dev)
static inline struct wakeup_source *wakeup_source_create(const char *name)
static inline void wakeup_source_destroy(struct wakeup_source *ws)
static inline void wakeup_source_add(struct wakeup_source *ws)
static inline void wakeup_source_remove(struct wakeup_source *ws)
static inline struct wakeup_source *wakeup_source_register(const char *name)
static inline void wakeup_source_unregister(struct wakeup_source *ws)
static inline int device_wakeup_enable(struct device *dev)
static inline int device_wakeup_disable(struct device *dev)
static inline int device_set_wakeup_enable(struct device *dev, bool enable)
static inline int device_init_wakeup(struct device *dev, bool val)
static inline bool device_may_wakeup(struct device *dev)
static inline void __pm_stay_awake(struct wakeup_source *ws)
static inline void pm_stay_awake(struct device *dev)
static inline void __pm_relax(struct wakeup_source *ws)
static inline void pm_relax(struct device *dev)
static inline void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec)
static inline void pm_wakeup_event(struct device *dev, unsigned int msec)
