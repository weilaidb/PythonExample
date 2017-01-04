#define _ASM_X86_XEN_HYPERVISOR_H
extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;
static inline uint32_t xen_cpuid_base(void)
extern bool xen_hvm_need_lapic(void);
static inline bool xen_x2apic_para_available(void)
static inline bool xen_x2apic_para_available(void)
