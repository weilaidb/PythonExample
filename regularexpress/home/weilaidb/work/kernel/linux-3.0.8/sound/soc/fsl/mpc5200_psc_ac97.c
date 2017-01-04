#define DRV_NAME "mpc5200-psc-ac97"
static struct psc_dma *psc_dma;
static unsigned short psc_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void psc_ac97_write(struct snd_ac97 *ac97,
unsigned short reg, unsigned short val)
static void psc_ac97_warm_reset(struct snd_ac97 *ac97)
static void psc_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int psc_ac97_hw_analog_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int psc_ac97_hw_digital_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int psc_ac97_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int psc_ac97_probe(struct snd_soc_dai *cpu_dai)
static struct snd_soc_dai_ops psc_ac97_analog_ops = ;
static struct snd_soc_dai_ops psc_ac97_digital_ops = ;
static struct snd_soc_dai_driver psc_ac97_dai[] = ;
static int __devinit psc_ac97_of_probe(struct platform_device *op)
static int __devexit psc_ac97_of_remove(struct platform_device *op)
static struct of_device_id psc_ac97_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, psc_ac97_match);
static struct platform_driver psc_ac97_driver = ;
static int __init psc_ac97_init(void)
module_init(psc_ac97_init);
static void __exit psc_ac97_exit(void)
module_exit(psc_ac97_exit);
MODULE_AUTHOR("Jon Smirl <jonsmirl@gmail.com>");
MODULE_DESCRIPTION("mpc5200 AC97 module");
MODULE_LICENSE("GPL");
