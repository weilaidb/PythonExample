#define DRIVER_VERSION "v2.4"
#define DRIVER_AUTHOR "Bernd Porr, BerndPorr@f2s.com"
#define DRIVER_DESC "Stirling/ITL USB-DUX -- Bernd.Porr@f2s.com"
#define BOARDNAME "usbdux"
#define BULK_TIMEOUT 1000
#define USBDUXSUB_FIRMWARE 0xA0
#define VENDOR_DIR_IN  0xC0
#define VENDOR_DIR_OUT 0x40
#define USBDUXSUB_CPUCS 0xE600
#define USBDUXSUB_MINOR 32
#define TB_LEN 0x2000
#define ISOINEP           6
#define ISOOUTEP          2
#define COMMAND_OUT_EP     1
#define COMMAND_IN_EP        8
#define PWM_EP         4
#define MIN_PWM_PERIOD  ((long)(1E9/300))
#define PWM_DEFAULT_PERIOD ((long)(1E9/100))
#define NUMCHANNELS       8
#define SIZEADIN          ((sizeof(int16_t)))
#define SIZEINBUF         ((8*SIZEADIN))
#define SIZEINSNBUF       16
#define NUMOUTCHANNELS    8
#define SIZEDAOUT          ((sizeof(int8_t)+sizeof(int16_t)))
#define SIZEOUTBUF         ((8*SIZEDAOUT))
#define SIZEOFDUXBUFFER    ((8*SIZEDAOUT+2))
#define NUMOFINBUFFERSFULL     5
#define NUMOFOUTBUFFERSFULL    5
#define NUMOFINBUFFERSHIGH     10
#define NUMOFOUTBUFFERSHIGH    10
#define NUMUSBDUX             16
#define SUBDEV_AD             0
#define SUBDEV_DA             1
#define SUBDEV_DIO            2
#define SUBDEV_COUNTER        3
#define SUBDEV_PWM            4
#define RETRIES 10
static const struct comedi_lrange range_usbdux_ai_range = ;
static const struct comedi_lrange range_usbdux_ao_range = ;
struct usbduxsub ;
static struct usbduxsub usbduxsub[NUMUSBDUX];
static DEFINE_SEMAPHORE(start_stop_sem);
static int usbduxsub_unlink_InURBs(struct usbduxsub *usbduxsub_tmp)
static int usbdux_ai_stop(struct usbduxsub *this_usbduxsub, int do_unlink)
static int usbdux_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void usbduxsub_ai_IsocIrq(struct urb *urb)
static int usbduxsub_unlink_OutURBs(struct usbduxsub *usbduxsub_tmp)
static int usbdux_ao_stop(struct usbduxsub *this_usbduxsub, int do_unlink)
static int usbdux_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void usbduxsub_ao_IsocIrq(struct urb *urb)
static int usbduxsub_start(struct usbduxsub *usbduxsub)
static int usbduxsub_stop(struct usbduxsub *usbduxsub)
static int usbduxsub_upload(struct usbduxsub *usbduxsub,
uint8_t *local_transfer_buffer,
unsigned int startAddr, unsigned int len)
#define FIRMWARE_MAX_LEN 0x2000
static int firmwareUpload(struct usbduxsub *usbduxsub,
const u8 *firmwareBinary, int sizeFirmware)
static int usbduxsub_submit_InURBs(struct usbduxsub *usbduxsub)
static int usbduxsub_submit_OutURBs(struct usbduxsub *usbduxsub)
static int usbdux_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int8_t create_adc_command(unsigned int chan, int range)
#define SENDADCOMMANDS            0
#define SENDDACOMMANDS            1
#define SENDDIOCONFIGCOMMAND      2
#define SENDDIOBITSCOMMAND        3
#define SENDSINGLEAD              4
#define READCOUNTERCOMMAND        5
#define WRITECOUNTERCOMMAND       6
#define SENDPWMON                 7
#define SENDPWMOFF                8
static int send_dux_commands(struct usbduxsub *this_usbduxsub, int cmd_type)
static int receive_dux_commands(struct usbduxsub *this_usbduxsub, int command)
static int usbdux_ai_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum)
static int usbdux_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int usbdux_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_ao_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_ao_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum)
static int usbdux_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int usbdux_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int usbdux_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_counter_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_counter_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_counter_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbduxsub_unlink_PwmURBs(struct usbduxsub *usbduxsub_tmp)
static int usbdux_pwm_stop(struct usbduxsub *this_usbduxsub, int do_unlink)
static int usbdux_pwm_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void usbduxsub_pwm_irq(struct urb *urb)
static int usbduxsub_submit_PwmURBs(struct usbduxsub *usbduxsub)
static int usbdux_pwm_period(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int period)
static int usbdux_pwm_start(struct comedi_device *dev,
struct comedi_subdevice *s)
static int usbdux_pwm_pattern(struct comedi_device *dev,
struct comedi_subdevice *s, int channel,
unsigned int value, unsigned int sign)
static int usbdux_pwm_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int usbdux_pwm_read(struct comedi_device *x1,
struct comedi_subdevice *x2, struct comedi_insn *x3,
unsigned int *x4)
;
static int usbdux_pwm_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void tidy_up(struct usbduxsub *usbduxsub_tmp)
static void usbdux_firmware_request_complete_handler(const struct firmware *fw,
void *context)
static int usbduxsub_probe(struct usb_interface *uinterf,
const struct usb_device_id *id)
static void usbduxsub_disconnect(struct usb_interface *intf)
static int usbdux_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int usbdux_detach(struct comedi_device *dev)
static struct comedi_driver driver_usbdux = ;
static const struct usb_device_id usbduxsub_table[] = ;
MODULE_DEVICE_TABLE(usb, usbduxsub_table);
static struct usb_driver usbduxsub_driver = ;
static int __init init_usbdux(void)
static void __exit exit_usbdux(void)
module_init(init_usbdux);
module_exit(exit_usbdux);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
