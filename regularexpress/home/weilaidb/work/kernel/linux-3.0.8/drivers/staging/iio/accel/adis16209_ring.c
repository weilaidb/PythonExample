static int adis16209_read_ring_data(struct device *dev, u8 *rx)
static irqreturn_t adis16209_trigger_handler(int irq, void *p)
void adis16209_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16209_ring_setup_ops = ;
int adis16209_configure_ring(struct iio_dev *indio_dev)
