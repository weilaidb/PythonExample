static inline struct kvm_coalesced_mmio_dev *to_mmio(struct kvm_io_device *dev)
static int coalesced_mmio_in_range(struct kvm_coalesced_mmio_dev *dev,
gpa_t addr, int len)
static int coalesced_mmio_write(struct kvm_io_device *this,
gpa_t addr, int len, const void *val)
static void coalesced_mmio_destructor(struct kvm_io_device *this)
static const struct kvm_io_device_ops coalesced_mmio_ops = ;
int kvm_coalesced_mmio_init(struct kvm *kvm)
void kvm_coalesced_mmio_free(struct kvm *kvm)
int kvm_vm_ioctl_register_coalesced_mmio(struct kvm *kvm,
struct kvm_coalesced_mmio_zone *zone)
int kvm_vm_ioctl_unregister_coalesced_mmio(struct kvm *kvm,
struct kvm_coalesced_mmio_zone *zone)
