#define __ASM_IA64_KVM_H
#define __KVM_HAVE_IOAPIC
#define __KVM_HAVE_DEVICE_ASSIGNMENT
#define KVM_NR_INTERRUPTS 256
#define KVM_IOAPIC_NUM_PINS  48
struct kvm_ioapic_state ;
#define KVM_IRQCHIP_PIC_MASTER   0
#define KVM_IRQCHIP_PIC_SLAVE    1
#define KVM_IRQCHIP_IOAPIC       2
#define KVM_NR_IRQCHIPS          3
#define KVM_CONTEXT_SIZE	8*1024
struct kvm_fpreg ;
union context ;
struct thash_data ;
#define	NITRS	8
#define NDTRS	8
struct saved_vpd ;
struct kvm_regs ;
struct kvm_sregs ;
struct kvm_fpu ;
#define KVM_IA64_VCPU_STACK_SHIFT	16
#define KVM_IA64_VCPU_STACK_SIZE	(1UL << KVM_IA64_VCPU_STACK_SHIFT)
struct kvm_ia64_vcpu_stack ;
struct kvm_debug_exit_arch ;
struct kvm_guest_debug_arch ;
