#define __LINUX_APM_EMULATION_H
struct apm_power_info ;
extern void (*apm_get_power_status)(struct apm_power_info *);
void apm_queue_event(apm_event_t event);
