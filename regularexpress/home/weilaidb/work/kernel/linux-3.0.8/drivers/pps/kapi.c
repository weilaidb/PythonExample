#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void pps_add_offset(struct pps_ktime *ts, struct pps_ktime *offset)
struct pps_device *pps_register_source(struct pps_source_info *info,
int default_params)
EXPORT_SYMBOL(pps_register_source);
void pps_unregister_source(struct pps_device *pps)
EXPORT_SYMBOL(pps_unregister_source);
void pps_event(struct pps_device *pps, struct pps_event_time *ts, int event,
void *data)
EXPORT_SYMBOL(pps_event);
