int ad7887_scan_from_ring(struct ad7887_state *st, long mask)
static int ad7887_ring_preenable(struct iio_dev *indio_dev)
static int ad7887_ring_postdisable(struct iio_dev *indio_dev)
static irqreturn_t ad7887_trigger_handler(int irq, void *p)
static const struct iio_ring_setup_ops ad7887_ring_setup_ops = ;
int ad7887_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void ad7887_ring_cleanup(struct iio_dev *indio_dev)
