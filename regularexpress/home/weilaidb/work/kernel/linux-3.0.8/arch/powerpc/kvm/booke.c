unsigned long kvmppc_booke_handlers;
#define VM_STAT(x) offsetof(struct kvm, stat.x), KVM_STAT_VM
#define VCPU_STAT(x) offsetof(struct kvm_vcpu, stat.x), KVM_STAT_VCPU
struct kvm_stats_debugfs_item debugfs_entries[] = ;
void kvmppc_dump_vcpu(struct kvm_vcpu *vcpu)
static void kvmppc_booke_queue_irqprio(struct kvm_vcpu *vcpu,
unsigned int priority)
static void kvmppc_core_queue_dtlb_miss(struct kvm_vcpu *vcpu,
ulong dear_flags, ulong esr_flags)
static void kvmppc_core_queue_data_storage(struct kvm_vcpu *vcpu,
ulong dear_flags, ulong esr_flags)
static void kvmppc_core_queue_inst_storage(struct kvm_vcpu *vcpu,
ulong esr_flags)
void kvmppc_core_queue_program(struct kvm_vcpu *vcpu, ulong esr_flags)
void kvmppc_core_queue_dec(struct kvm_vcpu *vcpu)
int kvmppc_core_pending_dec(struct kvm_vcpu *vcpu)
void kvmppc_core_dequeue_dec(struct kvm_vcpu *vcpu)
void kvmppc_core_queue_external(struct kvm_vcpu *vcpu,
struct kvm_interrupt *irq)
void kvmppc_core_dequeue_external(struct kvm_vcpu *vcpu,
struct kvm_interrupt *irq)
static int kvmppc_booke_irqprio_deliver(struct kvm_vcpu *vcpu,
unsigned int priority)
void kvmppc_core_deliver_interrupts(struct kvm_vcpu *vcpu)
int kvmppc_handle_exit(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int exit_nr)
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
static void get_sregs_base(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
static int set_sregs_base(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
static void get_sregs_arch206(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
static int set_sregs_arch206(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
void kvmppc_get_sregs_ivor(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
int kvmppc_set_sregs_ivor(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm, struct kvm_dirty_log *log)
int __init kvmppc_booke_init(void)
void __exit kvmppc_booke_exit(void)
