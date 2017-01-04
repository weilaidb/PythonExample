#define _DVB_USB_CINERGYT2_H_
#define DVB_USB_LOG_PREFIX "cinergyT2"
#define DRIVER_NAME "TerraTec/qanu USB2.0 Highspeed DVB-T Receiver"
extern int dvb_usb_cinergyt2_debug;
#define deb_info(args...)  dprintk(dvb_usb_cinergyt2_debug,  0x001, args)
#define deb_xfer(args...)  dprintk(dvb_usb_cinergyt2_debug,  0x002, args)
#define deb_pll(args...)   dprintk(dvb_usb_cinergyt2_debug,  0x004, args)
#define deb_ts(args...)    dprintk(dvb_usb_cinergyt2_debug,  0x008, args)
#define deb_err(args...)   dprintk(dvb_usb_cinergyt2_debug,  0x010, args)
#define deb_rc(args...)    dprintk(dvb_usb_cinergyt2_debug,  0x020, args)
#define deb_fw(args...)    dprintk(dvb_usb_cinergyt2_debug,  0x040, args)
#define deb_mem(args...)   dprintk(dvb_usb_cinergyt2_debug,  0x080, args)
#define deb_uxfer(args...) dprintk(dvb_usb_cinergyt2_debug,  0x100, args)
enum cinergyt2_ep1_cmd ;
struct dvbt_get_status_msg  __attribute__((packed));
struct dvbt_set_parameters_msg  __attribute__((packed));
extern struct dvb_frontend *cinergyt2_fe_attach(struct dvb_usb_device *d);
