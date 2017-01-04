struct sh_sci_spi ;
#define SCSPTR(sp)	(sp->membase + 0x1c)
#define PIN_SCK		(1 << 2)
#define PIN_TXD		(1 << 0)
#define PIN_RXD		PIN_TXD
#define PIN_INIT	((1 << 1) | (1 << 3) | PIN_SCK | PIN_TXD)
static inline void setbits(struct sh_sci_spi *sp, int bits, int on)
static inline void setsck(struct spi_device *dev, int on)
static inline void setmosi(struct spi_device *dev, int on)
static inline u32 getmiso(struct spi_device *dev)
#define spidelay(x) ndelay(x)
static u32 sh_sci_spi_txrx_mode0(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 sh_sci_spi_txrx_mode1(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 sh_sci_spi_txrx_mode2(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 sh_sci_spi_txrx_mode3(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static void sh_sci_spi_chipselect(struct spi_device *dev, int value)
static int sh_sci_spi_probe(struct platform_device *dev)
static int sh_sci_spi_remove(struct platform_device *dev)
static struct platform_driver sh_sci_spi_drv = ;
static int __init sh_sci_spi_init(void)
module_init(sh_sci_spi_init);
static void __exit sh_sci_spi_exit(void)
module_exit(sh_sci_spi_exit);
MODULE_DESCRIPTION("SH SCI SPI Driver");
MODULE_AUTHOR("Magnus Damm <damm@opensource.se>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:spi_sh_sci");
