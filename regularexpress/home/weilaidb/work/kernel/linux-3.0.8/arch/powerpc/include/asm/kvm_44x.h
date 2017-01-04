#define __ASM_44X_H__
#define PPC44x_TLB_SIZE 64
#define KVM44x_GUEST_TLB_SIZE 64
struct kvmppc_44x_tlbe ;
struct kvmppc_44x_shadow_ref ;
struct kvmppc_vcpu_44x ;
static inline struct kvmppc_vcpu_44x *to_44x(struct kvm_vcpu *vcpu)
void kvmppc_44x_tlb_put(struct kvm_vcpu *vcpu);
void kvmppc_44x_tlb_load(struct kvm_vcpu *vcpu);
