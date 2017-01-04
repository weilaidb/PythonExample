#define __ex(x) __kvm_handle_fault_on_reboot(x)
MODULE_AUTHOR("Qumranet");
MODULE_LICENSE("GPL");
static int __read_mostly bypass_guest_pf = 1;
module_param(bypass_guest_pf, bool, S_IRUGO);
static int __read_mostly enable_vpid = 1;
module_param_named(vpid, enable_vpid, bool, 0444);
static int __read_mostly flexpriority_enabled = 1;
module_param_named(flexpriority, flexpriority_enabled, bool, S_IRUGO);
static int __read_mostly enable_ept = 1;
module_param_named(ept, enable_ept, bool, S_IRUGO);
static int __read_mostly enable_unrestricted_guest = 1;
module_param_named(unrestricted_guest,
enable_unrestricted_guest, bool, S_IRUGO);
static int __read_mostly emulate_invalid_guest_state = 0;
module_param(emulate_invalid_guest_state, bool, S_IRUGO);
static int __read_mostly vmm_exclusive = 1;
module_param(vmm_exclusive, bool, S_IRUGO);
static int __read_mostly yield_on_hlt = 1;
module_param(yield_on_hlt, bool, S_IRUGO);
#define KVM_GUEST_CR0_MASK_UNRESTRICTED_GUEST				\
(X86_CR0_WP | X86_CR0_NE | X86_CR0_NW | X86_CR0_CD)
#define KVM_GUEST_CR0_MASK						\
(KVM_GUEST_CR0_MASK_UNRESTRICTED_GUEST | X86_CR0_PG | X86_CR0_PE)
#define KVM_VM_CR0_ALWAYS_ON_UNRESTRICTED_GUEST				\
(X86_CR0_WP | X86_CR0_NE)
#define KVM_VM_CR0_ALWAYS_ON						\
(KVM_VM_CR0_ALWAYS_ON_UNRESTRICTED_GUEST | X86_CR0_PG | X86_CR0_PE)
#define KVM_CR4_GUEST_OWNED_BITS				      \
(X86_CR4_PVI | X86_CR4_DE | X86_CR4_PCE | X86_CR4_OSFXSR      \
| X86_CR4_OSXMMEXCPT)
#define KVM_PMODE_VM_CR4_ALWAYS_ON (X86_CR4_PAE | X86_CR4_VMXE)
#define KVM_RMODE_VM_CR4_ALWAYS_ON (X86_CR4_VME | X86_CR4_PAE | X86_CR4_VMXE)
#define RMODE_GUEST_OWNED_EFLAGS_BITS (~(X86_EFLAGS_IOPL | X86_EFLAGS_VM))
#define KVM_VMX_DEFAULT_PLE_GAP    128
#define KVM_VMX_DEFAULT_PLE_WINDOW 4096
static int ple_gap = KVM_VMX_DEFAULT_PLE_GAP;
module_param(ple_gap, int, S_IRUGO);
static int ple_window = KVM_VMX_DEFAULT_PLE_WINDOW;
module_param(ple_window, int, S_IRUGO);
#define NR_AUTOLOAD_MSRS 1
struct vmcs ;
struct shared_msr_entry ;
struct vcpu_vmx ;
enum segment_cache_field ;
static inline struct vcpu_vmx *to_vmx(struct kvm_vcpu *vcpu)
static u64 construct_eptp(unsigned long root_hpa);
static void kvm_cpu_vmxon(u64 addr);
static void kvm_cpu_vmxoff(void);
static void vmx_set_cr3(struct kvm_vcpu *vcpu, unsigned long cr3);
static int vmx_set_tss_addr(struct kvm *kvm, unsigned int addr);
static DEFINE_PER_CPU(struct vmcs *, vmxarea);
static DEFINE_PER_CPU(struct vmcs *, current_vmcs);
static DEFINE_PER_CPU(struct list_head, vcpus_on_cpu);
static DEFINE_PER_CPU(struct desc_ptr, host_gdt);
static unsigned long *vmx_io_bitmap_a;
static unsigned long *vmx_io_bitmap_b;
static unsigned long *vmx_msr_bitmap_legacy;
static unsigned long *vmx_msr_bitmap_longmode;
static bool cpu_has_load_ia32_efer;
static DECLARE_BITMAP(vmx_vpid_bitmap, VMX_NR_VPIDS);
static DEFINE_SPINLOCK(vmx_vpid_lock);
static struct vmcs_config  vmcs_config;
static struct vmx_capability  vmx_capability;
#define VMX_SEGMENT_FIELD(seg)					\
[VCPU_SREG_##seg] =
static struct kvm_vmx_segment_field  kvm_vmx_segment_fields[] = ;
static u64 host_efer;
static void ept_save_pdptrs(struct kvm_vcpu *vcpu);
static const u32 vmx_msr_index[] = ;
#define NR_VMX_MSR ARRAY_SIZE(vmx_msr_index)
static inline bool is_page_fault(u32 intr_info)
static inline bool is_no_device(u32 intr_info)
static inline bool is_invalid_opcode(u32 intr_info)
static inline bool is_external_interrupt(u32 intr_info)
static inline bool is_machine_check(u32 intr_info)
static inline bool cpu_has_vmx_msr_bitmap(void)
static inline bool cpu_has_vmx_tpr_shadow(void)
static inline bool vm_need_tpr_shadow(struct kvm *kvm)
static inline bool cpu_has_secondary_exec_ctrls(void)
static inline bool cpu_has_vmx_virtualize_apic_accesses(void)
static inline bool cpu_has_vmx_flexpriority(void)
static inline bool cpu_has_vmx_ept_execute_only(void)
static inline bool cpu_has_vmx_eptp_uncacheable(void)
static inline bool cpu_has_vmx_eptp_writeback(void)
static inline bool cpu_has_vmx_ept_2m_page(void)
static inline bool cpu_has_vmx_ept_1g_page(void)
static inline bool cpu_has_vmx_ept_4levels(void)
static inline bool cpu_has_vmx_invept_individual_addr(void)
static inline bool cpu_has_vmx_invept_context(void)
static inline bool cpu_has_vmx_invept_global(void)
static inline bool cpu_has_vmx_invvpid_single(void)
static inline bool cpu_has_vmx_invvpid_global(void)
static inline bool cpu_has_vmx_ept(void)
static inline bool cpu_has_vmx_unrestricted_guest(void)
static inline bool cpu_has_vmx_ple(void)
static inline bool vm_need_virtualize_apic_accesses(struct kvm *kvm)
static inline bool cpu_has_vmx_vpid(void)
static inline bool cpu_has_vmx_rdtscp(void)
static inline bool cpu_has_virtual_nmis(void)
static inline bool cpu_has_vmx_wbinvd_exit(void)
static inline bool report_flexpriority(void)
static int __find_msr_index(struct vcpu_vmx *vmx, u32 msr)
static inline void __invvpid(int ext, u16 vpid, gva_t gva)
static inline void __invept(int ext, u64 eptp, gpa_t gpa)
static struct shared_msr_entry *find_msr_entry(struct vcpu_vmx *vmx, u32 msr)
static void vmcs_clear(struct vmcs *vmcs)
static void vmcs_load(struct vmcs *vmcs)
static void __vcpu_clear(void *arg)
static void vcpu_clear(struct vcpu_vmx *vmx)
static inline void vpid_sync_vcpu_single(struct vcpu_vmx *vmx)
static inline void vpid_sync_vcpu_global(void)
static inline void vpid_sync_context(struct vcpu_vmx *vmx)
static inline void ept_sync_global(void)
static inline void ept_sync_context(u64 eptp)
static inline void ept_sync_individual_addr(u64 eptp, gpa_t gpa)
static unsigned long vmcs_readl(unsigned long field)
static u16 vmcs_read16(unsigned long field)
static u32 vmcs_read32(unsigned long field)
static u64 vmcs_read64(unsigned long field)
static noinline void vmwrite_error(unsigned long field, unsigned long value)
static void vmcs_writel(unsigned long field, unsigned long value)
static void vmcs_write16(unsigned long field, u16 value)
static void vmcs_write32(unsigned long field, u32 value)
static void vmcs_write64(unsigned long field, u64 value)
static void vmcs_clear_bits(unsigned long field, u32 mask)
static void vmcs_set_bits(unsigned long field, u32 mask)
static void vmx_segment_cache_clear(struct vcpu_vmx *vmx)
static bool vmx_segment_cache_test_set(struct vcpu_vmx *vmx, unsigned seg,
unsigned field)
static u16 vmx_read_guest_seg_selector(struct vcpu_vmx *vmx, unsigned seg)
static ulong vmx_read_guest_seg_base(struct vcpu_vmx *vmx, unsigned seg)
static u32 vmx_read_guest_seg_limit(struct vcpu_vmx *vmx, unsigned seg)
static u32 vmx_read_guest_seg_ar(struct vcpu_vmx *vmx, unsigned seg)
static void update_exception_bitmap(struct kvm_vcpu *vcpu)
static void clear_atomic_switch_msr(struct vcpu_vmx *vmx, unsigned msr)
static void add_atomic_switch_msr(struct vcpu_vmx *vmx, unsigned msr,
u64 guest_val, u64 host_val)
static void reload_tss(void)
static bool update_transition_efer(struct vcpu_vmx *vmx, int efer_offset)
static unsigned long segment_base(u16 selector)
static inline unsigned long kvm_read_tr_base(void)
static void vmx_save_host_state(struct kvm_vcpu *vcpu)
static void __vmx_load_host_state(struct vcpu_vmx *vmx)
static void vmx_load_host_state(struct vcpu_vmx *vmx)
static void vmx_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
static void vmx_vcpu_put(struct kvm_vcpu *vcpu)
static void vmx_fpu_activate(struct kvm_vcpu *vcpu)
static void vmx_decache_cr0_guest_bits(struct kvm_vcpu *vcpu);
static void vmx_fpu_deactivate(struct kvm_vcpu *vcpu)
static unsigned long vmx_get_rflags(struct kvm_vcpu *vcpu)
static void vmx_set_rflags(struct kvm_vcpu *vcpu, unsigned long rflags)
static u32 vmx_get_interrupt_shadow(struct kvm_vcpu *vcpu, int mask)
static void vmx_set_interrupt_shadow(struct kvm_vcpu *vcpu, int mask)
static void skip_emulated_instruction(struct kvm_vcpu *vcpu)
static void vmx_clear_hlt(struct kvm_vcpu *vcpu)
static void vmx_queue_exception(struct kvm_vcpu *vcpu, unsigned nr,
bool has_error_code, u32 error_code,
bool reinject)
static bool vmx_rdtscp_supported(void)
static void move_msr_up(struct vcpu_vmx *vmx, int from, int to)
static void setup_msrs(struct vcpu_vmx *vmx)
static u64 guest_read_tsc(void)
static void vmx_set_tsc_khz(struct kvm_vcpu *vcpu, u32 user_tsc_khz)
static void vmx_write_tsc_offset(struct kvm_vcpu *vcpu, u64 offset)
static void vmx_adjust_tsc_offset(struct kvm_vcpu *vcpu, s64 adjustment)
static u64 vmx_compute_tsc_offset(struct kvm_vcpu *vcpu, u64 target_tsc)
static int vmx_get_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 *pdata)
static int vmx_set_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 data)
static void vmx_cache_reg(struct kvm_vcpu *vcpu, enum kvm_reg reg)
static void set_guest_debug(struct kvm_vcpu *vcpu, struct kvm_guest_debug *dbg)
static __init int cpu_has_kvm_support(void)
static __init int vmx_disabled_by_bios(void)
static void kvm_cpu_vmxon(u64 addr)
static int hardware_enable(void *garbage)
static void vmclear_local_vcpus(void)
static void kvm_cpu_vmxoff(void)
static void hardware_disable(void *garbage)
static __init int adjust_vmx_controls(u32 ctl_min, u32 ctl_opt,
u32 msr, u32 *result)
static __init bool allow_1_setting(u32 msr, u32 ctl)
static __init int setup_vmcs_config(struct vmcs_config *vmcs_conf)
static struct vmcs *alloc_vmcs_cpu(int cpu)
static struct vmcs *alloc_vmcs(void)
static void free_vmcs(struct vmcs *vmcs)
static void free_kvm_area(void)
static __init int alloc_kvm_area(void)
static __init int hardware_setup(void)
static __exit void hardware_unsetup(void)
static void fix_pmode_dataseg(int seg, struct kvm_save_segment *save)
static void enter_pmode(struct kvm_vcpu *vcpu)
static gva_t rmode_tss_base(struct kvm *kvm)
static void fix_rmode_seg(int seg, struct kvm_save_segment *save)
static void enter_rmode(struct kvm_vcpu *vcpu)
static void vmx_set_efer(struct kvm_vcpu *vcpu, u64 efer)
static void enter_lmode(struct kvm_vcpu *vcpu)
static void exit_lmode(struct kvm_vcpu *vcpu)
static void vmx_flush_tlb(struct kvm_vcpu *vcpu)
static void vmx_decache_cr0_guest_bits(struct kvm_vcpu *vcpu)
static void vmx_decache_cr3(struct kvm_vcpu *vcpu)
static void vmx_decache_cr4_guest_bits(struct kvm_vcpu *vcpu)
static void ept_load_pdptrs(struct kvm_vcpu *vcpu)
static void ept_save_pdptrs(struct kvm_vcpu *vcpu)
static void vmx_set_cr4(struct kvm_vcpu *vcpu, unsigned long cr4);
static void ept_update_paging_mode_cr0(unsigned long *hw_cr0,
unsigned long cr0,
struct kvm_vcpu *vcpu)
static void vmx_set_cr0(struct kvm_vcpu *vcpu, unsigned long cr0)
static u64 construct_eptp(unsigned long root_hpa)
static void vmx_set_cr3(struct kvm_vcpu *vcpu, unsigned long cr3)
static void vmx_set_cr4(struct kvm_vcpu *vcpu, unsigned long cr4)
static void vmx_get_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
static u64 vmx_get_segment_base(struct kvm_vcpu *vcpu, int seg)
static int __vmx_get_cpl(struct kvm_vcpu *vcpu)
static int vmx_get_cpl(struct kvm_vcpu *vcpu)
static u32 vmx_segment_access_rights(struct kvm_segment *var)
static void vmx_set_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
static void vmx_get_cs_db_l_bits(struct kvm_vcpu *vcpu, int *db, int *l)
static void vmx_get_idt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void vmx_set_idt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void vmx_get_gdt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static void vmx_set_gdt(struct kvm_vcpu *vcpu, struct desc_ptr *dt)
static bool rmode_segment_valid(struct kvm_vcpu *vcpu, int seg)
static bool code_segment_valid(struct kvm_vcpu *vcpu)
static bool stack_segment_valid(struct kvm_vcpu *vcpu)
static bool data_segment_valid(struct kvm_vcpu *vcpu, int seg)
static bool tr_valid(struct kvm_vcpu *vcpu)
static bool ldtr_valid(struct kvm_vcpu *vcpu)
static bool cs_ss_rpl_check(struct kvm_vcpu *vcpu)
static bool guest_state_valid(struct kvm_vcpu *vcpu)
static int init_rmode_tss(struct kvm *kvm)
static int init_rmode_identity_map(struct kvm *kvm)
static void seg_setup(int seg)
static int alloc_apic_access_page(struct kvm *kvm)
static int alloc_identity_pagetable(struct kvm *kvm)
static void allocate_vpid(struct vcpu_vmx *vmx)
static void free_vpid(struct vcpu_vmx *vmx)
static void __vmx_disable_intercept_for_msr(unsigned long *msr_bitmap, u32 msr)
static void vmx_disable_intercept_for_msr(u32 msr, bool longmode_only)
static int vmx_vcpu_setup(struct vcpu_vmx *vmx)
static int vmx_vcpu_reset(struct kvm_vcpu *vcpu)
static void enable_irq_window(struct kvm_vcpu *vcpu)
static void enable_nmi_window(struct kvm_vcpu *vcpu)
static void vmx_inject_irq(struct kvm_vcpu *vcpu)
static void vmx_inject_nmi(struct kvm_vcpu *vcpu)
static int vmx_nmi_allowed(struct kvm_vcpu *vcpu)
static bool vmx_get_nmi_mask(struct kvm_vcpu *vcpu)
static void vmx_set_nmi_mask(struct kvm_vcpu *vcpu, bool masked)
static int vmx_interrupt_allowed(struct kvm_vcpu *vcpu)
static int vmx_set_tss_addr(struct kvm *kvm, unsigned int addr)
static int handle_rmode_exception(struct kvm_vcpu *vcpu,
int vec, u32 err_code)
static void kvm_machine_check(void)
static int handle_machine_check(struct kvm_vcpu *vcpu)
static int handle_exception(struct kvm_vcpu *vcpu)
static int handle_external_interrupt(struct kvm_vcpu *vcpu)
static int handle_triple_fault(struct kvm_vcpu *vcpu)
static int handle_io(struct kvm_vcpu *vcpu)
static void
vmx_patch_hypercall(struct kvm_vcpu *vcpu, unsigned char *hypercall)
static int handle_cr(struct kvm_vcpu *vcpu)
static int handle_dr(struct kvm_vcpu *vcpu)
static void vmx_set_dr7(struct kvm_vcpu *vcpu, unsigned long val)
static int handle_cpuid(struct kvm_vcpu *vcpu)
static int handle_rdmsr(struct kvm_vcpu *vcpu)
static int handle_wrmsr(struct kvm_vcpu *vcpu)
static int handle_tpr_below_threshold(struct kvm_vcpu *vcpu)
static int handle_interrupt_window(struct kvm_vcpu *vcpu)
static int handle_halt(struct kvm_vcpu *vcpu)
static int handle_vmcall(struct kvm_vcpu *vcpu)
static int handle_vmx_insn(struct kvm_vcpu *vcpu)
static int handle_invd(struct kvm_vcpu *vcpu)
static int handle_invlpg(struct kvm_vcpu *vcpu)
static int handle_wbinvd(struct kvm_vcpu *vcpu)
static int handle_xsetbv(struct kvm_vcpu *vcpu)
static int handle_apic_access(struct kvm_vcpu *vcpu)
static int handle_task_switch(struct kvm_vcpu *vcpu)
static int handle_ept_violation(struct kvm_vcpu *vcpu)
static u64 ept_rsvd_mask(u64 spte, int level)
static void ept_misconfig_inspect_spte(struct kvm_vcpu *vcpu, u64 spte,
int level)
static int handle_ept_misconfig(struct kvm_vcpu *vcpu)
static int handle_nmi_window(struct kvm_vcpu *vcpu)
static int handle_invalid_guest_state(struct kvm_vcpu *vcpu)
static int handle_pause(struct kvm_vcpu *vcpu)
static int handle_invalid_op(struct kvm_vcpu *vcpu)
static int (*kvm_vmx_exit_handlers[])(struct kvm_vcpu *vcpu) = ;
static const int kvm_vmx_max_exit_handlers =
ARRAY_SIZE(kvm_vmx_exit_handlers);
static void vmx_get_exit_info(struct kvm_vcpu *vcpu, u64 *info1, u64 *info2)
static int vmx_handle_exit(struct kvm_vcpu *vcpu)
static void update_cr8_intercept(struct kvm_vcpu *vcpu, int tpr, int irr)
static void vmx_complete_atomic_exit(struct vcpu_vmx *vmx)
static void vmx_recover_nmi_blocking(struct vcpu_vmx *vmx)
static void __vmx_complete_interrupts(struct vcpu_vmx *vmx,
u32 idt_vectoring_info,
int instr_len_field,
int error_code_field)
static void vmx_complete_interrupts(struct vcpu_vmx *vmx)
static void vmx_cancel_injection(struct kvm_vcpu *vcpu)
#define R "r"
#define Q "q"
#define R "e"
#define Q "l"
static void __noclone vmx_vcpu_run(struct kvm_vcpu *vcpu)
#undef R
#undef Q
static void vmx_free_vmcs(struct kvm_vcpu *vcpu)
static void vmx_free_vcpu(struct kvm_vcpu *vcpu)
static inline void vmcs_init(struct vmcs *vmcs)
static struct kvm_vcpu *vmx_create_vcpu(struct kvm *kvm, unsigned int id)
static void __init vmx_check_processor_compat(void *rtn)
static int get_ept_level(void)
static u64 vmx_get_mt_mask(struct kvm_vcpu *vcpu, gfn_t gfn, bool is_mmio)
#define _ER(x)
static const struct trace_print_flags vmx_exit_reasons_str[] = ;
#undef _ER
static int vmx_get_lpage_level(void)
static void vmx_cpuid_update(struct kvm_vcpu *vcpu)
static void vmx_set_supported_cpuid(u32 func, struct kvm_cpuid_entry2 *entry)
static int vmx_check_intercept(struct kvm_vcpu *vcpu,
struct x86_instruction_info *info,
enum x86_intercept_stage stage)
static struct kvm_x86_ops vmx_x86_ops = ;
static int __init vmx_init(void)
static void __exit vmx_exit(void)
module_init(vmx_init)
module_exit(vmx_exit)
