#define _INDUSTRIAL_IO_H_
#define IIO_BUSY_BIT_POS 1
enum iio_chan_type ;
#define IIO_MOD_X			0
#define IIO_MOD_LIGHT_BOTH		0
#define IIO_MOD_Y			1
#define IIO_MOD_LIGHT_IR		1
#define IIO_MOD_Z			2
#define IIO_MOD_X_AND_Y			3
#define IIO_MOD_X_ANX_Z			4
#define IIO_MOD_Y_AND_Z			5
#define IIO_MOD_X_AND_Y_AND_Z		6
#define IIO_MOD_X_OR_Y			7
#define IIO_MOD_X_OR_Z			8
#define IIO_MOD_Y_OR_Z			9
#define IIO_MOD_X_OR_Y_OR_Z		10
enum iio_chan_info_enum ;
struct iio_chan_spec ;
void __iio_device_attr_deinit(struct device_attribute *dev_attr);
int __iio_device_attr_init(struct device_attribute *dev_attr,
const char *postfix,
struct iio_chan_spec const *chan,
ssize_t (*readfunc)(struct device *dev,
struct device_attribute *attr,
char *buf),
ssize_t (*writefunc)(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len),
bool generic);
#define IIO_ST(si, rb, sb, sh)						\
#define IIO_CHAN(_type, _mod, _indexed, _proc, _name, _chan, _chan2,	\
_inf_mask, _address, _si, _stype, _event_mask)		\
#define IIO_CHAN_SOFT_TIMESTAMP(_si)					\
int __iio_add_chan_devattr(const char *postfix,
const char *group,
struct iio_chan_spec const *chan,
ssize_t (*func)(struct device *dev,
struct device_attribute *attr,
char *buf),
ssize_t (*writefunc)(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len),
int mask,
bool generic,
struct device *dev,
struct list_head *attr_list);
static inline s64 iio_get_time_ns(void)
#define INDIO_DIRECT_MODE		0x01
#define INDIO_RING_TRIGGERED		0x02
#define INDIO_RING_HARDWARE_BUFFER	0x08
#define INDIO_ALL_RING_MODES (INDIO_RING_TRIGGERED | INDIO_RING_HARDWARE_BUFFER)
#define IIO_VAL_INT 1
#define IIO_VAL_INT_PLUS_MICRO 2
struct iio_info ;
struct iio_dev ;
int iio_device_register(struct iio_dev *dev_info);
void iio_device_unregister(struct iio_dev *dev_info);
int iio_push_event(struct iio_dev *dev_info,
int ev_line,
int ev_code,
s64 timestamp);
#define IIO_SIGNED(a) -(a)
#define IIO_UNSIGNED(a) (a)
extern dev_t iio_devt;
extern struct bus_type iio_bus_type;
static inline void iio_put_device(struct iio_dev *dev)
;
static inline struct iio_dev *to_iio_dev(struct device *d)
;
static inline void *iio_dev_get_devdata(struct iio_dev *d)
#define IIO_ALIGN L1_CACHE_BYTES
struct iio_dev *iio_allocate_device(int sizeof_priv);
static inline void *iio_priv(const struct iio_dev *dev)
static inline struct iio_dev *iio_priv_to_dev(void *priv)
void iio_free_device(struct iio_dev *dev);
void iio_put(void);
void iio_get(void);
int iio_device_get_chrdev_minor(void);
void iio_device_free_chrdev_minor(int val);
static inline bool iio_ring_enabled(struct iio_dev *dev_info)
;
struct ida;
int iio_get_new_ida_val(struct ida *this_ida);
void iio_free_ida_val(struct ida *this_ida, int id);
