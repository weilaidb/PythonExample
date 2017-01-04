#define DRIVER_VERSION "v1.0"
#define DRIVER_AUTHOR "Bernd Porr, BerndPorr@f2s.com"
#define DRIVER_DESC "USB-DUXfast, BerndPorr@f2s.com"
#define BOARDNAME "usbduxfast"
#define EZTIMEOUT	30
#define USBDUXFASTSUB_FIRMWARE	0xA0
#define VENDOR_DIR_IN		0xC0
#define VENDOR_DIR_OUT		0x40
#define USBDUXFASTSUB_CPUCS	0xE600
#define TB_LEN	0x2000
#define BULKINEP	6
#define CHANNELLISTEP	4
#define NUMCHANNELS	32
#define WAVESIZE	0x20
#define SIZEADIN	(sizeof(int16_t))
#define SIZEINBUF	512
#define SIZEINSNBUF	512
#define SIZEOFDUXBUFFER	256
#define NUMOFINBUFFERSHIGH	10
#define NUMUSBDUXFAST	16
#define N_SUBDEVICES	1
#define SUBDEV_AD	0
#define MIN_SAMPLING_PERIOD	9
#define MAX_SAMPLING_PERIOD	500
#define PACKETS_TO_IGNORE	4
static const struct comedi_lrange range_usbduxfast_ai_range = ;
struct usbduxfastsub_s ;
static struct usbduxfastsub_s usbduxfastsub[NUMUSBDUXFAST];
static DEFINE_SEMAPHORE(start_stop_sem);
#define SENDADCOMMANDS            0
#define SENDINITEP6               1
static int send_dux_commands(struct usbduxfastsub_s *udfs, int cmd_type)
static int usbduxfastsub_unlink_InURBs(struct usbduxfastsub_s *udfs)
static int usbduxfast_ai_stop(struct usbduxfastsub_s *udfs, int do_unlink)
static int usbduxfast_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void usbduxfastsub_ai_Irq(struct urb *urb)
static int usbduxfastsub_start(struct usbduxfastsub_s *udfs)
static int usbduxfastsub_stop(struct usbduxfastsub_s *udfs)
static int usbduxfastsub_upload(struct usbduxfastsub_s *udfs,
unsigned char *local_transfer_buffer,
unsigned int startAddr, unsigned int len)
static int usbduxfastsub_submit_InURBs(struct usbduxfastsub_s *udfs)
static int usbduxfast_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int usbduxfast_ai_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trignum)
#define LENBASE	(1+0x00)
#define OPBASE	(1+0x08)
#define OUTBASE	(1+0x10)
#define LOGBASE	(1+0x18)
static int usbduxfast_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int usbduxfast_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
#define FIRMWARE_MAX_LEN 0x2000
static int firmwareUpload(struct usbduxfastsub_s *usbduxfastsub,
const u8 *firmwareBinary, int sizeFirmware)
static void tidy_up(struct usbduxfastsub_s *udfs)
static void usbduxfast_firmware_request_complete_handler(const struct firmware
*fw, void *context)
static int usbduxfastsub_probe(struct usb_interface *uinterf,
const struct usb_device_id *id)
static void usbduxfastsub_disconnect(struct usb_interface *intf)
static int usbduxfast_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int usbduxfast_detach(struct comedi_device *dev)
static struct comedi_driver driver_usbduxfast = ;
static const struct usb_device_id usbduxfastsub_table[] = ;
MODULE_DEVICE_TABLE(usb, usbduxfastsub_table);
static struct usb_driver usbduxfastsub_driver = ;
static int __init init_usbduxfast(void)
static void __exit exit_usbduxfast(void)
module_init(init_usbduxfast);
module_exit(exit_usbduxfast);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
