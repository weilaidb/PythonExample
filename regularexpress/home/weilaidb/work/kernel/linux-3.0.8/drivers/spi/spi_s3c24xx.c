struct s3c24xx_spi_devstate ;
enum spi_fiq_mode ;
struct s3c24xx_spi ;
#define SPCON_DEFAULT (S3C2410_SPCON_MSTR | S3C2410_SPCON_SMOD_INT)
#define SPPIN_DEFAULT (S3C2410_SPPIN_KEEP)
static inline struct s3c24xx_spi *to_hw(struct spi_device *sdev)
static void s3c24xx_spi_gpiocs(struct s3c2410_spi_info *spi, int cs, int pol)
static void s3c24xx_spi_chipsel(struct spi_device *spi, int value)
static int s3c24xx_spi_update_state(struct spi_device *spi,
struct spi_transfer *t)
static int s3c24xx_spi_setupxfer(struct spi_device *spi,
struct spi_transfer *t)
static int s3c24xx_spi_setup(struct spi_device *spi)
static void s3c24xx_spi_cleanup(struct spi_device *spi)
static inline unsigned int hw_txbyte(struct s3c24xx_spi *hw, int count)
struct spi_fiq_code ;
extern struct spi_fiq_code s3c24xx_spi_fiq_txrx;
extern struct spi_fiq_code s3c24xx_spi_fiq_tx;
extern struct spi_fiq_code s3c24xx_spi_fiq_rx;
static inline u32 ack_bit(unsigned int irq)
void s3c24xx_spi_tryfiq(struct s3c24xx_spi *hw)
static int s3c24xx_spi_fiqop(void *pw, int release)
static inline void s3c24xx_spi_initfiq(struct s3c24xx_spi *hw)
static inline bool s3c24xx_spi_usefiq(struct s3c24xx_spi *hw)
static inline bool s3c24xx_spi_usingfiq(struct s3c24xx_spi *spi)
static inline void s3c24xx_spi_initfiq(struct s3c24xx_spi *s)
static inline void s3c24xx_spi_tryfiq(struct s3c24xx_spi *s)
static inline bool s3c24xx_spi_usefiq(struct s3c24xx_spi *s)
static inline bool s3c24xx_spi_usingfiq(struct s3c24xx_spi *s)
static int s3c24xx_spi_txrx(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t s3c24xx_spi_irq(int irq, void *dev)
static void s3c24xx_spi_initialsetup(struct s3c24xx_spi *hw)
static int __init s3c24xx_spi_probe(struct platform_device *pdev)
static int __exit s3c24xx_spi_remove(struct platform_device *dev)
static int s3c24xx_spi_suspend(struct device *dev)
static int s3c24xx_spi_resume(struct device *dev)
static const struct dev_pm_ops s3c24xx_spi_pmops = ;
#define S3C24XX_SPI_PMOPS &s3c24xx_spi_pmops
#define S3C24XX_SPI_PMOPS NULL
MODULE_ALIAS("platform:s3c2410-spi");
static struct platform_driver s3c24xx_spi_driver = ;
static int __init s3c24xx_spi_init(void)
static void __exit s3c24xx_spi_exit(void)
module_init(s3c24xx_spi_init);
module_exit(s3c24xx_spi_exit);
MODULE_DESCRIPTION("S3C24XX SPI Driver");
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
