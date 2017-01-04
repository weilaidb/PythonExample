#define __ex(x) __kvm_handle_fault_on_reboot(x)
MODULE_AUTHOR("Qumranet");
MODULE_LICENSE("GPL");
#define IOPM_ALLOC_ORDER 2
#define MSRPM_ALLOC_ORDER 1
#define SEG_TYPE_LDT 2
#define SEG_TYPE_BUSY_TSS16 3
#define SVM_FEATURE_NPT            (1 <<  0)
#define SVM_FEATURE_LBRV           (1 <<  1)
#define SVM_FEATURE_SVML           (1 <<  2)
#define SVM_FEATURE_NRIP           (1 <<  3)
#define SVM_FEATURE_TSC_RATE       (1 <<  4)
#define SVM_FEATURE_VMCB_CLEAN     (1 <<  5)
#define SVM_FEATURE_FLUSH_ASID     (1 <<  6)
#define SVM_FEATURE_DECODE_ASSIST  (1 <<  7)
#define SVM_FEATURE_PAUSE_FILTER   (1 << 10)
#define NESTED_EXIT_HOST	0
#define NESTED_EXIT_DONE	1
#define NESTED_EXIT_CONTINUE	2
#define DEBUGCTL_RESERVED_BITS (~(0x3fULL))
#define TSC_RATIO_RSVD          0xffffff0000000000ULL
#define TSC_RATIO_MIN		0x0000000000000001ULL
#define TSC_RATIO_MAX		0x000000ffffffffffULL
static bool erratum_383_found __read_mostly;
static const u32 host_save_user_msrs[] = ;
#define NR_HOST_SAVE_USER_MSRS ARRAY_SIZE(host_save_user_msrs)
struct kvm_vcpu;
struct nested_state ;
#define MSRPM_OFFSETS	16
static u32 msrpm_offsets[MSRPM_OFFSETS] __read_mostly;
struct vcpu_svm ;
static DEFINE_PER_CPU(u64, current_tsc_ratio);
#define TSC_RATIO_DEFAULT	0x0100000000ULL
#define MSR_INVALID			0xffffffffU
static struct svm_direct_access_msrs  direct_access_msrs[] = ;
#if defined(CONFIG_X86_64) || defined(CONFIG_X86_PAE)
static bool npt_enabled = true;
static bool npt_enabled;
static int npt = 1;
module_param(npt, int, S_IRUGO);
static int nested = 1;
module_param(nested, int, S_IRUGO);
static void svm_flush_tlb(struct kvm_vcpu *vcpu);
static void svm_complete_interrupts(struct vcpu_svm *svm);
static int nested_svm_exit_handled(struct vcpu_svm *svm);
static int nested_svm_intercept(struct vcpu_svm *svm);
static int nested_svm_vmexit(struct vcpu_svm *svm);
static int nested_svm_check_exception(struct vcpu_svm *svm, unsigned nr,
bool has_error_code, u32 error_code);
static u64 __scale_tsc(u64 ratio, u64 tsc);
enum ;
#define VMCB_ALWAYS_DIRTY_MASK	((1U << VMCB_INTR) | (1U << VMCB_CR2))
static inline void mark_all_dirty(struct vmcb *vmcb)
static inline void mark_all_clean(struct vmcb *vmcb)
static inline void mark_dirty(struct vmcb *vmcb, int bit)
static inline struct vcpu_svm *to_svm(struct kvm_vcpu *vcpu)
static void recalc_intercepts(struct vcpu_svm *svm)
static inline struct vmcb *get_host_vmcb(struct vcpu_svm *svm)
static inline void set_cr_intercept(struct vcpu_svm *svm, int bit)
static inline void clr_cr_intercept(struct vcpu_svm *svm, int bit)
static inline bool is_cr_intercept(struct vcpu_svm *svm, int bit)
static inline void set_dr_intercept(struct vcpu_svm *svm, int bit)
static inline void clr_dr_intercept(struct vcpu_svm *svm, int bit)
static inline void set_exception_intercept(struct vcpu_svm *svm, int bit)
static inline void clr_exception_intercept(struct vcpu_svm *svm, int bit)
static inline void set_intercept(struct vcpu_svm *svm, int bit)
static inline void clr_intercept(struct vcpu_svm *svm, int bit)
static inline void enable_gif(struct vcpu_svm *svm)
static inline void disable_gif(struct vcpu_svm *svm)
static inline bool gif_set(struct vcpu_svm *svm)
static unsigned long iopm_base;
struct kvm_ldttss_desc  __attribute__((packed));
struct svm_cpu_data ;
static DEFINE_PER_CPU(struct svm_cpu_data *, svm_data);
struct svm_init_data ;
static u32 msrpm_ranges[] = ;
#define NUM_MSR_MAPS ARRAY_SIZE(msrpm_ranges)
#define MSRS_RANGE_SIZE 2048
#define MSRS_IN_RANGE (MSRS_RANGE_SIZE * 8 / 2)
static u32 svm_msrpm_offset(u32 msr)
#define MAX_INST_SIZE 15
static inline void clgi(void)
static inline void stgi(void)
static inline void invlpga(unsigned long addr, u32 asid)
static int get_npt_level(void)
static void svm_set_efer(struct kvm_vcpu *vcpu, u64 efer)
static int is_external_interrupt(u32 info)
static u32 svm_get_interrupt_shadow(struct kvm_vcpu *vcpu, int mask)
static void svm_set_interrupt_shadow(struct kvm_vcpu *vcpu, int mask)
static void skip_emulated_instruction(struct kvm_vcpu *vcpu)
static void svm_queue_exception(struct kvm_vcpu *vcpu, unsigned nr,
bool has_error_code, u32 error_code,
bool reinject)
static void svm_init_erratum_383(void)
static int has_svm(void)
static void svm_hardware_disable(void *garbage)
static int svm_hardware_enable(void *garbage)
static void svm_cpu_uninit(int cpu)
static int svm_cpu_init(int cpu)
static bool valid_msr_intercept(u32 index)
static void set_msr_interception(u32 *msrpm, unsigned msr,
int read, int write)
static void svm_vcpu_init_msrpm(u32 *msrpm)
static void add_msr_offset(u32 offset)
static void init_msrpm_offsets(void)
static void svm_enable_lbrv(struct vcpu_svm *svm)
static void svm_disable_lbrv(struct vcpu_svm *svm)
static __init int svm_hardware_setup(void)
static __exit void svm_hardware_unsetup(void)
static void init_seg(struct vmcb_seg *seg)
static void init_sys_seg(struct vmcb_seg *seg, uint32_t type)
static u64 __scale_tsc(u64 ratio, u64 tsc)
static u64 svm_scale_tsc(struct kvm_vcpu *vcpu, u64 tsc)
static void svm_set_tsc_khz(struct kvm_vcpu *vcpu, u32 user_tsc_khz)
static void svm_write_tsc_offset(struct kvm_vcpu *vcpu, u64 offset)
static void svm_adjust_tsc_offset(struct kvm_vcpu *vcpu, s64 adjustment)
static u64 svm_compute_tsc_offset(struct kvm_vcpu *vcpu, u64 target_tsc)
static void init_vmcb(struct vcpu_svm *svm)
static int svm_vcpu_reset(struct kvm_vcpu *vcpu)
static struct kvm_vcpu *svm_create_vcpu(struct kvm *kvm, unsigned int id)
static void svm_free_vcpu(struct kvm_vcpu *vcpu)
static void svm_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
static void svm_vcpu_put(struct kvm_vcpu *vcpu)
static unsigned long svm_get_rflags(struct kvm_vcpu *vcpu)
static void svm_set_rflags(struct kvm_vcpu *vcpu, unsigned long rflags)
static void svm_cache_reg(struct kvm_vcpu *vcpu, enum kvm_reg reg)
static void svm_set_vintr(struct vcpu_svm *svm)
static void svm_clear_vintr(struct vcpu_svm *svm)
static struct vmcb_seg *svm_seg(struct kvm_vcpu *vcpu, int seg)
static u64 svm_get_segment_base(struct kvm_vcpu *vcpu, int seg)
static void svm_get_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
static int svm_get_cpl(struct kvm_vcpu *vcpu)
static void svm_get_idt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void svm_set_idt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void svm_get_gdt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void svm_set_gdt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void svm_decache_cr0_guest_bits(struct kvm_vcpu *vcpu)
static void svm_decache_cr3(struct kvm_vcpu *vcpu)
static void svm_decache_cr4_guest_bits(struct kvm_vcpu *vcpu)
static void update_cr0_intercept(struct vcpu_svm *svm)
static void svm_set_cr0(struct kvm_vcpu *vcpu, unsigned long cr0)
static void svm_set_cr4(struct kvm_vcpu *vcpu, unsigned long cr4)
static void svm_set_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
static void update_db_intercept(struct kvm_vcpu *vcpu)
static void svm_guest_debug(struct kvm_vcpu *vcpu, struct kvm_guest_debug *dbg)
static void new_asid(struct vcpu_svm *svm, struct svm_cpu_data *sd)
static void svm_set_dr7(struct kvm_vcpu *vcpu, unsigned long value)
static int pf_interception(struct vcpu_svm *svm)
static int db_interception(struct vcpu_svm *svm)
static int bp_interception(struct vcpu_svm *svm)
static int ud_interception(struct vcpu_svm *svm)
static void svm_fpu_activate(struct kvm_vcpu *vcpu)
static int nm_interception(struct vcpu_svm *svm)
static bool is_erratum_383(void)
static void svm_handle_mce(struct vcpu_svm *svm)
static int mc_interception(struct vcpu_svm *svm)
static int shutdown_interception(struct vcpu_svm *svm)
static int io_interception(struct vcpu_svm *svm)
static int nmi_interception(struct vcpu_svm *svm)
static int intr_interception(struct vcpu_svm *svm)
static int nop_on_interception(struct vcpu_svm *svm)
static int halt_interception(struct vcpu_svm *svm)
static int vmmcall_interception(struct vcpu_svm *svm)
static unsigned long nested_svm_get_tdp_cr3(struct kvm_vcpu *vcpu)
static void nested_svm_set_tdp_cr3(struct kvm_vcpu *vcpu,
unsigned long root)
static void nested_svm_inject_npf_exit(struct kvm_vcpu *vcpu,
struct x86_exception *fault)
static int nested_svm_init_mmu_context(struct kvm_vcpu *vcpu)
static void nested_svm_uninit_mmu_context(struct kvm_vcpu *vcpu)
static int nested_svm_check_permissions(struct vcpu_svm *svm)
static int nested_svm_check_exception(struct vcpu_svm *svm, unsigned nr,
bool has_error_code, u32 error_code)
static inline bool nested_svm_intr(struct vcpu_svm *svm)
static inline bool nested_svm_nmi(struct vcpu_svm *svm)
static void *nested_svm_map(struct vcpu_svm *svm, u64 gpa, struct page **_page)
static void nested_svm_unmap(struct page *page)
static int nested_svm_intercept_ioio(struct vcpu_svm *svm)
static int nested_svm_exit_handled_msr(struct vcpu_svm *svm)
static int nested_svm_exit_special(struct vcpu_svm *svm)
static int nested_svm_intercept(struct vcpu_svm *svm)
static int nested_svm_exit_handled(struct vcpu_svm *svm)
static inline void copy_vmcb_control_area(struct vmcb *dst_vmcb, struct vmcb *from_vmcb)
static int nested_svm_vmexit(struct vcpu_svm *svm)
static bool nested_svm_vmrun_msrpm(struct vcpu_svm *svm)
static bool nested_vmcb_checks(struct vmcb *vmcb)
static bool nested_svm_vmrun(struct vcpu_svm *svm)
static void nested_svm_vmloadsave(struct vmcb *from_vmcb, struct vmcb *to_vmcb)
static int vmload_interception(struct vcpu_svm *svm)
static int vmsave_interception(struct vcpu_svm *svm)
static int vmrun_interception(struct vcpu_svm *svm)
static int stgi_interception(struct vcpu_svm *svm)
static int clgi_interception(struct vcpu_svm *svm)
static int invlpga_interception(struct vcpu_svm *svm)
static int skinit_interception(struct vcpu_svm *svm)
static int xsetbv_interception(struct vcpu_svm *svm)
static int invalid_op_interception(struct vcpu_svm *svm)
static int task_switch_interception(struct vcpu_svm *svm)
static int cpuid_interception(struct vcpu_svm *svm)
static int iret_interception(struct vcpu_svm *svm)
static int invlpg_interception(struct vcpu_svm *svm)
static int emulate_on_interception(struct vcpu_svm *svm)
bool check_selective_cr0_intercepted(struct vcpu_svm *svm, unsigned long val)
#define CR_VALID (1ULL << 63)
static int cr_interception(struct vcpu_svm *svm)
static int dr_interception(struct vcpu_svm *svm)
static int cr8_write_interception(struct vcpu_svm *svm)
static int svm_get_msr(struct kvm_vcpu *vcpu, unsigned ecx, u64 *data)
static int rdmsr_interception(struct vcpu_svm *svm)
static int svm_set_vm_cr(struct kvm_vcpu *vcpu, u64 data)
static int svm_set_msr(struct kvm_vcpu *vcpu, unsigned ecx, u64 data)
static int wrmsr_interception(struct vcpu_svm *svm)
static int msr_interception(struct vcpu_svm *svm)
static int interrupt_window_interception(struct vcpu_svm *svm)
static int pause_interception(struct vcpu_svm *svm)
static int (*svm_exit_handlers[])(struct vcpu_svm *svm) = ;
static void dump_vmcb(struct kvm_vcpu *vcpu)
static void svm_get_exit_info(struct kvm_vcpu *vcpu, u64 *info1, u64 *info2)
static int handle_exit(struct kvm_vcpu *vcpu)
static void reload_tss(struct kvm_vcpu *vcpu)
static void pre_svm_run(struct vcpu_svm *svm)
static void svm_inject_nmi(struct kvm_vcpu *vcpu)
static inline void svm_inject_irq(struct vcpu_svm *svm, int irq)
static void svm_set_irq(struct kvm_vcpu *vcpu)
static void update_cr8_intercept(struct kvm_vcpu *vcpu, int tpr, int irr)
static int svm_nmi_allowed(struct kvm_vcpu *vcpu)
static bool svm_get_nmi_mask(struct kvm_vcpu *vcpu)
static void svm_set_nmi_mask(struct kvm_vcpu *vcpu, bool masked)
static int svm_interrupt_allowed(struct kvm_vcpu *vcpu)
static void enable_irq_window(struct kvm_vcpu *vcpu)
static void enable_nmi_window(struct kvm_vcpu *vcpu)
static int svm_set_tss_addr(struct kvm *kvm, unsigned int addr)
static void svm_flush_tlb(struct kvm_vcpu *vcpu)
static void svm_prepare_guest_switch(struct kvm_vcpu *vcpu)
static inline void sync_cr8_to_lapic(struct kvm_vcpu *vcpu)
static inline void sync_lapic_to_cr8(struct kvm_vcpu *vcpu)
static void svm_complete_interrupts(struct vcpu_svm *svm)
static void svm_cancel_injection(struct kvm_vcpu *vcpu)
#define R "r"
#define R "e"
static void svm_vcpu_run(struct kvm_vcpu *vcpu)
#undef R
static void svm_set_cr3(struct kvm_vcpu *vcpu, unsigned long root)
static void set_tdp_cr3(struct kvm_vcpu *vcpu, unsigned long root)
static int is_disabled(void)
static void
svm_patch_hypercall(struct kvm_vcpu *vcpu, unsigned char *hypercall)
static void svm_check_processor_compat(void *rtn)
static bool svm_cpu_has_accelerated_tpr(void)
static u64 svm_get_mt_mask(struct kvm_vcpu *vcpu, gfn_t gfn, bool is_mmio)
static void svm_cpuid_update(struct kvm_vcpu *vcpu)
static void svm_set_supported_cpuid(u32 func, struct kvm_cpuid_entry2 *entry)
static const struct trace_print_flags svm_exit_reasons_str[] = ;
static int svm_get_lpage_level(void)
static bool svm_rdtscp_supported(void)
static bool svm_has_wbinvd_exit(void)
static void svm_fpu_deactivate(struct kvm_vcpu *vcpu)
#define PRE_EX(exit)
#define POST_EX(exit)
#define POST_MEM(exit)
static struct __x86_intercept  x86_intercept_map[] = ;
#undef PRE_EX
#undef POST_EX
#undef POST_MEM
static int svm_check_intercept(struct kvm_vcpu *vcpu,
struct x86_instruction_info *info,
enum x86_intercept_stage stage)
static struct kvm_x86_ops svm_x86_ops = ;
static int __init svm_init(void)
static void __exit svm_exit(void)
module_init(svm_init)
module_exit(svm_exit)
