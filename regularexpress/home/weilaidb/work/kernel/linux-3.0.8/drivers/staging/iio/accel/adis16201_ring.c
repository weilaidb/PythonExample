static int adis16201_read_ring_data(struct iio_dev *indio_dev, u8 *rx)
static irqreturn_t adis16201_trigger_handler(int irq, void *p)
void adis16201_unconfigure_ring(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops adis16201_ring_setup_ops = ;
int adis16201_configure_ring(struct iio_dev *indio_dev)
