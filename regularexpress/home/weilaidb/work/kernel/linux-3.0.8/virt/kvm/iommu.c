static int kvm_iommu_unmap_memslots(struct kvm *kvm);
static void kvm_iommu_put_pages(struct kvm *kvm,
gfn_t base_gfn, unsigned long npages);
static pfn_t kvm_pin_pages(struct kvm *kvm, struct kvm_memory_slot *slot,
gfn_t gfn, unsigned long size)
int kvm_iommu_map_pages(struct kvm *kvm, struct kvm_memory_slot *slot)
static int kvm_iommu_map_memslots(struct kvm *kvm)
int kvm_assign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
int kvm_deassign_device(struct kvm *kvm,
struct kvm_assigned_dev_kernel *assigned_dev)
int kvm_iommu_map_guest(struct kvm *kvm)
static void kvm_unpin_pages(struct kvm *kvm, pfn_t pfn, unsigned long npages)
static void kvm_iommu_put_pages(struct kvm *kvm,
gfn_t base_gfn, unsigned long npages)
static int kvm_iommu_unmap_memslots(struct kvm *kvm)
int kvm_iommu_unmap_guest(struct kvm *kvm)
