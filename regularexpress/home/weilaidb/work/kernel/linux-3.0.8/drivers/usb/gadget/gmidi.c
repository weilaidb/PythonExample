MODULE_AUTHOR("Ben Williamson");
MODULE_LICENSE("GPL v2");
#define DRIVER_VERSION "25 Jul 2006"
static const char shortname[] = "g_midi";
static const char longname[] = "MIDI Gadget";
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for the USB MIDI Gadget adapter.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for the USB MIDI Gadget adapter.");
static ushort idVendor;
module_param(idVendor, ushort, S_IRUGO);
MODULE_PARM_DESC(idVendor, "USB Vendor ID");
static ushort idProduct;
module_param(idProduct, ushort, S_IRUGO);
MODULE_PARM_DESC(idProduct, "USB Product ID");
static ushort bcdDevice;
module_param(bcdDevice, ushort, S_IRUGO);
MODULE_PARM_DESC(bcdDevice, "USB Device version (BCD)");
static char *iManufacturer;
module_param(iManufacturer, charp, S_IRUGO);
MODULE_PARM_DESC(iManufacturer, "USB Manufacturer string");
static char *iProduct;
module_param(iProduct, charp, S_IRUGO);
MODULE_PARM_DESC(iProduct, "USB Product string");
static char *iSerialNumber;
module_param(iSerialNumber, charp, S_IRUGO);
MODULE_PARM_DESC(iSerialNumber, "SerialNumber");
static const char *EP_IN_NAME;
static const char *EP_OUT_NAME;
#define USB_BUFSIZ 256
struct gmidi_in_port ;
struct gmidi_device ;
static void gmidi_transmit(struct gmidi_device* dev, struct usb_request* req);
#define DBG(d, fmt, args...) \
dev_dbg(&(d)->gadget->dev , fmt , ## args)
#define VDBG(d, fmt, args...) \
dev_vdbg(&(d)->gadget->dev , fmt , ## args)
#define ERROR(d, fmt, args...) \
dev_err(&(d)->gadget->dev , fmt , ## args)
#define INFO(d, fmt, args...) \
dev_info(&(d)->gadget->dev , fmt , ## args)
static unsigned buflen = 256;
static unsigned qlen = 32;
module_param(buflen, uint, S_IRUGO);
module_param(qlen, uint, S_IRUGO);
#define DRIVER_VENDOR_NUM	0x17b3
#define DRIVER_PRODUCT_NUM	0x0004
#define STRING_MANUFACTURER	25
#define STRING_PRODUCT		42
#define STRING_SERIAL		101
#define STRING_MIDI_GADGET	250
#define	GMIDI_CONFIG		1
#define GMIDI_AC_INTERFACE	0
#define GMIDI_MS_INTERFACE	1
#define GMIDI_NUM_INTERFACES	2
DECLARE_UAC_AC_HEADER_DESCRIPTOR(1);
DECLARE_USB_MIDI_OUT_JACK_DESCRIPTOR(1);
DECLARE_USB_MS_ENDPOINT_DESCRIPTOR(1);
static struct usb_device_descriptor device_desc = ;
static struct usb_config_descriptor config_desc = ;
static const struct usb_interface_descriptor ac_interface_desc = ;
static const struct uac1_ac_header_descriptor_1 ac_header_desc = ;
static const struct usb_interface_descriptor ms_interface_desc = ;
static const struct usb_ms_header_descriptor ms_header_desc = ;
#define JACK_IN_EMB	1
#define JACK_IN_EXT	2
#define JACK_OUT_EMB	3
#define JACK_OUT_EXT	4
static const struct usb_midi_in_jack_descriptor jack_in_emb_desc = ;
static const struct usb_midi_in_jack_descriptor jack_in_ext_desc = ;
static const struct usb_midi_out_jack_descriptor_1 jack_out_emb_desc = ;
static const struct usb_midi_out_jack_descriptor_1 jack_out_ext_desc = ;
static struct usb_endpoint_descriptor bulk_out_desc = ;
static const struct usb_ms_endpoint_descriptor_1 ms_out_desc = ;
static struct usb_endpoint_descriptor bulk_in_desc = ;
static const struct usb_ms_endpoint_descriptor_1 ms_in_desc = ;
static const struct usb_descriptor_header *gmidi_function [] = ;
static char manufacturer[50];
static char product_desc[40] = "MIDI Gadget";
static char serial_number[20];
static struct usb_string strings [] = ;
static struct usb_gadget_strings stringtab = ;
static int config_buf(struct usb_gadget *gadget,
u8 *buf, u8 type, unsigned index)
static struct usb_request *alloc_ep_req(struct usb_ep *ep, unsigned length)
static void free_ep_req(struct usb_ep *ep, struct usb_request *req)
static const uint8_t gmidi_cin_length[] = ;
static void gmidi_read_data(struct usb_ep *ep, int cable,
uint8_t *data, int length)
static void gmidi_handle_out_data(struct usb_ep *ep, struct usb_request *req)
static void gmidi_complete(struct usb_ep *ep, struct usb_request *req)
static int set_gmidi_config(struct gmidi_device *dev, gfp_t gfp_flags)
static void gmidi_reset_config(struct gmidi_device *dev)
static int
gmidi_set_config(struct gmidi_device *dev, unsigned number, gfp_t gfp_flags)
static void gmidi_setup_complete(struct usb_ep *ep, struct usb_request *req)
static int gmidi_setup(struct usb_gadget *gadget,
const struct usb_ctrlrequest *ctrl)
static void gmidi_disconnect(struct usb_gadget *gadget)
static void gmidi_unbind(struct usb_gadget *gadget)
static int gmidi_snd_free(struct snd_device *device)
static void gmidi_transmit_packet(struct usb_request *req, uint8_t p0,
uint8_t p1, uint8_t p2, uint8_t p3)
static void gmidi_transmit_byte(struct usb_request *req,
struct gmidi_in_port *port, uint8_t b)
static void gmidi_transmit(struct gmidi_device *dev, struct usb_request *req)
static void gmidi_in_tasklet(unsigned long data)
static int gmidi_in_open(struct snd_rawmidi_substream *substream)
static int gmidi_in_close(struct snd_rawmidi_substream *substream)
static void gmidi_in_trigger(struct snd_rawmidi_substream *substream, int up)
static int gmidi_out_open(struct snd_rawmidi_substream *substream)
static int gmidi_out_close(struct snd_rawmidi_substream *substream)
static void gmidi_out_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops gmidi_in_ops = ;
static struct snd_rawmidi_ops gmidi_out_ops = ;
static int gmidi_register_card(struct gmidi_device *dev)
static int __init gmidi_bind(struct usb_gadget *gadget)
static void gmidi_suspend(struct usb_gadget *gadget)
static void gmidi_resume(struct usb_gadget *gadget)
static struct usb_gadget_driver gmidi_driver = ;
static int __init gmidi_init(void)
module_init(gmidi_init);
static void __exit gmidi_cleanup(void)
module_exit(gmidi_cleanup);
