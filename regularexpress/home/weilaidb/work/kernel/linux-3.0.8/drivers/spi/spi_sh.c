#define SPI_SH_TBR		0x00
#define SPI_SH_RBR		0x00
#define SPI_SH_CR1		0x08
#define SPI_SH_CR2		0x10
#define SPI_SH_CR3		0x18
#define SPI_SH_CR4		0x20
#define SPI_SH_CR5		0x28
#define SPI_SH_TBE		0x80
#define SPI_SH_TBF		0x40
#define SPI_SH_RBE		0x20
#define SPI_SH_RBF		0x10
#define SPI_SH_PFONRD		0x08
#define SPI_SH_SSDB		0x04
#define SPI_SH_SSD		0x02
#define SPI_SH_SSA		0x01
#define SPI_SH_RSTF		0x80
#define SPI_SH_LOOPBK		0x40
#define SPI_SH_CPOL		0x20
#define SPI_SH_CPHA		0x10
#define SPI_SH_L1M0		0x08
#define SPI_SH_MAX_BYTE		0xFF
#define SPI_SH_TBEI		0x80
#define SPI_SH_TBFI		0x40
#define SPI_SH_RBEI		0x20
#define SPI_SH_RBFI		0x10
#define SPI_SH_WPABRT		0x04
#define SPI_SH_SSS		0x01
#define SPI_SH_P1L0		0x80
#define SPI_SH_PP1L0		0x40
#define SPI_SH_MUXI		0x20
#define SPI_SH_MUXIRQ		0x10
#define SPI_SH_FIFO_SIZE	32
#define SPI_SH_SEND_TIMEOUT	(3 * HZ)
#define SPI_SH_RECEIVE_TIMEOUT	(HZ >> 3)
#undef DEBUG
struct spi_sh_data ;
static void spi_sh_write(struct spi_sh_data *ss, unsigned long data,
unsigned long offset)
static unsigned long spi_sh_read(struct spi_sh_data *ss, unsigned long offset)
static void spi_sh_set_bit(struct spi_sh_data *ss, unsigned long val,
unsigned long offset)
static void spi_sh_clear_bit(struct spi_sh_data *ss, unsigned long val,
unsigned long offset)
static void clear_fifo(struct spi_sh_data *ss)
static int spi_sh_wait_receive_buffer(struct spi_sh_data *ss)
static int spi_sh_wait_write_buffer_empty(struct spi_sh_data *ss)
static int spi_sh_send(struct spi_sh_data *ss, struct spi_message *mesg,
struct spi_transfer *t)
static int spi_sh_receive(struct spi_sh_data *ss, struct spi_message *mesg,
struct spi_transfer *t)
static void spi_sh_work(struct work_struct *work)
static int spi_sh_setup(struct spi_device *spi)
static int spi_sh_transfer(struct spi_device *spi, struct spi_message *mesg)
static void spi_sh_cleanup(struct spi_device *spi)
static irqreturn_t spi_sh_irq(int irq, void *_ss)
static int __devexit spi_sh_remove(struct platform_device *pdev)
static int __devinit spi_sh_probe(struct platform_device *pdev)
static struct platform_driver spi_sh_driver = ;
static int __init spi_sh_init(void)
module_init(spi_sh_init);
static void __exit spi_sh_exit(void)
module_exit(spi_sh_exit);
MODULE_DESCRIPTION("SH SPI bus driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Yoshihiro Shimoda");
MODULE_ALIAS("platform:sh_spi");
