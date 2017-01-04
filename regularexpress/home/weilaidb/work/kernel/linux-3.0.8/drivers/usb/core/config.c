#define USB_MAXALTSETTING		128
#define USB_MAXENDPOINTS		30
#define USB_MAXCONFIG			8
static inline const char *plural(int n)
static int find_next_descriptor(unsigned char *buffer, int size,
int dt1, int dt2, int *num_skipped)
static void usb_parse_ss_endpoint_companion(struct device *ddev, int cfgno,
int inum, int asnum, struct usb_host_endpoint *ep,
unsigned char *buffer, int size)
static int usb_parse_endpoint(struct device *ddev, int cfgno, int inum,
int asnum, struct usb_host_interface *ifp, int num_ep,
unsigned char *buffer, int size)
void usb_release_interface_cache(struct kref *ref)
static int usb_parse_interface(struct device *ddev, int cfgno,
struct usb_host_config *config, unsigned char *buffer, int size,
u8 inums[], u8 nalts[])
static int usb_parse_configuration(struct usb_device *dev, int cfgidx,
struct usb_host_config *config, unsigned char *buffer, int size)
void usb_destroy_configuration(struct usb_device *dev)
int usb_get_configuration(struct usb_device *dev)
