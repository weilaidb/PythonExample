#define _ASM_POWERPC_VIO_H
#define VETH_MAC_ADDR "local-mac-address"
#define VETH_MCAST_FILTER_SIZE "ibm,mac-address-filters"
#define h_vio_signal(ua, mode) \
plpar_hcall_norets(H_VIO_SIGNAL, ua, mode)
#define VIO_IRQ_DISABLE		0UL
#define VIO_IRQ_ENABLE		1UL
#define VIO_CMO_MIN_ENT 1562624
struct iommu_table;
struct vio_dev ;
struct vio_driver ;
extern int vio_register_driver(struct vio_driver *drv);
extern void vio_unregister_driver(struct vio_driver *drv);
extern int vio_cmo_entitlement_update(size_t);
extern void vio_cmo_set_dev_desired(struct vio_dev *viodev, size_t desired);
extern void __devinit vio_unregister_device(struct vio_dev *dev);
struct device_node;
extern struct vio_dev *vio_register_device_node(
struct device_node *node_vdev);
extern const void *vio_get_attribute(struct vio_dev *vdev, char *which,
int *length);
extern struct vio_dev *vio_find_node(struct device_node *vnode);
extern int vio_enable_interrupts(struct vio_dev *dev);
extern int vio_disable_interrupts(struct vio_dev *dev);
static inline int vio_enable_interrupts(struct vio_dev *dev)
static inline struct vio_driver *to_vio_driver(struct device_driver *drv)
static inline struct vio_dev *to_vio_dev(struct device *dev)
