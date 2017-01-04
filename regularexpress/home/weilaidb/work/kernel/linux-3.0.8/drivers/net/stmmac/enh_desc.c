static int enh_desc_get_tx_status(void *data, struct stmmac_extra_stats *x,
struct dma_desc *p, void __iomem *ioaddr)
static int enh_desc_get_tx_len(struct dma_desc *p)
static int enh_desc_coe_rdes0(int ipc_err, int type, int payload_err)
static int enh_desc_get_rx_status(void *data, struct stmmac_extra_stats *x,
struct dma_desc *p)
static void enh_desc_init_rx_desc(struct dma_desc *p, unsigned int ring_size,
int disable_rx_ic)
static void enh_desc_init_tx_desc(struct dma_desc *p, unsigned int ring_size)
static int enh_desc_get_tx_owner(struct dma_desc *p)
static int enh_desc_get_rx_owner(struct dma_desc *p)
static void enh_desc_set_tx_owner(struct dma_desc *p)
static void enh_desc_set_rx_owner(struct dma_desc *p)
static int enh_desc_get_tx_ls(struct dma_desc *p)
static void enh_desc_release_tx_desc(struct dma_desc *p)
static void enh_desc_prepare_tx_desc(struct dma_desc *p, int is_fs, int len,
int csum_flag)
static void enh_desc_clear_tx_ic(struct dma_desc *p)
static void enh_desc_close_tx_desc(struct dma_desc *p)
static int enh_desc_get_rx_frame_len(struct dma_desc *p)
const struct stmmac_desc_ops enh_desc_ops = ;
