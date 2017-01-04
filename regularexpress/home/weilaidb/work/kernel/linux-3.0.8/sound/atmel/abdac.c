#define DAC_DATA                                0x0000
#define DAC_CTRL                                0x0008
#define DAC_INT_MASK                            0x000c
#define DAC_INT_EN                              0x0010
#define DAC_INT_DIS                             0x0014
#define DAC_INT_CLR                             0x0018
#define DAC_INT_STATUS                          0x001c
#define DAC_SWAP_OFFSET                         30
#define DAC_SWAP_SIZE                           1
#define DAC_EN_OFFSET                           31
#define DAC_EN_SIZE                             1
#define DAC_UNDERRUN_OFFSET                     28
#define DAC_UNDERRUN_SIZE                       1
#define DAC_TX_READY_OFFSET                     29
#define DAC_TX_READY_SIZE                       1
#define DAC_BIT(name)					\
(1 << DAC_##name##_OFFSET)
#define DAC_BF(name, value)				\
(((value) & ((1 << DAC_##name##_SIZE) - 1))	\
<< DAC_##name##_OFFSET)
#define DAC_BFEXT(name, value)				\
(((value) >> DAC_##name##_OFFSET)		\
& ((1 << DAC_##name##_SIZE) - 1))
#define DAC_BFINS(name, value, old)			\
(((old) & ~(((1 << DAC_##name##_SIZE) - 1)	\
<< DAC_##name##_OFFSET))		\
| DAC_BF(name, value))
#define dac_readl(port, reg)				\
__raw_readl((port)->regs + DAC_##reg)
#define dac_writel(port, reg, value)			\
__raw_writel((value), (port)->regs + DAC_##reg)
#define MAX_NUM_RATES	6
#define RATE_MAX	192000
#define RATE_MIN	5112
enum ;
struct atmel_abdac_dma ;
struct atmel_abdac ;
#define get_dac(card) ((struct atmel_abdac *)(card)->private_data)
static void atmel_abdac_dma_period_done(void *arg)
static int atmel_abdac_prepare_dma(struct atmel_abdac *dac,
struct snd_pcm_substream *substream,
enum dma_data_direction direction)
static struct snd_pcm_hardware atmel_abdac_hw = ;
static int atmel_abdac_open(struct snd_pcm_substream *substream)
static int atmel_abdac_close(struct snd_pcm_substream *substream)
static int atmel_abdac_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int atmel_abdac_hw_free(struct snd_pcm_substream *substream)
static int atmel_abdac_prepare(struct snd_pcm_substream *substream)
static int atmel_abdac_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
atmel_abdac_pointer(struct snd_pcm_substream *substream)
static irqreturn_t abdac_interrupt(int irq, void *dev_id)
static struct snd_pcm_ops atmel_abdac_ops = ;
static int __devinit atmel_abdac_pcm_new(struct atmel_abdac *dac)
static bool filter(struct dma_chan *chan, void *slave)
static int set_sample_rates(struct atmel_abdac *dac)
static int __devinit atmel_abdac_probe(struct platform_device *pdev)
static int atmel_abdac_suspend(struct platform_device *pdev, pm_message_t msg)
static int atmel_abdac_resume(struct platform_device *pdev)
#define atmel_abdac_suspend NULL
#define atmel_abdac_resume NULL
static int __devexit atmel_abdac_remove(struct platform_device *pdev)
static struct platform_driver atmel_abdac_driver = ;
static int __init atmel_abdac_init(void)
module_init(atmel_abdac_init);
static void __exit atmel_abdac_exit(void)
module_exit(atmel_abdac_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Driver for Atmel Audio Bitstream DAC (ABDAC)");
MODULE_AUTHOR("Hans-Christian Egtvedt <egtvedt@samfundet.no>");
