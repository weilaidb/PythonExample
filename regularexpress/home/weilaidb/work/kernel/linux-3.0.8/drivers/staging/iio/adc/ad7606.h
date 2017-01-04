#define IIO_ADC_AD7606_H_
struct ad7606_platform_data ;
struct ad7606_chip_info ;
struct ad7606_state ;
struct ad7606_bus_ops ;
void ad7606_suspend(struct iio_dev *indio_dev);
void ad7606_resume(struct iio_dev *indio_dev);
struct iio_dev *ad7606_probe(struct device *dev, int irq,
void __iomem *base_address, unsigned id,
const struct ad7606_bus_ops *bops);
int ad7606_remove(struct iio_dev *indio_dev);
int ad7606_reset(struct ad7606_state *st);
enum ad7606_supported_device_ids ;
int ad7606_scan_from_ring(struct iio_dev *indio_dev, unsigned ch);
int ad7606_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void ad7606_ring_cleanup(struct iio_dev *indio_dev);
