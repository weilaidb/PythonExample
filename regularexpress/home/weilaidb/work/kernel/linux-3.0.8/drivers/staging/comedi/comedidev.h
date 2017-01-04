#define _COMEDIDEV_H
#define DPRINTK(format, args...)	do  while (0)
#define COMEDI_VERSION(a, b, c) (((a) << 16) + ((b) << 8) + (c))
#define COMEDI_VERSION_CODE COMEDI_VERSION(COMEDI_MAJORVERSION, \
COMEDI_MINORVERSION, COMEDI_MICROVERSION)
#define COMEDI_RELEASE VERSION
#define PCI_VENDOR_ID_ADLINK		0x144a
#define PCI_VENDOR_ID_ICP		0x104c
#define PCI_VENDOR_ID_CONTEC		0x1221
#define COMEDI_NUM_MINORS 0x100
#define COMEDI_NUM_BOARD_MINORS 0x30
#define COMEDI_FIRST_SUBDEVICE_MINOR COMEDI_NUM_BOARD_MINORS
#define COMEDI_DEVICE_CREATE(cs, parent, devt, drvdata, device, fmt...) \
device_create(cs, ((parent) ? (parent) : (device)), devt, drvdata, fmt)
struct comedi_subdevice ;
struct comedi_buf_page ;
struct comedi_async ;
struct comedi_driver ;
struct comedi_device ;
struct comedi_device_file_info ;
extern int comedi_debug;
static const int comedi_debug;
void comedi_event(struct comedi_device *dev, struct comedi_subdevice *s);
void comedi_error(const struct comedi_device *dev, const char *s);
enum comedi_minor_bits ;
static const unsigned COMEDI_SUBDEVICE_MINOR_SHIFT = 4;
static const unsigned COMEDI_SUBDEVICE_MINOR_OFFSET = 1;
struct comedi_device_file_info *comedi_get_device_file_info(unsigned minor);
static inline struct comedi_subdevice *comedi_get_read_subdevice(
const struct comedi_device_file_info *info)
static inline struct comedi_subdevice *comedi_get_write_subdevice(
const struct comedi_device_file_info *info)
void comedi_device_detach(struct comedi_device *dev);
int comedi_device_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
int comedi_driver_register(struct comedi_driver *);
int comedi_driver_unregister(struct comedi_driver *);
void init_polling(void);
void cleanup_polling(void);
void start_polling(struct comedi_device *);
void stop_polling(struct comedi_device *);
void comedi_proc_init(void);
void comedi_proc_cleanup(void);
static inline void comedi_proc_init(void)
static inline void comedi_proc_cleanup(void)
enum subdevice_runflags ;
int comedi_check_chanlist(struct comedi_subdevice *s,
int n,
unsigned int *chanlist);
unsigned comedi_get_subdevice_runflags(struct comedi_subdevice *s);
#define RANGE(a, b)
#define RANGE_ext(a, b)
#define RANGE_mA(a, b)
#define RANGE_unitless(a, b)
#define BIP_RANGE(a)
#define UNI_RANGE(a)
extern const struct comedi_lrange range_bipolar10;
extern const struct comedi_lrange range_bipolar5;
extern const struct comedi_lrange range_bipolar2_5;
extern const struct comedi_lrange range_unipolar10;
extern const struct comedi_lrange range_unipolar5;
extern const struct comedi_lrange range_unknown;
#define range_digital		range_unipolar5
#if __GNUC__ >= 3
#define GCC_ZERO_LENGTH_ARRAY
#define GCC_ZERO_LENGTH_ARRAY 0
struct comedi_lrange ;
static inline int alloc_subdevices(struct comedi_device *dev,
unsigned int num_subdevices)
static inline int alloc_private(struct comedi_device *dev, int size)
static inline unsigned int bytes_per_sample(const struct comedi_subdevice *subd)
static inline void comedi_set_hw_dev(struct comedi_device *dev,
struct device *hw_dev)
int comedi_buf_put(struct comedi_async *async, short x);
int comedi_buf_get(struct comedi_async *async, short *x);
unsigned int comedi_buf_write_n_available(struct comedi_async *async);
unsigned int comedi_buf_write_alloc(struct comedi_async *async,
unsigned int nbytes);
unsigned int comedi_buf_write_alloc_strict(struct comedi_async *async,
unsigned int nbytes);
unsigned comedi_buf_write_free(struct comedi_async *async, unsigned int nbytes);
unsigned comedi_buf_read_alloc(struct comedi_async *async, unsigned nbytes);
unsigned comedi_buf_read_free(struct comedi_async *async, unsigned int nbytes);
unsigned int comedi_buf_read_n_available(struct comedi_async *async);
void comedi_buf_memcpy_to(struct comedi_async *async, unsigned int offset,
const void *source, unsigned int num_bytes);
void comedi_buf_memcpy_from(struct comedi_async *async, unsigned int offset,
void *destination, unsigned int num_bytes);
static inline unsigned comedi_buf_write_n_allocated(struct comedi_async *async)
static inline unsigned comedi_buf_read_n_allocated(struct comedi_async *async)
static inline void *comedi_aux_data(int options[], int n)
int comedi_alloc_subdevice_minor(struct comedi_device *dev,
struct comedi_subdevice *s);
void comedi_free_subdevice_minor(struct comedi_subdevice *s);
int comedi_pci_auto_config(struct pci_dev *pcidev, const char *board_name);
void comedi_pci_auto_unconfig(struct pci_dev *pcidev);
struct usb_device;
int comedi_usb_auto_config(struct usb_device *usbdev, const char *board_name);
void comedi_usb_auto_unconfig(struct usb_device *usbdev);
#define CONFIG_COMEDI_PCI
#define CONFIG_COMEDI_PCI
#define CONFIG_COMEDI_PCMCIA
#define CONFIG_COMEDI_PCMCIA
