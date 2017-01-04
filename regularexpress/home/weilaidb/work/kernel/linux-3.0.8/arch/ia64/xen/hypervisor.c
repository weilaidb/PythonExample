struct shared_info *HYPERVISOR_shared_info __read_mostly =
(struct shared_info *)XSI_BASE;
EXPORT_SYMBOL(HYPERVISOR_shared_info);
DEFINE_PER_CPU(struct vcpu_info *, xen_vcpu);
struct start_info *xen_start_info;
EXPORT_SYMBOL(xen_start_info);
EXPORT_SYMBOL(xen_domain_type);
EXPORT_SYMBOL(__hypercall);
static void __init xen_vcpu_setup(int cpu)
void __init xen_setup_vcpu_info_placement(void)
void __cpuinit
xen_cpu_init(void)
void
xen_ia64_enable_opt_feature(void)
