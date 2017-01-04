#define	TEST_CASES	30
struct usbtest_param ;
#define USBTEST_REQUEST	_IOWR('U', 100, struct usbtest_param)
#define USB_DT_DEVICE			0x01
#define USB_DT_INTERFACE		0x04
#define USB_CLASS_PER_INTERFACE		0
#define USB_CLASS_VENDOR_SPEC		0xff
struct usb_device_descriptor  __attribute__ ((packed));
struct usb_interface_descriptor  __attribute__ ((packed));
enum usb_device_speed ;
static char *speed (enum usb_device_speed s)
struct testdev ;
static struct testdev		*testdevs;
static int testdev_ffs_ifnum(FILE *fd)
static int testdev_ifnum(FILE *fd)
static int find_testdev(const char *name, const struct stat *sb, int flag)
static int
usbdev_ioctl (int fd, int ifno, unsigned request, void *param)
static void *handle_testdev (void *arg)
static const char *usbfs_dir_find(void)
static int parse_num(unsigned *num, const char *str)
int main (int argc, char **argv)
