#define DT9812_DIAGS_BOARD_INFO_ADDR	0xFBFF
#define DT9812_MAX_WRITE_CMD_PIPE_SIZE	32
#define DT9812_MAX_READ_CMD_PIPE_SIZE	32
#define F020_SFR_P4			0x84
#define F020_SFR_P1			0x90
#define F020_SFR_P2			0xa0
#define F020_SFR_P3			0xb0
#define F020_SFR_AMX0CF			0xba
#define F020_SFR_AMX0SL			0xbb
#define F020_SFR_ADC0CF			0xbc
#define F020_SFR_ADC0L			0xbe
#define F020_SFR_ADC0H			0xbf
#define F020_SFR_DAC0L			0xd2
#define F020_SFR_DAC0H			0xd3
#define F020_SFR_DAC0CN			0xd4
#define F020_SFR_DAC1L			0xd5
#define F020_SFR_DAC1H			0xd6
#define F020_SFR_DAC1CN			0xd7
#define F020_SFR_ADC0CN			0xe8
#define F020_MASK_ADC0CF_AMP0GN0	0x01
#define F020_MASK_ADC0CF_AMP0GN1	0x02
#define F020_MASK_ADC0CF_AMP0GN2	0x04
#define F020_MASK_ADC0CN_AD0EN		0x80
#define F020_MASK_ADC0CN_AD0INT		0x20
#define F020_MASK_ADC0CN_AD0BUSY	0x10
#define F020_MASK_DACxCN_DACxEN		0x80
enum ;
enum dt9812_gain ;
enum ;
struct dt9812_flash_data ;
#define DT9812_MAX_NUM_MULTI_BYTE_RDS  \
((DT9812_MAX_WRITE_CMD_PIPE_SIZE - 4 - 1) / sizeof(u8))
struct dt9812_read_multi ;
struct dt9812_write_byte ;
#define DT9812_MAX_NUM_MULTI_BYTE_WRTS  \
((DT9812_MAX_WRITE_CMD_PIPE_SIZE - 4 - 1) / \
sizeof(struct dt9812_write_byte))
struct dt9812_write_multi ;
struct dt9812_rmw_byte ;
#define DT9812_MAX_NUM_MULTI_BYTE_RMWS  \
((DT9812_MAX_WRITE_CMD_PIPE_SIZE - 4 - 1) / sizeof(struct dt9812_rmw_byte))
struct dt9812_rmw_multi ;
struct dt9812_usb_cmd ;
#define DT9812_NUM_SLOTS	16
static DEFINE_SEMAPHORE(dt9812_mutex);
static const struct usb_device_id dt9812_table[] = ;
MODULE_DEVICE_TABLE(usb, dt9812_table);
struct usb_dt9812 ;
struct comedi_dt9812 ;
struct slot_dt9812 ;
static const struct comedi_lrange dt9812_10_ain_range = ;
static const struct comedi_lrange dt9812_2pt5_ain_range = ;
static const struct comedi_lrange dt9812_10_aout_range = ;
static const struct comedi_lrange dt9812_2pt5_aout_range = ;
static struct slot_dt9812 dt9812[DT9812_NUM_SLOTS];
#define devpriv ((struct comedi_dt9812 *)dev->private)
static inline struct usb_dt9812 *to_dt9812_dev(struct kref *d)
static void dt9812_delete(struct kref *kref)
static int dt9812_read_info(struct usb_dt9812 *dev, int offset, void *buf,
size_t buf_size)
static int dt9812_read_multiple_registers(struct usb_dt9812 *dev, int reg_count,
u8 * address, u8 * value)
static int dt9812_write_multiple_registers(struct usb_dt9812 *dev,
int reg_count, u8 * address,
u8 * value)
static int dt9812_rmw_multiple_registers(struct usb_dt9812 *dev, int reg_count,
struct dt9812_rmw_byte *rmw)
static int dt9812_digital_in(struct slot_dt9812 *slot, u8 * bits)
static int dt9812_digital_out(struct slot_dt9812 *slot, u8 bits)
static int dt9812_digital_out_shadow(struct slot_dt9812 *slot, u8 * bits)
static void dt9812_configure_mux(struct usb_dt9812 *dev,
struct dt9812_rmw_byte *rmw, int channel)
static void dt9812_configure_gain(struct usb_dt9812 *dev,
struct dt9812_rmw_byte *rmw,
enum dt9812_gain gain)
static int dt9812_analog_in(struct slot_dt9812 *slot, int channel, u16 * value,
enum dt9812_gain gain)
static int dt9812_analog_out_shadow(struct slot_dt9812 *slot, int channel,
u16 * value)
static int dt9812_analog_out(struct slot_dt9812 *slot, int channel, u16 value)
static int dt9812_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void dt9812_disconnect(struct usb_interface *interface)
static struct usb_driver dt9812_usb_driver = ;
static int dt9812_comedi_open(struct comedi_device *dev)
static int dt9812_di_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int dt9812_do_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int dt9812_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int dt9812_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int dt9812_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int dt9812_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int dt9812_detach(struct comedi_device *dev)
static struct comedi_driver dt9812_comedi_driver = ;
static int __init usb_dt9812_init(void)
static void __exit usb_dt9812_exit(void)
module_init(usb_dt9812_init);
module_exit(usb_dt9812_exit);
MODULE_AUTHOR("Anders Blomdell <anders.blomdell@control.lth.se>");
MODULE_DESCRIPTION("Comedi DT9812 driver");
MODULE_LICENSE("GPL");
