#define CPUID_VMWARE_INFO_LEAF	0x40000000
#define VMWARE_HYPERVISOR_MAGIC	0x564D5868
#define VMWARE_HYPERVISOR_PORT	0x5658
#define VMWARE_PORT_CMD_GETVERSION	10
#define VMWARE_PORT_CMD_GETHZ		45
#define VMWARE_PORT(cmd, eax, ebx, ecx, edx)				\
__asm__("inl (%%dx)" :						\
"=a"(eax), "=c"(ecx), "=d"(edx), "=b"(ebx) :	\
"0"(VMWARE_HYPERVISOR_MAGIC),			\
"1"(VMWARE_PORT_CMD_##cmd),			\
"2"(VMWARE_HYPERVISOR_PORT), "3"(UINT_MAX) :	\
"memory");
static inline int __vmware_platform(void)
static unsigned long vmware_get_tsc_khz(void)
static void __init vmware_platform_setup(void)
static bool __init vmware_platform(void)
static void __cpuinit vmware_set_cpu_features(struct cpuinfo_x86 *c)
const __refconst struct hypervisor_x86 x86_hyper_vmware = ;
EXPORT_SYMBOL(x86_hyper_vmware);
