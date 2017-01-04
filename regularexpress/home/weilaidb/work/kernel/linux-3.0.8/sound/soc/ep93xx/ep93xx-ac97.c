#define AC97CH(n)		(((n) - 1) * 0x20)
#define AC97DR(n)		(AC97CH(n) + 0x0000)
#define AC97RXCR(n)		(AC97CH(n) + 0x0004)
#define AC97RXCR_REN		BIT(0)
#define AC97RXCR_RX3		BIT(3)
#define AC97RXCR_RX4		BIT(4)
#define AC97RXCR_CM		BIT(15)
#define AC97TXCR(n)		(AC97CH(n) + 0x0008)
#define AC97TXCR_TEN		BIT(0)
#define AC97TXCR_TX3		BIT(3)
#define AC97TXCR_TX4		BIT(4)
#define AC97TXCR_CM		BIT(15)
#define AC97SR(n)		(AC97CH(n) + 0x000c)
#define AC97SR_TXFE		BIT(1)
#define AC97SR_TXUE		BIT(6)
#define AC97RISR(n)		(AC97CH(n) + 0x0010)
#define AC97ISR(n)		(AC97CH(n) + 0x0014)
#define AC97IE(n)		(AC97CH(n) + 0x0018)
#define AC97S1DATA		0x0080
#define AC97S2DATA		0x0084
#define AC97S12DATA		0x0088
#define AC97RGIS		0x008c
#define AC97GIS			0x0090
#define AC97IM			0x0094
#define AC97_SLOT2RXVALID	BIT(1)
#define AC97_CODECREADY		BIT(5)
#define AC97_SLOT2TXCOMPLETE	BIT(6)
#define AC97EOI			0x0098
#define AC97EOI_WINT		BIT(0)
#define AC97EOI_CODECREADY	BIT(1)
#define AC97GCR			0x009c
#define AC97GCR_AC97IFE		BIT(0)
#define AC97RESET		0x00a0
#define AC97RESET_TIMEDRESET	BIT(0)
#define AC97SYNC		0x00a4
#define AC97SYNC_TIMEDSYNC	BIT(0)
#define AC97_TIMEOUT		msecs_to_jiffies(5)
struct ep93xx_ac97_info ;
static struct ep93xx_ac97_info *ep93xx_ac97_info;
static struct ep93xx_pcm_dma_params ep93xx_ac97_pcm_out = ;
static struct ep93xx_pcm_dma_params ep93xx_ac97_pcm_in = ;
static inline unsigned ep93xx_ac97_read_reg(struct ep93xx_ac97_info *info,
unsigned reg)
static inline void ep93xx_ac97_write_reg(struct ep93xx_ac97_info *info,
unsigned reg, unsigned val)
static unsigned short ep93xx_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void ep93xx_ac97_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static void ep93xx_ac97_warm_reset(struct snd_ac97 *ac97)
static void ep93xx_ac97_cold_reset(struct snd_ac97 *ac97)
static irqreturn_t ep93xx_ac97_interrupt(int irq, void *dev_id)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int ep93xx_ac97_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int ep93xx_ac97_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops ep93xx_ac97_dai_ops = ;
struct snd_soc_dai_driver ep93xx_ac97_dai = ;
static int __devinit ep93xx_ac97_probe(struct platform_device *pdev)
static int __devexit ep93xx_ac97_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_ac97_driver = ;
static int __init ep93xx_ac97_init(void)
module_init(ep93xx_ac97_init);
static void __exit ep93xx_ac97_exit(void)
module_exit(ep93xx_ac97_exit);
MODULE_DESCRIPTION("EP93xx AC97 ASoC Driver");
MODULE_AUTHOR("Mika Westerberg <mika.westerberg@iki.fi>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ep93xx-ac97");
