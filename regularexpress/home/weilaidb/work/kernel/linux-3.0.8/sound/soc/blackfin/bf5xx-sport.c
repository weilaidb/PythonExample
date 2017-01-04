#define FRAME_DELAY (1<<12)
int sport_set_multichannel(struct sport_device *sport,
int tdm_count, u32 mask, int packed)
EXPORT_SYMBOL(sport_set_multichannel);
int sport_config_rx(struct sport_device *sport, unsigned int rcr1,
unsigned int rcr2, unsigned int clkdiv, unsigned int fsdiv)
EXPORT_SYMBOL(sport_config_rx);
int sport_config_tx(struct sport_device *sport, unsigned int tcr1,
unsigned int tcr2, unsigned int clkdiv, unsigned int fsdiv)
EXPORT_SYMBOL(sport_config_tx);
static void setup_desc(struct dmasg *desc, void *buf, int fragcount,
size_t fragsize, unsigned int cfg,
unsigned int x_count, unsigned int ycount, size_t wdsize)
static int sport_start(struct sport_device *sport)
static int sport_stop(struct sport_device *sport)
static inline int sport_hook_rx_dummy(struct sport_device *sport)
static inline int sport_rx_dma_start(struct sport_device *sport, int dummy)
static inline int sport_tx_dma_start(struct sport_device *sport, int dummy)
int sport_rx_start(struct sport_device *sport)
EXPORT_SYMBOL(sport_rx_start);
int sport_rx_stop(struct sport_device *sport)
EXPORT_SYMBOL(sport_rx_stop);
static inline int sport_hook_tx_dummy(struct sport_device *sport)
int sport_tx_start(struct sport_device *sport)
EXPORT_SYMBOL(sport_tx_start);
int sport_tx_stop(struct sport_device *sport)
EXPORT_SYMBOL(sport_tx_stop);
static inline int compute_wdsize(size_t wdsize)
int sport_config_rx_dma(struct sport_device *sport, void *buf,
int fragcount, size_t fragsize)
EXPORT_SYMBOL(sport_config_rx_dma);
int sport_config_tx_dma(struct sport_device *sport, void *buf, \
int fragcount, size_t fragsize)
EXPORT_SYMBOL(sport_config_tx_dma);
static int sport_config_rx_dummy(struct sport_device *sport)
static int sport_config_tx_dummy(struct sport_device *sport)
unsigned long sport_curr_offset_rx(struct sport_device *sport)
EXPORT_SYMBOL(sport_curr_offset_rx);
unsigned long sport_curr_offset_tx(struct sport_device *sport)
EXPORT_SYMBOL(sport_curr_offset_tx);
void sport_incfrag(struct sport_device *sport, int *frag, int tx)
EXPORT_SYMBOL(sport_incfrag);
void sport_decfrag(struct sport_device *sport, int *frag, int tx)
EXPORT_SYMBOL(sport_decfrag);
static int sport_check_status(struct sport_device *sport,
unsigned int *sport_stat,
unsigned int *rx_stat,
unsigned int *tx_stat)
int  sport_dump_stat(struct sport_device *sport, char *buf, size_t len)
static irqreturn_t rx_handler(int irq, void *dev_id)
static irqreturn_t tx_handler(int irq, void *dev_id)
static irqreturn_t err_handler(int irq, void *dev_id)
int sport_set_rx_callback(struct sport_device *sport,
void (*rx_callback)(void *), void *rx_data)
EXPORT_SYMBOL(sport_set_rx_callback);
int sport_set_tx_callback(struct sport_device *sport,
void (*tx_callback)(void *), void *tx_data)
EXPORT_SYMBOL(sport_set_tx_callback);
int sport_set_err_callback(struct sport_device *sport,
void (*err_callback)(void *), void *err_data)
EXPORT_SYMBOL(sport_set_err_callback);
static int sport_config_pdev(struct platform_device *pdev, struct sport_param *param)
struct sport_device *sport_init(struct platform_device *pdev,
unsigned int wdsize, unsigned int dummy_count, size_t priv_size)
EXPORT_SYMBOL(sport_init);
void sport_done(struct sport_device *sport)
EXPORT_SYMBOL(sport_done);
int sport_send_and_recv(struct sport_device *sport, u8 *out_data, \
u8 *in_data, int len)
EXPORT_SYMBOL(sport_send_and_recv);
MODULE_AUTHOR("Roy Huang");
MODULE_DESCRIPTION("SPORT driver for ADI Blackfin");
MODULE_LICENSE("GPL");
