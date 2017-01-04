#define __LINUX_USB_GADGETFS_H
enum usb_gadgetfs_event_type ;
struct usb_gadgetfs_event ;
#define	GADGETFS_FIFO_STATUS	_IO('g', 1)
#define	GADGETFS_FIFO_FLUSH	_IO('g', 2)
#define	GADGETFS_CLEAR_HALT	_IO('g', 3)
