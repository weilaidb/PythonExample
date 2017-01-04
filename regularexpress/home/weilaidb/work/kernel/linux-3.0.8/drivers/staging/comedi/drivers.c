#define _GNU_SOURCE
#define __NO_VERSION__
static int postconfig(struct comedi_device *dev);
static int insn_rw_emulate_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static void *comedi_recognize(struct comedi_driver *driv, const char *name);
static void comedi_report_boards(struct comedi_driver *driv);
static int poll_invalid(struct comedi_device *dev, struct comedi_subdevice *s);
struct comedi_driver *comedi_drivers;
static void cleanup_device(struct comedi_device *dev)
static void __comedi_device_detach(struct comedi_device *dev)
void comedi_device_detach(struct comedi_device *dev)
int comedi_device_attach(struct comedi_device *dev, struct comedi_devconfig *it)
int comedi_driver_register(struct comedi_driver *driver)
EXPORT_SYMBOL(comedi_driver_register);
int comedi_driver_unregister(struct comedi_driver *driver)
EXPORT_SYMBOL(comedi_driver_unregister);
static int postconfig(struct comedi_device *dev)
static void *comedi_recognize(struct comedi_driver *driv, const char *name)
static void comedi_report_boards(struct comedi_driver *driv)
static int poll_invalid(struct comedi_device *dev, struct comedi_subdevice *s)
int insn_inval(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int insn_rw_emulate_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static inline unsigned long uvirt_to_kva(pgd_t *pgd, unsigned long adr)
static inline unsigned long kvirt_to_kva(unsigned long adr)
int comedi_buf_alloc(struct comedi_device *dev, struct comedi_subdevice *s,
unsigned long new_size)
static unsigned int comedi_buf_munge(struct comedi_async *async,
unsigned int num_bytes)
unsigned int comedi_buf_write_n_available(struct comedi_async *async)
unsigned int comedi_buf_write_alloc(struct comedi_async *async,
unsigned int nbytes)
EXPORT_SYMBOL(comedi_buf_write_alloc);
unsigned int comedi_buf_write_alloc_strict(struct comedi_async *async,
unsigned int nbytes)
unsigned comedi_buf_write_free(struct comedi_async *async, unsigned int nbytes)
EXPORT_SYMBOL(comedi_buf_write_free);
unsigned comedi_buf_read_alloc(struct comedi_async *async, unsigned nbytes)
EXPORT_SYMBOL(comedi_buf_read_alloc);
unsigned comedi_buf_read_free(struct comedi_async *async, unsigned int nbytes)
EXPORT_SYMBOL(comedi_buf_read_free);
void comedi_buf_memcpy_to(struct comedi_async *async, unsigned int offset,
const void *data, unsigned int num_bytes)
EXPORT_SYMBOL(comedi_buf_memcpy_to);
void comedi_buf_memcpy_from(struct comedi_async *async, unsigned int offset,
void *dest, unsigned int nbytes)
EXPORT_SYMBOL(comedi_buf_memcpy_from);
unsigned int comedi_buf_read_n_available(struct comedi_async *async)
EXPORT_SYMBOL(comedi_buf_read_n_available);
int comedi_buf_get(struct comedi_async *async, short *x)
EXPORT_SYMBOL(comedi_buf_get);
int comedi_buf_put(struct comedi_async *async, short x)
EXPORT_SYMBOL(comedi_buf_put);
void comedi_reset_async_buf(struct comedi_async *async)
static int comedi_auto_config(struct device *hardware_device,
const char *board_name, const int *options,
unsigned num_options)
static void comedi_auto_unconfig(struct device *hardware_device)
int comedi_pci_auto_config(struct pci_dev *pcidev, const char *board_name)
EXPORT_SYMBOL_GPL(comedi_pci_auto_config);
void comedi_pci_auto_unconfig(struct pci_dev *pcidev)
EXPORT_SYMBOL_GPL(comedi_pci_auto_unconfig);
int comedi_usb_auto_config(struct usb_device *usbdev, const char *board_name)
EXPORT_SYMBOL_GPL(comedi_usb_auto_config);
void comedi_usb_auto_unconfig(struct usb_device *usbdev)
EXPORT_SYMBOL_GPL(comedi_usb_auto_unconfig);
