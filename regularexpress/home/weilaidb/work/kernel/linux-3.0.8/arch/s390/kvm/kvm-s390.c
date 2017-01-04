#define VCPU_STAT(x) offsetof(struct kvm_vcpu, stat.x), KVM_STAT_VCPU
struct kvm_stats_debugfs_item debugfs_entries[] = ;
static unsigned long long *facilities;
int kvm_arch_hardware_enable(void *garbage)
void kvm_arch_hardware_disable(void *garbage)
int kvm_arch_hardware_setup(void)
void kvm_arch_hardware_unsetup(void)
void kvm_arch_check_processor_compat(void *rtn)
int kvm_arch_init(void *opaque)
void kvm_arch_exit(void)
long kvm_arch_dev_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
int kvm_dev_ioctl_check_extension(long ext)
int kvm_vm_ioctl_get_dirty_log(struct kvm *kvm,
struct kvm_dirty_log *log)
long kvm_arch_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
int kvm_arch_init_vm(struct kvm *kvm)
void kvm_arch_vcpu_destroy(struct kvm_vcpu *vcpu)
static void kvm_free_vcpus(struct kvm *kvm)
void kvm_arch_sync_events(struct kvm *kvm)
void kvm_arch_destroy_vm(struct kvm *kvm)
int kvm_arch_vcpu_init(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_uninit(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
void kvm_arch_vcpu_put(struct kvm_vcpu *vcpu)
static void kvm_s390_vcpu_initial_reset(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_setup(struct kvm_vcpu *vcpu)
struct kvm_vcpu *kvm_arch_vcpu_create(struct kvm *kvm,
unsigned int id)
int kvm_arch_vcpu_runnable(struct kvm_vcpu *vcpu)
static int kvm_arch_vcpu_ioctl_initial_reset(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_set_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_get_regs(struct kvm_vcpu *vcpu, struct kvm_regs *regs)
int kvm_arch_vcpu_ioctl_set_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_get_sregs(struct kvm_vcpu *vcpu,
struct kvm_sregs *sregs)
int kvm_arch_vcpu_ioctl_set_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
int kvm_arch_vcpu_ioctl_get_fpu(struct kvm_vcpu *vcpu, struct kvm_fpu *fpu)
static int kvm_arch_vcpu_ioctl_set_initial_psw(struct kvm_vcpu *vcpu, psw_t psw)
int kvm_arch_vcpu_ioctl_translate(struct kvm_vcpu *vcpu,
struct kvm_translation *tr)
int kvm_arch_vcpu_ioctl_set_guest_debug(struct kvm_vcpu *vcpu,
struct kvm_guest_debug *dbg)
int kvm_arch_vcpu_ioctl_get_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
int kvm_arch_vcpu_ioctl_set_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
static void __vcpu_run(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_run(struct kvm_vcpu *vcpu, struct kvm_run *kvm_run)
static int __guestcopy(struct kvm_vcpu *vcpu, u64 guestdest, const void *from,
unsigned long n, int prefix)
int kvm_s390_vcpu_store_status(struct kvm_vcpu *vcpu, unsigned long addr)
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
static int __init kvm_s390_init(void)
static void __exit kvm_s390_exit(void)
module_init(kvm_s390_init);
module_exit(kvm_s390_exit);
