#define NO_IRQ 0
MODULE_LICENSE("GPL");
enum ;
struct of_mmc_spi ;
static struct of_mmc_spi *to_of_mmc_spi(struct device *dev)
static int of_mmc_spi_read_gpio(struct device *dev, int gpio_num)
static int of_mmc_spi_get_cd(struct device *dev)
static int of_mmc_spi_get_ro(struct device *dev)
static int of_mmc_spi_init(struct device *dev,
irqreturn_t (*irqhandler)(int, void *), void *mmc)
static void of_mmc_spi_exit(struct device *dev, void *mmc)
struct mmc_spi_platform_data *mmc_spi_get_pdata(struct spi_device *spi)
EXPORT_SYMBOL(mmc_spi_get_pdata);
void mmc_spi_put_pdata(struct spi_device *spi)
EXPORT_SYMBOL(mmc_spi_put_pdata);
