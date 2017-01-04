#define PCM3724_SIZE   16
#define SIZE_8255	4
#define BUF_C0 0x1
#define BUF_B0 0x2
#define BUF_A0 0x4
#define BUF_C1 0x8
#define BUF_B1 0x10
#define BUF_A1 0x20
#define GATE_A0 0x4
#define GATE_B0	0x2
#define GATE_C0	0x1
#define GATE_A1	0x20
#define GATE_B1	0x10
#define GATE_C1 0x8
#define CR_CW		0x80
#define _8255_CR 3
#define CR_B_IO		0x02
#define CR_B_MODE	0x04
#define CR_C_IO	        0x09
#define CR_A_IO		0x10
#define CR_A_MODE(a)	((a)<<5)
#define CR_CW		0x80
static int pcm3724_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pcm3724_detach(struct comedi_device *dev);
struct pcm3724_board ;
struct priv_pcm3724 ;
static const struct pcm3724_board boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct pcm3724_board))
#define this_board ((const struct pcm3724_board *)dev->board_ptr)
static struct comedi_driver driver_pcm3724 = ;
static int __init driver_pcm3724_init_module(void)
static void __exit driver_pcm3724_cleanup_module(void)
module_init(driver_pcm3724_init_module);
module_exit(driver_pcm3724_cleanup_module);
static int subdev_8255_cb(int dir, int port, int data, unsigned long arg)
static int compute_buffer(int config, int devno, struct comedi_subdevice *s)
static void do_3724_config(struct comedi_device *dev,
struct comedi_subdevice *s, int chanspec)
static void enable_chan(struct comedi_device *dev, struct comedi_subdevice *s,
int chanspec)
static int subdev_3724_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pcm3724_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pcm3724_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
