#define __LINUX_FUNCTIONFS_H__ 1
enum ;
struct usb_endpoint_descriptor_no_audio  __attribute__((packed));
struct usb_functionfs_descs_head  __attribute__((packed));
struct usb_functionfs_strings_head  __attribute__((packed));
enum usb_functionfs_event_type ;
struct usb_functionfs_event  __attribute__((packed));
#define	FUNCTIONFS_FIFO_STATUS	_IO('g', 1)
#define	FUNCTIONFS_FIFO_FLUSH	_IO('g', 2)
#define	FUNCTIONFS_CLEAR_HALT	_IO('g', 3)
#define	FUNCTIONFS_INTERFACE_REVMAP	_IO('g', 128)
#define	FUNCTIONFS_ENDPOINT_REVMAP	_IO('g', 129)
struct ffs_data;
struct usb_composite_dev;
struct usb_configuration;
static int  functionfs_init(void) __attribute__((warn_unused_result));
static void functionfs_cleanup(void);
static int functionfs_bind(struct ffs_data *ffs, struct usb_composite_dev *cdev)
__attribute__((warn_unused_result, nonnull));
static void functionfs_unbind(struct ffs_data *ffs)
__attribute__((nonnull));
static int functionfs_bind_config(struct usb_composite_dev *cdev,
struct usb_configuration *c,
struct ffs_data *ffs)
__attribute__((warn_unused_result, nonnull));
static int functionfs_ready_callback(struct ffs_data *ffs)
__attribute__((warn_unused_result, nonnull));
static void functionfs_closed_callback(struct ffs_data *ffs)
__attribute__((nonnull));
static int functionfs_check_dev_callback(const char *dev_name)
__attribute__((warn_unused_result, nonnull));
