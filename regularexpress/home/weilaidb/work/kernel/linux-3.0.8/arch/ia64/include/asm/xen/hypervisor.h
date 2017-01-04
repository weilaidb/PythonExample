#define _ASM_IA64_XEN_HYPERVISOR_H
extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;
void __init xen_setup_vcpu_info_placement(void);
void force_evtchn_callback(void);
#define scrub_pages(_p, _n) memset((void *)(_p), 0, (_n) << PAGE_SHIFT)
#define scrub_pages(_p, _n) ((void)0)
void xen_ia64_enable_opt_feature(void);
