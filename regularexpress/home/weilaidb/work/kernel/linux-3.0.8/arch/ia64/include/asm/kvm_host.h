#define __ASM_KVM_HOST_H
#define KVM_MEMORY_SLOTS 32
#define KVM_PRIVATE_MEM_SLOTS 4
#define KVM_COALESCED_MMIO_PAGE_OFFSET 1
#define EXIT_REASON_VM_PANIC		0
#define EXIT_REASON_MMIO_INSTRUCTION	1
#define EXIT_REASON_PAL_CALL		2
#define EXIT_REASON_SAL_CALL		3
#define EXIT_REASON_SWITCH_RR6		4
#define EXIT_REASON_VM_DESTROY		5
#define EXIT_REASON_EXTERNAL_INTERRUPT	6
#define EXIT_REASON_IPI			7
#define EXIT_REASON_PTC_G		8
#define EXIT_REASON_DEBUG		20
#define KVM_VMM_SIZE (__IA64_UL_CONST(16)<<20)
#define KVM_VMM_SHIFT 24
#define KVM_VMM_BASE 0xD000000000000000
#define VMM_SIZE (__IA64_UL_CONST(8)<<20)
#define KVM_VM_BUFFER_BASE (KVM_VMM_BASE + VMM_SIZE)
#define KVM_VM_BUFFER_SIZE (__IA64_UL_CONST(8)<<20)
#define KVM_VM_DATA_SHIFT	26
#define KVM_VM_DATA_SIZE	(__IA64_UL_CONST(1) << KVM_VM_DATA_SHIFT)
#define KVM_VM_DATA_BASE	(KVM_VMM_BASE + KVM_VM_DATA_SIZE)
#define KVM_P2M_BASE		KVM_VM_DATA_BASE
#define KVM_P2M_SIZE		(__IA64_UL_CONST(24) << 20)
#define VHPT_SHIFT		16
#define VHPT_SIZE		(__IA64_UL_CONST(1) << VHPT_SHIFT)
#define VHPT_NUM_ENTRIES	(__IA64_UL_CONST(1) << (VHPT_SHIFT-5))
#define VTLB_SHIFT		16
#define VTLB_SIZE		(__IA64_UL_CONST(1) << VTLB_SHIFT)
#define VTLB_NUM_ENTRIES	(1UL << (VHPT_SHIFT-5))
#define VPD_SHIFT		16
#define VPD_SIZE		(__IA64_UL_CONST(1) << VPD_SHIFT)
#define VCPU_STRUCT_SHIFT	16
#define VCPU_STRUCT_SIZE	(__IA64_UL_CONST(1) << VCPU_STRUCT_SHIFT)
#define KVM_STK_SHIFT		16
#define KVM_STK_OFFSET		(__IA64_UL_CONST(1)<< KVM_STK_SHIFT)
#define KVM_VM_STRUCT_SHIFT	19
#define KVM_VM_STRUCT_SIZE	(__IA64_UL_CONST(1) << KVM_VM_STRUCT_SHIFT)
#define KVM_MEM_DIRY_LOG_SHIFT	19
#define KVM_MEM_DIRTY_LOG_SIZE (__IA64_UL_CONST(1) << KVM_MEM_DIRY_LOG_SHIFT)
#define KVM_MAX_VCPUS	(KVM_VM_DATA_SIZE - KVM_P2M_SIZE - KVM_VM_STRUCT_SIZE -\
KVM_MEM_DIRTY_LOG_SIZE) / sizeof(struct kvm_vcpu_data)
#define KVM_MAX_MEM_SIZE (KVM_P2M_SIZE >> 3 << PAGE_SHIFT)
#define VMM_LOG_LEN 256
struct kvm_vcpu_data ;
struct kvm_vm_data ;
#define VCPU_BASE(n)	(KVM_VM_DATA_BASE + \
offsetof(struct kvm_vm_data, vcpu_data[n]))
#define KVM_VM_BASE	(KVM_VM_DATA_BASE + \
offsetof(struct kvm_vm_data, kvm_vm_struct))
#define KVM_MEM_DIRTY_LOG_BASE	KVM_VM_DATA_BASE + \
offsetof(struct kvm_vm_data, kvm_mem_dirty_log)
#define VHPT_BASE(n) (VCPU_BASE(n) + offsetof(struct kvm_vcpu_data, vcpu_vhpt))
#define VTLB_BASE(n) (VCPU_BASE(n) + offsetof(struct kvm_vcpu_data, vcpu_vtlb))
#define VPD_BASE(n)  (VCPU_BASE(n) + offsetof(struct kvm_vcpu_data, vcpu_vpd))
#define VCPU_STRUCT_BASE(n)	(VCPU_BASE(n) + \
offsetof(struct kvm_vcpu_data, vcpu_struct))
#define IOREQ_READ      1
#define IOREQ_WRITE     0
#define STATE_IOREQ_NONE        0
#define STATE_IOREQ_READY       1
#define STATE_IOREQ_INPROCESS   2
#define STATE_IORESP_READY      3
#define GPFN_MEM        (0UL << 60)
#define GPFN_FRAME_BUFFER   (1UL << 60)
#define GPFN_LOW_MMIO       (2UL << 60)
#define GPFN_PIB        (3UL << 60)
#define GPFN_IOSAPIC        (4UL << 60)
#define GPFN_LEGACY_IO      (5UL << 60)
#define GPFN_GFW        (6UL << 60)
#define GPFN_PHYS_MMIO      (7UL << 60)
#define GPFN_IO_MASK        (7UL << 60)
#define GPFN_INV_MASK       (1UL << 63)
#define INVALID_MFN       (~0UL)
#define MEM_G   (1UL << 30)
#define MEM_M   (1UL << 20)
#define MMIO_START       (3 * MEM_G)
#define MMIO_SIZE        (512 * MEM_M)
#define VGA_IO_START     0xA0000UL
#define VGA_IO_SIZE      0x20000
#define LEGACY_IO_START  (MMIO_START + MMIO_SIZE)
#define LEGACY_IO_SIZE   (64 * MEM_M)
#define IO_SAPIC_START   0xfec00000UL
#define IO_SAPIC_SIZE    0x100000
#define PIB_START 0xfee00000UL
#define PIB_SIZE 0x200000
#define GFW_START        (4 * MEM_G - 16 * MEM_M)
#define GFW_SIZE         (16 * MEM_M)
#define dest_Fixed IOSAPIC_FIXED
#define dest_LowestPrio IOSAPIC_LOWEST_PRIORITY
#define NMI_VECTOR      		2
#define ExtINT_VECTOR       		0
#define NULL_VECTOR     		(-1)
#define IA64_SPURIOUS_INT_VECTOR    	0x0f
#define VCPU_LID(v) (((u64)(v)->vcpu_id) << 24)
#define SAPIC_DELIV_SHIFT      8
#define SAPIC_FIXED            0x0
#define SAPIC_LOWEST_PRIORITY  0x1
#define SAPIC_PMI              0x2
#define SAPIC_NMI              0x4
#define SAPIC_INIT             0x5
#define SAPIC_EXTINT           0x7
#define KVM_REQ_PTC_G		32
#define KVM_REQ_RESUME		33
#define KVM_HPAGE_GFN_SHIFT(x)	0
#define KVM_NR_PAGE_SIZES	1
#define KVM_PAGES_PER_HPAGE(x)	1
struct kvm;
struct kvm_vcpu;
struct kvm_mmio_req ;
struct kvm_pal_call;
struct kvm_sal_call;
struct kvm_switch_rr6 ;
union ia64_ipi_a;
union ia64_ipi_d ;
struct kvm_ipi_data;
struct kvm_ptc_g ;
struct exit_ctl_data;
union pte_flags ;
union ia64_pta ;
struct thash_cb ;
struct kvm_vcpu_stat ;
struct kvm_vcpu_arch ;
struct kvm_vm_stat ;
struct kvm_sal_data ;
struct kvm_arch ;
union cpuid3_t ;
struct kvm_pt_regs ;
static inline struct kvm_pt_regs *vcpu_regs(struct kvm_vcpu *v)
typedef int kvm_vmm_entry(void);
typedef void kvm_tramp_entry(union context *host, union context *guest);
struct kvm_vmm_info;
int kvm_highest_pending_irq(struct kvm_vcpu *vcpu);
int kvm_emulate_halt(struct kvm_vcpu *vcpu);
int kvm_pal_emul(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run);
void kvm_sal_emul(struct kvm_vcpu *vcpu);
#define __KVM_HAVE_ARCH_VM_ALLOC 1
struct kvm *kvm_arch_alloc_vm(void);
void kvm_arch_free_vm(struct kvm *kvm);
