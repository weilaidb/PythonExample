int max1363_single_channel_from_ring(long mask, struct max1363_state *st)
static int max1363_ring_preenable(struct iio_dev *indio_dev)
static irqreturn_t max1363_trigger_handler(int irq, void *p)
static const struct iio_ring_setup_ops max1363_ring_setup_ops = ;
int max1363_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void max1363_ring_cleanup(struct iio_dev *indio_dev)
