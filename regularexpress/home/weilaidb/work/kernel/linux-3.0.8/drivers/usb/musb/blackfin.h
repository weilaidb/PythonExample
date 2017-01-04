#define __MUSB_BLACKFIN_H__
#if ANOMALY_05000380 && defined(CONFIG_BF52x) && \
defined(CONFIG_USB_MUSB_HDRC) && !defined(CONFIG_MUSB_PIO_ONLY)
# error "Please use PIO mode in MUSB driver on bf52x chip v0.0 and v0.1"
#undef DUMP_FIFO_DATA
static void dump_fifo_data(u8 *buf, u16 len)
#define dump_fifo_data(buf, len)	do  while (0)
#define USB_DMA_BASE		USB_DMA_INTERRUPT
#define USB_DMAx_CTRL		0x04
#define USB_DMAx_ADDR_LOW	0x08
#define USB_DMAx_ADDR_HIGH	0x0C
#define USB_DMAx_COUNT_LOW	0x10
#define USB_DMAx_COUNT_HIGH	0x14
#define USB_DMA_REG(ep, reg)	(USB_DMA_BASE + 0x20 * ep + reg)
#define TIMER_DELAY	(1 * HZ)
static struct timer_list musb_conn_timer;
