static const char version[] = PACKAGE_STRING;
static int get_interface_number(char *path)
static struct sysfs_device *open_usb_interface(struct usb_device *udev, int i)
#define MAX_BUFF 100
static int record_connection(char *host, char *port, char *busid, int rhport)
static int read_record(int rhport, char *host, char *port, char *busid)
int usbip_vhci_imported_device_dump(struct usbip_imported_device *idev)
static int query_exported_devices(int sockfd)
static int import_device(int sockfd, struct usb_device *udev)
static int query_import_device(int sockfd, char *busid)
static int attach_device(char *host, char *busid)
static int detach_port(char *port)
static int show_exported_devices(char *host)
static int attach_exported_devices(char *host, int sockfd)
static int attach_devices_all(char *host)
const char help_message[] = "\
Usage: usbip [options]				\n\
-a, --attach [host] [bus_id]		\n\
Attach a remote USB device.	\n\
\n\
-x, --attachall [host]		\n\
Attach all remote USB devices on the specific host.	\n\
\n\
-d, --detach [ports]			\n\
Detach an imported USB device.	\n\
\n\
-l, --list [hosts]			\n\
List exported USB devices.	\n\
\n\
-p, --port				\n\
List virtual USB port status. 	\n\
\n\
-D, --debug				\n\
Print debugging information.	\n\
\n\
-v, --version				\n\
Show version.			\n\
\n\
-h, --help 				\n\
Print this help.		\n";
static void show_help(void)
static int show_port_status(void)
#define _GNU_SOURCE
static const struct option longopts[] = ;
int main(int argc, char *argv[])
