#define IIO_ADC_AD7476_H_
#define RES_MASK(bits)	((1 << (bits)) - 1)
struct ad7476_platform_data ;
struct ad7476_chip_info ;
struct ad7476_state ;
enum ad7476_supported_device_ids ;
int ad7476_scan_from_ring(struct ad7476_state *st);
int ad7476_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void ad7476_ring_cleanup(struct iio_dev *indio_dev);
static inline int ad7476_scan_from_ring(struct ad7476_state *st)
static inline int
ad7476_register_ring_funcs_and_init(struct iio_dev *indio_dev)
static inline void ad7476_ring_cleanup(struct iio_dev *indio_dev)
