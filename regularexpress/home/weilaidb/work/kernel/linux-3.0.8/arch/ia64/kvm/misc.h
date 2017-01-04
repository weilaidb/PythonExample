#define __KVM_IA64_MISC_H
static inline uint64_t *kvm_host_get_pmt(struct kvm *kvm)
static inline void kvm_set_pmt_entry(struct kvm *kvm, gfn_t gfn,
u64 paddr, u64 mem_flags)
static inline void *to_guest(struct kvm *kvm, void *addr)
static inline void *to_host(struct kvm *kvm, void *addr)
static inline union context *kvm_get_host_context(struct kvm_vcpu *vcpu)
static inline union context *kvm_get_guest_context(struct kvm_vcpu *vcpu)
static inline struct exit_ctl_data *kvm_get_exit_data(struct kvm_vcpu *vcpu)
static inline struct kvm_mmio_req *kvm_get_vcpu_ioreq(struct kvm_vcpu *vcpu)
