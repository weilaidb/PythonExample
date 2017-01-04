#define VARIAX_SYSEX_CODE 7
#define VARIAX_SYSEX_PARAM 0x3b
#define VARIAX_SYSEX_ACTIVATE 0x2a
#define VARIAX_MODEL_HEADER_LENGTH 7
#define VARIAX_MODEL_MESSAGE_LENGTH 199
#define VARIAX_OFFSET_ACTIVATE 7
static const char variax_init_model[] = ;
static const char variax_init_version[] = ;
static const char variax_init_done[] = ;
static const char variax_activate[] = ;
static const char variax_request_bank[] = ;
static const char variax_request_model1[] = ;
static const char variax_request_model2[] = ;
static int variax_create_files2(struct device *dev);
static void variax_startup2(unsigned long data);
static void variax_startup4(unsigned long data);
static void variax_startup5(unsigned long data);
static void variax_decode(const unsigned char *raw_data, unsigned char *data,
int raw_size)
static void variax_activate_async(struct usb_line6_variax *variax, int a)
static void variax_startup1(struct usb_line6_variax *variax)
static void variax_startup2(unsigned long data)
static void variax_startup3(struct usb_line6_variax *variax)
static void variax_startup4(unsigned long data)
static void variax_startup5(unsigned long data)
static void variax_startup6(struct usb_line6_variax *variax)
static void variax_startup7(struct work_struct *work)
void line6_variax_process_message(struct usb_line6_variax *variax)
static ssize_t variax_get_volume(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_set_volume(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t variax_get_model(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_set_model(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t variax_get_active(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_set_active(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t variax_get_tone(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_set_tone(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_string(char *buf, const char *data, int length)
static ssize_t variax_get_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_get_bank(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_get_dump(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t variax_get_guitar(struct device *dev,
struct device_attribute *attr, char *buf)
static char *variax_alloc_sysex_buffer(struct usb_line6_variax *variax,
int code, int size)
static ssize_t variax_set_raw2(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(model, S_IWUSR | S_IRUGO, variax_get_model,
variax_set_model);
static DEVICE_ATTR(volume, S_IWUSR | S_IRUGO, variax_get_volume,
variax_set_volume);
static DEVICE_ATTR(tone, S_IWUSR | S_IRUGO, variax_get_tone, variax_set_tone);
static DEVICE_ATTR(name, S_IRUGO, variax_get_name, line6_nop_write);
static DEVICE_ATTR(bank, S_IRUGO, variax_get_bank, line6_nop_write);
static DEVICE_ATTR(dump, S_IRUGO, variax_get_dump, line6_nop_write);
static DEVICE_ATTR(active, S_IWUSR | S_IRUGO, variax_get_active,
variax_set_active);
static DEVICE_ATTR(guitar, S_IRUGO, variax_get_guitar, line6_nop_write);
static DEVICE_ATTR(raw, S_IWUSR, line6_nop_read, line6_set_raw);
static DEVICE_ATTR(raw2, S_IWUSR, line6_nop_read, variax_set_raw2);
static void variax_destruct(struct usb_interface *interface)
static int variax_create_files2(struct device *dev)
static int variax_try_init(struct usb_interface *interface,
struct usb_line6_variax *variax)
int line6_variax_init(struct usb_interface *interface,
struct usb_line6_variax *variax)
void line6_variax_disconnect(struct usb_interface *interface)
