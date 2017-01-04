#define TMIO_MMC_H
#define TMIO_SDIO_STAT_IOIRQ	0x0001
#define TMIO_SDIO_STAT_EXPUB52	0x4000
#define TMIO_SDIO_STAT_EXWT	0x8000
#define TMIO_SDIO_MASK_ALL	0xc007
#define TMIO_MASK_ALL           0x837f031d
#define TMIO_MASK_READOP  (TMIO_STAT_RXRDY | TMIO_STAT_DATAEND)
#define TMIO_MASK_WRITEOP (TMIO_STAT_TXRQ | TMIO_STAT_DATAEND)
#define TMIO_MASK_CMD     (TMIO_STAT_CMDRESPEND | TMIO_STAT_CMDTIMEOUT | \
TMIO_STAT_CARD_REMOVE | TMIO_STAT_CARD_INSERT)
#define TMIO_MASK_IRQ     (TMIO_MASK_READOP | TMIO_MASK_WRITEOP | TMIO_MASK_CMD)
struct tmio_mmc_data;
struct tmio_mmc_host ;
int tmio_mmc_host_probe(struct tmio_mmc_host **host,
struct platform_device *pdev,
struct tmio_mmc_data *pdata);
void tmio_mmc_host_remove(struct tmio_mmc_host *host);
void tmio_mmc_do_data_irq(struct tmio_mmc_host *host);
void tmio_mmc_enable_mmc_irqs(struct tmio_mmc_host *host, u32 i);
void tmio_mmc_disable_mmc_irqs(struct tmio_mmc_host *host, u32 i);
irqreturn_t tmio_mmc_irq(int irq, void *devid);
static inline char *tmio_mmc_kmap_atomic(struct scatterlist *sg,
unsigned long *flags)
static inline void tmio_mmc_kunmap_atomic(struct scatterlist *sg,
unsigned long *flags, void *virt)
#if defined(CONFIG_MMC_SDHI) || defined(CONFIG_MMC_SDHI_MODULE)
void tmio_mmc_start_dma(struct tmio_mmc_host *host, struct mmc_data *data);
void tmio_mmc_request_dma(struct tmio_mmc_host *host, struct tmio_mmc_data *pdata);
void tmio_mmc_release_dma(struct tmio_mmc_host *host);
static inline void tmio_mmc_start_dma(struct tmio_mmc_host *host,
struct mmc_data *data)
static inline void tmio_mmc_request_dma(struct tmio_mmc_host *host,
struct tmio_mmc_data *pdata)
static inline void tmio_mmc_release_dma(struct tmio_mmc_host *host)
int tmio_mmc_host_suspend(struct device *dev);
int tmio_mmc_host_resume(struct device *dev);
#define tmio_mmc_host_suspend NULL
#define tmio_mmc_host_resume NULL
int tmio_mmc_host_runtime_suspend(struct device *dev);
int tmio_mmc_host_runtime_resume(struct device *dev);
