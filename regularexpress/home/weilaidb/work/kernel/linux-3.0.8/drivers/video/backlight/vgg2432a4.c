static struct ili9320_reg vgg_init1[] = ;
static struct ili9320_reg vgg_init2[] = ;
static struct ili9320_reg vgg_gamma[] = ;
static struct ili9320_reg vgg_init0[] = ;
static int vgg2432a4_lcd_init(struct ili9320 *lcd,
struct ili9320_platdata *cfg)
static int vgg2432a4_suspend(struct spi_device *spi, pm_message_t state)
static int vgg2432a4_resume(struct spi_device *spi)
#define vgg2432a4_suspend	NULL
#define vgg2432a4_resume 	NULL
static struct ili9320_client vgg2432a4_client = ;
static int __devinit vgg2432a4_probe(struct spi_device *spi)
static int __devexit vgg2432a4_remove(struct spi_device *spi)
static void vgg2432a4_shutdown(struct spi_device *spi)
static struct spi_driver vgg2432a4_driver = ;
static int __init vgg2432a4_init(void)
static void __exit vgg2432a4_exit(void)
module_init(vgg2432a4_init);
module_exit(vgg2432a4_exit);
MODULE_AUTHOR("Ben Dooks <ben-linux@fluff.org>");
MODULE_DESCRIPTION("VGG2432A4 LCD Driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:VGG2432A4");
