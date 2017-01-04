#define __KVM_S390_VIRTIO_H
struct kvm_device_desc ;
struct kvm_vqconfig ;
#define KVM_S390_VIRTIO_NOTIFY		0
#define KVM_S390_VIRTIO_RESET		1
#define KVM_S390_VIRTIO_SET_STATUS	2
#define KVM_S390_VIRTIO_RING_ALIGN	4096
#define VIRTIO_PARAM_MASK		0xff
#define VIRTIO_PARAM_VRING_INTERRUPT	0x0
#define VIRTIO_PARAM_CONFIG_CHANGED	0x1
#define VIRTIO_PARAM_DEV_ADD		0x2