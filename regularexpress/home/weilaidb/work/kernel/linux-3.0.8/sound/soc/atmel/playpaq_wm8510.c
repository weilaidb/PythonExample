#define MCLK_PIN		GPIO_PIN_PA(30)
#define MCLK_PERIPH		GPIO_PERIPH_A
struct ssc_clock_data ;
static struct clk *_gclk0;
static struct clk *_pll0;
#define CODEC_CLK (_gclk0)
#if defined CONFIG_SND_AT32_SOC_PLAYPAQ_SLAVE
static struct ssc_clock_data playpaq_wm8510_calc_ssc_clock(
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int playpaq_wm8510_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops playpaq_wm8510_ops = ;
static const struct snd_soc_dapm_widget playpaq_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int playpaq_wm8510_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link playpaq_wm8510_dai = ;
static struct snd_soc_card snd_soc_playpaq = ;
static struct platform_device *playpaq_snd_device;
static int __init playpaq_asoc_init(void)
static void __exit playpaq_asoc_exit(void)
module_init(playpaq_asoc_init);
module_exit(playpaq_asoc_exit);
MODULE_AUTHOR("Geoffrey Wossum <gwossum@acm.org>");
MODULE_DESCRIPTION("ASoC machine driver for LRS PlayPaq");
MODULE_LICENSE("GPL");
