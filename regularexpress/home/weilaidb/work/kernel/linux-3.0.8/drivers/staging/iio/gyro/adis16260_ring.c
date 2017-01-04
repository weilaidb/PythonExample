static int adis16260_read_ring_data(struct device *dev, u8 *rx)
static irqreturn_t adis16260_trigger_handler(int irq, void *p)
void adis16260_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16260_ring_setup_ops = ;
int adis16260_configure_ring(struct iio_dev *indio_dev)
