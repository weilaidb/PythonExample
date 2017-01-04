#define _VME_BRIDGE_H_
#define VME_CRCSR_BUF_SIZE (508*1024)
#define VME_SLOTS_MAX 32
struct vme_master_resource ;
struct vme_slave_resource ;
struct vme_dma_pattern ;
struct vme_dma_pci ;
struct vme_dma_vme ;
struct vme_dma_list ;
struct vme_dma_resource ;
struct vme_lm_resource ;
struct vme_bus_error ;
struct vme_callback ;
struct vme_irq ;
#define VMENAMSIZ 16
struct vme_bridge ;
void vme_irq_handler(struct vme_bridge *, int, int);
int vme_register_bridge(struct vme_bridge *);
void vme_unregister_bridge(struct vme_bridge *);
