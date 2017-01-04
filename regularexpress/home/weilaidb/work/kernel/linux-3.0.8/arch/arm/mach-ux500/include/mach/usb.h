#define __ASM_ARCH_USB_H
#define UX500_MUSB_DMA_NUM_RX_CHANNELS 8
#define UX500_MUSB_DMA_NUM_TX_CHANNELS 8
struct ux500_musb_board_data ;
void ux500_add_usb(resource_size_t base, int irq, int *dma_rx_cfg,
int *dma_tx_cfg);
