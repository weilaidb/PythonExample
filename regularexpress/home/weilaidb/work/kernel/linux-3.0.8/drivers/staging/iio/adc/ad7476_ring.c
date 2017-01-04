int ad7476_scan_from_ring(struct ad7476_state *st)
static int ad7476_ring_preenable(struct iio_dev *indio_dev)
static irqreturn_t ad7476_trigger_handler(int irq, void  *p)
static const struct iio_ring_setup_ops ad7476_ring_setup_ops = ;
int ad7476_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void ad7476_ring_cleanup(struct iio_dev *indio_dev)
