#define _ASM_X86_XEN_INTERFACE_64_H
#define FLAT_RING3_CS32 0xe023
#define FLAT_RING3_CS64 0xe033
#define FLAT_RING3_DS32 0xe02b
#define FLAT_RING3_DS64 0x0000
#define FLAT_RING3_SS32 0xe02b
#define FLAT_RING3_SS64 0xe02b
#define FLAT_KERNEL_DS64 FLAT_RING3_DS64
#define FLAT_KERNEL_DS32 FLAT_RING3_DS32
#define FLAT_KERNEL_DS   FLAT_KERNEL_DS64
#define FLAT_KERNEL_CS64 FLAT_RING3_CS64
#define FLAT_KERNEL_CS32 FLAT_RING3_CS32
#define FLAT_KERNEL_CS   FLAT_KERNEL_CS64
#define FLAT_KERNEL_SS64 FLAT_RING3_SS64
#define FLAT_KERNEL_SS32 FLAT_RING3_SS32
#define FLAT_KERNEL_SS   FLAT_KERNEL_SS64
#define FLAT_USER_DS64 FLAT_RING3_DS64
#define FLAT_USER_DS32 FLAT_RING3_DS32
#define FLAT_USER_DS   FLAT_USER_DS64
#define FLAT_USER_CS64 FLAT_RING3_CS64
#define FLAT_USER_CS32 FLAT_RING3_CS32
#define FLAT_USER_CS   FLAT_USER_CS64
#define FLAT_USER_SS64 FLAT_RING3_SS64
#define FLAT_USER_SS32 FLAT_RING3_SS32
#define FLAT_USER_SS   FLAT_USER_SS64
#define __HYPERVISOR_VIRT_START 0xFFFF800000000000
#define __HYPERVISOR_VIRT_END   0xFFFF880000000000
#define __MACH2PHYS_VIRT_START  0xFFFF800000000000
#define __MACH2PHYS_VIRT_END    0xFFFF804000000000
#define __MACH2PHYS_SHIFT       3
#define SEGBASE_FS          0
#define SEGBASE_GS_USER     1
#define SEGBASE_GS_KERNEL   2
#define SEGBASE_GS_USER_SEL 3
#define _VGCF_in_syscall 8
#define VGCF_in_syscall  (1<<_VGCF_in_syscall)
#define VGCF_IN_SYSCALL  VGCF_in_syscall
struct iret_context ;
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define __DECL_REG(name) union
#define __DECL_REG(name) uint64_t r ## name
struct cpu_user_regs ;
DEFINE_GUEST_HANDLE_STRUCT(cpu_user_regs);
#undef __DECL_REG
#define xen_pfn_to_cr3(pfn) ((unsigned long)(pfn) << 12)
#define xen_cr3_to_pfn(cr3) ((unsigned long)(cr3) >> 12)
struct arch_vcpu_info ;
typedef unsigned long xen_callback_t;
#define XEN_CALLBACK(__cs, __rip)				\
((unsigned long)(__rip))
