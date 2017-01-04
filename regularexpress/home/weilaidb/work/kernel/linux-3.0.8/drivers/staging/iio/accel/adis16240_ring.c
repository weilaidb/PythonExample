static int adis16240_read_ring_data(struct device *dev, u8 *rx)
static irqreturn_t adis16240_trigger_handler(int irq, void *p)
void adis16240_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16240_ring_setup_ops = ;
int adis16240_configure_ring(struct iio_dev *indio_dev)
