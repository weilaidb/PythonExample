#define _DEBUG_H_
#define USB_STORAGE "usb-storage: "
void usb_stor_show_command(struct scsi_cmnd *srb);
void usb_stor_show_sense( unsigned char key,
unsigned char asc, unsigned char ascq );
#define US_DEBUGP(x...) printk( KERN_DEBUG USB_STORAGE x )
#define US_DEBUGPX(x...) printk( x )
#define US_DEBUG(x) x
#define US_DEBUGP(x...)
#define US_DEBUGPX(x...)
#define US_DEBUG(x)
