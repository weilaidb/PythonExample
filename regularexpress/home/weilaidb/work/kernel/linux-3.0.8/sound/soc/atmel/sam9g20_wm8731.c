#define MCLK_RATE 12000000
#undef ENABLE_MIC_INPUT
static struct clk *mclk;
static int at91sam9g20ek_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops at91sam9g20ek_ops = ;
static int at91sam9g20ek_set_bias_level(struct snd_soc_card *card,
enum snd_soc_bias_level level)
static const struct snd_soc_dapm_widget at91sam9g20ek_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int at91sam9g20ek_wm8731_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link at91sam9g20ek_dai = ;
static struct snd_soc_card snd_soc_at91sam9g20ek = ;
static struct platform_device *at91sam9g20ek_snd_device;
static int __init at91sam9g20ek_init(void)
static void __exit at91sam9g20ek_exit(void)
module_init(at91sam9g20ek_init);
module_exit(at91sam9g20ek_exit);
MODULE_AUTHOR("Sedji Gaouaou <sedji.gaouaou@atmel.com>");
MODULE_DESCRIPTION("ALSA SoC AT91SAM9G20EK_WM8731");
MODULE_LICENSE("GPL");
