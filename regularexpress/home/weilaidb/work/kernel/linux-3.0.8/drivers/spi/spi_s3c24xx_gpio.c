struct s3c2410_spigpio ;
static inline struct s3c2410_spigpio *spidev_to_sg(struct spi_device *spi)
static inline void setsck(struct spi_device *dev, int on)
static inline void setmosi(struct spi_device *dev, int on)
static inline u32 getmiso(struct spi_device *dev)
#define spidelay(x) ndelay(x)
static u32 s3c2410_spigpio_txrx_mode0(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 s3c2410_spigpio_txrx_mode1(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 s3c2410_spigpio_txrx_mode2(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 s3c2410_spigpio_txrx_mode3(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static void s3c2410_spigpio_chipselect(struct spi_device *dev, int value)
static int s3c2410_spigpio_probe(struct platform_device *dev)
static int s3c2410_spigpio_remove(struct platform_device *dev)
#define s3c2410_spigpio_suspend NULL
#define s3c2410_spigpio_resume NULL
MODULE_ALIAS("platform:spi_s3c24xx_gpio");
static struct platform_driver s3c2410_spigpio_drv = ;
static int __init s3c2410_spigpio_init(void)
static void __exit s3c2410_spigpio_exit(void)
module_init(s3c2410_spigpio_init);
module_exit(s3c2410_spigpio_exit);
MODULE_DESCRIPTION("S3C24XX SPI Driver");
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
