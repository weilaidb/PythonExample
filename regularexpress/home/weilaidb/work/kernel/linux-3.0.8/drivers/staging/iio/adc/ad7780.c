#define AD7780_RDY	(1 << 7)
#define AD7780_FILTER	(1 << 6)
#define AD7780_ERR	(1 << 5)
#define AD7780_ID1	(1 << 4)
#define AD7780_ID0	(1 << 3)
#define AD7780_GAIN	(1 << 2)
#define AD7780_PAT1	(1 << 1)
#define AD7780_PAT0	(1 << 0)
struct ad7780_chip_info ;
struct ad7780_state ;
enum ad7780_supported_device_ids ;
static int ad7780_read(struct ad7780_state *st, int *val)
static int ad7780_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const struct ad7780_chip_info ad7780_chip_info_tbl[] = ;
static irqreturn_t ad7780_interrupt(int irq, void *dev_id)
;
static const struct iio_info ad7780_info = ;
static int __devinit ad7780_probe(struct spi_device *spi)
static int ad7780_remove(struct spi_device *spi)
static const struct spi_device_id ad7780_id[] = ;
static struct spi_driver ad7780_driver = ;
static int __init ad7780_init(void)
module_init(ad7780_init);
static void __exit ad7780_exit(void)
module_exit(ad7780_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD7780/1 ADC");
MODULE_LICENSE("GPL v2");
