extern const char xen_hypervisor_callback[];
extern const char xen_failsafe_callback[];
extern void xen_sysenter_target(void);
extern void xen_syscall_target(void);
extern void xen_syscall32_target(void);
phys_addr_t xen_extra_mem_start, xen_extra_mem_size;
#define EXTRA_MEM_RATIO		(10)
static void __init xen_add_extra_mem(unsigned long pages)
static unsigned long __init xen_release_chunk(phys_addr_t start_addr,
phys_addr_t end_addr)
static unsigned long __init xen_return_unused_memory(unsigned long max_pfn,
const struct e820map *e820)
static unsigned long __init xen_set_identity(const struct e820entry *list,
ssize_t map_size)
static unsigned long __init xen_get_max_pages(void)
char * __init xen_memory_setup(void)
static void __init fiddle_vdso(void)
static int __cpuinit register_callback(unsigned type, const void *func)
void __cpuinit xen_enable_sysenter(void)
void __cpuinit xen_enable_syscall(void)
void __init xen_arch_setup(void)
