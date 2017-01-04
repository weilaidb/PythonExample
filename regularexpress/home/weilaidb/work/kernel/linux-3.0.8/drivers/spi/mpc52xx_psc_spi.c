#define MCLK 20000000
struct mpc52xx_psc_spi ;
struct mpc52xx_psc_spi_cs ;
static int mpc52xx_psc_spi_transfer_setup(struct spi_device *spi,
struct spi_transfer *t)
static void mpc52xx_psc_spi_activate_cs(struct spi_device *spi)
static void mpc52xx_psc_spi_deactivate_cs(struct spi_device *spi)
#define MPC52xx_PSC_BUFSIZE (MPC52xx_PSC_RFNUM_MASK + 1)
#define MPC52xx_PSC_RFALARM (MPC52xx_PSC_BUFSIZE * 20 / 100)
static int mpc52xx_psc_spi_transfer_rxtx(struct spi_device *spi,
struct spi_transfer *t)
static void mpc52xx_psc_spi_work(struct work_struct *work)
static int mpc52xx_psc_spi_setup(struct spi_device *spi)
static int mpc52xx_psc_spi_transfer(struct spi_device *spi,
struct spi_message *m)
static void mpc52xx_psc_spi_cleanup(struct spi_device *spi)
static int mpc52xx_psc_spi_port_config(int psc_id, struct mpc52xx_psc_spi *mps)
static irqreturn_t mpc52xx_psc_spi_isr(int irq, void *dev_id)
static int __devinit mpc52xx_psc_spi_do_probe(struct device *dev, u32 regaddr,
u32 size, unsigned int irq, s16 bus_num)
static int __devinit mpc52xx_psc_spi_of_probe(struct platform_device *op)
static int __devexit mpc52xx_psc_spi_of_remove(struct platform_device *op)
static const struct of_device_id mpc52xx_psc_spi_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc52xx_psc_spi_of_match);
static struct platform_driver mpc52xx_psc_spi_of_driver = ;
static int __init mpc52xx_psc_spi_init(void)
module_init(mpc52xx_psc_spi_init);
static void __exit mpc52xx_psc_spi_exit(void)
module_exit(mpc52xx_psc_spi_exit);
MODULE_AUTHOR("Dragos Carp");
MODULE_DESCRIPTION("MPC52xx PSC SPI Driver");
MODULE_LICENSE("GPL");
