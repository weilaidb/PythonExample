static int adis16400_spi_read_burst(struct device *dev, u8 *rx)
static const u16 read_all_tx_array[] = ;
static int adis16350_spi_read_all(struct device *dev, u8 *rx)
static irqreturn_t adis16400_trigger_handler(int irq, void *p)
void adis16400_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16400_ring_setup_ops = ;
int adis16400_configure_ring(struct iio_dev *indio_dev)
