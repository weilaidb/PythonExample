static irqreturn_t adis16240_data_rdy_trig_poll(int irq, void *trig)
static int adis16240_data_rdy_trigger_set_state(struct iio_trigger *trig,
bool state)
int adis16240_probe_trigger(struct iio_dev *indio_dev)
void adis16240_remove_trigger(struct iio_dev *indio_dev)
