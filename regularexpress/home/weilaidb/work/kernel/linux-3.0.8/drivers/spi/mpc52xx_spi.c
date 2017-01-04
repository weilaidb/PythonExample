MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("MPC52xx SPI (non-PSC) Driver");
MODULE_LICENSE("GPL");
#define SPI_CTRL1	0x00
#define SPI_CTRL1_SPIE		(1 << 7)
#define SPI_CTRL1_SPE		(1 << 6)
#define SPI_CTRL1_MSTR		(1 << 4)
#define SPI_CTRL1_CPOL		(1 << 3)
#define SPI_CTRL1_CPHA		(1 << 2)
#define SPI_CTRL1_SSOE		(1 << 1)
#define SPI_CTRL1_LSBFE		(1 << 0)
#define SPI_CTRL2	0x01
#define SPI_BRR		0x04
#define SPI_STATUS	0x05
#define SPI_STATUS_SPIF		(1 << 7)
#define SPI_STATUS_WCOL		(1 << 6)
#define SPI_STATUS_MODF		(1 << 4)
#define SPI_DATA	0x09
#define SPI_PORTDATA	0x0d
#define SPI_DATADIR	0x10
#define FSM_STOP	0
#define FSM_POLL	1
#define FSM_CONTINUE	2
struct mpc52xx_spi ;
static void mpc52xx_spi_chipsel(struct mpc52xx_spi *ms, int value)
static void mpc52xx_spi_start_transfer(struct mpc52xx_spi *ms)
static int mpc52xx_spi_fsmstate_transfer(int irq, struct mpc52xx_spi *ms,
u8 status, u8 data);
static int mpc52xx_spi_fsmstate_wait(int irq, struct mpc52xx_spi *ms,
u8 status, u8 data);
static int
mpc52xx_spi_fsmstate_idle(int irq, struct mpc52xx_spi *ms, u8 status, u8 data)
static int mpc52xx_spi_fsmstate_transfer(int irq, struct mpc52xx_spi *ms,
u8 status, u8 data)
static int
mpc52xx_spi_fsmstate_wait(int irq, struct mpc52xx_spi *ms, u8 status, u8 data)
static void mpc52xx_spi_fsm_process(int irq, struct mpc52xx_spi *ms)
static irqreturn_t mpc52xx_spi_irq(int irq, void *_ms)
static void mpc52xx_spi_wq(struct work_struct *work)
static int mpc52xx_spi_setup(struct spi_device *spi)
static int mpc52xx_spi_transfer(struct spi_device *spi, struct spi_message *m)
static int __devinit mpc52xx_spi_probe(struct platform_device *op)
static int __devexit mpc52xx_spi_remove(struct platform_device *op)
static const struct of_device_id mpc52xx_spi_match[] __devinitconst = ;
MODULE_DEVICE_TABLE(of, mpc52xx_spi_match);
static struct platform_driver mpc52xx_spi_of_driver = ;
static int __init mpc52xx_spi_init(void)
module_init(mpc52xx_spi_init);
static void __exit mpc52xx_spi_exit(void)
module_exit(mpc52xx_spi_exit);
