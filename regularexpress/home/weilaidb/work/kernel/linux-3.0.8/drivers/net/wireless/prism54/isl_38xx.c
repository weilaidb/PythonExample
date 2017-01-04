void
isl38xx_disable_interrupts(void __iomem *device)
void
isl38xx_handle_sleep_request(isl38xx_control_block *control_block,
int *powerstate, void __iomem *device_base)
void
isl38xx_handle_wakeup(isl38xx_control_block *control_block,
int *powerstate, void __iomem *device_base)
void
isl38xx_trigger_device(int asleep, void __iomem *device_base)
void
isl38xx_interface_reset(void __iomem *device_base, dma_addr_t host_address)
void
isl38xx_enable_common_interrupts(void __iomem *device_base)
int
isl38xx_in_queue(isl38xx_control_block *cb, int queue)
