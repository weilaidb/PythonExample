#define _ASM_X86_HYPERVISOR_H
extern void init_hypervisor(struct cpuinfo_x86 *c);
extern void init_hypervisor_platform(void);
struct hypervisor_x86 ;
extern const struct hypervisor_x86 *x86_hyper;
extern const struct hypervisor_x86 x86_hyper_vmware;
extern const struct hypervisor_x86 x86_hyper_ms_hyperv;
extern const struct hypervisor_x86 x86_hyper_xen_hvm;
static inline bool hypervisor_x2apic_available(void)
