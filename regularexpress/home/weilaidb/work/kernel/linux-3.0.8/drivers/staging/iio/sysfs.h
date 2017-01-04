#define _INDUSTRIAL_IO_SYSFS_H_
struct iio_dev_attr ;
#define to_iio_dev_attr(_dev_attr)				\
container_of(_dev_attr, struct iio_dev_attr, dev_attr)
ssize_t iio_read_const_attr(struct device *dev,
struct device_attribute *attr,
char *len);
struct iio_const_attr ;
#define to_iio_const_attr(_dev_attr) \
container_of(_dev_attr, struct iio_const_attr, dev_attr)
#define IIO_ATTR(_name, _mode, _show, _store, _addr)		\
#define IIO_DEVICE_ATTR(_name, _mode, _show, _store, _addr)	\
struct iio_dev_attr iio_dev_attr_##_name		\
= IIO_ATTR(_name, _mode, _show, _store, _addr)
#define IIO_DEVICE_ATTR_NAMED(_vname, _name, _mode, _show, _store, _addr) \
struct iio_dev_attr iio_dev_attr_##_vname			\
= IIO_ATTR(_name, _mode, _show, _store, _addr)
#define IIO_DEVICE_ATTR_2(_name, _mode, _show, _store, _addr, _val2)	\
struct iio_dev_attr iio_dev_attr_##_name			\
= IIO_ATTR_2(_name, _mode, _show, _store, _addr, _val2)
#define IIO_CONST_ATTR(_name, _string)					\
struct iio_const_attr iio_const_attr_##_name			\
=
#define IIO_CONST_ATTR_NAMED(_vname, _name, _string)			\
struct iio_const_attr iio_const_attr_##_vname			\
=
#define IIO_DEV_ATTR_REV(_show)			\
IIO_DEVICE_ATTR(revision, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_RESET(_store)			\
IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, _store, 0)
#define IIO_CONST_ATTR_NAME(_string)				\
IIO_CONST_ATTR(name, _string)
#define IIO_DEV_ATTR_SAMP_FREQ(_mode, _show, _store)			\
IIO_DEVICE_ATTR(sampling_frequency, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_AVAIL_SAMP_FREQ(_show)				\
IIO_DEVICE_ATTR(available_sampling_frequency, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_SAMP_FREQ_AVAIL(_show)				\
IIO_DEVICE_ATTR(sampling_frequency_available, S_IRUGO, _show, NULL, 0)
#define IIO_CONST_ATTR_SAMP_FREQ_AVAIL(_string)			\
IIO_CONST_ATTR(sampling_frequency_available, _string)
#define IIO_DEV_ATTR_SW_RING_ENABLE(_show, _store)			\
IIO_DEVICE_ATTR(sw_ring_enable, S_IRUGO | S_IWUSR, _show, _store, 0)
#define IIO_DEV_ATTR_HW_RING_ENABLE(_show, _store)			\
IIO_DEVICE_ATTR(hw_ring_enable, S_IRUGO | S_IWUSR, _show, _store, 0)
#define IIO_DEV_ATTR_TEMP_RAW(_show)			\
IIO_DEVICE_ATTR(temp_raw, S_IRUGO, _show, NULL, 0)
#define IIO_CONST_ATTR_TEMP_OFFSET(_string)		\
IIO_CONST_ATTR(temp_offset, _string)
#define IIO_CONST_ATTR_TEMP_SCALE(_string)		\
IIO_CONST_ATTR(temp_scale, _string)
#define IIO_EV_CLASS_IN			IIO_IN
#define IIO_EV_CLASS_IN_DIFF		IIO_IN_DIFF
#define IIO_EV_CLASS_ACCEL		IIO_ACCEL
#define IIO_EV_CLASS_GYRO		IIO_GYRO
#define IIO_EV_CLASS_MAGN		IIO_MAGN
#define IIO_EV_CLASS_LIGHT		IIO_LIGHT
#define IIO_EV_CLASS_PROXIMITY		IIO_PROXIMITY
#define IIO_EV_CLASS_TEMP		IIO_TEMP
#define IIO_EV_MOD_X			IIO_MOD_X
#define IIO_EV_MOD_Y			IIO_MOD_Y
#define IIO_EV_MOD_Z			IIO_MOD_Z
#define IIO_EV_MOD_X_AND_Y		IIO_MOD_X_AND_Y
#define IIO_EV_MOD_X_ANX_Z		IIO_MOD_X_AND_Z
#define IIO_EV_MOD_Y_AND_Z		IIO_MOD_Y_AND_Z
#define IIO_EV_MOD_X_AND_Y_AND_Z	IIO_MOD_X_AND_Y_AND_Z
#define IIO_EV_MOD_X_OR_Y		IIO_MOD_X_OR_Y
#define IIO_EV_MOD_X_OR_Z		IIO_MOD_X_OR_Z
#define IIO_EV_MOD_Y_OR_Z		IIO_MOD_Y_OR_Z
#define IIO_EV_MOD_X_OR_Y_OR_Z		IIO_MOD_X_OR_Y_OR_Z
#define IIO_EV_TYPE_THRESH		0
#define IIO_EV_TYPE_MAG			1
#define IIO_EV_TYPE_ROC			2
#define IIO_EV_DIR_EITHER		0
#define IIO_EV_DIR_RISING		1
#define IIO_EV_DIR_FALLING		2
#define IIO_EV_TYPE_MAX 8
#define IIO_EV_BIT(type, direction)			\
(1 << (type*IIO_EV_TYPE_MAX + direction))
#define IIO_EVENT_CODE(channelclass, orient_bit, number,		\
modifier, type, direction)			\
(channelclass | (orient_bit << 8) | ((number) << 9) |		\
((modifier) << 13) | ((type) << 16) | ((direction) << 24))
#define IIO_MOD_EVENT_CODE(channelclass, number, modifier,		\
type, direction)				\
IIO_EVENT_CODE(channelclass, 1, number, modifier, type, direction)
#define IIO_UNMOD_EVENT_CODE(channelclass, number, type, direction)	\
IIO_EVENT_CODE(channelclass, 0, number, 0, type, direction)
#define IIO_BUFFER_EVENT_CODE(code)		\
(IIO_EV_CLASS_BUFFER | (code << 8))
#define IIO_EVENT_CODE_EXTRACT_DIR(mask) ((mask >> 24) & 0xf)
#define IIO_EVENT_CODE_EXTRACT_NUM(mask) ((mask >> 9) & 0x0f)
#define IIO_EVENT_CODE_EXTRACT_MODIFIER(mask) ((mask >> 13) & 0x7)
