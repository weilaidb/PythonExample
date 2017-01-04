#define TMIO_MMC_MIN_DMA_LEN 8
static void tmio_mmc_enable_dma(struct tmio_mmc_host *host, bool enable)
static void tmio_mmc_start_dma_rx(struct tmio_mmc_host *host)
static void tmio_mmc_start_dma_tx(struct tmio_mmc_host *host)
void tmio_mmc_start_dma(struct tmio_mmc_host *host,
struct mmc_data *data)
static void tmio_mmc_issue_tasklet_fn(unsigned long priv)
static void tmio_mmc_tasklet_fn(unsigned long arg)
static bool tmio_mmc_filter(struct dma_chan *chan, void *arg)
void tmio_mmc_request_dma(struct tmio_mmc_host *host, struct tmio_mmc_data *pdata)
void tmio_mmc_release_dma(struct tmio_mmc_host *host)
