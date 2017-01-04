static irqreturn_t ade7758_data_rdy_trig_poll(int irq, void *private)
static int ade7758_data_rdy_trigger_set_state(struct iio_trigger *trig,
bool state)
static int ade7758_trig_try_reen(struct iio_trigger *trig)
int ade7758_probe_trigger(struct iio_dev *indio_dev)
void ade7758_remove_trigger(struct iio_dev *indio_dev)
