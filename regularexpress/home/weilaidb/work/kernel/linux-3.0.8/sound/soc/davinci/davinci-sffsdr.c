#define AUDIO_FORMAT (SND_SOC_DAIFMT_DSP_B |	\
SND_SOC_DAIFMT_CBM_CFS |	\
SND_SOC_DAIFMT_IB_NF)
static int sffsdr_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops sffsdr_ops = ;
static struct snd_soc_dai_link sffsdr_dai = ;
static struct snd_soc_card snd_soc_sffsdr = ;
static struct pcm3008_setup_data sffsdr_pcm3008_setup = ;
struct platform_device pcm3008_codec = ;
static struct resource sffsdr_snd_resources[] = ;
static struct evm_snd_platform_data sffsdr_snd_data = ;
static struct platform_device *sffsdr_snd_device;
static int __init sffsdr_init(void)
static void __exit sffsdr_exit(void)
module_init(sffsdr_init);
module_exit(sffsdr_exit);
MODULE_AUTHOR("Hugo Villeneuve");
MODULE_DESCRIPTION("Lyrtech SFFSDR ASoC driver");
MODULE_LICENSE("GPL");
