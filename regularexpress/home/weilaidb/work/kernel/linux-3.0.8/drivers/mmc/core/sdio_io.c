void sdio_claim_host(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_claim_host);
void sdio_release_host(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_release_host);
int sdio_enable_func(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_enable_func);
int sdio_disable_func(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_disable_func);
int sdio_set_block_size(struct sdio_func *func, unsigned blksz)
EXPORT_SYMBOL_GPL(sdio_set_block_size);
static inline unsigned int sdio_max_byte_size(struct sdio_func *func)
unsigned int sdio_align_size(struct sdio_func *func, unsigned int sz)
EXPORT_SYMBOL_GPL(sdio_align_size);
static int sdio_io_rw_ext_helper(struct sdio_func *func, int write,
unsigned addr, int incr_addr, u8 *buf, unsigned size)
u8 sdio_readb(struct sdio_func *func, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_readb);
void sdio_writeb(struct sdio_func *func, u8 b, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_writeb);
u8 sdio_writeb_readb(struct sdio_func *func, u8 write_byte,
unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_writeb_readb);
int sdio_memcpy_fromio(struct sdio_func *func, void *dst,
unsigned int addr, int count)
EXPORT_SYMBOL_GPL(sdio_memcpy_fromio);
int sdio_memcpy_toio(struct sdio_func *func, unsigned int addr,
void *src, int count)
EXPORT_SYMBOL_GPL(sdio_memcpy_toio);
int sdio_readsb(struct sdio_func *func, void *dst, unsigned int addr,
int count)
EXPORT_SYMBOL_GPL(sdio_readsb);
int sdio_writesb(struct sdio_func *func, unsigned int addr, void *src,
int count)
EXPORT_SYMBOL_GPL(sdio_writesb);
u16 sdio_readw(struct sdio_func *func, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_readw);
void sdio_writew(struct sdio_func *func, u16 b, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_writew);
u32 sdio_readl(struct sdio_func *func, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_readl);
void sdio_writel(struct sdio_func *func, u32 b, unsigned int addr, int *err_ret)
EXPORT_SYMBOL_GPL(sdio_writel);
unsigned char sdio_f0_readb(struct sdio_func *func, unsigned int addr,
int *err_ret)
EXPORT_SYMBOL_GPL(sdio_f0_readb);
void sdio_f0_writeb(struct sdio_func *func, unsigned char b, unsigned int addr,
int *err_ret)
EXPORT_SYMBOL_GPL(sdio_f0_writeb);
mmc_pm_flag_t sdio_get_host_pm_caps(struct sdio_func *func)
EXPORT_SYMBOL_GPL(sdio_get_host_pm_caps);
int sdio_set_host_pm_flags(struct sdio_func *func, mmc_pm_flag_t flags)
EXPORT_SYMBOL_GPL(sdio_set_host_pm_flags);
