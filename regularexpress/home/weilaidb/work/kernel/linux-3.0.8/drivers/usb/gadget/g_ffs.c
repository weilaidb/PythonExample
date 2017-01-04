#define pr_fmt(fmt) "g_ffs: " fmt
#if defined CONFIG_USB_FUNCTIONFS_ETH || defined CONFIG_USB_FUNCTIONFS_RNDIS
#  if defined USB_ETH_RNDIS
#    undef USB_ETH_RNDIS
#  endif
#  ifdef CONFIG_USB_FUNCTIONFS_RNDIS
#    define USB_ETH_RNDIS y
#  endif
#  include "f_ecm.c"
#  include "f_subset.c"
#  ifdef USB_ETH_RNDIS
#    include "f_rndis.c"
#    include "rndis.c"
#  endif
#  include "u_ether.c"
static u8 gfs_hostaddr[ETH_ALEN];
#  ifdef CONFIG_USB_FUNCTIONFS_ETH
static int eth_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN]);
#  endif
#  define gether_cleanup() do  while (0)
#  define gether_setup(gadget, hostaddr)   ((int)0)
#  define gfs_hostaddr NULL
#define DRIVER_NAME	"g_ffs"
#define DRIVER_DESC	"USB Function Filesystem"
#define DRIVER_VERSION	"24 Aug 2004"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Michal Nazarewicz");
MODULE_LICENSE("GPL");
#define GFS_VENDOR_ID	0x1d6b
#define GFS_PRODUCT_ID	0x0105
static struct usb_device_descriptor gfs_dev_desc = ;
module_param_named(bDeviceClass,    gfs_dev_desc.bDeviceClass,    byte,   0644);
MODULE_PARM_DESC(bDeviceClass, "USB Device class");
module_param_named(bDeviceSubClass, gfs_dev_desc.bDeviceSubClass, byte,   0644);
MODULE_PARM_DESC(bDeviceSubClass, "USB Device subclass");
module_param_named(bDeviceProtocol, gfs_dev_desc.bDeviceProtocol, byte,   0644);
MODULE_PARM_DESC(bDeviceProtocol, "USB Device protocol");
static const struct usb_descriptor_header *gfs_otg_desc[] = ;
static struct usb_string gfs_strings[] = ;
static struct usb_gadget_strings *gfs_dev_strings[] = ;
struct gfs_configuration  gfs_configurations[] = ;
static int gfs_bind(struct usb_composite_dev *cdev);
static int gfs_unbind(struct usb_composite_dev *cdev);
static int gfs_do_config(struct usb_configuration *c);
static struct usb_composite_driver gfs_driver = ;
static struct ffs_data *gfs_ffs_data;
static unsigned long gfs_registered;
static int  gfs_init(void)
module_init(gfs_init);
static void  gfs_exit(void)
module_exit(gfs_exit);
static int functionfs_ready_callback(struct ffs_data *ffs)
static void functionfs_closed_callback(struct ffs_data *ffs)
static int functionfs_check_dev_callback(const char *dev_name)
static int gfs_bind(struct usb_composite_dev *cdev)
static int gfs_unbind(struct usb_composite_dev *cdev)
static int gfs_do_config(struct usb_configuration *c)
static int eth_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])
