#define _DVB_USB_CE6230_H_
#define DVB_USB_LOG_PREFIX "ce6230"
#define deb_info(args...) dprintk(dvb_usb_ce6230_debug, 0x01, args)
#define deb_rc(args...)   dprintk(dvb_usb_ce6230_debug, 0x02, args)
#define deb_xfer(args...) dprintk(dvb_usb_ce6230_debug, 0x04, args)
#define deb_reg(args...)  dprintk(dvb_usb_ce6230_debug, 0x08, args)
#define deb_i2c(args...)  dprintk(dvb_usb_ce6230_debug, 0x10, args)
#define deb_fw(args...)   dprintk(dvb_usb_ce6230_debug, 0x20, args)
#define ce6230_debug_dump(r, t, v, i, b, l, func)
#define CE6230_USB_TIMEOUT 1000
struct req_t ;
enum ce6230_cmd ;
