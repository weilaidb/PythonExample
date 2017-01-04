static int adis16203_read_ring_data(struct device *dev, u8 *rx)
static irqreturn_t adis16203_trigger_handler(int irq, void *p)
void adis16203_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16203_ring_setup_ops = ;
int adis16203_configure_ring(struct iio_dev *indio_dev)
