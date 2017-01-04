#define AC97_DIR	\
(SND_SOC_DAIDIR_PLAYBACK | SND_SOC_DAIDIR_CAPTURE)
#define AC97_RATES	\
SNDRV_PCM_RATE_8000_48000
#define AC97_FMTS	SNDRV_PCM_FMTBIT_S16_BE
#define AC97_FMTS	SNDRV_PCM_FMTBIT_S16_LE
static DECLARE_WAIT_QUEUE_HEAD(ac97_waitq);
static struct txx9aclc_plat_drvdata *txx9aclc_drvdata;
static int txx9aclc_regready(struct txx9aclc_plat_drvdata *drvdata)
static unsigned short txx9aclc_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void txx9aclc_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void txx9aclc_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static irqreturn_t txx9aclc_ac97_irq(int irq, void *dev_id)
static int txx9aclc_ac97_probe(struct snd_soc_dai *dai)
static int txx9aclc_ac97_remove(struct snd_soc_dai *dai)
static struct snd_soc_dai_driver txx9aclc_ac97_dai = ;
static int __devinit txx9aclc_ac97_dev_probe(struct platform_device *pdev)
static int __devexit txx9aclc_ac97_dev_remove(struct platform_device *pdev)
static struct platform_driver txx9aclc_ac97_driver = ;
static int __init txx9aclc_ac97_init(void)
static void __exit txx9aclc_ac97_exit(void)
module_init(txx9aclc_ac97_init);
module_exit(txx9aclc_ac97_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("TXx9 ACLC AC97 driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:txx9aclc-ac97");
