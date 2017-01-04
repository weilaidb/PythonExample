static const u16 ad1980_reg[] = ;
static const char *ad1980_rec_sel[] = ;
static const struct soc_enum ad1980_cap_src =
SOC_ENUM_DOUBLE(AC97_REC_SEL, 8, 0, 7, ad1980_rec_sel);
static const struct snd_kcontrol_new ad1980_snd_ac97_controls[] = ;
static unsigned int ac97_read(struct snd_soc_codec *codec,
unsigned int reg)
static int ac97_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static struct snd_soc_dai_driver ad1980_dai = ;
EXPORT_SYMBOL_GPL(ad1980_dai);
static int ad1980_reset(struct snd_soc_codec *codec, int try_warm)
static int ad1980_soc_probe(struct snd_soc_codec *codec)
static int ad1980_soc_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ad1980 = ;
static __devinit int ad1980_probe(struct platform_device *pdev)
static int __devexit ad1980_remove(struct platform_device *pdev)
static struct platform_driver ad1980_codec_driver = ;
static int __init ad1980_init(void)
module_init(ad1980_init);
static void __exit ad1980_exit(void)
module_exit(ad1980_exit);
MODULE_DESCRIPTION("ASoC ad1980 driver (Obsolete)");
MODULE_AUTHOR("Roy Huang, Cliff Cai");
MODULE_LICENSE("GPL");
