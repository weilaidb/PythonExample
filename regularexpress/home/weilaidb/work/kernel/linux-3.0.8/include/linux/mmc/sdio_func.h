#define MMC_SDIO_FUNC_H
struct mmc_card;
struct sdio_func;
typedef void (sdio_irq_handler_t)(struct sdio_func *);
struct sdio_func_tuple ;
struct sdio_func ;
#define sdio_func_present(f)	((f)->state & SDIO_STATE_PRESENT)
#define sdio_func_set_present(f) ((f)->state |= SDIO_STATE_PRESENT)
#define sdio_func_id(f)		(dev_name(&(f)->dev))
#define sdio_get_drvdata(f)	dev_get_drvdata(&(f)->dev)
#define sdio_set_drvdata(f,d)	dev_set_drvdata(&(f)->dev, d)
#define dev_to_sdio_func(d)	container_of(d, struct sdio_func, dev)
struct sdio_driver ;
#define to_sdio_driver(d)	container_of(d, struct sdio_driver, drv)
#define SDIO_DEVICE(vend,dev) \
.class = SDIO_ANY_ID, \
.vendor = (vend), .device = (dev)
#define SDIO_DEVICE_CLASS(dev_class) \
.class = (dev_class), \
.vendor = SDIO_ANY_ID, .device = SDIO_ANY_ID
extern int sdio_register_driver(struct sdio_driver *);
extern void sdio_unregister_driver(struct sdio_driver *);
extern void sdio_claim_host(struct sdio_func *func);
extern void sdio_release_host(struct sdio_func *func);
extern int sdio_enable_func(struct sdio_func *func);
extern int sdio_disable_func(struct sdio_func *func);
extern int sdio_set_block_size(struct sdio_func *func, unsigned blksz);
extern int sdio_claim_irq(struct sdio_func *func, sdio_irq_handler_t *handler);
extern int sdio_release_irq(struct sdio_func *func);
extern unsigned int sdio_align_size(struct sdio_func *func, unsigned int sz);
extern u8 sdio_readb(struct sdio_func *func, unsigned int addr, int *err_ret);
extern u16 sdio_readw(struct sdio_func *func, unsigned int addr, int *err_ret);
extern u32 sdio_readl(struct sdio_func *func, unsigned int addr, int *err_ret);
extern int sdio_memcpy_fromio(struct sdio_func *func, void *dst,
unsigned int addr, int count);
extern int sdio_readsb(struct sdio_func *func, void *dst,
unsigned int addr, int count);
extern void sdio_writeb(struct sdio_func *func, u8 b,
unsigned int addr, int *err_ret);
extern void sdio_writew(struct sdio_func *func, u16 b,
unsigned int addr, int *err_ret);
extern void sdio_writel(struct sdio_func *func, u32 b,
unsigned int addr, int *err_ret);
extern u8 sdio_writeb_readb(struct sdio_func *func, u8 write_byte,
unsigned int addr, int *err_ret);
extern int sdio_memcpy_toio(struct sdio_func *func, unsigned int addr,
void *src, int count);
extern int sdio_writesb(struct sdio_func *func, unsigned int addr,
void *src, int count);
extern unsigned char sdio_f0_readb(struct sdio_func *func,
unsigned int addr, int *err_ret);
extern void sdio_f0_writeb(struct sdio_func *func, unsigned char b,
unsigned int addr, int *err_ret);
extern mmc_pm_flag_t sdio_get_host_pm_caps(struct sdio_func *func);
extern int sdio_set_host_pm_flags(struct sdio_func *func, mmc_pm_flag_t flags);
