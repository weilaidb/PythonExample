static const __initconst struct hypervisor_x86 * const hypervisors[] =
;
const struct hypervisor_x86 *x86_hyper;
EXPORT_SYMBOL(x86_hyper);
static inline void __init
detect_hypervisor_vendor(void)
void __cpuinit init_hypervisor(struct cpuinfo_x86 *c)
void __init init_hypervisor_platform(void)
