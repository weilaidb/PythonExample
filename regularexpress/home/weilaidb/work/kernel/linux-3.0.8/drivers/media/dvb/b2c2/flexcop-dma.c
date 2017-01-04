int flexcop_dma_allocate(struct pci_dev *pdev,
struct flexcop_dma *dma, u32 size)
EXPORT_SYMBOL(flexcop_dma_allocate);
void flexcop_dma_free(struct flexcop_dma *dma)
EXPORT_SYMBOL(flexcop_dma_free);
int flexcop_dma_config(struct flexcop_device *fc,
struct flexcop_dma *dma,
flexcop_dma_index_t dma_idx)
EXPORT_SYMBOL(flexcop_dma_config);
int flexcop_dma_xfer_control(struct flexcop_device *fc,
flexcop_dma_index_t dma_idx,
flexcop_dma_addr_index_t index,
int onoff)
EXPORT_SYMBOL(flexcop_dma_xfer_control);
static int flexcop_dma_remap(struct flexcop_device *fc,
flexcop_dma_index_t dma_idx,
int onoff)
int flexcop_dma_control_size_irq(struct flexcop_device *fc,
flexcop_dma_index_t no,
int onoff)
EXPORT_SYMBOL(flexcop_dma_control_size_irq);
int flexcop_dma_control_timer_irq(struct flexcop_device *fc,
flexcop_dma_index_t no,
int onoff)
EXPORT_SYMBOL(flexcop_dma_control_timer_irq);
int flexcop_dma_config_timer(struct flexcop_device *fc,
flexcop_dma_index_t dma_idx, u8 cycles)
EXPORT_SYMBOL(flexcop_dma_config_timer);
