#if DBG
extern dbg_info_t *DbgInfo;
enum hermes_pci_versions ;
static struct pci_device_id wl_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, wl_pci_tbl);
int __devinit wl_pci_probe( struct pci_dev *pdev,
const struct pci_device_id *ent );
void __devexit wl_pci_remove(struct pci_dev *pdev);
int wl_pci_setup( struct pci_dev *pdev );
void wl_pci_enable_cardbus_interrupts( struct pci_dev *pdev );
int wl_pci_dma_alloc( struct pci_dev *pdev, struct wl_private *lp );
int wl_pci_dma_free( struct pci_dev *pdev, struct wl_private *lp );
int wl_pci_dma_alloc_tx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_free_tx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_alloc_rx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_free_rx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_alloc_desc_and_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc, int size );
int wl_pci_dma_free_desc_and_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_alloc_desc( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_free_desc( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc );
int wl_pci_dma_alloc_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT *desc, int size );
int wl_pci_dma_free_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT *desc );
void wl_pci_dma_hcf_reclaim_rx( struct wl_private *lp );
static struct pci_driver wl_driver =
;
int wl_adapter_init_module( void )
void wl_adapter_cleanup_module( void )
int wl_adapter_insert( struct net_device *dev )
int wl_adapter_open( struct net_device *dev )
int wl_adapter_close( struct net_device *dev )
int wl_adapter_is_open( struct net_device *dev )
int __devinit wl_pci_probe( struct pci_dev *pdev,
const struct pci_device_id *ent )
void __devexit wl_pci_remove(struct pci_dev *pdev)
int wl_pci_setup( struct pci_dev *pdev )
void wl_pci_enable_cardbus_interrupts( struct pci_dev *pdev )
int wl_pci_dma_alloc( struct pci_dev *pdev, struct wl_private *lp )
int wl_pci_dma_free( struct pci_dev *pdev, struct wl_private *lp )
int wl_pci_dma_alloc_tx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_free_tx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_alloc_rx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_free_rx_packet( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_alloc_desc_and_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc, int size )
int wl_pci_dma_free_desc_and_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_alloc_desc( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_free_desc( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT **desc )
int wl_pci_dma_alloc_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT *desc, int size )
int wl_pci_dma_free_buf( struct pci_dev *pdev, struct wl_private *lp,
DESC_STRCT *desc )
void wl_pci_dma_hcf_supply( struct wl_private *lp )
void wl_pci_dma_hcf_reclaim( struct wl_private *lp )
void wl_pci_dma_hcf_reclaim_rx( struct wl_private *lp )
DESC_STRCT * wl_pci_dma_get_tx_packet( struct wl_private *lp )
void wl_pci_dma_put_tx_packet( struct wl_private *lp, DESC_STRCT *desc )
void wl_pci_dma_hcf_reclaim_tx( struct wl_private *lp )
