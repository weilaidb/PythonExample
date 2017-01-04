#define _ASM_X86_KVM_H
#define __KVM_HAVE_PIT
#define __KVM_HAVE_IOAPIC
#define __KVM_HAVE_DEVICE_ASSIGNMENT
#define __KVM_HAVE_MSI
#define __KVM_HAVE_USER_NMI
#define __KVM_HAVE_GUEST_DEBUG
#define __KVM_HAVE_MSIX
#define __KVM_HAVE_MCE
#define __KVM_HAVE_PIT_STATE2
#define __KVM_HAVE_XEN_HVM
#define __KVM_HAVE_VCPU_EVENTS
#define __KVM_HAVE_DEBUGREGS
#define __KVM_HAVE_XSAVE
#define __KVM_HAVE_XCRS
#define KVM_NR_INTERRUPTS 256
struct kvm_memory_alias ;
struct kvm_pic_state ;
#define KVM_IOAPIC_NUM_PINS  24
struct kvm_ioapic_state ;
#define KVM_IRQCHIP_PIC_MASTER   0
#define KVM_IRQCHIP_PIC_SLAVE    1
#define KVM_IRQCHIP_IOAPIC       2
#define KVM_NR_IRQCHIPS          3
struct kvm_regs ;
#define KVM_APIC_REG_SIZE 0x400
struct kvm_lapic_state ;
struct kvm_segment ;
struct kvm_dtable ;
struct kvm_sregs ;
struct kvm_fpu ;
struct kvm_msr_entry ;
struct kvm_msrs ;
struct kvm_msr_list ;
struct kvm_cpuid_entry ;
struct kvm_cpuid ;
struct kvm_cpuid_entry2 ;
#define KVM_CPUID_FLAG_SIGNIFCANT_INDEX 1
#define KVM_CPUID_FLAG_STATEFUL_FUNC    2
#define KVM_CPUID_FLAG_STATE_READ_NEXT  4
struct kvm_cpuid2 ;
struct kvm_pit_channel_state ;
struct kvm_debug_exit_arch ;
#define KVM_GUESTDBG_USE_SW_BP		0x00010000
#define KVM_GUESTDBG_USE_HW_BP		0x00020000
#define KVM_GUESTDBG_INJECT_DB		0x00040000
#define KVM_GUESTDBG_INJECT_BP		0x00080000
struct kvm_guest_debug_arch ;
struct kvm_pit_state ;
#define KVM_PIT_FLAGS_HPET_LEGACY  0x00000001
struct kvm_pit_state2 ;
struct kvm_reinject_control ;
#define KVM_VCPUEVENT_VALID_NMI_PENDING	0x00000001
#define KVM_VCPUEVENT_VALID_SIPI_VECTOR	0x00000002
#define KVM_VCPUEVENT_VALID_SHADOW	0x00000004
#define KVM_X86_SHADOW_INT_MOV_SS	0x01
#define KVM_X86_SHADOW_INT_STI		0x02
struct kvm_vcpu_events ;
struct kvm_debugregs ;
struct kvm_xsave ;
#define KVM_MAX_XCRS	16
struct kvm_xcr ;
struct kvm_xcrs ;
