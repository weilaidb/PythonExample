#define __KVM_IODEV_H__
struct kvm_io_device;
struct kvm_io_device_ops ;
struct kvm_io_device ;
static inline void kvm_iodevice_init(struct kvm_io_device *dev,
const struct kvm_io_device_ops *ops)
static inline int kvm_iodevice_read(struct kvm_io_device *dev,
gpa_t addr, int l, void *v)
static inline int kvm_iodevice_write(struct kvm_io_device *dev,
gpa_t addr, int l, const void *v)
static inline void kvm_iodevice_destructor(struct kvm_io_device *dev)
