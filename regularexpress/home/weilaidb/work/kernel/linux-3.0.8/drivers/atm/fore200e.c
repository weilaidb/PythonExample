#if defined(CONFIG_ATM_FORE200E_USE_TASKLET)
#define FORE200E_USE_TASKLET
#if 1
#define FORE200E_52BYTE_AAL0_SDU
#define FORE200E_VERSION "0.3e"
#define FORE200E         "fore200e: "
#if defined(CONFIG_ATM_FORE200E_DEBUG) && (CONFIG_ATM_FORE200E_DEBUG > 0)
#define DPRINTK(level, format, args...)  do  while (0)
#define DPRINTK(level, format, args...)  do  while (0)
#define FORE200E_ALIGN(addr, alignment) \
((((unsigned long)(addr) + (alignment - 1)) & ~(alignment - 1)) - (unsigned long)(addr))
#define FORE200E_DMA_INDEX(dma_addr, type, index)  ((dma_addr) + (index) * sizeof(type))
#define FORE200E_INDEX(virt_addr, type, index)     (&((type *)(virt_addr))[ index ])
#define FORE200E_NEXT_ENTRY(index, modulo)         (index = ((index) + 1) % (modulo))
#if 1
#define ASSERT(expr)     if (!(expr))
#define ASSERT(expr)     do  while (0)
static const struct atmdev_ops   fore200e_ops;
static const struct fore200e_bus fore200e_bus[];
static LIST_HEAD(fore200e_boards);
MODULE_AUTHOR("Christophe Lizzi - credits to Uwe Dannowski and Heikki Vatiainen");
MODULE_DESCRIPTION("FORE Systems 200E-series ATM driver - version " FORE200E_VERSION);
MODULE_SUPPORTED_DEVICE("PCA-200E, SBA-200E");
static const int fore200e_rx_buf_nbr[ BUFFER_SCHEME_NBR ][ BUFFER_MAGN_NBR ] = ;
static const int fore200e_rx_buf_size[ BUFFER_SCHEME_NBR ][ BUFFER_MAGN_NBR ] = ;
#if defined(CONFIG_ATM_FORE200E_DEBUG) && (CONFIG_ATM_FORE200E_DEBUG > 0)
static const char* fore200e_traffic_class[] = ;
static enum fore200e_aal
fore200e_atm2fore_aal(int aal)
static char*
fore200e_irq_itoa(int irq)
static int
fore200e_chunk_alloc(struct fore200e* fore200e, struct chunk* chunk, int size, int alignment, int direction)
static void
fore200e_chunk_free(struct fore200e* fore200e, struct chunk* chunk)
static void
fore200e_spin(int msecs)
static int
fore200e_poll(struct fore200e* fore200e, volatile u32* addr, u32 val, int msecs)
static int
fore200e_io_poll(struct fore200e* fore200e, volatile u32 __iomem *addr, u32 val, int msecs)
static void
fore200e_free_rx_buf(struct fore200e* fore200e)
static void
fore200e_uninit_bs_queue(struct fore200e* fore200e)
static int
fore200e_reset(struct fore200e* fore200e, int diag)
static void
fore200e_shutdown(struct fore200e* fore200e)
static u32 fore200e_pca_read(volatile u32 __iomem *addr)
static void fore200e_pca_write(u32 val, volatile u32 __iomem *addr)
static u32
fore200e_pca_dma_map(struct fore200e* fore200e, void* virt_addr, int size, int direction)
static void
fore200e_pca_dma_unmap(struct fore200e* fore200e, u32 dma_addr, int size, int direction)
static void
fore200e_pca_dma_sync_for_cpu(struct fore200e* fore200e, u32 dma_addr, int size, int direction)
static void
fore200e_pca_dma_sync_for_device(struct fore200e* fore200e, u32 dma_addr, int size, int direction)
static int
fore200e_pca_dma_chunk_alloc(struct fore200e* fore200e, struct chunk* chunk,
int size, int nbr, int alignment)
static void
fore200e_pca_dma_chunk_free(struct fore200e* fore200e, struct chunk* chunk)
static int
fore200e_pca_irq_check(struct fore200e* fore200e)
static void
fore200e_pca_irq_ack(struct fore200e* fore200e)
static void
fore200e_pca_reset(struct fore200e* fore200e)
static int __devinit
fore200e_pca_map(struct fore200e* fore200e)
static void
fore200e_pca_unmap(struct fore200e* fore200e)
static int __devinit
fore200e_pca_configure(struct fore200e* fore200e)
static int __init
fore200e_pca_prom_read(struct fore200e* fore200e, struct prom_data* prom)
static int
fore200e_pca_proc_read(struct fore200e* fore200e, char *page)
static u32 fore200e_sba_read(volatile u32 __iomem *addr)
static void fore200e_sba_write(u32 val, volatile u32 __iomem *addr)
static u32 fore200e_sba_dma_map(struct fore200e *fore200e, void* virt_addr, int size, int direction)
static void fore200e_sba_dma_unmap(struct fore200e *fore200e, u32 dma_addr, int size, int direction)
static void fore200e_sba_dma_sync_for_cpu(struct fore200e *fore200e, u32 dma_addr, int size, int direction)
static void fore200e_sba_dma_sync_for_device(struct fore200e *fore200e, u32 dma_addr, int size, int direction)
static int fore200e_sba_dma_chunk_alloc(struct fore200e *fore200e, struct chunk *chunk,
int size, int nbr, int alignment)
static void fore200e_sba_dma_chunk_free(struct fore200e *fore200e, struct chunk *chunk)
static void fore200e_sba_irq_enable(struct fore200e *fore200e)
static int fore200e_sba_irq_check(struct fore200e *fore200e)
static void fore200e_sba_irq_ack(struct fore200e *fore200e)
static void fore200e_sba_reset(struct fore200e *fore200e)
static int __init fore200e_sba_map(struct fore200e *fore200e)
static void fore200e_sba_unmap(struct fore200e *fore200e)
static int __init fore200e_sba_configure(struct fore200e *fore200e)
static int __init fore200e_sba_prom_read(struct fore200e *fore200e, struct prom_data *prom)
static int fore200e_sba_proc_read(struct fore200e *fore200e, char *page)
static void
fore200e_tx_irq(struct fore200e* fore200e)
int bsq_audit(int where, struct host_bsq* bsq, int scheme, int magn)
static void
fore200e_supply(struct fore200e* fore200e)
static int
fore200e_push_rpd(struct fore200e* fore200e, struct atm_vcc* vcc, struct rpd* rpd)
static void
fore200e_collect_rpd(struct fore200e* fore200e, struct rpd* rpd)
static void
fore200e_rx_irq(struct fore200e* fore200e)
static void
fore200e_irq(struct fore200e* fore200e)
static irqreturn_t
fore200e_interrupt(int irq, void* dev)
static void
fore200e_tx_tasklet(unsigned long data)
static void
fore200e_rx_tasklet(unsigned long data)
static int
fore200e_select_scheme(struct atm_vcc* vcc)
static int
fore200e_activate_vcin(struct fore200e* fore200e, int activate, struct atm_vcc* vcc, int mtu)
#define FORE200E_MAX_BACK2BACK_CELLS 255
static void
fore200e_rate_ctrl(struct atm_qos* qos, struct tpd_rate* rate)
static int
fore200e_open(struct atm_vcc *vcc)
static void
fore200e_close(struct atm_vcc* vcc)
static int
fore200e_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int
fore200e_getstats(struct fore200e* fore200e)
static int
fore200e_getsockopt(struct atm_vcc* vcc, int level, int optname, void __user *optval, int optlen)
static int
fore200e_setsockopt(struct atm_vcc* vcc, int level, int optname, void __user *optval, unsigned int optlen)
static int
fore200e_set_oc3(struct fore200e* fore200e, u32 reg, u32 value, u32 mask)
static int
fore200e_setloop(struct fore200e* fore200e, int loop_mode)
static int
fore200e_fetch_stats(struct fore200e* fore200e, struct sonet_stats __user *arg)
static int
fore200e_ioctl(struct atm_dev* dev, unsigned int cmd, void __user * arg)
static int
fore200e_change_qos(struct atm_vcc* vcc,struct atm_qos* qos, int flags)
static int __devinit
fore200e_irq_request(struct fore200e* fore200e)
static int __devinit
fore200e_get_esi(struct fore200e* fore200e)
static int __devinit
fore200e_alloc_rx_buf(struct fore200e* fore200e)
static int __devinit
fore200e_init_bs_queue(struct fore200e* fore200e)
static int __devinit
fore200e_init_rx_queue(struct fore200e* fore200e)
static int __devinit
fore200e_init_tx_queue(struct fore200e* fore200e)
static int __devinit
fore200e_init_cmd_queue(struct fore200e* fore200e)
static void __devinit
fore200e_param_bs_queue(struct fore200e* fore200e,
enum buffer_scheme scheme, enum buffer_magn magn,
int queue_length, int pool_size, int supply_blksize)
static int __devinit
fore200e_initialize(struct fore200e* fore200e)
static void __devinit
fore200e_monitor_putc(struct fore200e* fore200e, char c)
static int __devinit
fore200e_monitor_getc(struct fore200e* fore200e)
static void __devinit
fore200e_monitor_puts(struct fore200e* fore200e, char* str)
#define FW_EXT ".bin"
#define FW_EXT "_ecd.bin2"
static int __devinit
fore200e_load_and_start_fw(struct fore200e* fore200e)
static int __devinit
fore200e_register(struct fore200e* fore200e, struct device *parent)
static int __devinit
fore200e_init(struct fore200e* fore200e, struct device *parent)
static const struct of_device_id fore200e_sba_match[];
static int __devinit fore200e_sba_probe(struct platform_device *op)
static int __devexit fore200e_sba_remove(struct platform_device *op)
static const struct of_device_id fore200e_sba_match[] = ;
MODULE_DEVICE_TABLE(of, fore200e_sba_match);
static struct platform_driver fore200e_sba_driver = ;
static int __devinit
fore200e_pca_detect(struct pci_dev *pci_dev, const struct pci_device_id *pci_ent)
static void __devexit fore200e_pca_remove_one(struct pci_dev *pci_dev)
static struct pci_device_id fore200e_pca_tbl[] = ;
MODULE_DEVICE_TABLE(pci, fore200e_pca_tbl);
static struct pci_driver fore200e_pca_driver = ;
static int __init fore200e_module_init(void)
static void __exit fore200e_module_cleanup(void)
static int
fore200e_proc_read(struct atm_dev *dev, loff_t* pos, char* page)
module_init(fore200e_module_init);
module_exit(fore200e_module_cleanup);
static const struct atmdev_ops fore200e_ops =
;
static const struct fore200e_bus fore200e_bus[] = ;
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("pca200e.bin");
MODULE_FIRMWARE("pca200e_ecd.bin2");
MODULE_FIRMWARE("sba200e_ecd.bin2");
