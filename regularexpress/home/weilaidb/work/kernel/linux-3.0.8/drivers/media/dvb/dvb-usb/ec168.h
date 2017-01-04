#define EC168_H
#define DVB_USB_LOG_PREFIX "ec168"
#define deb_info(args...) dprintk(dvb_usb_ec168_debug, 0x01, args)
#define deb_rc(args...)   dprintk(dvb_usb_ec168_debug, 0x02, args)
#define deb_xfer(args...) dprintk(dvb_usb_ec168_debug, 0x04, args)
#define deb_reg(args...)  dprintk(dvb_usb_ec168_debug, 0x08, args)
#define deb_i2c(args...)  dprintk(dvb_usb_ec168_debug, 0x10, args)
#define deb_fw(args...)   dprintk(dvb_usb_ec168_debug, 0x20, args)
#define ec168_debug_dump(r, t, v, i, b, l, func)
#define EC168_USB_TIMEOUT 1000
struct ec168_req ;
enum ec168_cmd ;
