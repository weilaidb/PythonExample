#define PCI_VENDOR_ID_AMCC	0x10e8
#undef PCI9118_PARANOIDCHECK
#undef PCI9118_EXTDEBUG
#undef DPRINTK
#define DPRINTK(fmt, args...) printk(fmt, ## args)
#define DPRINTK(fmt, args...)
#define IORANGE_9118 	64
#define PCI9118_CHANLEN	255
#define PCI9118_CNT0	0x00
#define PCI9118_CNT1	0x04
#define PCI9118_CNT2	0x08
#define PCI9118_CNTCTRL	0x0c
#define PCI9118_AD_DATA	0x10
#define PCI9118_DA1	0x10
#define PCI9118_DA2	0x14
#define PCI9118_ADSTAT	0x18
#define PCI9118_ADCNTRL	0x18
#define PCI9118_DI	0x1c
#define PCI9118_DO	0x1c
#define PCI9118_SOFTTRG	0x20
#define PCI9118_GAIN	0x24
#define PCI9118_BURST	0x28
#define PCI9118_SCANMOD	0x2c
#define PCI9118_ADFUNC	0x30
#define PCI9118_DELFIFO	0x34
#define PCI9118_INTSRC	0x38
#define PCI9118_INTCTRL	0x38
#define AdControl_UniP	0x80
#define AdControl_Diff	0x40
#define AdControl_SoftG	0x20
#define	AdControl_ExtG	0x10
#define AdControl_ExtM	0x08
#define AdControl_TmrTr	0x04
#define AdControl_Int	0x02
#define AdControl_Dma	0x01
#define AdFunction_PDTrg	0x80
#define AdFunction_PETrg	0x40
#define AdFunction_BSSH		0x20
#define AdFunction_BM		0x10
#define AdFunction_BS		0x08
#define AdFunction_PM		0x04
#define AdFunction_AM		0x02
#define AdFunction_Start	0x01
#define AdStatus_nFull	0x100
#define AdStatus_nHfull	0x080
#define AdStatus_nEpty	0x040
#define AdStatus_Acmp	0x020
#define AdStatus_DTH	0x010
#define AdStatus_Bover	0x008
#define AdStatus_ADOS	0x004
#define AdStatus_ADOR	0x002
#define AdStatus_ADrdy	0x001
#define Int_Timer	0x08
#define Int_About	0x04
#define Int_Hfull	0x02
#define Int_DTrg	0x01
#define START_AI_EXT	0x01
#define STOP_AI_EXT	0x02
#define START_AI_INT	0x04
#define STOP_AI_INT	0x08
#define EXTTRG_AI	0
static const struct comedi_lrange range_pci9118dg_hr = ;
static const struct comedi_lrange range_pci9118hg = ;
#define PCI9118_BIPOLAR_RANGES	4
static int pci9118_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci9118_detach(struct comedi_device *dev);
struct boardtype ;
static DEFINE_PCI_DEVICE_TABLE(pci9118_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci9118_pci_table);
static const struct boardtype boardtypes[] = ;
#define n_boardtypes (sizeof(boardtypes)/sizeof(struct boardtype))
static struct comedi_driver driver_pci9118 = ;
static int __devinit driver_pci9118_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_pci9118_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_pci9118_pci_driver = ;
static int __init driver_pci9118_init_module(void)
static void __exit driver_pci9118_cleanup_module(void)
module_init(driver_pci9118_init_module);
module_exit(driver_pci9118_cleanup_module);
struct pci9118_private ;
#define devpriv ((struct pci9118_private *)dev->private)
#define this_board ((struct boardtype *)dev->board_ptr)
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, int n_chan,
unsigned int *chanlist, int frontadd,
int backadd);
static int setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, int n_chan,
unsigned int *chanlist, int rot, int frontadd,
int backadd, int usedma, char eoshandle);
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2);
static int pci9118_reset(struct comedi_device *dev);
static int pci9118_exttrg_add(struct comedi_device *dev, unsigned char source);
static int pci9118_exttrg_del(struct comedi_device *dev, unsigned char source);
static int pci9118_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void pci9118_calc_divisors(char mode, struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *tim1, unsigned int *tim2,
unsigned int flags, int chans,
unsigned int *div1, unsigned int *div2,
char usessh, unsigned int chnsshfront);
static int pci9118_insn_read_ai(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci9118_insn_write_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci9118_insn_read_ao(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci9118_insn_bits_di(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int pci9118_insn_bits_do(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void interrupt_pci9118_ai_mode4_switch(struct comedi_device *dev)
static unsigned int defragment_dma_buffer(struct comedi_device *dev,
struct comedi_subdevice *s,
short *dma_buffer,
unsigned int num_samples)
static int move_block_from_dma(struct comedi_device *dev,
struct comedi_subdevice *s,
short *dma_buffer,
unsigned int num_samples)
static char pci9118_decode_error_status(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned char m)
static void pci9118_ai_munge(struct comedi_device *dev,
struct comedi_subdevice *s, void *data,
unsigned int num_bytes,
unsigned int start_chan_index)
static void interrupt_pci9118_ai_onesample(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned short int_adstat,
unsigned int int_amcc,
unsigned short int_daq)
static void interrupt_pci9118_ai_dma(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned short int_adstat,
unsigned int int_amcc,
unsigned short int_daq)
static irqreturn_t interrupt_pci9118(int irq, void *d)
static int pci9118_ai_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum)
static int pci9118_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int Compute_and_setup_dma(struct comedi_device *dev)
static int pci9118_ai_docmd_sampl(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci9118_ai_docmd_dma(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci9118_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int check_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, int n_chan,
unsigned int *chanlist, int frontadd, int backadd)
static int setup_channel_list(struct comedi_device *dev,
struct comedi_subdevice *s, int n_chan,
unsigned int *chanlist, int rot, int frontadd,
int backadd, int usedma, char useeos)
static void pci9118_calc_divisors(char mode, struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int *tim1, unsigned int *tim2,
unsigned int flags, int chans,
unsigned int *div1, unsigned int *div2,
char usessh, unsigned int chnsshfront)
static void start_pacer(struct comedi_device *dev, int mode,
unsigned int divisor1, unsigned int divisor2)
static int pci9118_exttrg_add(struct comedi_device *dev, unsigned char source)
static int pci9118_exttrg_del(struct comedi_device *dev, unsigned char source)
static int pci9118_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci9118_reset(struct comedi_device *dev)
static int pci9118_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
static int pci9118_detach(struct comedi_device *dev)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
