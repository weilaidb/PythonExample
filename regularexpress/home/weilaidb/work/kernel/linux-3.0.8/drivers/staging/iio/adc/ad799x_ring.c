int ad799x_single_channel_from_ring(struct ad799x_state *st, long mask)
static int ad799x_ring_preenable(struct iio_dev *indio_dev)
static irqreturn_t ad799x_trigger_handler(int irq, void *p)
static const struct iio_ring_setup_ops ad799x_buf_setup_ops = ;
int ad799x_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void ad799x_ring_cleanup(struct iio_dev *indio_dev)
