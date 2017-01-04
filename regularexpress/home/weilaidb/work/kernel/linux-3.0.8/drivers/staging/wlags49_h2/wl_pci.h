#define __WL_PCI_H__
#define PCI_VENDOR_IDWL_LKM     0x11C1
#define PCI_DEVICE_ID_WL_LKM_0  0xAB30
#define PCI_DEVICE_ID_WL_LKM_1  0xAB34
#define PCI_DEVICE_ID_WL_LKM_2  0xAB11
int wl_adapter_init_module( void );
void wl_adapter_cleanup_module( void );
int wl_adapter_insert( struct net_device *dev );
int wl_adapter_open( struct net_device *dev );
int wl_adapter_close( struct net_device *dev );
int wl_adapter_is_open( struct net_device *dev );
void wl_pci_dma_hcf_supply( struct wl_private *lp );
void wl_pci_dma_hcf_reclaim( struct wl_private *lp );
DESC_STRCT * wl_pci_dma_get_tx_packet( struct wl_private *lp );
void wl_pci_dma_put_tx_packet( struct wl_private *lp, DESC_STRCT *desc );
void wl_pci_dma_hcf_reclaim_tx( struct wl_private *lp );
