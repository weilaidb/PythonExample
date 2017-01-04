static const char *rclksrc[] = ;
static int s3c64xx_i2s_cfg_gpio(struct platform_device *pdev)
static struct resource s3c64xx_iis0_resource[] = ;
static struct s3c_audio_pdata i2sv3_pdata = ;
struct platform_device s3c64xx_device_iis0 = ;
EXPORT_SYMBOL(s3c64xx_device_iis0);
static struct resource s3c64xx_iis1_resource[] = ;
struct platform_device s3c64xx_device_iis1 = ;
EXPORT_SYMBOL(s3c64xx_device_iis1);
static struct resource s3c64xx_iisv4_resource[] = ;
static struct s3c_audio_pdata i2sv4_pdata = ;
struct platform_device s3c64xx_device_iisv4 = ;
EXPORT_SYMBOL(s3c64xx_device_iisv4);
static int s3c64xx_pcm_cfg_gpio(struct platform_device *pdev)
static struct resource s3c64xx_pcm0_resource[] = ;
static struct s3c_audio_pdata s3c_pcm0_pdata = ;
struct platform_device s3c64xx_device_pcm0 = ;
EXPORT_SYMBOL(s3c64xx_device_pcm0);
static struct resource s3c64xx_pcm1_resource[] = ;
static struct s3c_audio_pdata s3c_pcm1_pdata = ;
struct platform_device s3c64xx_device_pcm1 = ;
EXPORT_SYMBOL(s3c64xx_device_pcm1);
static int s3c64xx_ac97_cfg_gpd(struct platform_device *pdev)
static int s3c64xx_ac97_cfg_gpe(struct platform_device *pdev)
static struct resource s3c64xx_ac97_resource[] = ;
static struct s3c_audio_pdata s3c_ac97_pdata;
static u64 s3c64xx_ac97_dmamask = DMA_BIT_MASK(32);
struct platform_device s3c64xx_device_ac97 = ;
EXPORT_SYMBOL(s3c64xx_device_ac97);
void __init s3c64xx_ac97_setup_gpio(int num)
