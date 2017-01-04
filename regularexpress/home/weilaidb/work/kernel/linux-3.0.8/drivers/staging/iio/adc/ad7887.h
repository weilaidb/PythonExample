#define IIO_ADC_AD7887_H_
#define AD7887_REF_DIS		(1 << 5)
#define AD7887_DUAL		(1 << 4)
#define AD7887_CH_AIN1		(1 << 3)
#define AD7887_CH_AIN0		(0 << 3)
#define AD7887_PM_MODE1		(0)
#define AD7887_PM_MODE2		(1)
#define AD7887_PM_MODE3		(2)
#define AD7887_PM_MODE4		(3)
enum ad7887_channels ;
#define RES_MASK(bits)	((1 << (bits)) - 1)
struct ad7887_platform_data ;
struct ad7887_chip_info ;
struct ad7887_state ;
enum ad7887_supported_device_ids ;
int ad7887_scan_from_ring(struct ad7887_state *st, long mask);
int ad7887_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void ad7887_ring_cleanup(struct iio_dev *indio_dev);
static inline int ad7887_scan_from_ring(struct ad7887_state *st, long mask)
static inline int
ad7887_register_ring_funcs_and_init(struct iio_dev *indio_dev)
static inline void ad7887_ring_cleanup(struct iio_dev *indio_dev)
