#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
DEFINE_SPINLOCK(pps_kc_hardpps_lock);
struct pps_device *pps_kc_hardpps_dev;
int pps_kc_hardpps_mode;
int pps_kc_bind(struct pps_device *pps, struct pps_bind_args *bind_args)
void pps_kc_remove(struct pps_device *pps)
void pps_kc_event(struct pps_device *pps, struct pps_event_time *ts,
int event)
