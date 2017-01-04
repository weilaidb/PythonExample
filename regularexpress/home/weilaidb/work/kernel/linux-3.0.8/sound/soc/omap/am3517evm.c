#define CODEC_CLOCK 	12000000
static int am3517evm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops am3517evm_ops = ;
static const struct snd_soc_dapm_widget tlv320aic23_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int am3517evm_aic23_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link am3517evm_dai = ;
static struct snd_soc_card snd_soc_am3517evm = ;
static struct platform_device *am3517evm_snd_device;
static int __init am3517evm_soc_init(void)
static void __exit am3517evm_soc_exit(void)
module_init(am3517evm_soc_init);
module_exit(am3517evm_soc_exit);
MODULE_AUTHOR("Anuj Aggarwal <anuj.aggarwal@ti.com>");
MODULE_DESCRIPTION("ALSA SoC OMAP3517 / AM3517 EVM");
MODULE_LICENSE("GPL v2");
