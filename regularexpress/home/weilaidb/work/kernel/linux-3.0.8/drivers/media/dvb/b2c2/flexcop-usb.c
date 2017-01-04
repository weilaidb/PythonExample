#define FC_LOG_PREFIX "flexcop_usb"
#define DRIVER_VERSION "0.1"
#define DRIVER_NAME "Technisat/B2C2 FlexCop II/IIb/III Digital TV USB Driver"
#define DRIVER_AUTHOR "Patrick Boettcher <patrick.boettcher@desy.de>"
#define dprintk(level,args...) \
do  while (0)
#define debug_dump(b, l, method) do  while (0)
#define DEBSTATUS ""
#define dprintk(level, args...)
#define debug_dump(b, l, method)
#define DEBSTATUS " (debugging is not enabled)"
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,ts=2,"
"ctrl=4,i2c=8,v8mem=16 (or-able))." DEBSTATUS);
#undef DEBSTATUS
#define deb_info(args...) dprintk(0x01, args)
#define deb_ts(args...) dprintk(0x02, args)
#define deb_ctrl(args...) dprintk(0x04, args)
#define deb_i2c(args...) dprintk(0x08, args)
#define deb_v8(args...) dprintk(0x10, args)
#define B2C2_FLEX_PCIOFFSET_TO_INTERNALADDR(usPCI) (u8) \
(((usPCI >> 2) & 0x07) + ((usPCI >> 4) & 0x70))
#define B2C2_FLEX_INTERNALADDR_TO_PCIOFFSET(ucAddr) (u16) \
(((ucAddr & 0x07) << 2) + ((ucAddr & 0x70) << 4))
static int flexcop_usb_readwrite_dw(struct flexcop_device *fc, u16 wRegOffsPCI, u32 *val, u8 read)
static int flexcop_usb_v8_memory_req(struct flexcop_usb *fc_usb,
flexcop_usb_request_t req, u8 page, u16 wAddress,
u8 *pbBuffer, u32 buflen)
#define bytes_left_to_read_on_page(paddr,buflen) \
((V8_MEMORY_PAGE_SIZE - (paddr & V8_MEMORY_PAGE_MASK)) > buflen \
? buflen : (V8_MEMORY_PAGE_SIZE - (paddr & V8_MEMORY_PAGE_MASK)))
static int flexcop_usb_memory_req(struct flexcop_usb *fc_usb,
flexcop_usb_request_t req, flexcop_usb_mem_page_t page_start,
u32 addr, int extended, u8 *buf, u32 len)
static int flexcop_usb_get_mac_addr(struct flexcop_device *fc, int extended)
static int flexcop_usb_i2c_req(struct flexcop_i2c_adapter *i2c,
flexcop_usb_request_t req, flexcop_usb_i2c_function_t func,
u8 chipaddr, u8 addr, u8 *buf, u8 buflen)
static flexcop_ibi_value flexcop_usb_read_ibi_reg(struct flexcop_device *fc,
flexcop_ibi_register reg)
static int flexcop_usb_write_ibi_reg(struct flexcop_device *fc,
flexcop_ibi_register reg, flexcop_ibi_value val)
static int flexcop_usb_i2c_request(struct flexcop_i2c_adapter *i2c,
flexcop_access_op_t op, u8 chipaddr, u8 addr, u8 *buf, u16 len)
static void flexcop_usb_process_frame(struct flexcop_usb *fc_usb,
u8 *buffer, int buffer_length)
static void flexcop_usb_urb_complete(struct urb *urb)
static int flexcop_usb_stream_control(struct flexcop_device *fc, int onoff)
static void flexcop_usb_transfer_exit(struct flexcop_usb *fc_usb)
static int flexcop_usb_transfer_init(struct flexcop_usb *fc_usb)
static int flexcop_usb_init(struct flexcop_usb *fc_usb)
static void flexcop_usb_exit(struct flexcop_usb *fc_usb)
static int flexcop_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void flexcop_usb_disconnect(struct usb_interface *intf)
static struct usb_device_id flexcop_usb_table [] = ;
MODULE_DEVICE_TABLE (usb, flexcop_usb_table);
static struct usb_driver flexcop_usb_driver = ;
static int __init flexcop_usb_module_init(void)
static void __exit flexcop_usb_module_exit(void)
module_init(flexcop_usb_module_init);
module_exit(flexcop_usb_module_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_NAME);
MODULE_LICENSE("GPL");
