static struct sport_device *ac97_sport_handle;
void bf5xx_pcm_to_ac97(struct ac97_frame *dst, const __u16 *src,
size_t count, unsigned int chan_mask)
EXPORT_SYMBOL(bf5xx_pcm_to_ac97);
void bf5xx_ac97_to_pcm(const struct ac97_frame *src, __u16 *dst,
size_t count)
EXPORT_SYMBOL(bf5xx_ac97_to_pcm);
static unsigned int sport_tx_curr_frag(struct sport_device *sport)
static void enqueue_cmd(struct snd_ac97 *ac97, __u16 addr, __u16 data)
static unsigned short bf5xx_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
void bf5xx_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void bf5xx_ac97_warm_reset(struct snd_ac97 *ac97)
static void bf5xx_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int bf5xx_ac97_suspend(struct snd_soc_dai *dai)
static int bf5xx_ac97_resume(struct snd_soc_dai *dai)
#define bf5xx_ac97_suspend	NULL
#define bf5xx_ac97_resume	NULL
static struct snd_soc_dai_driver bfin_ac97_dai = ;
static int __devinit asoc_bfin_ac97_probe(struct platform_device *pdev)
static int __devexit asoc_bfin_ac97_remove(struct platform_device *pdev)
static struct platform_driver asoc_bfin_ac97_driver = ;
static int __init bfin_ac97_init(void)
module_init(bfin_ac97_init);
static void __exit bfin_ac97_exit(void)
module_exit(bfin_ac97_exit);
MODULE_AUTHOR("Roy Huang");
MODULE_DESCRIPTION("AC97 driver for ADI Blackfin");
MODULE_LICENSE("GPL");
