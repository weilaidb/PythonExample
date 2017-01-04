#define _ASM_X86_XEN_INTERFACE_32_H
#define FLAT_RING1_CS 0xe019
#define FLAT_RING1_DS 0xe021
#define FLAT_RING1_SS 0xe021
#define FLAT_RING3_CS 0xe02b
#define FLAT_RING3_DS 0xe033
#define FLAT_RING3_SS 0xe033
#define FLAT_KERNEL_CS FLAT_RING1_CS
#define FLAT_KERNEL_DS FLAT_RING1_DS
#define FLAT_KERNEL_SS FLAT_RING1_SS
#define FLAT_USER_CS    FLAT_RING3_CS
#define FLAT_USER_DS    FLAT_RING3_DS
#define FLAT_USER_SS    FLAT_RING3_SS
#define TRAP_INSTR "int $0x82"
#define __MACH2PHYS_VIRT_START 0xF5800000
#define __MACH2PHYS_VIRT_END   0xF6800000
#define __MACH2PHYS_SHIFT      2
#define __HYPERVISOR_VIRT_START 0xF5800000
struct cpu_user_regs ;
DEFINE_GUEST_HANDLE_STRUCT(cpu_user_regs);
typedef uint64_t tsc_timestamp_t;
struct arch_vcpu_info ;
struct xen_callback ;
typedef struct xen_callback xen_callback_t;
#define XEN_CALLBACK(__cs, __eip)				\
((struct xen_callback))
#define xen_pfn_to_cr3(pfn) (((unsigned)(pfn) << 12) | ((unsigned)(pfn) >> 20))
#define xen_cr3_to_pfn(cr3) (((unsigned)(cr3) >> 12) | ((unsigned)(cr3) << 20))
