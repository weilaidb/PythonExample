#define IO_TABLES_H
static const struct usb_device_id edgeport_2port_id_table[] = ;
static const struct usb_device_id edgeport_4port_id_table[] = ;
static const struct usb_device_id edgeport_8port_id_table[] = ;
static const struct usb_device_id Epic_port_id_table[] = ;
static const struct usb_device_id id_table_combined[] = ;
MODULE_DEVICE_TABLE(usb, id_table_combined);
static struct usb_driver io_driver = ;
static struct usb_serial_driver edgeport_2port_device = ;
static struct usb_serial_driver edgeport_4port_device = ;
static struct usb_serial_driver edgeport_8port_device = ;
static struct usb_serial_driver epic_device = ;
