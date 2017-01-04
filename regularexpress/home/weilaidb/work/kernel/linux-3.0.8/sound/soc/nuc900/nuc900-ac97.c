static DEFINE_MUTEX(ac97_mutex);
struct nuc900_audio *nuc900_ac97_data;
static int nuc900_checkready(void)
static unsigned short nuc900_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void nuc900_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void nuc900_ac97_warm_reset(struct snd_ac97 *ac97)
static void nuc900_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops =
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int nuc900_ac97_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int nuc900_ac97_probe(struct snd_soc_dai *dai)
static int nuc900_ac97_remove(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops nuc900_ac97_dai_ops = ;
static struct snd_soc_dai_driver nuc900_ac97_dai = ;
static int __devinit nuc900_ac97_drvprobe(struct platform_device *pdev)
static int __devexit nuc900_ac97_drvremove(struct platform_device *pdev)
static struct platform_driver nuc900_ac97_driver = ;
static int __init nuc900_ac97_init(void)
static void __exit nuc900_ac97_exit(void)
module_init(nuc900_ac97_init);
module_exit(nuc900_ac97_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("NUC900 AC97 SoC driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-ac97");
