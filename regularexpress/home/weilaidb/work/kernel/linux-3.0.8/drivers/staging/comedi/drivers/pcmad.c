#define PCMAD_SIZE		4
#define PCMAD_STATUS		0
#define PCMAD_LSB		1
#define PCMAD_MSB		2
#define PCMAD_CONVERT		1
struct pcmad_board_struct ;
static const struct pcmad_board_struct pcmad_boards[] = ;
#define this_board ((const struct pcmad_board_struct *)(dev->board_ptr))
#define n_pcmad_boards ARRAY_SIZE(pcmad_boards)
struct pcmad_priv_struct ;
#define devpriv ((struct pcmad_priv_struct *)dev->private)
static int pcmad_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int pcmad_detach(struct comedi_device *dev);
static struct comedi_driver driver_pcmad = ;
static int __init driver_pcmad_init_module(void)
static void __exit driver_pcmad_cleanup_module(void)
module_init(driver_pcmad_init_module);
module_exit(driver_pcmad_cleanup_module);
#define TIMEOUT	100
static int pcmad_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcmad_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pcmad_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
