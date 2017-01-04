#define CODEC_CLOCK 12000000
static int eukrea_tlv320_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops eukrea_tlv320_snd_ops = ;
static struct snd_soc_dai_link eukrea_tlv320_dai = ;
static struct snd_soc_card eukrea_tlv320 = ;
static struct platform_device *eukrea_tlv320_snd_device;
static int __init eukrea_tlv320_init(void)
static void __exit eukrea_tlv320_exit(void)
module_init(eukrea_tlv320_init);
module_exit(eukrea_tlv320_exit);
MODULE_AUTHOR("Eric Bénard <eric@eukrea.com>");
MODULE_DESCRIPTION("CPUIMX ALSA SoC driver");
MODULE_LICENSE("GPL");
