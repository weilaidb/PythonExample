#define _SN9C102_DEVTABLE_H_
struct sn9c102_device;
#define SN9C102_USB_DEVICE(vend, prod, bridge)                                \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE |                           \
USB_DEVICE_ID_MATCH_INT_CLASS,                         \
.idVendor = (vend),                                                   \
.idProduct = (prod),                                                  \
.bInterfaceClass = 0xff,                                              \
.driver_info = (bridge)
static const struct usb_device_id sn9c102_id_table[] = ;
extern int sn9c102_probe_hv7131d(struct sn9c102_device* cam);
extern int sn9c102_probe_hv7131r(struct sn9c102_device* cam);
extern int sn9c102_probe_mi0343(struct sn9c102_device* cam);
extern int sn9c102_probe_mi0360(struct sn9c102_device* cam);
extern int sn9c102_probe_mt9v111(struct sn9c102_device *cam);
extern int sn9c102_probe_ov7630(struct sn9c102_device* cam);
extern int sn9c102_probe_ov7660(struct sn9c102_device* cam);
extern int sn9c102_probe_pas106b(struct sn9c102_device* cam);
extern int sn9c102_probe_pas202bcb(struct sn9c102_device* cam);
extern int sn9c102_probe_tas5110c1b(struct sn9c102_device* cam);
extern int sn9c102_probe_tas5110d(struct sn9c102_device* cam);
extern int sn9c102_probe_tas5130d1b(struct sn9c102_device* cam);
