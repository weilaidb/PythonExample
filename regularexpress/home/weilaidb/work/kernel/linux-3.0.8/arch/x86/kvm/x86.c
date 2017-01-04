#define CREATE_TRACE_POINTS
#define MAX_IO_MSRS 256
#define KVM_MAX_MCE_BANKS 32
#define KVM_MCE_CAP_SUPPORTED (MCG_CTL_P | MCG_SER_P)
#define emul_to_vcpu(ctxt) \
container_of(ctxt, struct kvm_vcpu, arch.emulate_ctxt)
static
u64 __read_mostly efer_reserved_bits = ~((u64)(EFER_SCE | EFER_LME | EFER_LMA));
static u64 __read_mostly efer_reserved_bits = ~((u64)EFER_SCE);
#define VM_STAT(x) offsetof(struct kvm, stat.x), KVM_STAT_VM
#define VCPU_STAT(x) offsetof(struct kvm_vcpu, stat.x), KVM_STAT_VCPU
static void update_cr8_intercept(struct kvm_vcpu *vcpu);
static int kvm_dev_ioctl_get_supported_cpuid(struct kvm_cpuid2 *cpuid,
struct kvm_cpuid_entry2 __user *entries);
struct kvm_x86_ops *kvm_x86_ops;
EXPORT_SYMBOL_GPL(kvm_x86_ops);
int ignore_msrs = 0;
module_param_named(ignore_msrs, ignore_msrs, bool, S_IRUGO | S_IWUSR);
bool kvm_has_tsc_control;
EXPORT_SYMBOL_GPL(kvm_has_tsc_control);
u32  kvm_max_guest_tsc_khz;
EXPORT_SYMBOL_GPL(kvm_max_guest_tsc_khz);
#define KVM_NR_SHARED_MSRS 16
struct kvm_shared_msrs_global ;
struct kvm_shared_msrs ;
static struct kvm_shared_msrs_global __read_mostly shared_msrs_global;
static DEFINE_PER_CPU(struct kvm_shared_msrs, shared_msrs);
struct kvm_stats_debugfs_item debugfs_entries[] = ;
u64 __read_mostly host_xcr0;
int emulator_fix_hypercall(struct x86_emulate_ctxt *ctxt);
static inline void kvm_async_pf_hash_reset(struct kvm_vcpu *vcpu)
static void kvm_on_user_return(struct user_return_notifier *urn)
static void shared_msr_update(unsigned slot, u32 msr)
void kvm_define_shared_msr(unsigned slot, u32 msr)
EXPORT_SYMBOL_GPL(kvm_define_shared_msr);
static void kvm_shared_msr_cpu_online(void)
void kvm_set_shared_msr(unsigned slot, u64 value, u64 mask)
EXPORT_SYMBOL_GPL(kvm_set_shared_msr);
static void drop_user_return_notifiers(void *ignore)
u64 kvm_get_apic_base(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_get_apic_base);
void kvm_set_apic_base(struct kvm_vcpu *vcpu, u64 data)
EXPORT_SYMBOL_GPL(kvm_set_apic_base);
#define EXCPT_BENIGN		0
#define EXCPT_CONTRIBUTORY	1
#define EXCPT_PF		2
static int exception_class(int vector)
static void kvm_multiple_exception(struct kvm_vcpu *vcpu,
unsigned nr, bool has_error, u32 error_code,
bool reinject)
void kvm_queue_exception(struct kvm_vcpu *vcpu, unsigned nr)
EXPORT_SYMBOL_GPL(kvm_queue_exception);
void kvm_requeue_exception(struct kvm_vcpu *vcpu, unsigned nr)
EXPORT_SYMBOL_GPL(kvm_requeue_exception);
void kvm_complete_insn_gp(struct kvm_vcpu *vcpu, int err)
EXPORT_SYMBOL_GPL(kvm_complete_insn_gp);
void kvm_inject_page_fault(struct kvm_vcpu *vcpu, struct x86_exception *fault)
void kvm_propagate_fault(struct kvm_vcpu *vcpu, struct x86_exception *fault)
void kvm_inject_nmi(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_inject_nmi);
void kvm_queue_exception_e(struct kvm_vcpu *vcpu, unsigned nr, u32 error_code)
EXPORT_SYMBOL_GPL(kvm_queue_exception_e);
void kvm_requeue_exception_e(struct kvm_vcpu *vcpu, unsigned nr, u32 error_code)
EXPORT_SYMBOL_GPL(kvm_requeue_exception_e);
bool kvm_require_cpl(struct kvm_vcpu *vcpu, int required_cpl)
EXPORT_SYMBOL_GPL(kvm_require_cpl);
int kvm_read_guest_page_mmu(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu,
gfn_t ngfn, void *data, int offset, int len,
u32 access)
EXPORT_SYMBOL_GPL(kvm_read_guest_page_mmu);
int kvm_read_nested_guest_page(struct kvm_vcpu *vcpu, gfn_t gfn,
void *data, int offset, int len, u32 access)
int load_pdptrs(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu, unsigned long cr3)
EXPORT_SYMBOL_GPL(load_pdptrs);
static bool pdptrs_changed(struct kvm_vcpu *vcpu)
int kvm_set_cr0(struct kvm_vcpu *vcpu, unsigned long cr0)
EXPORT_SYMBOL_GPL(kvm_set_cr0);
void kvm_lmsw(struct kvm_vcpu *vcpu, unsigned long msw)
EXPORT_SYMBOL_GPL(kvm_lmsw);
int __kvm_set_xcr(struct kvm_vcpu *vcpu, u32 index, u64 xcr)
int kvm_set_xcr(struct kvm_vcpu *vcpu, u32 index, u64 xcr)
EXPORT_SYMBOL_GPL(kvm_set_xcr);
static bool guest_cpuid_has_xsave(struct kvm_vcpu *vcpu)
static void update_cpuid(struct kvm_vcpu *vcpu)
int kvm_set_cr4(struct kvm_vcpu *vcpu, unsigned long cr4)
EXPORT_SYMBOL_GPL(kvm_set_cr4);
int kvm_set_cr3(struct kvm_vcpu *vcpu, unsigned long cr3)
EXPORT_SYMBOL_GPL(kvm_set_cr3);
int kvm_set_cr8(struct kvm_vcpu *vcpu, unsigned long cr8)
EXPORT_SYMBOL_GPL(kvm_set_cr8);
unsigned long kvm_get_cr8(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_get_cr8);
static int __kvm_set_dr(struct kvm_vcpu *vcpu, int dr, unsigned long val)
int kvm_set_dr(struct kvm_vcpu *vcpu, int dr, unsigned long val)
EXPORT_SYMBOL_GPL(kvm_set_dr);
static int _kvm_get_dr(struct kvm_vcpu *vcpu, int dr, unsigned long *val)
int kvm_get_dr(struct kvm_vcpu *vcpu, int dr, unsigned long *val)
EXPORT_SYMBOL_GPL(kvm_get_dr);
#define KVM_SAVE_MSRS_BEGIN	8
static u32 msrs_to_save[] = ;
static unsigned num_msrs_to_save;
static u32 emulated_msrs[] = ;
static int set_efer(struct kvm_vcpu *vcpu, u64 efer)
void kvm_enable_efer_bits(u64 mask)
EXPORT_SYMBOL_GPL(kvm_enable_efer_bits);
int kvm_set_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 data)
static int do_set_msr(struct kvm_vcpu *vcpu, unsigned index, u64 *data)
static void kvm_write_wall_clock(struct kvm *kvm, gpa_t wall_clock)
static uint32_t div_frac(uint32_t dividend, uint32_t divisor)
static void kvm_get_time_scale(uint32_t scaled_khz, uint32_t base_khz,
s8 *pshift, u32 *pmultiplier)
static inline u64 get_kernel_ns(void)
static DEFINE_PER_CPU(unsigned long, cpu_tsc_khz);
unsigned long max_tsc_khz;
static inline int kvm_tsc_changes_freq(void)
static u64 vcpu_tsc_khz(struct kvm_vcpu *vcpu)
static inline u64 nsec_to_cycles(struct kvm_vcpu *vcpu, u64 nsec)
static void kvm_init_tsc_catchup(struct kvm_vcpu *vcpu, u32 this_tsc_khz)
static u64 compute_guest_tsc(struct kvm_vcpu *vcpu, s64 kernel_ns)
void kvm_write_tsc(struct kvm_vcpu *vcpu, u64 data)
EXPORT_SYMBOL_GPL(kvm_write_tsc);
static int kvm_guest_time_update(struct kvm_vcpu *v)
static bool msr_mtrr_valid(unsigned msr)
static bool valid_pat_type(unsigned t)
static bool valid_mtrr_type(unsigned t)
static bool mtrr_valid(struct kvm_vcpu *vcpu, u32 msr, u64 data)
static int set_msr_mtrr(struct kvm_vcpu *vcpu, u32 msr, u64 data)
static int set_msr_mce(struct kvm_vcpu *vcpu, u32 msr, u64 data)
static int xen_hvm_config(struct kvm_vcpu *vcpu, u64 data)
static bool kvm_hv_hypercall_enabled(struct kvm *kvm)
static bool kvm_hv_msr_partition_wide(u32 msr)
static int set_msr_hyperv_pw(struct kvm_vcpu *vcpu, u32 msr, u64 data)
static int set_msr_hyperv(struct kvm_vcpu *vcpu, u32 msr, u64 data)
static int kvm_pv_enable_async_pf(struct kvm_vcpu *vcpu, u64 data)
static void kvmclock_reset(struct kvm_vcpu *vcpu)
int kvm_set_msr_common(struct kvm_vcpu *vcpu, u32 msr, u64 data)
EXPORT_SYMBOL_GPL(kvm_set_msr_common);
int kvm_get_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 *pdata)
static int get_msr_mtrr(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata)
static int get_msr_mce(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata)
static int get_msr_hyperv_pw(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata)
static int get_msr_hyperv(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata)
int kvm_get_msr_common(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata)
EXPORT_SYMBOL_GPL(kvm_get_msr_common);
static int __msr_io(struct kvm_vcpu *vcpu, struct kvm_msrs *msrs,
struct kvm_msr_entry *entries,
int (*do_msr)(struct kvm_vcpu *vcpu,
unsigned index, u64 *data))
static int msr_io(struct kvm_vcpu *vcpu, struct kvm_msrs __user *user_msrs,
int (*do_msr)(struct kvm_vcpu *vcpu,
unsigned index, u64 *data),
int writeback)
int kvm_dev_ioctl_check_extension(long ext)
long kvm_arch_dev_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static void wbinvd_ipi(void *garbage)
static bool need_emulate_wbinvd(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
void kvm_arch_vcpu_put(struct kvm_vcpu *vcpu)
static int is_efer_nx(void)
static void cpuid_fix_nx_cap(struct kvm_vcpu *vcpu)
static int kvm_vcpu_ioctl_set_cpuid(struct kvm_vcpu *vcpu,
struct kvm_cpuid *cpuid,
struct kvm_cpuid_entry __user *entries)
static int kvm_vcpu_ioctl_set_cpuid2(struct kvm_vcpu *vcpu,
struct kvm_cpuid2 *cpuid,
struct kvm_cpuid_entry2 __user *entries)
static int kvm_vcpu_ioctl_get_cpuid2(struct kvm_vcpu *vcpu,
struct kvm_cpuid2 *cpuid,
struct kvm_cpuid_entry2 __user *entries)
static void cpuid_mask(u32 *word, int wordnum)
static void do_cpuid_1_ent(struct kvm_cpuid_entry2 *entry, u32 function,
u32 index)
#define F(x) bit(X86_FEATURE_##x)
static void do_cpuid_ent(struct kvm_cpuid_entry2 *entry, u32 function,
u32 index, int *nent, int maxnent)
#undef F
static int kvm_dev_ioctl_get_supported_cpuid(struct kvm_cpuid2 *cpuid,
struct kvm_cpuid_entry2 __user *entries)
static int kvm_vcpu_ioctl_get_lapic(struct kvm_vcpu *vcpu,
struct kvm_lapic_state *s)
static int kvm_vcpu_ioctl_set_lapic(struct kvm_vcpu *vcpu,
struct kvm_lapic_state *s)
static int kvm_vcpu_ioctl_interrupt(struct kvm_vcpu *vcpu,
struct kvm_interrupt *irq)
static int kvm_vcpu_ioctl_nmi(struct kvm_vcpu *vcpu)
static int vcpu_ioctl_tpr_access_reporting(struct kvm_vcpu *vcpu,
struct kvm_tpr_access_ctl *tac)
static int kvm_vcpu_ioctl_x86_setup_mce(struct kvm_vcpu *vcpu,
u64 mcg_cap)
static int kvm_vcpu_ioctl_x86_set_mce(struct kvm_vcpu *vcpu,
struct kvm_x86_mce *mce)
static void kvm_vcpu_ioctl_x86_get_vcpu_events(struct kvm_vcpu *vcpu,
struct kvm_vcpu_events *events)
static int kvm_vcpu_ioctl_x86_set_vcpu_events(struct kvm_vcpu *vcpu,
struct kvm_vcpu_events *events)
static void kvm_vcpu_ioctl_x86_get_debugregs(struct kvm_vcpu *vcpu,
struct kvm_debugregs *dbgregs)
static int kvm_vcpu_ioctl_x86_set_debugregs(struct kvm_vcpu *vcpu,
struct kvm_debugregs *dbgregs)
static void kvm_vcpu_ioctl_x86_get_xsave(struct kvm_vcpu *vcpu,
struct kvm_xsave *guest_xsave)
static int kvm_vcpu_ioctl_x86_set_xsave(struct kvm_vcpu *vcpu,
struct kvm_xsave *guest_xsave)
static void kvm_vcpu_ioctl_x86_get_xcrs(struct kvm_vcpu *vcpu,
struct kvm_xcrs *guest_xcrs)
static int kvm_vcpu_ioctl_x86_set_xcrs(struct kvm_vcpu *vcpu,
struct kvm_xcrs *guest_xcrs)
long kvm_arch_vcpu_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static int kvm_vm_ioctl_set_tss_addr(struct kvm *kvm, unsigned long addr)
static int kvm_vm_ioctl_set_identity_map_addr(struct kvm *kvm,
u64 ident_addr)
static int kvm_vm_ioctl_set_nr_mmu_pages(struct kvm *kvm,
u32 kvm_nr_mmu_pages)
static int kvm_vm_ioctl_get_nr_mmu_pages(struct kvm *kvm)
static int kvm_vm_ioctl_get_irqchip(struct kvm *kvm, struct kvm_irqchip *chip)
static int kvm_vm_ioctl_set_irqchip(struct kvm *kvm, struct kvm_irqchip *chip)
static int kvm_vm_ioctl_get_pit(struct kvm *kvm, struct kvm_pit_state *ps)
static int kvm_vm_ioctl_set_pit(struct kvm *kvm, struct kvm_pit_state *ps)
static int kvm_vm_ioctl_get_pit2(struct kvm *kvm, struct kvm_pit_state2 *ps)
static int kvm_vm_ioctl_set_pit2(struct kvm *kvm, struct kvm_pit_state2 *ps)
static int kvm_vm_ioctl_reinject(struct kvm *kvm,
struct kvm_reinject_control *control)
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log)
long kvm_arch_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static void kvm_init_msr_list(void)
static int vcpu_mmio_write(struct kvm_vcpu *vcpu, gpa_t addr, int len,
const void *v)
static int vcpu_mmio_read(struct kvm_vcpu *vcpu, gpa_t addr, int len, void *v)
static void kvm_set_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
void kvm_get_segment(struct kvm_vcpu *vcpu,
struct kvm_segment *var, int seg)
static gpa_t translate_gpa(struct kvm_vcpu *vcpu, gpa_t gpa, u32 access)
static gpa_t translate_nested_gpa(struct kvm_vcpu *vcpu, gpa_t gpa, u32 access)
gpa_t kvm_mmu_gva_to_gpa_read(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception)
gpa_t kvm_mmu_gva_to_gpa_fetch(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception)
gpa_t kvm_mmu_gva_to_gpa_write(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception)
gpa_t kvm_mmu_gva_to_gpa_system(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception)
static int kvm_read_guest_virt_helper(gva_t addr, void *val, unsigned int bytes,
struct kvm_vcpu *vcpu, u32 access,
struct x86_exception *exception)
static int kvm_fetch_guest_virt(struct x86_emulate_ctxt *ctxt,
gva_t addr, void *val, unsigned int bytes,
struct x86_exception *exception)
static int kvm_read_guest_virt(struct x86_emulate_ctxt *ctxt,
gva_t addr, void *val, unsigned int bytes,
struct x86_exception *exception)
static int kvm_read_guest_virt_system(struct x86_emulate_ctxt *ctxt,
gva_t addr, void *val, unsigned int bytes,
struct x86_exception *exception)
static int kvm_write_guest_virt_system(struct x86_emulate_ctxt *ctxt,
gva_t addr, void *val,
unsigned int bytes,
struct x86_exception *exception)
static int emulator_read_emulated(struct x86_emulate_ctxt *ctxt,
unsigned long addr,
void *val,
unsigned int bytes,
struct x86_exception *exception)
int emulator_write_phys(struct kvm_vcpu *vcpu, gpa_t gpa,
const void *val, int bytes)
static int emulator_write_emulated_onepage(unsigned long addr,
const void *val,
unsigned int bytes,
struct x86_exception *exception,
struct kvm_vcpu *vcpu)
int emulator_write_emulated(struct x86_emulate_ctxt *ctxt,
unsigned long addr,
const void *val,
unsigned int bytes,
struct x86_exception *exception)
#define CMPXCHG_TYPE(t, ptr, old, new) \
(cmpxchg((t *)(ptr), *(t *)(old), *(t *)(new)) == *(t *)(old))
#  define CMPXCHG64(ptr, old, new) CMPXCHG_TYPE(u64, ptr, old, new)
#  define CMPXCHG64(ptr, old, new) \
(cmpxchg64((u64 *)(ptr), *(u64 *)(old), *(u64 *)(new)) == *(u64 *)(old))
static int emulator_cmpxchg_emulated(struct x86_emulate_ctxt *ctxt,
unsigned long addr,
const void *old,
const void *new,
unsigned int bytes,
struct x86_exception *exception)
static int kernel_pio(struct kvm_vcpu *vcpu, void *pd)
static int emulator_pio_in_emulated(struct x86_emulate_ctxt *ctxt,
int size, unsigned short port, void *val,
unsigned int count)
static int emulator_pio_out_emulated(struct x86_emulate_ctxt *ctxt,
int size, unsigned short port,
const void *val, unsigned int count)
static unsigned long get_segment_base(struct kvm_vcpu *vcpu, int seg)
static void emulator_invlpg(struct x86_emulate_ctxt *ctxt, ulong address)
int kvm_emulate_wbinvd(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_emulate_wbinvd);
static void emulator_wbinvd(struct x86_emulate_ctxt *ctxt)
int emulator_get_dr(struct x86_emulate_ctxt *ctxt, int dr, unsigned long *dest)
int emulator_set_dr(struct x86_emulate_ctxt *ctxt, int dr, unsigned long value)
static u64 mk_cr_64(u64 curr_cr, u32 new_val)
static unsigned long emulator_get_cr(struct x86_emulate_ctxt *ctxt, int cr)
static int emulator_set_cr(struct x86_emulate_ctxt *ctxt, int cr, ulong val)
static int emulator_get_cpl(struct x86_emulate_ctxt *ctxt)
static void emulator_get_gdt(struct x86_emulate_ctxt *ctxt, struct desc_ptr *dt)
static void emulator_get_idt(struct x86_emulate_ctxt *ctxt, struct desc_ptr *dt)
static void emulator_set_gdt(struct x86_emulate_ctxt *ctxt, struct desc_ptr *dt)
static void emulator_set_idt(struct x86_emulate_ctxt *ctxt, struct desc_ptr *dt)
static unsigned long emulator_get_cached_segment_base(
struct x86_emulate_ctxt *ctxt, int seg)
static bool emulator_get_segment(struct x86_emulate_ctxt *ctxt, u16 *selector,
struct desc_struct *desc, u32 *base3,
int seg)
static void emulator_set_segment(struct x86_emulate_ctxt *ctxt, u16 selector,
struct desc_struct *desc, u32 base3,
int seg)
static int emulator_get_msr(struct x86_emulate_ctxt *ctxt,
u32 msr_index, u64 *pdata)
static int emulator_set_msr(struct x86_emulate_ctxt *ctxt,
u32 msr_index, u64 data)
static void emulator_halt(struct x86_emulate_ctxt *ctxt)
static void emulator_get_fpu(struct x86_emulate_ctxt *ctxt)
static void emulator_put_fpu(struct x86_emulate_ctxt *ctxt)
static int emulator_intercept(struct x86_emulate_ctxt *ctxt,
struct x86_instruction_info *info,
enum x86_intercept_stage stage)
static struct x86_emulate_ops emulate_ops = ;
static void cache_all_regs(struct kvm_vcpu *vcpu)
static void toggle_interruptibility(struct kvm_vcpu *vcpu, u32 mask)
static void inject_emulated_exception(struct kvm_vcpu *vcpu)
static void init_emulate_ctxt(struct kvm_vcpu *vcpu)
int kvm_inject_realmode_interrupt(struct kvm_vcpu *vcpu, int irq, int inc_eip)
EXPORT_SYMBOL_GPL(kvm_inject_realmode_interrupt);
static int handle_emulation_failure(struct kvm_vcpu *vcpu)
static bool reexecute_instruction(struct kvm_vcpu *vcpu, gva_t gva)
int x86_emulate_instruction(struct kvm_vcpu *vcpu,
unsigned long cr2,
int emulation_type,
void *insn,
int insn_len)
EXPORT_SYMBOL_GPL(x86_emulate_instruction);
int kvm_fast_pio_out(struct kvm_vcpu *vcpu, int size, unsigned short port)
EXPORT_SYMBOL_GPL(kvm_fast_pio_out);
static void tsc_bad(void *info)
static void tsc_khz_changed(void *data)
static int kvmclock_cpufreq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block kvmclock_cpufreq_notifier_block = ;
static int kvmclock_cpu_notifier(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block kvmclock_cpu_notifier_block = ;
static void kvm_timer_init(void)
static DEFINE_PER_CPU(struct kvm_vcpu *, current_vcpu);
static int kvm_is_in_guest(void)
static int kvm_is_user_mode(void)
static unsigned long kvm_get_guest_ip(void)
static struct perf_guest_info_callbacks kvm_guest_cbs = ;
void kvm_before_handle_nmi(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_before_handle_nmi);
void kvm_after_handle_nmi(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_after_handle_nmi);
int kvm_arch_init(void *opaque)
void kvm_arch_exit(void)
int kvm_emulate_halt(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_emulate_halt);
static inline gpa_t hc_gpa(struct kvm_vcpu *vcpu, unsigned long a0,
unsigned long a1)
int kvm_hv_hypercall(struct kvm_vcpu *vcpu)
int kvm_emulate_hypercall(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_emulate_hypercall);
int emulator_fix_hypercall(struct x86_emulate_ctxt *ctxt)
static int move_to_next_stateful_cpuid_entry(struct kvm_vcpu *vcpu, int i)
static int is_matching_cpuid_entry(struct kvm_cpuid_entry2 *e,
u32 function, u32 index)
struct kvm_cpuid_entry2 *kvm_find_cpuid_entry(struct kvm_vcpu *vcpu,
u32 function, u32 index)
EXPORT_SYMBOL_GPL(kvm_find_cpuid_entry);
int cpuid_maxphyaddr(struct kvm_vcpu *vcpu)
static struct kvm_cpuid_entry2* check_cpuid_limit(struct kvm_vcpu *vcpu,
u32 function, u32 index)
void kvm_emulate_cpuid(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_emulate_cpuid);
static int dm_request_for_irq_injection(struct kvm_vcpu *vcpu)
static void post_kvm_run_save(struct kvm_vcpu *vcpu)
static void vapic_enter(struct kvm_vcpu *vcpu)
static void vapic_exit(struct kvm_vcpu *vcpu)
static void update_cr8_intercept(struct kvm_vcpu *vcpu)
static void inject_pending_event(struct kvm_vcpu *vcpu)
static void kvm_load_guest_xcr0(struct kvm_vcpu *vcpu)
static void kvm_put_guest_xcr0(struct kvm_vcpu *vcpu)
static int vcpu_enter_guest(struct kvm_vcpu *vcpu)
static int __vcpu_run(struct kvm_vcpu *vcpu)
static int complete_mmio(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_run(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
void kvm_get_cs_db_l_bits(struct kvm_vcpu *vcpu, int *db, int *l)
EXPORT_SYMBOL_GPL(kvm_get_cs_db_l_bits);
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
int kvm_arch_vcpu_ioctl_set_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
int kvm_task_switch(struct kvm_vcpu *vcpu, u16 tss_selector, int reason,
bool has_error_code, u32 error_code)
EXPORT_SYMBOL_GPL(kvm_task_switch);
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_set_guest_debug(struct kvm_vcpu *vcpu,
struct kvm_guest_debug *dbg)
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int fx_init(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(fx_init);
static void fx_free(struct kvm_vcpu *vcpu)
void kvm_load_guest_fpu(struct kvm_vcpu *vcpu)
void kvm_put_guest_fpu(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_free(struct kvm_vcpu *vcpu)
struct kvm_vcpu *kvm_arch_vcpu_create(struct kvm *kvm,
unsigned int id)
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_destroy(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_reset(struct kvm_vcpu *vcpu)
int kvm_arch_hardware_enable(void *garbage)
void kvm_arch_hardware_disable(void *garbage)
int kvm_arch_hardware_setup(void)
void kvm_arch_hardware_unsetup(void)
void kvm_arch_check_processor_compat(void *rtn)
int kvm_arch_vcpu_init(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_uninit(struct kvm_vcpu *vcpu)
int kvm_arch_init_vm(struct kvm *kvm)
static void kvm_unload_vcpu_mmu(struct kvm_vcpu *vcpu)
static void kvm_free_vcpus(struct kvm *kvm)
void kvm_arch_sync_events(struct kvm *kvm)
void kvm_arch_destroy_vm(struct kvm *kvm)
int kvm_arch_prepare_memory_region(struct kvm *kvm,
struct kvm_memory_slot *memslot,
struct kvm_memory_slot old,
struct kvm_userspace_memory_region *mem,
int user_alloc)
void kvm_arch_commit_memory_region(struct kvm *kvm,
struct kvm_userspace_memory_region *mem,
struct kvm_memory_slot old,
int user_alloc)
void kvm_arch_flush_shadow(struct kvm *kvm)
int kvm_arch_vcpu_runnable(struct kvm_vcpu *vcpu)
void kvm_vcpu_kick(struct kvm_vcpu *vcpu)
int kvm_arch_interrupt_allowed(struct kvm_vcpu *vcpu)
bool kvm_is_linear_rip(struct kvm_vcpu *vcpu, unsigned long linear_rip)
EXPORT_SYMBOL_GPL(kvm_is_linear_rip);
unsigned long kvm_get_rflags(struct kvm_vcpu *vcpu)
EXPORT_SYMBOL_GPL(kvm_get_rflags);
void kvm_set_rflags(struct kvm_vcpu *vcpu, unsigned long rflags)
EXPORT_SYMBOL_GPL(kvm_set_rflags);
void kvm_arch_async_page_ready(struct kvm_vcpu *vcpu, struct kvm_async_pf *work)
static inline u32 kvm_async_pf_hash_fn(gfn_t gfn)
static inline u32 kvm_async_pf_next_probe(u32 key)
static void kvm_add_async_pf_gfn(struct kvm_vcpu *vcpu, gfn_t gfn)
static u32 kvm_async_pf_gfn_slot(struct kvm_vcpu *vcpu, gfn_t gfn)
bool kvm_find_async_pf_gfn(struct kvm_vcpu *vcpu, gfn_t gfn)
static void kvm_del_async_pf_gfn(struct kvm_vcpu *vcpu, gfn_t gfn)
static int apf_put_user(struct kvm_vcpu *vcpu, u32 val)
void kvm_arch_async_page_not_present(struct kvm_vcpu *vcpu,
struct kvm_async_pf *work)
void kvm_arch_async_page_present(struct kvm_vcpu *vcpu,
struct kvm_async_pf *work)
bool kvm_arch_can_inject_async_page_present(struct kvm_vcpu *vcpu)
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_exit);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_inj_virq);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_page_fault);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_msr);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_cr);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_nested_vmrun);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_nested_vmexit);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_nested_vmexit_inject);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_nested_intr_vmexit);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_invlpga);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_skinit);
EXPORT_TRACEPOINT_SYMBOL_GPL(kvm_nested_intercepts);
