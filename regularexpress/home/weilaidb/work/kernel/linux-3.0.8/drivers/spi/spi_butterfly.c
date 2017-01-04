#define	butterfly_nreset (1 << 1)
#define	spi_sck_bit	(1 << 0)
#define	spi_mosi_bit	(1 << 7)
#define	vcc_bits	((1 << 6) | (1 << 5))
#define	spi_miso_bit	PARPORT_STATUS_BUSY
#define	spi_cs_bit	PARPORT_CONTROL_SELECT
static inline struct butterfly *spidev_to_pp(struct spi_device *spi)
struct butterfly ;
static inline void
setsck(struct spi_device *spi, int is_on)
static inline void
setmosi(struct spi_device *spi, int is_on)
static inline int getmiso(struct spi_device *spi)
static void butterfly_chipselect(struct spi_device *spi, int value)
#define	spidelay(X)	dowhile(0)
static u32
butterfly_txrx_word_mode0(struct spi_device *spi,
unsigned nsecs,
u32 word, u8 bits)
static struct mtd_partition partitions[] = ;
static struct flash_platform_data flash = ;
static struct butterfly *butterfly;
static void butterfly_attach(struct parport *p)
static void butterfly_detach(struct parport *p)
static struct parport_driver butterfly_driver = ;
static int __init butterfly_init(void)
device_initcall(butterfly_init);
static void __exit butterfly_exit(void)
module_exit(butterfly_exit);
MODULE_DESCRIPTION("Parport Adapter driver for AVR Butterfly");
MODULE_LICENSE("GPL");
