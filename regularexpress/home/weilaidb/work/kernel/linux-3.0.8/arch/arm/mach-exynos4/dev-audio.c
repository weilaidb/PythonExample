static const char *rclksrc[] = ;
static int exynos4_cfg_i2s(struct platform_device *pdev)
static struct s3c_audio_pdata i2sv5_pdata = ;
static struct resource exynos4_i2s0_resource[] = ;
struct platform_device exynos4_device_i2s0 = ;
static const char *rclksrc_v3[] = ;
static struct s3c_audio_pdata i2sv3_pdata = ;
static struct resource exynos4_i2s1_resource[] = ;
struct platform_device exynos4_device_i2s1 = ;
static struct resource exynos4_i2s2_resource[] = ;
struct platform_device exynos4_device_i2s2 = ;
static int exynos4_pcm_cfg_gpio(struct platform_device *pdev)
static struct s3c_audio_pdata s3c_pcm_pdata = ;
static struct resource exynos4_pcm0_resource[] = ;
struct platform_device exynos4_device_pcm0 = ;
static struct resource exynos4_pcm1_resource[] = ;
struct platform_device exynos4_device_pcm1 = ;
static struct resource exynos4_pcm2_resource[] = ;
struct platform_device exynos4_device_pcm2 = ;
static int exynos4_ac97_cfg_gpio(struct platform_device *pdev)
static struct resource exynos4_ac97_resource[] = ;
static struct s3c_audio_pdata s3c_ac97_pdata = ;
static u64 exynos4_ac97_dmamask = DMA_BIT_MASK(32);
struct platform_device exynos4_device_ac97 = ;
static int exynos4_spdif_cfg_gpio(struct platform_device *pdev)
static struct resource exynos4_spdif_resource[] = ;
static struct s3c_audio_pdata samsung_spdif_pdata = ;
static u64 exynos4_spdif_dmamask = DMA_BIT_MASK(32);
struct platform_device exynos4_device_spdif = ;
