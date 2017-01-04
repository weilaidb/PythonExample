static struct s3c24xx_dma_map __initdata s3c2410_dma_mappings[] = ;
static void s3c2410_dma_select(struct s3c2410_dma_chan *chan,
struct s3c24xx_dma_map *map)
static struct s3c24xx_dma_selection __initdata s3c2410_dma_sel = ;
static struct s3c24xx_dma_order __initdata s3c2410_dma_order = ;
static int __init s3c2410_dma_add(struct sys_device *sysdev)
#if defined(CONFIG_CPU_S3C2410)
static struct sysdev_driver s3c2410_dma_driver = ;
static int __init s3c2410_dma_drvinit(void)
arch_initcall(s3c2410_dma_drvinit);
static struct sysdev_driver s3c2410a_dma_driver = ;
static int __init s3c2410a_dma_drvinit(void)
arch_initcall(s3c2410a_dma_drvinit);
#if defined(CONFIG_CPU_S3C2442)
static struct sysdev_driver s3c2442_dma_driver = ;
static int __init s3c2442_dma_drvinit(void)
arch_initcall(s3c2442_dma_drvinit);
