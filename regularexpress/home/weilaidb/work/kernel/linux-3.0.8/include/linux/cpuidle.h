#define _LINUX_CPUIDLE_H
#define CPUIDLE_STATE_MAX	8
#define CPUIDLE_NAME_LEN	16
#define CPUIDLE_DESC_LEN	32
struct cpuidle_device;
struct cpuidle_state ;
#define CPUIDLE_FLAG_TIME_VALID	(0x01)
#define CPUIDLE_FLAG_IGNORE	(0x100)
#define CPUIDLE_DRIVER_FLAGS_MASK (0xFFFF0000)
static inline void * cpuidle_get_statedata(struct cpuidle_state *state)
static inline void
cpuidle_set_statedata(struct cpuidle_state *state, void *data)
struct cpuidle_state_kobj ;
struct cpuidle_device ;
DECLARE_PER_CPU(struct cpuidle_device *, cpuidle_devices);
static inline int cpuidle_get_last_residency(struct cpuidle_device *dev)
struct cpuidle_driver ;
extern int cpuidle_register_driver(struct cpuidle_driver *drv);
struct cpuidle_driver *cpuidle_get_driver(void);
extern void cpuidle_unregister_driver(struct cpuidle_driver *drv);
extern int cpuidle_register_device(struct cpuidle_device *dev);
extern void cpuidle_unregister_device(struct cpuidle_device *dev);
extern void cpuidle_pause_and_lock(void);
extern void cpuidle_resume_and_unlock(void);
extern int cpuidle_enable_device(struct cpuidle_device *dev);
extern void cpuidle_disable_device(struct cpuidle_device *dev);
static inline int cpuidle_register_driver(struct cpuidle_driver *drv)
static inline struct cpuidle_driver *cpuidle_get_driver(void)
static inline void cpuidle_unregister_driver(struct cpuidle_driver *drv)
static inline int cpuidle_register_device(struct cpuidle_device *dev)
static inline void cpuidle_unregister_device(struct cpuidle_device *dev)
static inline void cpuidle_pause_and_lock(void)
static inline void cpuidle_resume_and_unlock(void)
static inline int cpuidle_enable_device(struct cpuidle_device *dev)
static inline void cpuidle_disable_device(struct cpuidle_device *dev)
struct cpuidle_governor ;
extern int cpuidle_register_governor(struct cpuidle_governor *gov);
extern void cpuidle_unregister_governor(struct cpuidle_governor *gov);
static inline int cpuidle_register_governor(struct cpuidle_governor *gov)
static inline void cpuidle_unregister_governor(struct cpuidle_governor *gov)
#define CPUIDLE_DRIVER_STATE_START	1
#define CPUIDLE_DRIVER_STATE_START	0
