#define DRIVER_VERSION "Version 0.1 09/26/2005"
#define DRIVER_AUTHOR "Thomas Hergenhahn@web.de http:
#define DRIVER_DESC "Driver for Siemens USB/MPI adapter"
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver siemens_usb_mpi_driver = ;
static struct usb_serial_driver siemens_usb_mpi_device = ;
static int __init siemens_usb_mpi_init(void)
static void __exit siemens_usb_mpi_exit(void)
module_init(siemens_usb_mpi_init);
module_exit(siemens_usb_mpi_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
