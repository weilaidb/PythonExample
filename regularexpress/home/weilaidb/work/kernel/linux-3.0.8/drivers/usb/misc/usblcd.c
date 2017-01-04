#define DRIVER_VERSION "USBLCD Driver Version 1.05"
#define USBLCD_MINOR		144
#define IOCTL_GET_HARD_VERSION	1
#define IOCTL_GET_DRV_VERSION	2
static DEFINE_MUTEX(lcd_mutex);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE (usb, id_table);
static DEFINE_MUTEX(open_disc_mutex);
struct usb_lcd ;
#define to_lcd_dev(d) container_of(d, struct usb_lcd, kref)
#define USB_LCD_CONCURRENT_WRITES	5
static struct usb_driver lcd_driver;
static void lcd_delete(struct kref *kref)
static int lcd_open(struct inode *inode, struct file *file)
static int lcd_release(struct inode *inode, struct file *file)
static ssize_t lcd_read(struct file *file, char __user * buffer, size_t count, loff_t *ppos)
static long lcd_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static void lcd_write_bulk_callback(struct urb *urb)
static ssize_t lcd_write(struct file *file, const char __user * user_buffer, size_t count, loff_t *ppos)
static const struct file_operations lcd_fops = ;
static struct usb_class_driver lcd_class = ;
static int lcd_probe(struct usb_interface *interface, const struct usb_device_id *id)
static void lcd_draw_down(struct usb_lcd *dev)
static int lcd_suspend(struct usb_interface *intf, pm_message_t message)
static int lcd_resume (struct usb_interface *intf)
static void lcd_disconnect(struct usb_interface *interface)
static struct usb_driver lcd_driver = ;
static int __init usb_lcd_init(void)
static void __exit usb_lcd_exit(void)
module_init(usb_lcd_init);
module_exit(usb_lcd_exit);
MODULE_AUTHOR("Georges Toth <g.toth@e-biz.lu>");
MODULE_DESCRIPTION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
