#define MSM_CHIP_DEVICE(name, chip)
#define MSM_DEVICE(name) MSM_CHIP_DEVICE(name, MSM)
#if defined(CONFIG_ARCH_MSM7X00A) || defined(CONFIG_ARCH_MSM7X27) \
|| defined(CONFIG_ARCH_MSM7X25)
static struct map_desc msm_io_desc[] __initdata = ;
void __init msm_map_common_io(void)
static struct map_desc qsd8x50_io_desc[] __initdata = ;
void __init msm_map_qsd8x50_io(void)
static struct map_desc msm8x60_io_desc[] __initdata = ;
void __init msm_map_msm8x60_io(void)
static struct map_desc msm8960_io_desc[] __initdata = ;
void __init msm_map_msm8960_io(void)
static struct map_desc msm7x30_io_desc[] __initdata = ;
void __init msm_map_msm7x30_io(void)
void __iomem *
__msm_ioremap(unsigned long phys_addr, size_t size, unsigned int mtype)
EXPORT_SYMBOL(__msm_ioremap);
