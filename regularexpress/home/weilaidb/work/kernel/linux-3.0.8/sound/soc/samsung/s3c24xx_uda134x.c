static struct clk *xtal;
static struct clk *pclk;
static int clk_users;
static DEFINE_MUTEX(clk_lock);
static unsigned int rates[33 * 2];
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static struct platform_device *s3c24xx_uda134x_snd_device;
static int s3c24xx_uda134x_startup(struct snd_pcm_substream *substream)
static void s3c24xx_uda134x_shutdown(struct snd_pcm_substream *substream)
static int s3c24xx_uda134x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_soc_ops s3c24xx_uda134x_ops = ;
static struct snd_soc_dai_link s3c24xx_uda134x_dai_link = ;
static struct snd_soc_card snd_soc_s3c24xx_uda134x = ;
static struct s3c24xx_uda134x_platform_data *s3c24xx_uda134x_l3_pins;
static void setdat(int v)
static void setclk(int v)
static void setmode(int v)
static struct uda134x_platform_data s3c24xx_uda134x = ;
static int s3c24xx_uda134x_setup_pin(int pin, char *fun)
static int s3c24xx_uda134x_probe(struct platform_device *pdev)
static int s3c24xx_uda134x_remove(struct platform_device *pdev)
static struct platform_driver s3c24xx_uda134x_driver = ;
static int __init s3c24xx_uda134x_init(void)
static void __exit s3c24xx_uda134x_exit(void)
module_init(s3c24xx_uda134x_init);
module_exit(s3c24xx_uda134x_exit);
MODULE_AUTHOR("Zoltan Devai, Christian Pellegrin <chripell@evolware.org>");
MODULE_DESCRIPTION("S3C24XX_UDA134X ALSA SoC audio driver");
MODULE_LICENSE("GPL");
