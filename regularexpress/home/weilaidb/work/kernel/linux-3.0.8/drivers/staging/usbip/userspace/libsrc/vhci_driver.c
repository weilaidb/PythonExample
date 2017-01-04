static const char vhci_driver_name[] = "vhci_hcd";
struct usbip_vhci_driver *vhci_driver;
static struct usbip_imported_device *imported_device_init(struct usbip_imported_device *idev, char *busid)
static int parse_status(char *value)
static int check_usbip_device(struct sysfs_class_device *cdev)
static int search_class_for_usbip_device(char *cname)
static int refresh_class_device_list(void)
static int refresh_imported_device_list(void)
static int get_nports(void)
static int get_hc_busid(char *sysfs_mntpath, char *hc_busid)
int usbip_vhci_driver_open(void)
void usbip_vhci_driver_close()
int usbip_vhci_refresh_device_list(void)
int usbip_vhci_get_free_port(void)
int usbip_vhci_attach_device2(uint8_t port, int sockfd, uint32_t devid,
uint32_t speed)
static unsigned long get_devid(uint8_t busnum, uint8_t devnum)
int usbip_vhci_attach_device(uint8_t port, int sockfd, uint8_t busnum,
uint8_t devnum, uint32_t speed)
int usbip_vhci_detach_device(uint8_t port)
