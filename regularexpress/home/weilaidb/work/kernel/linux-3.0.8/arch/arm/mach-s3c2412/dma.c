#define MAP(x)
static struct s3c24xx_dma_map __initdata s3c2412_dma_mappings[] = ;
static void s3c2412_dma_direction(struct s3c2410_dma_chan *chan,
struct s3c24xx_dma_map *map,
enum s3c2410_dmasrc dir)
static void s3c2412_dma_select(struct s3c2410_dma_chan *chan,
struct s3c24xx_dma_map *map)
static struct s3c24xx_dma_selection __initdata s3c2412_dma_sel = ;
static int __init s3c2412_dma_add(struct sys_device *sysdev)
static struct sysdev_driver s3c2412_dma_driver = ;
static int __init s3c2412_dma_init(void)
arch_initcall(s3c2412_dma_init);
