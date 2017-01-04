struct iio_hw_ring_buffer ;
#define iio_to_hw_ring_buf(r) container_of(r, struct iio_hw_ring_buffer, buf)
