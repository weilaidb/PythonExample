#define _IIO_CHRDEV_H_
struct iio_dev;
struct iio_handler ;
#define iio_cdev_to_handler(cd)				\
container_of(cd, struct iio_handler, chrdev)
struct iio_event_data ;
struct iio_detected_event_list ;
struct iio_event_interface ;
