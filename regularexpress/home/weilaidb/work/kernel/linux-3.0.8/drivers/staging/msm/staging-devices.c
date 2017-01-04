#define MSM_SMI_BASE 0xE0000000
#define MSM_SMI_BASE 0x00000000
#define TOUCHPAD_SUSPEND 	34
#define TOUCHPAD_IRQ 		38
#define MSM_PMEM_MDP_SIZE	0x1591000
#define SMEM_SPINLOCK_I2C	"D:I2C02000021"
#define SMEM_SPINLOCK_I2C	"S:6"
#define MSM_PMEM_ADSP_SIZE	0x1C00000
#define MSM_FB_SIZE             0x500000
#define MSM_FB_SIZE_ST15	0x800000
#define MSM_AUDIO_SIZE		0x80000
#define MSM_GPU_PHYS_SIZE 	SZ_2M
#define MSM_SMI_BASE		0xE0000000
#define MSM_SMI_BASE		0x00000000
#define MSM_SHARED_RAM_PHYS	(MSM_SMI_BASE + 0x00100000)
#define MSM_PMEM_SMI_BASE	(MSM_SMI_BASE + 0x02B00000)
#define MSM_PMEM_SMI_SIZE	0x01500000
#define MSM_FB_BASE		MSM_PMEM_SMI_BASE
#define MSM_GPU_PHYS_BASE 	(MSM_FB_BASE + MSM_FB_SIZE)
#define MSM_PMEM_SMIPOOL_BASE	(MSM_GPU_PHYS_BASE + MSM_GPU_PHYS_SIZE)
#define MSM_PMEM_SMIPOOL_SIZE	(MSM_PMEM_SMI_SIZE - MSM_FB_SIZE \
- MSM_GPU_PHYS_SIZE)
#if defined(CONFIG_FB_MSM_MDP40)
#define MDP_BASE          0xA3F00000
#define PMDH_BASE         0xAD600000
#define EMDH_BASE         0xAD700000
#define TVENC_BASE        0xAD400000
#define MDP_BASE          0xAA200000
#define PMDH_BASE         0xAA600000
#define EMDH_BASE         0xAA700000
#define TVENC_BASE        0xAA400000
#define PMEM_KERNEL_EBI1_SIZE	(CONFIG_PMEM_KERNEL_SIZE * 1024 * 1024)
static struct resource msm_fb_resources[] = ;
static struct resource msm_mdp_resources[] = ;
static struct platform_device msm_mdp_device = ;
static struct platform_device msm_lcdc_device = ;
static int msm_fb_detect_panel(const char *name)
static int msm_fb_allow_set_offset(void)
static struct msm_fb_platform_data msm_fb_pdata = ;
static struct platform_device msm_fb_device = ;
static void __init qsd8x50_allocate_memory_regions(void)
static int msm_fb_lcdc_gpio_config(int on)
static struct lcdc_platform_data lcdc_pdata = ;
static struct msm_gpio msm_fb_st15_gpio_config_data[] = ;
static struct msm_panel_common_pdata mdp_pdata = ;
static struct platform_device *devices[] __initdata = ;
static void __init msm_register_device(struct platform_device *pdev, void *data)
void __init msm_fb_register_device(char *name, void *data)
static void __init msm_fb_add_devices(void)
int __init staging_init_pmem(void)
int __init staging_init_devices(void)
arch_initcall(staging_init_pmem);
arch_initcall(staging_init_devices);
