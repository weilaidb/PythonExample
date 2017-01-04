enum ;
static DEFINE_MUTEX(opened_mutex);
struct atmel_ac97c_dma ;
struct atmel_ac97c ;
#define get_chip(card) ((struct atmel_ac97c *)(card)->private_data)
#define ac97c_writel(chip, reg, val)			\
__raw_writel((val), (chip)->regs + AC97C_##reg)
#define ac97c_readl(chip, reg)				\
__raw_readl((chip)->regs + AC97C_##reg)
static void atmel_ac97c_dma_playback_period_done(void *arg)
static void atmel_ac97c_dma_capture_period_done(void *arg)
static int atmel_ac97c_prepare_dma(struct atmel_ac97c *chip,
struct snd_pcm_substream *substream,
enum dma_data_direction direction)
static struct snd_pcm_hardware atmel_ac97c_hw = ;
static int atmel_ac97c_playback_open(struct snd_pcm_substream *substream)
static int atmel_ac97c_capture_open(struct snd_pcm_substream *substream)
static int atmel_ac97c_playback_close(struct snd_pcm_substream *substream)
static int atmel_ac97c_capture_close(struct snd_pcm_substream *substream)
static int atmel_ac97c_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int atmel_ac97c_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int atmel_ac97c_playback_hw_free(struct snd_pcm_substream *substream)
static int atmel_ac97c_capture_hw_free(struct snd_pcm_substream *substream)
static int atmel_ac97c_playback_prepare(struct snd_pcm_substream *substream)
static int atmel_ac97c_capture_prepare(struct snd_pcm_substream *substream)
static int
atmel_ac97c_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static int
atmel_ac97c_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
atmel_ac97c_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t
atmel_ac97c_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops atmel_ac97_playback_ops = ;
static struct snd_pcm_ops atmel_ac97_capture_ops = ;
static irqreturn_t atmel_ac97c_interrupt(int irq, void *dev)
static struct ac97_pcm at91_ac97_pcm_defs[] __devinitdata = ;
static int __devinit atmel_ac97c_pcm_new(struct atmel_ac97c *chip)
static int atmel_ac97c_mixer_new(struct atmel_ac97c *chip)
static void atmel_ac97c_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short atmel_ac97c_read(struct snd_ac97 *ac97,
unsigned short reg)
static bool filter(struct dma_chan *chan, void *slave)
static void atmel_ac97c_reset(struct atmel_ac97c *chip)
static int __devinit atmel_ac97c_probe(struct platform_device *pdev)
static int atmel_ac97c_suspend(struct platform_device *pdev, pm_message_t msg)
static int atmel_ac97c_resume(struct platform_device *pdev)
#define atmel_ac97c_suspend NULL
#define atmel_ac97c_resume NULL
static int __devexit atmel_ac97c_remove(struct platform_device *pdev)
static struct platform_driver atmel_ac97c_driver = ;
static int __init atmel_ac97c_init(void)
module_init(atmel_ac97c_init);
static void __exit atmel_ac97c_exit(void)
module_exit(atmel_ac97c_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Driver for Atmel AC97 controller");
MODULE_AUTHOR("Hans-Christian Egtvedt <egtvedt@samfundet.no>");
