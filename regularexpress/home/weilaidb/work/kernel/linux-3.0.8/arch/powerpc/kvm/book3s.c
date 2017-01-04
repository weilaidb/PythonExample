#define VCPU_STAT(x) offsetof(struct kvm_vcpu, stat.x), KVM_STAT_VCPU
static int kvmppc_handle_ext(struct kvm_vcpu *vcpu, unsigned int exit_nr,
ulong msr);
#define MSR_USER32 MSR_USER
#define MSR_USER64 MSR_USER
#define HW_PAGE_SIZE PAGE_SIZE
struct kvm_stats_debugfs_item debugfs_entries[] = ;
void kvmppc_core_load_host_debugstate(struct kvm_vcpu *vcpu)
void kvmppc_core_load_guest_debugstate(struct kvm_vcpu *vcpu)
void kvmppc_core_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
void kvmppc_core_vcpu_put(struct kvm_vcpu *vcpu)
static void kvmppc_recalc_shadow_msr(struct kvm_vcpu *vcpu)
void kvmppc_set_msr(struct kvm_vcpu *vcpu, u64 msr)
void kvmppc_inject_interrupt(struct kvm_vcpu *vcpu, int vec, u64 flags)
static int kvmppc_book3s_vec2irqprio(unsigned int vec)
static void kvmppc_book3s_dequeue_irqprio(struct kvm_vcpu *vcpu,
unsigned int vec)
void kvmppc_book3s_queue_irqprio(struct kvm_vcpu *vcpu, unsigned int vec)
void kvmppc_core_queue_program(struct kvm_vcpu *vcpu, ulong flags)
void kvmppc_core_queue_dec(struct kvm_vcpu *vcpu)
int kvmppc_core_pending_dec(struct kvm_vcpu *vcpu)
void kvmppc_core_dequeue_dec(struct kvm_vcpu *vcpu)
void kvmppc_core_queue_external(struct kvm_vcpu *vcpu,
struct kvm_interrupt *irq)
void kvmppc_core_dequeue_external(struct kvm_vcpu *vcpu,
struct kvm_interrupt *irq)
int kvmppc_book3s_irqprio_deliver(struct kvm_vcpu *vcpu, unsigned int priority)
static bool clear_irqprio(struct kvm_vcpu *vcpu, unsigned int priority)
void kvmppc_core_deliver_interrupts(struct kvm_vcpu *vcpu)
void kvmppc_set_pvr(struct kvm_vcpu *vcpu, u32 pvr)
pfn_t kvmppc_gfn_to_pfn(struct kvm_vcpu *vcpu, gfn_t gfn)
static void kvmppc_patch_dcbz(struct kvm_vcpu *vcpu, struct kvmppc_pte *pte)
static int kvmppc_xlate(struct kvm_vcpu *vcpu, ulong eaddr, bool data,
struct kvmppc_pte *pte)
static hva_t kvmppc_bad_hva(void)
static hva_t kvmppc_pte_to_hva(struct kvm_vcpu *vcpu, struct kvmppc_pte *pte,
bool read)
int kvmppc_st(struct kvm_vcpu *vcpu, ulong *eaddr, int size, void *ptr,
bool data)
int kvmppc_ld(struct kvm_vcpu *vcpu, ulong *eaddr, int size, void *ptr,
bool data)
static int kvmppc_visible_gfn(struct kvm_vcpu *vcpu, gfn_t gfn)
int kvmppc_handle_pagefault(struct kvm_run *run, struct kvm_vcpu *vcpu,
ulong eaddr, int vec)
static inline int get_fpr_index(int i)
void kvmppc_giveup_ext(struct kvm_vcpu *vcpu, ulong msr)
static int kvmppc_read_inst(struct kvm_vcpu *vcpu)
static int kvmppc_check_ext(struct kvm_vcpu *vcpu, unsigned int exit_nr)
static int kvmppc_handle_ext(struct kvm_vcpu *vcpu, unsigned int exit_nr,
ulong msr)
int kvmppc_handle_exit(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int exit_nr)
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log)
int kvmppc_core_check_processor_compat(void)
struct kvm_vcpu *kvmppc_core_vcpu_create(struct kvm *kvm, unsigned int id)
void kvmppc_core_vcpu_free(struct kvm_vcpu *vcpu)
extern int __kvmppc_vcpu_entry(struct kvm_run *kvm_run, struct kvm_vcpu *vcpu);
int __kvmppc_vcpu_run(struct kvm_run *kvm_run, struct kvm_vcpu *vcpu)
static int kvmppc_book3s_init(void)
static void kvmppc_book3s_exit(void)
module_init(kvmppc_book3s_init);
module_exit(kvmppc_book3s_exit);
