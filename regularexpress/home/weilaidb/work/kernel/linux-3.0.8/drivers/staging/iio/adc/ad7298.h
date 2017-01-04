#define IIO_ADC_AD7298_H_
#define AD7298_WRITE	(1 << 15)
#define AD7298_REPEAT	(1 << 14)
#define AD7298_CH(x)	(1 << (13 - (x)))
#define AD7298_TSENSE	(1 << 5)
#define AD7298_EXTREF	(1 << 2)
#define AD7298_TAVG	(1 << 1)
#define AD7298_PDD	(1 << 0)
#define AD7298_MAX_CHAN		8
#define AD7298_BITS		12
#define AD7298_STORAGE_BITS	16
#define AD7298_INTREF_mV	2500
#define AD7298_CH_TEMP		9
#define RES_MASK(bits)	((1 << (bits)) - 1)
struct ad7298_platform_data ;
struct ad7298_state ;
int ad7298_scan_from_ring(struct iio_dev *indio_dev, long ch);
int ad7298_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void ad7298_ring_cleanup(struct iio_dev *indio_dev);
static inline int ad7298_scan_from_ring(struct iio_dev *indio_dev, long ch)
static inline int
ad7298_register_ring_funcs_and_init(struct iio_dev *indio_dev)
static inline void ad7298_ring_cleanup(struct iio_dev *indio_dev)
