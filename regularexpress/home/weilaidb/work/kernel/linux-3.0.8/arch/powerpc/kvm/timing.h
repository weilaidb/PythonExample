#define __POWERPC_KVM_EXITTIMING_H__
void kvmppc_init_timing_stats(struct kvm_vcpu *vcpu);
void kvmppc_update_timing_stats(struct kvm_vcpu *vcpu);
void kvmppc_create_vcpu_debugfs(struct kvm_vcpu *vcpu, unsigned int id);
void kvmppc_remove_vcpu_debugfs(struct kvm_vcpu *vcpu);
static inline void kvmppc_set_exit_type(struct kvm_vcpu *vcpu, int type)
static inline void kvmppc_init_timing_stats(struct kvm_vcpu *vcpu)
static inline void kvmppc_update_timing_stats(struct kvm_vcpu *vcpu)
static inline void kvmppc_create_vcpu_debugfs(struct kvm_vcpu *vcpu,
unsigned int id)
static inline void kvmppc_remove_vcpu_debugfs(struct kvm_vcpu *vcpu)
static inline void kvmppc_set_exit_type(struct kvm_vcpu *vcpu, int type)
static inline void kvmppc_account_exit_stat(struct kvm_vcpu *vcpu, int type)
static inline void kvmppc_account_exit(struct kvm_vcpu *vcpu, int type)
