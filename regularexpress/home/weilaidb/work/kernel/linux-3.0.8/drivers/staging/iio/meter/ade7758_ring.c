static int ade7758_spi_read_burst(struct device *dev)
static int ade7758_write_waveform_type(struct device *dev, unsigned type)
static irqreturn_t ade7758_trigger_handler(int irq, void *p)
static int ade7758_ring_preenable(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops ade7758_ring_setup_ops = ;
void ade7758_unconfigure_ring(struct iio_dev *indio_dev)
int ade7758_configure_ring(struct iio_dev *indio_dev)
void ade7758_uninitialize_ring(struct iio_ring_buffer *ring)
