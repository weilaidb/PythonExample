#define DRV_NAME "ad9910"
#define CFR1 0x0
#define CFR2 0x1
#define CFR3 0x2
#define AUXDAC 0x3
#define IOUPD 0x4
#define FTW 0x7
#define POW 0x8
#define ASF 0x9
#define MULTC 0x0A
#define DIG_RAMPL 0x0B
#define DIG_RAMPS 0x0C
#define DIG_RAMPR 0x0D
#define SIN_TONEP0 0x0E
#define SIN_TONEP1 0x0F
#define SIN_TONEP2 0x10
#define SIN_TONEP3 0x11
#define SIN_TONEP4 0x12
#define SIN_TONEP5 0x13
#define SIN_TONEP6 0x14
#define SIN_TONEP7 0x15
#define RAM_ENABLE	(1 << 7)
#define MANUAL_OSK	(1 << 7)
#define INVSIC		(1 << 6)
#define DDS_SINEOP	(1)
#define AUTO_OSK	(1)
#define OSKEN		(1 << 1)
#define LOAD_ARR	(1 << 2)
#define CLR_PHA		(1 << 3)
#define CLR_DIG		(1 << 4)
#define ACLR_PHA	(1 << 5)
#define ACLR_DIG	(1 << 6)
#define LOAD_LRR	(1 << 7)
#define LSB_FST		(1)
#define SDIO_IPT	(1 << 1)
#define EXT_PWD		(1 << 3)
#define ADAC_PWD	(1 << 4)
#define REFCLK_PWD	(1 << 5)
#define DAC_PWD		(1 << 6)
#define DIG_PWD		(1 << 7)
#define ENA_AMP		(1)
#define READ_FTW	(1)
#define DIGR_LOW	(1 << 1)
#define DIGR_HIGH	(1 << 2)
#define DIGR_ENA	(1 << 3)
#define SYNCCLK_ENA	(1 << 6)
#define ITER_IOUPD	(1 << 7)
#define TX_ENA		(1 << 1)
#define PDCLK_INV	(1 << 2)
#define PDCLK_ENB	(1 << 3)
#define PARA_ENA	(1 << 4)
#define SYNC_DIS	(1 << 5)
#define DATA_ASS	(1 << 6)
#define MATCH_ENA	(1 << 7)
#define PLL_ENA		(1)
#define PFD_RST		(1 << 2)
#define REFCLK_RST	(1 << 6)
#define REFCLK_BYP	(1 << 7)
struct ad9910_config ;
struct ad9910_state ;
static ssize_t ad9910_set_parameter(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(dds, S_IWUSR, NULL, ad9910_set_parameter, 0);
static void ad9910_init(struct ad9910_state *st)
static struct attribute *ad9910_attributes[] = ;
static const struct attribute_group ad9910_attribute_group = ;
static const struct iio_info ad9910_info = ;
static int __devinit ad9910_probe(struct spi_device *spi)
static int __devexit ad9910_remove(struct spi_device *spi)
static struct spi_driver ad9910_driver = ;
static __init int ad9910_spi_init(void)
module_init(ad9910_spi_init);
static __exit void ad9910_spi_exit(void)
module_exit(ad9910_spi_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("Analog Devices ad9910 driver");
MODULE_LICENSE("GPL v2");
