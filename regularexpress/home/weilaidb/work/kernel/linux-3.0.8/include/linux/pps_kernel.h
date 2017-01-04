#define LINUX_PPS_KERNEL_H
struct pps_device;
struct pps_source_info ;
struct pps_event_time ;
struct pps_device ;
extern struct device_attribute pps_attrs[];
extern struct pps_device *pps_register_source(
struct pps_source_info *info, int default_params);
extern void pps_unregister_source(struct pps_device *pps);
extern int pps_register_cdev(struct pps_device *pps);
extern void pps_unregister_cdev(struct pps_device *pps);
extern void pps_event(struct pps_device *pps,
struct pps_event_time *ts, int event, void *data);
static inline void timespec_to_pps_ktime(struct pps_ktime *kt,
struct timespec ts)
static inline void pps_get_ts(struct pps_event_time *ts)
static inline void pps_get_ts(struct pps_event_time *ts)
