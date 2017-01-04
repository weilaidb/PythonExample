#define DRIVER_NAME "wbsd"
#define DBG(x...) \
pr_debug(DRIVER_NAME ": " x)
#define DBGF(f, x...) \
pr_debug(DRIVER_NAME " [%s()]: " f, __func__ , ##x)
static const struct pnp_device_id pnp_dev_table[] = ;
MODULE_DEVICE_TABLE(pnp, pnp_dev_table);
static const int config_ports[] = ;
static const int unlock_codes[] = ;
static const int valid_ids[] = ;
static unsigned int param_nopnp = 0;
static const unsigned int param_nopnp = 1;
static unsigned int param_io = 0x248;
static unsigned int param_irq = 6;
static int param_dma = 2;
static inline void wbsd_unlock_config(struct wbsd_host *host)
static inline void wbsd_lock_config(struct wbsd_host *host)
static inline void wbsd_write_config(struct wbsd_host *host, u8 reg, u8 value)
static inline u8 wbsd_read_config(struct wbsd_host *host, u8 reg)
static inline void wbsd_write_index(struct wbsd_host *host, u8 index, u8 value)
static inline u8 wbsd_read_index(struct wbsd_host *host, u8 index)
static void wbsd_init_device(struct wbsd_host *host)
static void wbsd_reset(struct wbsd_host *host)
static void wbsd_request_end(struct wbsd_host *host, struct mmc_request *mrq)
static inline void wbsd_init_sg(struct wbsd_host *host, struct mmc_data *data)
static inline int wbsd_next_sg(struct wbsd_host *host)
static inline char *wbsd_sg_to_buffer(struct wbsd_host *host)
static inline void wbsd_sg_to_dma(struct wbsd_host *host, struct mmc_data *data)
static inline void wbsd_dma_to_sg(struct wbsd_host *host, struct mmc_data *data)
static inline void wbsd_get_short_reply(struct wbsd_host *host,
struct mmc_command *cmd)
static inline void wbsd_get_long_reply(struct wbsd_host *host,
struct mmc_command *cmd)
static void wbsd_send_command(struct wbsd_host *host, struct mmc_command *cmd)
static void wbsd_empty_fifo(struct wbsd_host *host)
static void wbsd_fill_fifo(struct wbsd_host *host)
static void wbsd_prepare_data(struct wbsd_host *host, struct mmc_data *data)
static void wbsd_finish_data(struct wbsd_host *host, struct mmc_data *data)
static void wbsd_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void wbsd_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int wbsd_get_ro(struct mmc_host *mmc)
static const struct mmc_host_ops wbsd_ops = ;
static void wbsd_reset_ignore(unsigned long data)
static inline struct mmc_data *wbsd_get_data(struct wbsd_host *host)
static void wbsd_tasklet_card(unsigned long param)
static void wbsd_tasklet_fifo(unsigned long param)
static void wbsd_tasklet_crc(unsigned long param)
static void wbsd_tasklet_timeout(unsigned long param)
static void wbsd_tasklet_finish(unsigned long param)
static irqreturn_t wbsd_irq(int irq, void *dev_id)
static int __devinit wbsd_alloc_mmc(struct device *dev)
static void wbsd_free_mmc(struct device *dev)
static int __devinit wbsd_scan(struct wbsd_host *host)
static int __devinit wbsd_request_region(struct wbsd_host *host, int base)
static void wbsd_release_regions(struct wbsd_host *host)
static void __devinit wbsd_request_dma(struct wbsd_host *host, int dma)
static void wbsd_release_dma(struct wbsd_host *host)
static int __devinit wbsd_request_irq(struct wbsd_host *host, int irq)
static void  wbsd_release_irq(struct wbsd_host *host)
static int __devinit wbsd_request_resources(struct wbsd_host *host,
int base, int irq, int dma)
static void wbsd_release_resources(struct wbsd_host *host)
static void wbsd_chip_config(struct wbsd_host *host)
static int wbsd_chip_validate(struct wbsd_host *host)
static void wbsd_chip_poweroff(struct wbsd_host *host)
static int __devinit wbsd_init(struct device *dev, int base, int irq, int dma,
int pnp)
static void __devexit wbsd_shutdown(struct device *dev, int pnp)
static int __devinit wbsd_probe(struct platform_device *dev)
static int __devexit wbsd_remove(struct platform_device *dev)
static int __devinit
wbsd_pnp_probe(struct pnp_dev *pnpdev, const struct pnp_device_id *dev_id)
static void __devexit wbsd_pnp_remove(struct pnp_dev *dev)
static int wbsd_suspend(struct wbsd_host *host, pm_message_t state)
static int wbsd_resume(struct wbsd_host *host)
static int wbsd_platform_suspend(struct platform_device *dev,
pm_message_t state)
static int wbsd_platform_resume(struct platform_device *dev)
static int wbsd_pnp_suspend(struct pnp_dev *pnp_dev, pm_message_t state)
static int wbsd_pnp_resume(struct pnp_dev *pnp_dev)
#define wbsd_platform_suspend NULL
#define wbsd_platform_resume NULL
#define wbsd_pnp_suspend NULL
#define wbsd_pnp_resume NULL
static struct platform_device *wbsd_device;
static struct platform_driver wbsd_driver = ;
static struct pnp_driver wbsd_pnp_driver = ;
static int __init wbsd_drv_init(void)
static void __exit wbsd_drv_exit(void)
module_init(wbsd_drv_init);
module_exit(wbsd_drv_exit);
module_param_named(nopnp, param_nopnp, uint, 0444);
module_param_named(io, param_io, uint, 0444);
module_param_named(irq, param_irq, uint, 0444);
module_param_named(dma, param_dma, int, 0444);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pierre Ossman <pierre@ossman.eu>");
MODULE_DESCRIPTION("Winbond W83L51xD SD/MMC card interface driver");
MODULE_PARM_DESC(nopnp, "Scan for device instead of relying on PNP. (default 0)");
MODULE_PARM_DESC(io, "I/O base to allocate. Must be 8 byte aligned. (default 0x248)");
MODULE_PARM_DESC(irq, "IRQ to allocate. (default 6)");
MODULE_PARM_DESC(dma, "DMA channel to allocate. -1 for no DMA. (default 2)");
