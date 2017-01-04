#define LINUX_PPS_KC_H
extern int pps_kc_bind(struct pps_device *pps,
struct pps_bind_args *bind_args);
extern void pps_kc_remove(struct pps_device *pps);
extern void pps_kc_event(struct pps_device *pps,
struct pps_event_time *ts, int event);
static inline int pps_kc_bind(struct pps_device *pps,
struct pps_bind_args *bind_args)
static inline void pps_kc_remove(struct pps_device *pps)
static inline void pps_kc_event(struct pps_device *pps,
struct pps_event_time *ts, int event)
