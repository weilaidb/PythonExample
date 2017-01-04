#define CREATE_TRACE_POINTS
int kvm_arch_vcpu_runnable(struct kvm_vcpu *v)
int kvmppc_kvm_pv(struct kvm_vcpu *vcpu)
int kvmppc_emulate_mmio(struct kvm_run *run, struct kvm_vcpu *vcpu)
int kvm_arch_hardware_enable(void *garbage)
void kvm_arch_hardware_disable(void *garbage)
int kvm_arch_hardware_setup(void)
void kvm_arch_hardware_unsetup(void)
void kvm_arch_check_processor_compat(void *rtn)
int kvm_arch_init_vm(struct kvm *kvm)
void kvm_arch_destroy_vm(struct kvm *kvm)
void kvm_arch_sync_events(struct kvm *kvm)
int kvm_dev_ioctl_check_extension(long ext)
long kvm_arch_dev_ioctl(struct file *filp,
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
struct kvm_vcpu *kvm_arch_vcpu_create(struct kvm *kvm, unsigned int id)
void kvm_arch_vcpu_free(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_destroy(struct kvm_vcpu *vcpu)
int kvm_cpu_has_pending_timer(struct kvm_vcpu *vcpu)
static void kvmppc_decrementer_func(unsigned long data)
enum hrtimer_restart kvmppc_decrementer_wakeup(struct hrtimer *timer)
int kvm_arch_vcpu_init(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_uninit(struct kvm_vcpu *vcpu)
void kvm_arch_vcpu_load(struct kvm_vcpu *vcpu, int cpu)
void kvm_arch_vcpu_put(struct kvm_vcpu *vcpu)
int kvm_arch_vcpu_ioctl_set_guest_debug(struct kvm_vcpu *vcpu,
struct kvm_guest_debug *dbg)
static void kvmppc_complete_dcr_load(struct kvm_vcpu *vcpu,
struct kvm_run *run)
static void kvmppc_complete_mmio_load(struct kvm_vcpu *vcpu,
struct kvm_run *run)
int kvmppc_handle_load(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int rt, unsigned int bytes, int is_bigendian)
int kvmppc_handle_loads(struct kvm_run *run, struct kvm_vcpu *vcpu,
unsigned int rt, unsigned int bytes, int is_bigendian)
int kvmppc_handle_store(struct kvm_run *run, struct kvm_vcpu *vcpu,
u64 val, unsigned int bytes, int is_bigendian)
int kvm_arch_vcpu_ioctl_run(struct kvm_vcpu *vcpu, struct kvm_run *run)
int kvm_vcpu_ioctl_interrupt(struct kvm_vcpu *vcpu, struct kvm_interrupt *irq)
static int kvm_vcpu_ioctl_enable_cap(struct kvm_vcpu *vcpu,
struct kvm_enable_cap *cap)
int kvm_arch_vcpu_ioctl_get_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
int kvm_arch_vcpu_ioctl_set_mpstate(struct kvm_vcpu *vcpu,
struct kvm_mp_state *mp_state)
long kvm_arch_vcpu_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
static int kvm_vm_ioctl_get_pvinfo(struct kvm_ppc_pvinfo *pvinfo)
long kvm_arch_vm_ioctl(struct file *filp,
unsigned int ioctl, unsigned long arg)
int kvm_arch_init(void *opaque)
void kvm_arch_exit(void)
