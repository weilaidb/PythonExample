#define _DVB_USB_AF9015_H_
#define DVB_USB_LOG_PREFIX "af9015"
#define deb_info(args...) dprintk(dvb_usb_af9015_debug, 0x01, args)
#define deb_rc(args...)   dprintk(dvb_usb_af9015_debug, 0x02, args)
#define deb_xfer(args...) dprintk(dvb_usb_af9015_debug, 0x04, args)
#define deb_reg(args...)  dprintk(dvb_usb_af9015_debug, 0x08, args)
#define deb_i2c(args...)  dprintk(dvb_usb_af9015_debug, 0x10, args)
#define deb_fw(args...)   dprintk(dvb_usb_af9015_debug, 0x20, args)
#define AF9015_I2C_EEPROM  0xa0
#define AF9015_I2C_DEMOD   0x38
#define AF9015_USB_TIMEOUT 2000
#define AF9015_EEPROM_IR_MODE        0x18
#define AF9015_EEPROM_IR_REMOTE_TYPE 0x34
#define AF9015_EEPROM_TS_MODE        0x31
#define AF9015_EEPROM_DEMOD2_I2C     0x32
#define AF9015_EEPROM_SAW_BW1        0x35
#define AF9015_EEPROM_XTAL_TYPE1     0x36
#define AF9015_EEPROM_SPEC_INV1      0x37
#define AF9015_EEPROM_IF1L           0x38
#define AF9015_EEPROM_IF1H           0x39
#define AF9015_EEPROM_MT2060_IF1L    0x3a
#define AF9015_EEPROM_MT2060_IF1H    0x3b
#define AF9015_EEPROM_TUNER_ID1      0x3c
#define AF9015_EEPROM_SAW_BW2        0x45
#define AF9015_EEPROM_XTAL_TYPE2     0x46
#define AF9015_EEPROM_SPEC_INV2      0x47
#define AF9015_EEPROM_IF2L           0x48
#define AF9015_EEPROM_IF2H           0x49
#define AF9015_EEPROM_MT2060_IF2L    0x4a
#define AF9015_EEPROM_MT2060_IF2H    0x4b
#define AF9015_EEPROM_TUNER_ID2      0x4c
#define AF9015_EEPROM_OFFSET (AF9015_EEPROM_SAW_BW2 - AF9015_EEPROM_SAW_BW1)
struct req_t ;
enum af9015_cmd ;
enum af9015_ir_mode ;
struct af9015_state ;
struct af9015_config ;
enum af9015_remote ;
