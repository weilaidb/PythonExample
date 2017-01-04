static int adis16204_read_ring_data(struct device *dev, u8 *rx)
static irqreturn_t adis16204_trigger_handler(int irq, void *p)
void adis16204_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16204_ring_setup_ops = ;
int adis16204_configure_ring(struct iio_dev *indio_dev)
