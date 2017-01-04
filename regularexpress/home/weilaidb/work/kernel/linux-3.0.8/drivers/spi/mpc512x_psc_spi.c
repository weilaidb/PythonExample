struct mpc512x_psc_spi ;
struct mpc512x_psc_spi_cs ;
static int mpc512x_psc_spi_transfer_setup(struct spi_device *spi,
struct spi_transfer *t)
static void mpc512x_psc_spi_activate_cs(struct spi_device *spi)
static void mpc512x_psc_spi_deactivate_cs(struct spi_device *spi)
#define MPC512x_PSC_FIFO_SZ(sz) ((sz & 0x7ff) << 2);
#define EOFBYTE 1
static int mpc512x_psc_spi_transfer_rxtx(struct spi_device *spi,
struct spi_transfer *t)
static void mpc512x_psc_spi_work(struct work_struct *work)
static int mpc512x_psc_spi_setup(struct spi_device *spi)
static int mpc512x_psc_spi_transfer(struct spi_device *spi,
struct spi_message *m)
static void mpc512x_psc_spi_cleanup(struct spi_device *spi)
static int mpc512x_psc_spi_port_config(struct spi_master *master,
struct mpc512x_psc_spi *mps)
static irqreturn_t mpc512x_psc_spi_isr(int irq, void *dev_id)
static int __devinit mpc512x_psc_spi_do_probe(struct device *dev, u32 regaddr,
u32 size, unsigned int irq,
s16 bus_num)
static int __devexit mpc512x_psc_spi_do_remove(struct device *dev)
static int __devinit mpc512x_psc_spi_of_probe(struct platform_device *op)
static int __devexit mpc512x_psc_spi_of_remove(struct platform_device *op)
static struct of_device_id mpc512x_psc_spi_of_match[] = ;
MODULE_DEVICE_TABLE(of, mpc512x_psc_spi_of_match);
static struct platform_driver mpc512x_psc_spi_of_driver = ;
static int __init mpc512x_psc_spi_init(void)
module_init(mpc512x_psc_spi_init);
static void __exit mpc512x_psc_spi_exit(void)
module_exit(mpc512x_psc_spi_exit);
MODULE_AUTHOR("John Rigby");
MODULE_DESCRIPTION("MPC512x PSC SPI Driver");
MODULE_LICENSE("GPL");
