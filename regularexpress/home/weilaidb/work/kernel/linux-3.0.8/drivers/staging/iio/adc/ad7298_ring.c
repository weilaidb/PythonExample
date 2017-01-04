int ad7298_scan_from_ring(struct iio_dev *dev_info, long ch)
static int ad7298_ring_preenable(struct iio_dev *indio_dev)
static irqreturn_t ad7298_trigger_handler(int irq, void *p)
static const struct iio_ring_setup_ops ad7298_ring_setup_ops = ;
int ad7298_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void ad7298_ring_cleanup(struct iio_dev *indio_dev)
