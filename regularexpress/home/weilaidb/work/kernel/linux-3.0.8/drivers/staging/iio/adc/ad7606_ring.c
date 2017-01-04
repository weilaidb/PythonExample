int ad7606_scan_from_ring(struct iio_dev *indio_dev, unsigned ch)
static int ad7606_ring_preenable(struct iio_dev *indio_dev)
static irqreturn_t ad7606_trigger_handler_th_bh(int irq, void *p)
static void ad7606_poll_bh_to_ring(struct work_struct *work_s)
static const struct iio_ring_setup_ops ad7606_ring_setup_ops = ;
int ad7606_register_ring_funcs_and_init(struct iio_dev *indio_dev)
void ad7606_ring_cleanup(struct iio_dev *indio_dev)
