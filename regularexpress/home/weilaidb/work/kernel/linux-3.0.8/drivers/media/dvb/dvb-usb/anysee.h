#define _DVB_USB_ANYSEE_H_
#define DVB_USB_LOG_PREFIX "anysee"
#define deb_info(args...) dprintk(dvb_usb_anysee_debug, 0x01, args)
#define deb_xfer(args...) dprintk(dvb_usb_anysee_debug, 0x02, args)
#define deb_rc(args...)   dprintk(dvb_usb_anysee_debug, 0x04, args)
#define deb_reg(args...)  dprintk(dvb_usb_anysee_debug, 0x08, args)
#define deb_i2c(args...)  dprintk(dvb_usb_anysee_debug, 0x10, args)
#define deb_fw(args...)   dprintk(dvb_usb_anysee_debug, 0x20, args)
enum cmd ;
struct anysee_state ;
#define ANYSEE_HW_02     2
#define ANYSEE_HW_507CD  6
#define ANYSEE_HW_507DC 10
#define ANYSEE_HW_507SI 11
#define ANYSEE_HW_507FA 15
#define ANYSEE_HW_508TC 18
#define ANYSEE_HW_508S2 19
#define REG_IOA       0x80
#define REG_IOB       0x90
#define REG_IOC       0xa0
#define REG_IOD       0xb0
#define REG_IOE       0xb1
#define REG_OEA       0xb2
#define REG_OEB       0xb3
#define REG_OEC       0xb4
#define REG_OED       0xb5
#define REG_OEE       0xb6
