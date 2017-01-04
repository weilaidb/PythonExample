static const char *rclksrc[] = ;
static int s5pv210_cfg_i2s(struct platform_device *pdev)
static struct s3c_audio_pdata i2sv5_pdata = ;
static struct resource s5pv210_iis0_resource[] = ;
struct platform_device s5pv210_device_iis0 = ;
static const char *rclksrc_v3[] = ;
static struct s3c_audio_pdata i2sv3_pdata = ;
static struct resource s5pv210_iis1_resource[] = ;
struct platform_device s5pv210_device_iis1 = ;
static struct resource s5pv210_iis2_resource[] = ;
struct platform_device s5pv210_device_iis2 = ;
static int s5pv210_pcm_cfg_gpio(struct platform_device *pdev)
static struct s3c_audio_pdata s3c_pcm_pdata = ;
static struct resource s5pv210_pcm0_resource[] = ;
struct platform_device s5pv210_device_pcm0 = ;
static struct resource s5pv210_pcm1_resource[] = ;
struct platform_device s5pv210_device_pcm1 = ;
static struct resource s5pv210_pcm2_resource[] = ;
struct platform_device s5pv210_device_pcm2 = ;
static int s5pv210_ac97_cfg_gpio(struct platform_device *pdev)
static struct resource s5pv210_ac97_resource[] = ;
static struct s3c_audio_pdata s3c_ac97_pdata = ;
static u64 s5pv210_ac97_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pv210_device_ac97 = ;
static int s5pv210_spdif_cfg_gpio(struct platform_device *pdev)
static struct resource s5pv210_spdif_resource[] = ;
static struct s3c_audio_pdata samsung_spdif_pdata = ;
static u64 s5pv210_spdif_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pv210_device_spdif = ;
