static unsigned long kvm_vmm_base;
static unsigned long kvm_vsa_base;
static unsigned long kvm_vm_buffer;
static unsigned long kvm_vm_buffer_size;
unsigned long kvm_vmm_gp;
static long vp_env_info;
static struct kvm_vmm_info *kvm_vmm_info;
static DEFINE_PER_CPU(struct kvm_vcpu *, last_vcpu);
struct kvm_stats_debugfs_item debugfs_entries[] = ;
static unsigned long kvm_get_itc(struct kvm_vcpu *vcpu)
static void kvm_flush_icache(unsigned long start, unsigned long len)
static void kvm_flush_tlb_all(void)
long ia64_pal_vp_create(u64 *vpd, u64 *host_iva, u64 *opt_handler)
static  DEFINE_SPINLOCK(vp_lock);
int kvm_arch_hardware_enable(void *garbage)
void kvm_arch_hardware_disable(void *garbage)
void kvm_arch_check_processor_compat(void *rtn)
int kvm_dev_ioctl_check_extension(long ext)
static int handle_vm_error(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int handle_mmio(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int handle_pal_call(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int handle_sal_call(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int __apic_accept_irq(struct kvm_vcpu *vcpu, uint64_t vector)
static void vcpu_deliver_ipi(struct kvm_vcpu *vcpu, uint64_t dm,
uint64_t vector)
static struct kvm_vcpu *lid_to_vcpu(struct kvm *kvm, unsigned long id,
unsigned long eid)
static int handle_ipi(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
struct call_data ;
static void vcpu_global_purge(void *info)
static int handle_global_purge(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int handle_switch_rr6(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int kvm_sn2_setup_mappings(struct kvm_vcpu *vcpu)
int kvm_emulate_halt(struct kvm_vcpu *vcpu)
static int handle_vm_shutdown(struct kvm_vcpu *vcpu,
struct kvm_run *kvm_run)
static int handle_external_interrupt(struct kvm_vcpu *vcpu,
struct kvm_run *kvm_run)
static int handle_vcpu_debug(struct kvm_vcpu *vcpu,
struct kvm_run *kvm_run)
static int (*kvm_vti_exit_handlers[])(struct kvm_vcpu *vcpu,
struct kvm_run *kvm_run) = ;
static const int kvm_vti_max_exit_handlers =
sizeof(kvm_vti_exit_handlers)/sizeof(*kvm_vti_exit_handlers);
static uint32_t kvm_get_exit_reason(struct kvm_vcpu *vcpu)
static int kvm_handle_exit(struct kvm_run *kvm_run, struct kvm_vcpu *vcpu)
static inline void vti_set_rr6(unsigned long rr6)
static int kvm_insert_vmm_mapping(struct kvm_vcpu *vcpu)
static void kvm_purge_vmm_mapping(struct kvm_vcpu *vcpu)
static int kvm_vcpu_pre_transition(struct kvm_vcpu *vcpu)
static void kvm_vcpu_post_transition(struct kvm_vcpu *vcpu)
static int __vcpu_run(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static void kvm_set_mmio_data(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_run(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
struct kvm *kvm_arch_alloc_vm(void)
struct kvm_io_range ;
static const struct kvm_io_range io_ranges[] = ;
static void kvm_build_io_pmt(struct kvm *kvm)
#define GUEST_PHYSICAL_RR0	0x1739
#define GUEST_PHYSICAL_RR4	0x2739
#define VMM_INIT_RR		0x1660
int kvm_arch_init_vm(struct kvm *kvm)
static int kvm_vm_ioctl_get_irqchip(struct kvm *kvm,
struct kvm_irqchip *chip)
static int kvm_vm_ioctl_set_irqchip(struct kvm *kvm, struct kvm_irqchip *chip)
#define RESTORE_REGS(_x) vcpu->arch._x = regs->_x
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
long kvm_arch_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
static int kvm_alloc_vmm_area(void)
static void kvm_free_vmm_area(void)
static int vti_init_vpd(struct kvm_vcpu *vcpu)
static int vti_create_vp(struct kvm_vcpu *vcpu)
static void init_ptce_info(struct kvm_vcpu *vcpu)
static void kvm_migrate_hlt_timer(struct kvm_vcpu *vcpu)
static enum hrtimer_restart hlt_timer_fn(struct hrtimer *data)
#define PALE_RESET_ENTRY    0x80000000ffffffb0UL
int kvm_arch_vcpu_init(struct kvm_vcpu *vcpu)
static int vti_vcpu_setup(struct kvm_vcpu *vcpu, int id)
struct kvm_vcpu *kvm_arch_vcpu_create(struct kvm *kvm,
unsigned int id)
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_set_guest_debug(struct kvm_vcpu *vcpu,
struct kvm_guest_debug *dbg)
void kvm_arch_free_vm(struct kvm *kvm)
static void kvm_release_vm_pages(struct kvm *kvm)
void kvm_arch_sync_events(struct kvm *kvm)
void kvm_arch_destroy_vm(struct kvm *kvm)
void kvm_arch_vcpu_put(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
#define SAVE_REGS(_x) 	regs->_x = vcpu->arch._x
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_get_stack(struct kvm_vcpu *vcpu,
struct kvm_ia64_vcpu_stack *stack)
int kvm_arch_vcpu_ioctl_set_stack(struct kvm_vcpu *vcpu,
struct kvm_ia64_vcpu_stack *stack)
void kvm_arch_vcpu_uninit(struct kvm_vcpu *vcpu)
long kvm_arch_vcpu_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
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
long kvm_arch_dev_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
void kvm_arch_vcpu_destroy(struct kvm_vcpu *vcpu)
static int vti_cpu_has_kvm_support(void)
static void kvm_patch_vmm(struct kvm_vmm_info *vmm_info,
struct module *module)
static int kvm_relocate_vmm(struct kvm_vmm_info *vmm_info,
struct module *module)
int kvm_arch_init(void *opaque)
void kvm_arch_exit(void)
static void kvm_ia64_sync_dirty_log(struct kvm *kvm,
struct kvm_memory_slot *memslot)
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log)
int kvm_arch_hardware_setup(void)
void kvm_arch_hardware_unsetup(void)
void kvm_vcpu_kick(struct kvm_vcpu *vcpu)
int kvm_apic_set_irq(struct kvm_vcpu *vcpu, struct kvm_lapic_irq *irq)
int kvm_apic_match_physical_addr(struct kvm_lapic *apic, u16 dest)
int kvm_apic_match_logical_addr(struct kvm_lapic *apic, u8 mda)
int kvm_apic_compare_prio(struct kvm_vcpu *vcpu1, struct kvm_vcpu *vcpu2)
int kvm_apic_match_dest(struct kvm_vcpu *vcpu, struct kvm_lapic *source,
int short_hand, int dest, int dest_mode)
static int find_highest_bits(int *dat)
int kvm_highest_pending_irq(struct kvm_vcpu *vcpu)
int kvm_cpu_has_pending_timer(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_runnable(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_get_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
static int vcpu_reset(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_set_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
