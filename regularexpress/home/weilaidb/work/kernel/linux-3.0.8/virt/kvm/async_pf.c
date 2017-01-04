static struct kmem_cache *async_pf_cache;
int kvm_async_pf_init(void)
void kvm_async_pf_deinit(void)
void kvm_async_pf_vcpu_init(struct kvm_vcpu *vcpu)
static void async_pf_execute(struct work_struct *work)
void kvm_clear_async_pf_completion_queue(struct kvm_vcpu *vcpu)
void kvm_check_async_pf_completion(struct kvm_vcpu *vcpu)
int kvm_setup_async_pf(struct kvm_vcpu *vcpu, gva_t gva, gfn_t gfn,
struct kvm_arch_async_pf *arch)
int kvm_async_pf_wakeup_all(struct kvm_vcpu *vcpu)
