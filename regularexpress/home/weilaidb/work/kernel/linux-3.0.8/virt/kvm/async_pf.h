#define __KVM_ASYNC_PF_H__
int kvm_async_pf_init(void);
void kvm_async_pf_deinit(void);
void kvm_async_pf_vcpu_init(struct kvm_vcpu *vcpu);
#define kvm_async_pf_init() (0)
#define kvm_async_pf_deinit() dowhile(0)
#define kvm_async_pf_vcpu_init(C) dowhile(0)
