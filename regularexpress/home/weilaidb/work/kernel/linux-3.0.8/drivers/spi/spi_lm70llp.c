#define DRVNAME		"spi-lm70llp"
#define lm70_INIT	0xBE
#define SIO		0x10
#define nCS		0x20
#define SCLK		0x40
struct spi_lm70llp ;
static struct spi_lm70llp *lm70llp;
static inline struct spi_lm70llp *spidev_to_pp(struct spi_device *spi)
static inline void deassertCS(struct spi_lm70llp *pp)
static inline void assertCS(struct spi_lm70llp *pp)
static inline void clkHigh(struct spi_lm70llp *pp)
static inline void clkLow(struct spi_lm70llp *pp)
static inline void spidelay(unsigned d)
static inline void setsck(struct spi_device *s, int is_on)
static inline void setmosi(struct spi_device *s, int is_on)
static inline int getmiso(struct spi_device *s)
static void lm70_chipselect(struct spi_device *spi, int value)
static u32 lm70_txrx(struct spi_device *spi, unsigned nsecs, u32 word, u8 bits)
static void spi_lm70llp_attach(struct parport *p)
static void spi_lm70llp_detach(struct parport *p)
static struct parport_driver spi_lm70llp_drv = ;
static int __init init_spi_lm70llp(void)
module_init(init_spi_lm70llp);
static void __exit cleanup_spi_lm70llp(void)
module_exit(cleanup_spi_lm70llp);
MODULE_AUTHOR("Kaiwan N Billimoria <kaiwan@designergraphix.com>");
MODULE_DESCRIPTION(
"Parport adapter for the National Semiconductor LM70 LLP eval board");
MODULE_LICENSE("GPL");
