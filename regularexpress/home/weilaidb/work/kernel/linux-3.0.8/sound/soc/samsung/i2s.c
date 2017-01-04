#define I2SCON		0x0
#define I2SMOD		0x4
#define I2SFIC		0x8
#define I2SPSR		0xc
#define I2STXD		0x10
#define I2SRXD		0x14
#define I2SFICS		0x18
#define I2STXDS		0x1c
#define CON_RSTCLR		(1 << 31)
#define CON_FRXOFSTATUS		(1 << 26)
#define CON_FRXORINTEN		(1 << 25)
#define CON_FTXSURSTAT		(1 << 24)
#define CON_FTXSURINTEN		(1 << 23)
#define CON_TXSDMA_PAUSE	(1 << 20)
#define CON_TXSDMA_ACTIVE	(1 << 18)
#define CON_FTXURSTATUS		(1 << 17)
#define CON_FTXURINTEN		(1 << 16)
#define CON_TXFIFO2_EMPTY	(1 << 15)
#define CON_TXFIFO1_EMPTY	(1 << 14)
#define CON_TXFIFO2_FULL	(1 << 13)
#define CON_TXFIFO1_FULL	(1 << 12)
#define CON_LRINDEX		(1 << 11)
#define CON_TXFIFO_EMPTY	(1 << 10)
#define CON_RXFIFO_EMPTY	(1 << 9)
#define CON_TXFIFO_FULL		(1 << 8)
#define CON_RXFIFO_FULL		(1 << 7)
#define CON_TXDMA_PAUSE		(1 << 6)
#define CON_RXDMA_PAUSE		(1 << 5)
#define CON_TXCH_PAUSE		(1 << 4)
#define CON_RXCH_PAUSE		(1 << 3)
#define CON_TXDMA_ACTIVE	(1 << 2)
#define CON_RXDMA_ACTIVE	(1 << 1)
#define CON_ACTIVE		(1 << 0)
#define MOD_OPCLK_CDCLK_OUT	(0 << 30)
#define MOD_OPCLK_CDCLK_IN	(1 << 30)
#define MOD_OPCLK_BCLK_OUT	(2 << 30)
#define MOD_OPCLK_PCLK		(3 << 30)
#define MOD_OPCLK_MASK		(3 << 30)
#define MOD_TXS_IDMA		(1 << 28)
#define MOD_BLCS_SHIFT	26
#define MOD_BLCS_16BIT	(0 << MOD_BLCS_SHIFT)
#define MOD_BLCS_8BIT	(1 << MOD_BLCS_SHIFT)
#define MOD_BLCS_24BIT	(2 << MOD_BLCS_SHIFT)
#define MOD_BLCS_MASK	(3 << MOD_BLCS_SHIFT)
#define MOD_BLCP_SHIFT	24
#define MOD_BLCP_16BIT	(0 << MOD_BLCP_SHIFT)
#define MOD_BLCP_8BIT	(1 << MOD_BLCP_SHIFT)
#define MOD_BLCP_24BIT	(2 << MOD_BLCP_SHIFT)
#define MOD_BLCP_MASK	(3 << MOD_BLCP_SHIFT)
#define MOD_C2DD_HHALF		(1 << 21)
#define MOD_C2DD_LHALF		(1 << 20)
#define MOD_C1DD_HHALF		(1 << 19)
#define MOD_C1DD_LHALF		(1 << 18)
#define MOD_DC2_EN		(1 << 17)
#define MOD_DC1_EN		(1 << 16)
#define MOD_BLC_16BIT		(0 << 13)
#define MOD_BLC_8BIT		(1 << 13)
#define MOD_BLC_24BIT		(2 << 13)
#define MOD_BLC_MASK		(3 << 13)
#define MOD_IMS_SYSMUX		(1 << 10)
#define MOD_SLAVE		(1 << 11)
#define MOD_TXONLY		(0 << 8)
#define MOD_RXONLY		(1 << 8)
#define MOD_TXRX		(2 << 8)
#define MOD_MASK		(3 << 8)
#define MOD_LR_LLOW		(0 << 7)
#define MOD_LR_RLOW		(1 << 7)
#define MOD_SDF_IIS		(0 << 5)
#define MOD_SDF_MSB		(1 << 5)
#define MOD_SDF_LSB		(2 << 5)
#define MOD_SDF_MASK		(3 << 5)
#define MOD_RCLK_256FS		(0 << 3)
#define MOD_RCLK_512FS		(1 << 3)
#define MOD_RCLK_384FS		(2 << 3)
#define MOD_RCLK_768FS		(3 << 3)
#define MOD_RCLK_MASK		(3 << 3)
#define MOD_BCLK_32FS		(0 << 1)
#define MOD_BCLK_48FS		(1 << 1)
#define MOD_BCLK_16FS		(2 << 1)
#define MOD_BCLK_24FS		(3 << 1)
#define MOD_BCLK_MASK		(3 << 1)
#define MOD_8BIT		(1 << 0)
#define MOD_CDCLKCON		(1 << 12)
#define PSR_PSREN		(1 << 15)
#define FIC_TX2COUNT(x)		(((x) >>  24) & 0xf)
#define FIC_TX1COUNT(x)		(((x) >>  16) & 0xf)
#define FIC_TXFLUSH		(1 << 15)
#define FIC_RXFLUSH		(1 << 7)
#define FIC_TXCOUNT(x)		(((x) >>  8) & 0xf)
#define FIC_RXCOUNT(x)		(((x) >>  0) & 0xf)
#define FICS_TXCOUNT(x)		(((x) >>  8) & 0x7f)
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
struct i2s_dai ;
static DEFINE_SPINLOCK(lock);
static inline bool is_secondary(struct i2s_dai *i2s)
static inline bool is_slave(struct i2s_dai *i2s)
static inline bool tx_active(struct i2s_dai *i2s)
static inline bool other_tx_active(struct i2s_dai *i2s)
static inline bool any_tx_active(struct i2s_dai *i2s)
static inline bool rx_active(struct i2s_dai *i2s)
static inline bool other_rx_active(struct i2s_dai *i2s)
static inline bool any_rx_active(struct i2s_dai *i2s)
static inline bool other_active(struct i2s_dai *i2s)
static inline bool this_active(struct i2s_dai *i2s)
static inline bool any_active(struct i2s_dai *i2s)
static inline struct i2s_dai *to_info(struct snd_soc_dai *dai)
static inline bool is_opened(struct i2s_dai *i2s)
static inline bool is_manager(struct i2s_dai *i2s)
static inline unsigned get_rfs(struct i2s_dai *i2s)
static inline void set_rfs(struct i2s_dai *i2s, unsigned rfs)
static inline unsigned get_bfs(struct i2s_dai *i2s)
static inline void set_bfs(struct i2s_dai *i2s, unsigned bfs)
static inline int get_blc(struct i2s_dai *i2s)
static void i2s_txctrl(struct i2s_dai *i2s, int on)
static void i2s_rxctrl(struct i2s_dai *i2s, int on)
static inline void i2s_fifo(struct i2s_dai *i2s, u32 flush)
static int i2s_set_sysclk(struct snd_soc_dai *dai,
int clk_id, unsigned int rfs, int dir)
static int i2s_set_fmt(struct snd_soc_dai *dai,
unsigned int fmt)
static int i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static int i2s_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void i2s_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int config_setup(struct i2s_dai *i2s)
static int i2s_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int i2s_set_clkdiv(struct snd_soc_dai *dai,
int div_id, int div)
static snd_pcm_sframes_t
i2s_delay(struct snd_pcm_substream *substream, struct snd_soc_dai *dai)
static int i2s_suspend(struct snd_soc_dai *dai)
static int i2s_resume(struct snd_soc_dai *dai)
#define i2s_suspend NULL
#define i2s_resume  NULL
static int samsung_i2s_dai_probe(struct snd_soc_dai *dai)
static int samsung_i2s_dai_remove(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops samsung_i2s_dai_ops = ;
#define SAMSUNG_I2S_RATES	SNDRV_PCM_RATE_8000_96000
#define SAMSUNG_I2S_FMTS	(SNDRV_PCM_FMTBIT_S8 | \
SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S24_LE)
static __devinit
struct i2s_dai *i2s_alloc_dai(struct platform_device *pdev, bool sec)
static __devinit int samsung_i2s_probe(struct platform_device *pdev)
static __devexit int samsung_i2s_remove(struct platform_device *pdev)
static struct platform_driver samsung_i2s_driver = ;
static int __init samsung_i2s_init(void)
module_init(samsung_i2s_init);
static void __exit samsung_i2s_exit(void)
module_exit(samsung_i2s_exit);
MODULE_AUTHOR("Jaswinder Singh, <jassi.brar@samsung.com>");
MODULE_DESCRIPTION("Samsung I2S Interface");
MODULE_ALIAS("platform:samsung-i2s");
MODULE_LICENSE("GPL");
