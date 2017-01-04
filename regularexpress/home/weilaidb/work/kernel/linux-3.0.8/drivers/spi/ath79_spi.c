#define DRV_NAME	"ath79-spi"
struct ath79_spi ;
static inline u32 ath79_spi_rr(struct ath79_spi *sp, unsigned reg)
static inline void ath79_spi_wr(struct ath79_spi *sp, unsigned reg, u32 val)
static inline struct ath79_spi *ath79_spidev_to_sp(struct spi_device *spi)
static void ath79_spi_chipselect(struct spi_device *spi, int is_active)
static int ath79_spi_setup_cs(struct spi_device *spi)
static void ath79_spi_cleanup_cs(struct spi_device *spi)
static int ath79_spi_setup(struct spi_device *spi)
static void ath79_spi_cleanup(struct spi_device *spi)
static u32 ath79_spi_txrx_mode0(struct spi_device *spi, unsigned nsecs,
u32 word, u8 bits)
static __devinit int ath79_spi_probe(struct platform_device *pdev)
static __devexit int ath79_spi_remove(struct platform_device *pdev)
static struct platform_driver ath79_spi_driver = ;
static __init int ath79_spi_init(void)
module_init(ath79_spi_init);
static __exit void ath79_spi_exit(void)
module_exit(ath79_spi_exit);
MODULE_DESCRIPTION("SPI controller driver for Atheros AR71XX/AR724X/AR913X");
MODULE_AUTHOR("Gabor Juhos <juhosg@openwrt.org>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" DRV_NAME);
