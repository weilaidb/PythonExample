#define _IIO_RING_SW_H_
extern const struct iio_ring_access_funcs ring_sw_access_funcs;
struct iio_ring_buffer *iio_sw_rb_allocate(struct iio_dev *indio_dev);
void iio_sw_rb_free(struct iio_ring_buffer *ring);
