#define USI_CNT		0x00
#define USI_DIV		0x04
#define USI_SSR		0x08
#define USI_RX0		0x10
#define USI_TX0		0x10
#define ENINT		(0x01 << 17)
#define ENFLG		(0x01 << 16)
#define TXNUM		(0x03 << 8)
#define TXNEG		(0x01 << 2)
#define RXNEG		(0x01 << 1)
#define LSB		(0x01 << 10)
#define SELECTLEV	(0x01 << 2)
#define SELECTPOL	(0x01 << 31)
#define SELECTSLAVE	0x01
#define GOBUSY		0x01
struct nuc900_spi ;
static inline struct nuc900_spi *to_hw(struct spi_device *sdev)
static void nuc900_slave_select(struct spi_device *spi, unsigned int ssr)
static void nuc900_spi_chipsel(struct spi_device *spi, int value)
static void nuc900_spi_setup_txnum(struct nuc900_spi *hw,
unsigned int txnum)
static void nuc900_spi_setup_txbitlen(struct nuc900_spi *hw,
unsigned int txbitlen)
static void nuc900_spi_gobusy(struct nuc900_spi *hw)
static int nuc900_spi_setupxfer(struct spi_device *spi,
struct spi_transfer *t)
static int nuc900_spi_setup(struct spi_device *spi)
static inline unsigned int hw_txbyte(struct nuc900_spi *hw, int count)
static int nuc900_spi_txrx(struct spi_device *spi, struct spi_transfer *t)
static irqreturn_t nuc900_spi_irq(int irq, void *dev)
static void nuc900_tx_edge(struct nuc900_spi *hw, unsigned int edge)
static void nuc900_rx_edge(struct nuc900_spi *hw, unsigned int edge)
static void nuc900_send_first(struct nuc900_spi *hw, unsigned int lsb)
static void nuc900_set_sleep(struct nuc900_spi *hw, unsigned int sleep)
static void nuc900_enable_int(struct nuc900_spi *hw)
static void nuc900_set_divider(struct nuc900_spi *hw)
static void nuc900_init_spi(struct nuc900_spi *hw)
static int __devinit nuc900_spi_probe(struct platform_device *pdev)
static int __devexit nuc900_spi_remove(struct platform_device *dev)
static struct platform_driver nuc900_spi_driver = ;
static int __init nuc900_spi_init(void)
static void __exit nuc900_spi_exit(void)
module_init(nuc900_spi_init);
module_exit(nuc900_spi_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("nuc900 spi driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-spi");
