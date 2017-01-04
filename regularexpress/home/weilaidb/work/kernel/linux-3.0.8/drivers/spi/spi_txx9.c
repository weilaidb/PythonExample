#define SPI_FIFO_SIZE 4
#define SPI_MAX_DIVIDER 0xff
#define SPI_MIN_DIVIDER 1
#define TXx9_SPMCR		0x00
#define TXx9_SPCR0		0x04
#define TXx9_SPCR1		0x08
#define TXx9_SPFS		0x0c
#define TXx9_SPSR		0x14
#define TXx9_SPDR		0x18
#define TXx9_SPMCR_OPMODE	0xc0
#define TXx9_SPMCR_CONFIG	0x40
#define TXx9_SPMCR_ACTIVE	0x80
#define TXx9_SPMCR_SPSTP	0x02
#define TXx9_SPMCR_BCLR		0x01
#define TXx9_SPCR0_TXIFL_MASK	0xc000
#define TXx9_SPCR0_RXIFL_MASK	0x3000
#define TXx9_SPCR0_SIDIE	0x0800
#define TXx9_SPCR0_SOEIE	0x0400
#define TXx9_SPCR0_RBSIE	0x0200
#define TXx9_SPCR0_TBSIE	0x0100
#define TXx9_SPCR0_IFSPSE	0x0010
#define TXx9_SPCR0_SBOS		0x0004
#define TXx9_SPCR0_SPHA		0x0002
#define TXx9_SPCR0_SPOL		0x0001
#define TXx9_SPSR_TBSI		0x8000
#define TXx9_SPSR_RBSI		0x4000
#define TXx9_SPSR_TBS_MASK	0x3800
#define TXx9_SPSR_RBS_MASK	0x0700
#define TXx9_SPSR_SPOE		0x0080
#define TXx9_SPSR_IFSD		0x0008
#define TXx9_SPSR_SIDLE		0x0004
#define TXx9_SPSR_STRDY		0x0002
#define TXx9_SPSR_SRRDY		0x0001
struct txx9spi ;
static u32 txx9spi_rd(struct txx9spi *c, int reg)
static void txx9spi_wr(struct txx9spi *c, u32 val, int reg)
static void txx9spi_cs_func(struct spi_device *spi, struct txx9spi *c,
int on, unsigned int cs_delay)
static int txx9spi_setup(struct spi_device *spi)
static irqreturn_t txx9spi_interrupt(int irq, void *dev_id)
static void txx9spi_work_one(struct txx9spi *c, struct spi_message *m)
static void txx9spi_work(struct work_struct *work)
static int txx9spi_transfer(struct spi_device *spi, struct spi_message *m)
static int __init txx9spi_probe(struct platform_device *dev)
static int __exit txx9spi_remove(struct platform_device *dev)
MODULE_ALIAS("platform:spi_txx9");
static struct platform_driver txx9spi_driver = ;
static int __init txx9spi_init(void)
subsys_initcall(txx9spi_init);
static void __exit txx9spi_exit(void)
module_exit(txx9spi_exit);
MODULE_DESCRIPTION("TXx9 SPI Driver");
MODULE_LICENSE("GPL");
