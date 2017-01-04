#define __KVM_COALESCED_MMIO_H__
#define KVM_COALESCED_MMIO_ZONE_MAX 100
struct kvm_coalesced_mmio_dev ;
int kvm_coalesced_mmio_init(struct kvm *kvm);
void kvm_coalesced_mmio_free(struct kvm *kvm);
int kvm_vm_ioctl_register_coalesced_mmio(struct kvm *kvm,
struct kvm_coalesced_mmio_zone *zone);
int kvm_vm_ioctl_unregister_coalesced_mmio(struct kvm *kvm,
struct kvm_coalesced_mmio_zone *zone);
static inline int kvm_coalesced_mmio_init(struct kvm *kvm)
static inline void kvm_coalesced_mmio_free(struct kvm *kvm)
