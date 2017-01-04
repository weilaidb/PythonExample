#define CONTROL_CMD			0x00
#define COMM_CMD			0x01
#define MODE_CMD			0x02
#define CTL_RESET_DEVICE		0x0000
#define CTL_START_EXE			0x0001
#define CTL_RESUME_EXE			0x0002
#define CTL_HALT_EXE_IDLE		0x0003
#define CTL_HALT_EXE_DONE		0x0004
#define CTL_FLUSH_COMM_CMDS		0x0007
#define CTL_FLUSH_RCV_BUFFER		0x0008
#define CTL_FLUSH_XMT_BUFFER		0x0009
#define CTL_GET_COMM_CMDS		0x000A
#define MOD_PULSE_EN			0x0000
#define MOD_SPEED_CHANGE_EN		0x0001
#define MOD_1WIRE_SPEED			0x0002
#define MOD_STRONG_PU_DURATION		0x0003
#define MOD_PULLDOWN_SLEWRATE		0x0004
#define MOD_PROG_PULSE_DURATION		0x0005
#define MOD_WRITE1_LOWTIME		0x0006
#define MOD_DSOW0_TREC			0x0007
#define COMM_ERROR_ESCAPE		0x0601
#define COMM_SET_DURATION		0x0012
#define COMM_BIT_IO			0x0020
#define COMM_PULSE			0x0030
#define COMM_1_WIRE_RESET		0x0042
#define COMM_BYTE_IO			0x0052
#define COMM_MATCH_ACCESS		0x0064
#define COMM_BLOCK_IO			0x0074
#define COMM_READ_STRAIGHT		0x0080
#define COMM_DO_RELEASE			0x6092
#define COMM_SET_PATH			0x00A2
#define COMM_WRITE_SRAM_PAGE		0x00B2
#define COMM_WRITE_EPROM		0x00C4
#define COMM_READ_CRC_PROT_PAGE		0x00D4
#define COMM_READ_REDIRECT_PAGE_CRC	0x21E4
#define COMM_SEARCH_ACCESS		0x00F4
#define COMM_TYPE			0x0008
#define COMM_SE				0x0008
#define COMM_D				0x0008
#define COMM_Z				0x0008
#define COMM_CH				0x0008
#define COMM_SM				0x0008
#define COMM_R				0x0008
#define COMM_IM				0x0001
#define COMM_PS				0x4000
#define COMM_PST			0x4000
#define COMM_CIB			0x4000
#define COMM_RTS			0x4000
#define COMM_DT				0x2000
#define COMM_SPU			0x1000
#define COMM_F				0x0800
#define COMM_NTF			0x0400
#define COMM_ICP			0x0200
#define COMM_RST			0x0100
#define PULSE_PROG			0x01
#define PULSE_SPUE			0x02
#define BRANCH_MAIN			0xCC
#define BRANCH_AUX			0x33
#define ST_SPUA				0x01
#define ST_PRGA				0x02
#define ST_12VP				0x04
#define ST_PMOD				0x08
#define ST_HALT				0x10
#define ST_IDLE				0x20
#define ST_EPOF				0x80
#define RR_DETECT			0xA5
#define RR_NRS				0x01
#define RR_SH				0x02
#define RR_APP				0x04
#define RR_VPP				0x08
#define RR_CMP				0x10
#define RR_CRC				0x20
#define RR_RDP				0x40
#define RR_EOS				0x80
#define SPEED_NORMAL			0x00
#define SPEED_FLEXIBLE			0x01
#define SPEED_OVERDRIVE			0x02
#define NUM_EP				4
#define EP_CONTROL			0
#define EP_STATUS			1
#define EP_DATA_OUT			2
#define EP_DATA_IN			3
struct ds_device
;
struct ds_status
;
static struct usb_device_id ds_id_table [] = ;
MODULE_DEVICE_TABLE(usb, ds_id_table);
static int ds_probe(struct usb_interface *, const struct usb_device_id *);
static void ds_disconnect(struct usb_interface *);
static int ds_send_control(struct ds_device *, u16, u16);
static int ds_send_control_cmd(struct ds_device *, u16, u16);
static LIST_HEAD(ds_devices);
static DEFINE_MUTEX(ds_mutex);
static struct usb_driver ds_driver = ;
static int ds_send_control_cmd(struct ds_device *dev, u16 value, u16 index)
static int ds_send_control_mode(struct ds_device *dev, u16 value, u16 index)
static int ds_send_control(struct ds_device *dev, u16 value, u16 index)
static int ds_recv_status_nodump(struct ds_device *dev, struct ds_status *st,
unsigned char *buf, int size)
static inline void ds_print_msg(unsigned char *buf, unsigned char *str, int off)
static void ds_dump_status(struct ds_device *dev, unsigned char *buf, int count)
static void ds_reset_device(struct ds_device *dev)
static int ds_recv_data(struct ds_device *dev, unsigned char *buf, int size)
static int ds_send_data(struct ds_device *dev, unsigned char *buf, int len)
static int ds_wait_status(struct ds_device *dev, struct ds_status *st)
static int ds_reset(struct ds_device *dev)
static int ds_set_pullup(struct ds_device *dev, int delay)
static int ds_touch_bit(struct ds_device *dev, u8 bit, u8 *tbit)
static int ds_write_byte(struct ds_device *dev, u8 byte)
static int ds_read_byte(struct ds_device *dev, u8 *byte)
static int ds_read_block(struct ds_device *dev, u8 *buf, int len)
static int ds_write_block(struct ds_device *dev, u8 *buf, int len)
static u8 ds9490r_touch_bit(void *data, u8 bit)
static void ds9490r_write_byte(void *data, u8 byte)
static u8 ds9490r_read_byte(void *data)
static void ds9490r_write_block(void *data, const u8 *buf, int len)
static u8 ds9490r_read_block(void *data, u8 *buf, int len)
static u8 ds9490r_reset(void *data)
static u8 ds9490r_set_pullup(void *data, int delay)
static int ds_w1_init(struct ds_device *dev)
static void ds_w1_fini(struct ds_device *dev)
static int ds_probe(struct usb_interface *intf,
const struct usb_device_id *udev_id)
static void ds_disconnect(struct usb_interface *intf)
static int ds_init(void)
static void ds_fini(void)
module_init(ds_init);
module_exit(ds_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("DS2490 USB <-> W1 bus master driver (DS9490*)");
