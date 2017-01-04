MODULE_FIRMWARE("6fire/dmx6firel2.ihx");
MODULE_FIRMWARE("6fire/dmx6fireap.ihx");
MODULE_FIRMWARE("6fire/dmx6firecf.bin");
enum ;
static const u8 ep_w_max_packet_size[] = ;
static const u8 known_fw_versions[][4] = ;
struct ihex_record ;
static u8 usb6fire_fw_ihex_nibble(const u8 n)
static u8 usb6fire_fw_ihex_hex(const u8 *data, u8 *crc)
static bool usb6fire_fw_ihex_next_record(struct ihex_record *record)
static int usb6fire_fw_ihex_init(const struct firmware *fw,
struct ihex_record *record)
static int usb6fire_fw_ezusb_write(struct usb_device *device,
int type, int value, char *data, int len)
static int usb6fire_fw_ezusb_read(struct usb_device *device,
int type, int value, char *data, int len)
static int usb6fire_fw_fpga_write(struct usb_device *device,
char *data, int len)
static int usb6fire_fw_ezusb_upload(
struct usb_interface *intf, const char *fwname,
unsigned int postaddr, u8 *postdata, unsigned int postlen)
static int usb6fire_fw_fpga_upload(
struct usb_interface *intf, const char *fwname)
static int usb6fire_fw_check(u8 *version)
int usb6fire_fw_init(struct usb_interface *intf)
