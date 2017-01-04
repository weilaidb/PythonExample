#define MAX_DEV         4
struct local_info_t ;
static struct local_info_t *dev_table[MAX_DEV] = ;
#define DAQP_FIFO_SIZE		4096
#define DAQP_FIFO		0
#define DAQP_SCANLIST		1
#define DAQP_CONTROL		2
#define DAQP_STATUS		2
#define DAQP_DIGITAL_IO		3
#define DAQP_PACER_LOW		4
#define DAQP_PACER_MID		5
#define DAQP_PACER_HIGH		6
#define DAQP_COMMAND		7
#define DAQP_DA			8
#define DAQP_TIMER		10
#define DAQP_AUX		15
#define DAQP_SCANLIST_DIFFERENTIAL	0x4000
#define DAQP_SCANLIST_GAIN(x)		((x)<<12)
#define DAQP_SCANLIST_CHANNEL(x)	((x)<<8)
#define DAQP_SCANLIST_START		0x0080
#define DAQP_SCANLIST_EXT_GAIN(x)	((x)<<4)
#define DAQP_SCANLIST_EXT_CHANNEL(x)	(x)
#define DAQP_CONTROL_PACER_100kHz	0xc0
#define DAQP_CONTROL_PACER_1MHz		0x80
#define DAQP_CONTROL_PACER_5MHz		0x40
#define DAQP_CONTROL_PACER_EXTERNAL	0x00
#define DAQP_CONTORL_EXPANSION		0x20
#define DAQP_CONTROL_EOS_INT_ENABLE	0x10
#define DAQP_CONTROL_FIFO_INT_ENABLE	0x08
#define DAQP_CONTROL_TRIGGER_ONESHOT	0x00
#define DAQP_CONTROL_TRIGGER_CONTINUOUS	0x04
#define DAQP_CONTROL_TRIGGER_INTERNAL	0x00
#define DAQP_CONTROL_TRIGGER_EXTERNAL	0x02
#define DAQP_CONTROL_TRIGGER_RISING	0x00
#define DAQP_CONTROL_TRIGGER_FALLING	0x01
#define DAQP_STATUS_IDLE		0x80
#define DAQP_STATUS_RUNNING		0x40
#define DAQP_STATUS_EVENTS		0x38
#define DAQP_STATUS_DATA_LOST		0x20
#define DAQP_STATUS_END_OF_SCAN		0x10
#define DAQP_STATUS_FIFO_THRESHOLD	0x08
#define DAQP_STATUS_FIFO_FULL		0x04
#define DAQP_STATUS_FIFO_NEARFULL	0x02
#define DAQP_STATUS_FIFO_EMPTY		0x01
#define DAQP_COMMAND_ARM		0x80
#define DAQP_COMMAND_RSTF		0x40
#define DAQP_COMMAND_RSTQ		0x20
#define DAQP_COMMAND_STOP		0x10
#define DAQP_COMMAND_LATCH		0x08
#define DAQP_COMMAND_100kHz		0x00
#define DAQP_COMMAND_50kHz		0x02
#define DAQP_COMMAND_25kHz		0x04
#define DAQP_COMMAND_FIFO_DATA		0x01
#define DAQP_COMMAND_FIFO_PROGRAM	0x00
#define DAQP_AUX_TRIGGER_TTL		0x00
#define DAQP_AUX_TRIGGER_ANALOG		0x80
#define DAQP_AUX_TRIGGER_PRETRIGGER	0x40
#define DAQP_AUX_TIMER_INT_ENABLE	0x20
#define DAQP_AUX_TIMER_RELOAD		0x00
#define DAQP_AUX_TIMER_PAUSE		0x08
#define DAQP_AUX_TIMER_GO		0x10
#define DAQP_AUX_TIMER_GO_EXTERNAL	0x18
#define DAQP_AUX_TIMER_EXTERNAL_SRC	0x04
#define DAQP_AUX_TIMER_INTERNAL_SRC	0x00
#define DAQP_AUX_DA_DIRECT		0x00
#define DAQP_AUX_DA_OVERFLOW		0x01
#define DAQP_AUX_DA_EXTERNAL		0x02
#define DAQP_AUX_DA_PACER		0x03
#define DAQP_AUX_RUNNING		0x80
#define DAQP_AUX_TRIGGERED		0x40
#define DAQP_AUX_DA_BUFFER		0x20
#define DAQP_AUX_TIMER_OVERFLOW		0x10
#define DAQP_AUX_CONVERSION		0x08
#define DAQP_AUX_DATA_LOST		0x04
#define DAQP_AUX_FIFO_NEARFULL		0x02
#define DAQP_AUX_FIFO_EMPTY		0x01
static const struct comedi_lrange range_daqp_ai = ;
static const struct comedi_lrange range_daqp_ao = ;
static int daqp_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int daqp_detach(struct comedi_device *dev);
static struct comedi_driver driver_daqp = ;
static void daqp_dump(struct comedi_device *dev)
static void hex_dump(char *str, void *ptr, int len)
static int daqp_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static enum irqreturn daqp_interrupt(int irq, void *dev_id)
static int daqp_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int daqp_ns_to_timer(unsigned int *ns, int round)
static int daqp_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int daqp_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int daqp_ao_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int daqp_di_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int daqp_do_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int daqp_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int daqp_detach(struct comedi_device *dev)
static void daqp_cs_config(struct pcmcia_device *link);
static void daqp_cs_release(struct pcmcia_device *link);
static int daqp_cs_suspend(struct pcmcia_device *p_dev);
static int daqp_cs_resume(struct pcmcia_device *p_dev);
static int daqp_cs_attach(struct pcmcia_device *);
static void daqp_cs_detach(struct pcmcia_device *);
static int daqp_cs_attach(struct pcmcia_device *link)
static void daqp_cs_detach(struct pcmcia_device *link)
static int daqp_pcmcia_config_loop(struct pcmcia_device *p_dev, void *priv_data)
static void daqp_cs_config(struct pcmcia_device *link)
static void daqp_cs_release(struct pcmcia_device *link)
static int daqp_cs_suspend(struct pcmcia_device *link)
static int daqp_cs_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id daqp_cs_id_table[] = ;
MODULE_DEVICE_TABLE(pcmcia, daqp_cs_id_table);
MODULE_AUTHOR("Brent Baccala <baccala@freesoft.org>");
MODULE_DESCRIPTION("Comedi driver for Quatech DAQP PCMCIA data capture cards");
MODULE_LICENSE("GPL");
static struct pcmcia_driver daqp_cs_driver = ;
int __init init_module(void)
void __exit cleanup_module(void)
