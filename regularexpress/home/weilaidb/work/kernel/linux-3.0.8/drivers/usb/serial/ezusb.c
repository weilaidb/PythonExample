#define CPUCS_REG    0x7F92
int ezusb_writememory(struct usb_serial *serial, int address,
unsigned char *data, int length, __u8 request)
EXPORT_SYMBOL_GPL(ezusb_writememory);
int ezusb_set_reset(struct usb_serial *serial, unsigned char reset_bit)
EXPORT_SYMBOL_GPL(ezusb_set_reset);
