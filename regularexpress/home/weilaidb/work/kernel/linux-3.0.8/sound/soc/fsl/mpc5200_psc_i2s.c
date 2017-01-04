#define PSC_I2S_RATES (SNDRV_PCM_RATE_5512 | SNDRV_PCM_RATE_8000_192000 | \
SNDRV_PCM_RATE_CONTINUOUS)
#define PSC_I2S_FORMATS (SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_S16_BE | \
SNDRV_PCM_FMTBIT_S24_BE | SNDRV_PCM_FMTBIT_S32_BE)
static int psc_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int psc_i2s_set_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int psc_i2s_set_fmt(struct snd_soc_dai *cpu_dai, unsigned int format)
static struct snd_soc_dai_ops psc_i2s_dai_ops = ;
static struct snd_soc_dai_driver psc_i2s_dai[] = ;
static int __devinit psc_i2s_of_probe(struct platform_device *op)
static int __devexit psc_i2s_of_remove(struct platform_device *op)
static struct of_device_id psc_i2s_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, psc_i2s_match);
static struct platform_driver psc_i2s_driver = ;
static int __init psc_i2s_init(void)
module_init(psc_i2s_init);
static void __exit psc_i2s_exit(void)
module_exit(psc_i2s_exit);
MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("Freescale MPC5200 PSC in I2S mode ASoC Driver");
MODULE_LICENSE("GPL");
