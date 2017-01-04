static irqreturn_t adis16209_data_rdy_trig_poll(int irq, void *trig)
static int adis16209_data_rdy_trigger_set_state(struct iio_trigger *trig,
bool state)
int adis16209_probe_trigger(struct iio_dev *indio_dev)
void adis16209_remove_trigger(struct iio_dev *indio_dev)
