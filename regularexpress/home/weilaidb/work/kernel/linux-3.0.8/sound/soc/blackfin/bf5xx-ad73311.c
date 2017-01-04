#if CONFIG_SND_BF5XX_SPORT_NUM == 0
#define bfin_write_SPORT_TCR1	bfin_write_SPORT0_TCR1
#define bfin_read_SPORT_TCR1	bfin_read_SPORT0_TCR1
#define bfin_write_SPORT_TCR2	bfin_write_SPORT0_TCR2
#define bfin_write_SPORT_TX16	bfin_write_SPORT0_TX16
#define bfin_read_SPORT_STAT	bfin_read_SPORT0_STAT
#define bfin_write_SPORT_TCR1	bfin_write_SPORT1_TCR1
#define bfin_read_SPORT_TCR1	bfin_read_SPORT1_TCR1
#define bfin_write_SPORT_TCR2	bfin_write_SPORT1_TCR2
#define bfin_write_SPORT_TX16	bfin_write_SPORT1_TX16
#define bfin_read_SPORT_STAT	bfin_read_SPORT1_STAT
#define GPIO_SE CONFIG_SND_BFIN_AD73311_SE
static struct snd_soc_card bf5xx_ad73311;
static int snd_ad73311_startup(void)
static int snd_ad73311_configure(void)
static int bf5xx_probe(struct platform_device *pdev)
static int bf5xx_ad73311_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops bf5xx_ad73311_ops = ;
static struct snd_soc_dai_link bf5xx_ad73311_dai[] = ;
static struct snd_soc_card bf5xx_ad73311 = ;
static struct platform_device *bf5xx_ad73311_snd_device;
static int __init bf5xx_ad73311_init(void)
static void __exit bf5xx_ad73311_exit(void)
module_init(bf5xx_ad73311_init);
module_exit(bf5xx_ad73311_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("ALSA SoC AD73311 Blackfin");
MODULE_LICENSE("GPL");
