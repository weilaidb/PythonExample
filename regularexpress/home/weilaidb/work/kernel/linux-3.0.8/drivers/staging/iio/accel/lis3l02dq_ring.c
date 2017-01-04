static inline u16 combine_8_to_16(u8 lower, u8 upper)
irqreturn_t lis3l02dq_data_rdy_trig_poll(int irq, void *private)
ssize_t lis3l02dq_read_accel_from_ring(struct iio_ring_buffer *ring,
int index,
int *val)
static const u8 read_all_tx_array[] = ;
static int lis3l02dq_read_all(struct iio_dev *indio_dev, u8 *rx_array)
static int lis3l02dq_get_ring_element(struct iio_dev *indio_dev,
u8 *buf)
static irqreturn_t lis3l02dq_trigger_handler(int irq, void *p)
static int
__lis3l02dq_write_data_ready_config(struct device *dev, bool state)
static int lis3l02dq_data_rdy_trigger_set_state(struct iio_trigger *trig,
bool state)
static int lis3l02dq_trig_try_reen(struct iio_trigger *trig)
int lis3l02dq_probe_trigger(struct iio_dev *indio_dev)
void lis3l02dq_remove_trigger(struct iio_dev *indio_dev)
void lis3l02dq_unconfigure_ring(struct iio_dev *indio_dev)
static int lis3l02dq_ring_postenable(struct iio_dev *indio_dev)
static int lis3l02dq_ring_predisable(struct iio_dev *indio_dev)
static const struct iio_ring_setup_ops lis3l02dq_ring_setup_ops = ;
int lis3l02dq_configure_ring(struct iio_dev *indio_dev)
