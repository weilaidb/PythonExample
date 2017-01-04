#define AUDIO_FORMAT (SND_SOC_DAIFMT_DSP_B | \
SND_SOC_DAIFMT_CBM_CFM | SND_SOC_DAIFMT_IB_NF)
static int evm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int evm_spdif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops evm_ops = ;
static struct snd_soc_ops evm_spdif_ops = ;
static const struct snd_soc_dapm_widget aic3x_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int evm_aic3x_init(struct snd_soc_pcm_runtime *rtd)
static struct snd_soc_dai_link dm6446_evm_dai = ;
static struct snd_soc_dai_link dm355_evm_dai = ;
static struct snd_soc_dai_link dm365_evm_dai = ;
static struct snd_soc_dai_link dm6467_evm_dai[] = ;
static struct snd_soc_dai_link da830_evm_dai = ;
static struct snd_soc_dai_link da850_evm_dai = ;
static struct snd_soc_card dm6446_snd_soc_card_evm = ;
static struct snd_soc_card dm355_snd_soc_card_evm = ;
static struct snd_soc_card dm365_snd_soc_card_evm = ;
static struct snd_soc_card dm6467_snd_soc_card_evm = ;
static struct snd_soc_card da830_snd_soc_card = ;
static struct snd_soc_card da850_snd_soc_card = ;
static struct platform_device *evm_snd_device;
static int __init evm_init(void)
static void __exit evm_exit(void)
module_init(evm_init);
module_exit(evm_exit);
MODULE_AUTHOR("Vladimir Barinov");
MODULE_DESCRIPTION("TI DAVINCI EVM ASoC driver");
MODULE_LICENSE("GPL");
