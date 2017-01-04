fpswa_interface_t *vmm_fpswa_interface;
#define IA64_VHPT_TRANS_VECTOR			0x0000
#define IA64_INST_TLB_VECTOR			0x0400
#define IA64_DATA_TLB_VECTOR			0x0800
#define IA64_ALT_INST_TLB_VECTOR		0x0c00
#define IA64_ALT_DATA_TLB_VECTOR		0x1000
#define IA64_DATA_NESTED_TLB_VECTOR		0x1400
#define IA64_INST_KEY_MISS_VECTOR		0x1800
#define IA64_DATA_KEY_MISS_VECTOR		0x1c00
#define IA64_DIRTY_BIT_VECTOR			0x2000
#define IA64_INST_ACCESS_BIT_VECTOR		0x2400
#define IA64_DATA_ACCESS_BIT_VECTOR		0x2800
#define IA64_BREAK_VECTOR			0x2c00
#define IA64_EXTINT_VECTOR			0x3000
#define IA64_PAGE_NOT_PRESENT_VECTOR		0x5000
#define IA64_KEY_PERMISSION_VECTOR		0x5100
#define IA64_INST_ACCESS_RIGHTS_VECTOR		0x5200
#define IA64_DATA_ACCESS_RIGHTS_VECTOR		0x5300
#define IA64_GENEX_VECTOR			0x5400
#define IA64_DISABLED_FPREG_VECTOR		0x5500
#define IA64_NAT_CONSUMPTION_VECTOR		0x5600
#define IA64_SPECULATION_VECTOR		0x5700
#define IA64_DEBUG_VECTOR			0x5900
#define IA64_UNALIGNED_REF_VECTOR		0x5a00
#define IA64_UNSUPPORTED_DATA_REF_VECTOR	0x5b00
#define IA64_FP_FAULT_VECTOR			0x5c00
#define IA64_FP_TRAP_VECTOR			0x5d00
#define IA64_LOWERPRIV_TRANSFER_TRAP_VECTOR 	0x5e00
#define IA64_TAKEN_BRANCH_TRAP_VECTOR		0x5f00
#define IA64_SINGLE_STEP_TRAP_VECTOR		0x6000
#define INITIAL_PSR_VALUE_AT_INTERRUPTION (IA64_PSR_UP | IA64_PSR_MFL |\
IA64_PSR_MFH | IA64_PSR_PK | IA64_PSR_DT |    	\
IA64_PSR_RT | IA64_PSR_MC|IA64_PSR_IT)
#define DOMN_PAL_REQUEST    0x110000
#define DOMN_SAL_REQUEST    0x110001
static u64 vec2off[68] = ;
static void collect_interruption(struct kvm_vcpu *vcpu)
void inject_guest_interruption(struct kvm_vcpu *vcpu, u64 vec)
static u64 vcpu_get_itir_on_fault(struct kvm_vcpu *vcpu, u64 ifa)
void set_ifa_itir_iha(struct kvm_vcpu *vcpu, u64 vadr,
int set_ifa, int set_itir, int set_iha)
void dtlb_fault(struct kvm_vcpu *vcpu, u64 vadr)
void itlb_fault(struct kvm_vcpu *vcpu, u64 vadr)
void nested_dtlb(struct kvm_vcpu *vcpu)
void alt_dtlb(struct kvm_vcpu *vcpu, u64 vadr)
void alt_itlb(struct kvm_vcpu *vcpu, u64 vadr)
static void _vhpt_fault(struct kvm_vcpu *vcpu, u64 vadr)
void ivhpt_fault(struct kvm_vcpu *vcpu, u64 vadr)
void dvhpt_fault(struct kvm_vcpu *vcpu, u64 vadr)
void _general_exception(struct kvm_vcpu *vcpu)
void illegal_op(struct kvm_vcpu *vcpu)
void illegal_dep(struct kvm_vcpu *vcpu)
void rsv_reg_field(struct kvm_vcpu *vcpu)
void privilege_op(struct kvm_vcpu *vcpu)
void unimpl_daddr(struct kvm_vcpu *vcpu)
void privilege_reg(struct kvm_vcpu *vcpu)
static void _nat_consumption_fault(struct kvm_vcpu *vcpu, u64 vadr,
enum tlb_miss_type t)
void inat_page_consumption(struct kvm_vcpu *vcpu, u64 vadr)
void rnat_consumption(struct kvm_vcpu *vcpu)
void dnat_page_consumption(struct kvm_vcpu *vcpu, u64 vadr)
static void __page_not_present(struct kvm_vcpu *vcpu, u64 vadr)
void data_page_not_present(struct kvm_vcpu *vcpu, u64 vadr)
void inst_page_not_present(struct kvm_vcpu *vcpu, u64 vadr)
void data_access_rights(struct kvm_vcpu *vcpu, u64 vadr)
fpswa_ret_t vmm_fp_emulate(int fp_fault, void *bundle, unsigned long *ipsr,
unsigned long *fpsr, unsigned long *isr, unsigned long *pr,
unsigned long *ifs, struct kvm_pt_regs *regs)
unsigned long vmm_handle_fpu_swa(int fp_fault, struct kvm_pt_regs *regs,
unsigned long isr)
void reflect_interruption(u64 ifa, u64 isr, u64 iim,
u64 vec, struct kvm_pt_regs *regs)
static unsigned long kvm_trans_pal_call_args(struct kvm_vcpu *vcpu,
unsigned long arg)
static void set_pal_call_data(struct kvm_vcpu *vcpu)
static void get_pal_call_result(struct kvm_vcpu *vcpu)
static void set_sal_call_data(struct kvm_vcpu *vcpu)
static void get_sal_call_result(struct kvm_vcpu *vcpu)
void  kvm_ia64_handle_break(unsigned long ifa, struct kvm_pt_regs *regs,
unsigned long isr, unsigned long iim)
void check_pending_irq(struct kvm_vcpu *vcpu)
static void generate_exirq(struct kvm_vcpu *vcpu)
void vhpi_detection(struct kvm_vcpu *vcpu)
void leave_hypervisor_tail(void)
static inline void handle_lds(struct kvm_pt_regs *regs)
void physical_tlb_miss(struct kvm_vcpu *vcpu, unsigned long vadr, int type)
void kvm_page_fault(u64 vadr , u64 vec, struct kvm_pt_regs *regs)
void kvm_vexirq(struct kvm_vcpu *vcpu)
void kvm_ia64_handle_irq(struct kvm_vcpu *v)
static void ptc_ga_remote_func(struct kvm_vcpu *v, int pos)
static void vcpu_do_resume(struct kvm_vcpu *vcpu)
static void vmm_sanity_check(struct kvm_vcpu *vcpu)
static void kvm_do_resume_op(struct kvm_vcpu *vcpu)
void vmm_transition(struct kvm_vcpu *vcpu)
void vmm_panic_handler(u64 vec)
