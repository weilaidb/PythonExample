#define DAS16CS_SIZE			18
#define DAS16CS_ADC_DATA		0
#define DAS16CS_DIO_MUX			2
#define DAS16CS_MISC1			4
#define DAS16CS_MISC2			6
#define DAS16CS_CTR0			8
#define DAS16CS_CTR1			10
#define DAS16CS_CTR2			12
#define DAS16CS_CTR_CONTROL		14
#define DAS16CS_DIO			16
struct das16cs_board ;
static const struct das16cs_board das16cs_boards[] = ;
#define n_boards ARRAY_SIZE(das16cs_boards)
#define thisboard ((const struct das16cs_board *)dev->board_ptr)
struct das16cs_private ;
#define devpriv ((struct das16cs_private *)dev->private)
static int das16cs_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int das16cs_detach(struct comedi_device *dev);
static struct comedi_driver driver_das16cs = ;
static struct pcmcia_device *cur_dev = NULL;
static const struct comedi_lrange das16cs_ai_range = ;
static irqreturn_t das16cs_interrupt(int irq, void *d);
static int das16cs_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16cs_ai_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das16cs_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int das16cs_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16cs_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16cs_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das16cs_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int das16cs_timer_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static int das16cs_timer_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data);
static const struct das16cs_board *das16cs_probe(struct comedi_device *dev,
struct pcmcia_device *link)
static int das16cs_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int das16cs_detach(struct comedi_device *dev)
static irqreturn_t das16cs_interrupt(int irq, void *d)
static int das16cs_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int das16cs_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int das16cs_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_timer_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das16cs_timer_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn,
unsigned int *data)
#if defined(CONFIG_PCMCIA) || defined(CONFIG_PCMCIA_MODULE)
static void das16cs_pcmcia_config(struct pcmcia_device *link);
static void das16cs_pcmcia_release(struct pcmcia_device *link);
static int das16cs_pcmcia_suspend(struct pcmcia_device *p_dev);
static int das16cs_pcmcia_resume(struct pcmcia_device *p_dev);
static int das16cs_pcmcia_attach(struct pcmcia_device *);
static void das16cs_pcmcia_detach(struct pcmcia_device *);
struct local_info_t ;
static int das16cs_pcmcia_attach(struct pcmcia_device *link)
static void das16cs_pcmcia_detach(struct pcmcia_device *link)
static int das16cs_pcmcia_config_loop(struct pcmcia_device *p_dev,
void *priv_data)
static void das16cs_pcmcia_config(struct pcmcia_device *link)
static void das16cs_pcmcia_release(struct pcmcia_device *link)
static int das16cs_pcmcia_suspend(struct pcmcia_device *link)
static int das16cs_pcmcia_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id das16cs_id_table[] = ;
MODULE_DEVICE_TABLE(pcmcia, das16cs_id_table);
MODULE_AUTHOR("David A. Schleef <ds@schleef.org>");
MODULE_DESCRIPTION("Comedi driver for Computer Boards PC-CARD DAS16/16");
MODULE_LICENSE("GPL");
struct pcmcia_driver das16cs_driver = ;
static int __init init_das16cs_pcmcia_cs(void)
static void __exit exit_das16cs_pcmcia_cs(void)
int __init init_module(void)
void __exit cleanup_module(void)
static int __init driver_das16cs_init_module(void)
static void __exit driver_das16cs_cleanup_module(void)
module_init(driver_das16cs_init_module);
module_exit(driver_das16cs_cleanup_module);
