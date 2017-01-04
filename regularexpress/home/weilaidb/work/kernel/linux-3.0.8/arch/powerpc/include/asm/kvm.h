#define __LINUX_KVM_POWERPC_H
struct kvm_regs ;
#define KVM_SREGS_E_IMPL_NONE	0
#define KVM_SREGS_E_IMPL_FSL	1
#define KVM_SREGS_E_FSL_PIDn	(1 << 0)
#define KVM_SREGS_E_BASE		(1 << 0)
#define KVM_SREGS_E_ARCH206		(1 << 1)
#define KVM_SREGS_E_64			(1 << 2)
#define KVM_SREGS_E_SPRG8		(1 << 3)
#define KVM_SREGS_E_MCIVPR		(1 << 4)
#define KVM_SREGS_E_IVOR		(1 << 5)
#define KVM_SREGS_E_ARCH206_MMU		(1 << 6)
#define KVM_SREGS_E_DEBUG		(1 << 7)
#define KVM_SREGS_E_ED			(1 << 8)
#define KVM_SREGS_E_SPE			(1 << 9)
#define KVM_SREGS_EXP			(1 << 10)
#define KVM_SREGS_E_PD			(1 << 11)
#define KVM_SREGS_E_PC			(1 << 12)
#define KVM_SREGS_E_PT			(1 << 13)
#define KVM_SREGS_E_PM			(1 << 14)
#define KVM_SREGS_E_UPDATE_MCSR		(1 << 0)
#define KVM_SREGS_E_UPDATE_TSR		(1 << 1)
#define KVM_SREGS_E_UPDATE_DEC		(1 << 2)
#define KVM_SREGS_E_UPDATE_DBSR		(1 << 3)
struct kvm_sregs ;
struct kvm_fpu ;
struct kvm_debug_exit_arch ;
struct kvm_guest_debug_arch ;
#define KVM_REG_MASK		0x001f
#define KVM_REG_EXT_MASK	0xffe0
#define KVM_REG_GPR		0x0000
#define KVM_REG_FPR		0x0020
#define KVM_REG_QPR		0x0040
#define KVM_REG_FQPR		0x0060
#define KVM_INTERRUPT_SET	-1U
#define KVM_INTERRUPT_UNSET	-2U
#define KVM_INTERRUPT_SET_LEVEL	-3U
