static int s5pc100_cfg_i2s(struct platform_device *pdev)
static const char *rclksrc_v5[] = ;
static struct s3c_audio_pdata i2sv5_pdata = ;
static struct resource s5pc100_iis0_resource[] = ;
struct platform_device s5pc100_device_iis0 = ;
static const char *rclksrc_v3[] = ;
static struct s3c_audio_pdata i2sv3_pdata = ;
static struct resource s5pc100_iis1_resource[] = ;
struct platform_device s5pc100_device_iis1 = ;
static struct resource s5pc100_iis2_resource[] = ;
struct platform_device s5pc100_device_iis2 = ;
static int s5pc100_pcm_cfg_gpio(struct platform_device *pdev)
static struct s3c_audio_pdata s3c_pcm_pdata = ;
static struct resource s5pc100_pcm0_resource[] = ;
struct platform_device s5pc100_device_pcm0 = ;
static struct resource s5pc100_pcm1_resource[] = ;
struct platform_device s5pc100_device_pcm1 = ;
static int s5pc100_ac97_cfg_gpio(struct platform_device *pdev)
static struct resource s5pc100_ac97_resource[] = ;
static struct s3c_audio_pdata s3c_ac97_pdata = ;
static u64 s5pc100_ac97_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pc100_device_ac97 = ;
static int s5pc100_spdif_cfg_gpd(struct platform_device *pdev)
static int s5pc100_spdif_cfg_gpg3(struct platform_device *pdev)
static struct resource s5pc100_spdif_resource[] = ;
static struct s3c_audio_pdata s5p_spdif_pdata = ;
static u64 s5pc100_spdif_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pc100_device_spdif = ;
void __init s5pc100_spdif_setup_gpio(int gpio)
