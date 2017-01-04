#define __ASM_KVM_E500_H__
#define BOOKE_INTERRUPT_SIZE 36
#define E500_PID_NUM   3
#define E500_TLB_NUM   2
struct tlbe;
struct kvmppc_vcpu_e500 ;
static inline struct kvmppc_vcpu_e500 *to_e500(struct kvm_vcpu *vcpu)
