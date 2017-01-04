#define PCI_VENDOR_ID_AMPLICON 0x14dc
#define PCI_DEVICE_ID_PCI230 0x0000
#define PCI_DEVICE_ID_PCI260 0x0006
#define PCI_DEVICE_ID_INVALID 0xffff
#define PCI230_IO1_SIZE 32
#define PCI230_IO2_SIZE 16
#define PCI230_PPI_X_BASE	0x00
#define PCI230_PPI_X_A		0x00
#define PCI230_PPI_X_B		0x01
#define PCI230_PPI_X_C		0x02
#define PCI230_PPI_X_CMD	0x03
#define PCI230_Z2_CT_BASE	0x14
#define PCI230_Z2_CT0		0x14
#define PCI230_Z2_CT1		0x15
#define PCI230_Z2_CT2		0x16
#define PCI230_Z2_CTC		0x17
#define PCI230_ZCLK_SCE		0x1A
#define PCI230_ZGAT_SCE		0x1D
#define PCI230_INT_SCE		0x1E
#define PCI230_INT_STAT		0x1E
#define PCI230_DACCON		0x00
#define PCI230_DACOUT1		0x02
#define PCI230_DACOUT2		0x04
#define PCI230_ADCDATA		0x08
#define PCI230_ADCSWTRIG	0x08
#define PCI230_ADCCON		0x0A
#define PCI230_ADCEN		0x0C
#define PCI230_ADCG		0x0E
#define PCI230P_ADCTRIG		0x10
#define PCI230P_ADCTH		0x12
#define PCI230P_ADCFFTH		0x14
#define PCI230P_ADCFFLEV	0x16
#define PCI230P_ADCPTSC		0x18
#define PCI230P_ADCHYST		0x1A
#define PCI230P_EXTFUNC		0x1C
#define PCI230P_HWVER		0x1E
#define PCI230P2_DACDATA	0x02
#define PCI230P2_DACSWTRIG	0x02
#define PCI230P2_DACEN		0x06
#define PCI230_DAC_SETTLE 5
#define PCI230_ADC_SETTLE 1
#define PCI230_MUX_SETTLE 10
#define PCI230_DAC_OR_UNI		(0<<0)
#define PCI230_DAC_OR_BIP		(1<<0)
#define PCI230_DAC_OR_MASK		(1<<0)
#define PCI230P2_DAC_FIFO_EN		(1<<8)
#define PCI230P2_DAC_TRIG_NONE		(0<<2)
#define PCI230P2_DAC_TRIG_SW		(1<<2)
#define PCI230P2_DAC_TRIG_EXTP		(2<<2)
#define PCI230P2_DAC_TRIG_EXTN		(3<<2)
#define PCI230P2_DAC_TRIG_Z2CT0		(4<<2)
#define PCI230P2_DAC_TRIG_Z2CT1		(5<<2)
#define PCI230P2_DAC_TRIG_Z2CT2		(6<<2)
#define PCI230P2_DAC_TRIG_MASK		(7<<2)
#define PCI230P2_DAC_FIFO_WRAP		(1<<7)
#define PCI230P2_DAC_INT_FIFO_EMPTY	(0<<9)
#define PCI230P2_DAC_INT_FIFO_NEMPTY	(1<<9)
#define PCI230P2_DAC_INT_FIFO_NHALF	(2<<9)
#define PCI230P2_DAC_INT_FIFO_HALF	(3<<9)
#define PCI230P2_DAC_INT_FIFO_NFULL	(4<<9)
#define PCI230P2_DAC_INT_FIFO_FULL	(5<<9)
#define PCI230P2_DAC_INT_FIFO_MASK	(7<<9)
#define PCI230_DAC_BUSY			(1<<1)
#define PCI230P2_DAC_FIFO_UNDERRUN_LATCHED	(1<<5)
#define PCI230P2_DAC_FIFO_EMPTY		(1<<13)
#define PCI230P2_DAC_FIFO_FULL		(1<<14)
#define PCI230P2_DAC_FIFO_HALF		(1<<15)
#define PCI230P2_DAC_FIFO_UNDERRUN_CLEAR	(1<<5)
#define PCI230P2_DAC_FIFO_RESET		(1<<12)
#define PCI230P2_DAC_FIFOLEVEL_HALF	512
#define PCI230P2_DAC_FIFOLEVEL_FULL	1024
#define PCI230P2_DAC_FIFOROOM_EMPTY		PCI230P2_DAC_FIFOLEVEL_FULL
#define PCI230P2_DAC_FIFOROOM_ONETOHALF		\
(PCI230P2_DAC_FIFOLEVEL_FULL - PCI230P2_DAC_FIFOLEVEL_HALF)
#define PCI230P2_DAC_FIFOROOM_HALFTOFULL	1
#define PCI230P2_DAC_FIFOROOM_FULL		0
#define PCI230_ADC_TRIG_NONE		(0<<0)
#define PCI230_ADC_TRIG_SW		(1<<0)
#define PCI230_ADC_TRIG_EXTP		(2<<0)
#define PCI230_ADC_TRIG_EXTN		(3<<0)
#define PCI230_ADC_TRIG_Z2CT0		(4<<0)
#define PCI230_ADC_TRIG_Z2CT1		(5<<0)
#define PCI230_ADC_TRIG_Z2CT2		(6<<0)
#define PCI230_ADC_TRIG_MASK		(7<<0)
#define PCI230_ADC_IR_UNI		(0<<3)
#define PCI230_ADC_IR_BIP		(1<<3)
#define PCI230_ADC_IR_MASK		(1<<3)
#define PCI230_ADC_IM_SE		(0<<4)
#define PCI230_ADC_IM_DIF		(1<<4)
#define PCI230_ADC_IM_MASK		(1<<4)
#define PCI230_ADC_FIFO_EN		(1<<8)
#define PCI230_ADC_INT_FIFO_EMPTY	(0<<9)
#define PCI230_ADC_INT_FIFO_NEMPTY	(1<<9)
#define PCI230_ADC_INT_FIFO_NHALF	(2<<9)
#define PCI230_ADC_INT_FIFO_HALF	(3<<9)
#define PCI230_ADC_INT_FIFO_NFULL	(4<<9)
#define PCI230_ADC_INT_FIFO_FULL	(5<<9)
#define PCI230P_ADC_INT_FIFO_THRESH	(7<<9)
#define PCI230_ADC_INT_FIFO_MASK	(7<<9)
#define PCI230_ADC_FIFO_RESET		(1<<12)
#define PCI230_ADC_GLOB_RESET		(1<<13)
#define PCI230_ADC_BUSY			(1<<15)
#define PCI230_ADC_FIFO_EMPTY		(1<<12)
#define PCI230_ADC_FIFO_FULL		(1<<13)
#define PCI230_ADC_FIFO_HALF		(1<<14)
#define PCI230_ADC_FIFO_FULL_LATCHED	(1<<5)
#define PCI230_ADC_FIFOLEVEL_HALFFULL	2049
#define PCI230_ADC_FIFOLEVEL_FULL	4096
#define PCI230_ADC_CONV			0xffff
#define PCI230P_EXTFUNC_GAT_EXTTRIG	(1<<0)
#define PCI230P2_EXTFUNC_DACFIFO	(1<<1)
#define CLK_CLK		0
#define CLK_10MHZ	1
#define CLK_1MHZ	2
#define CLK_100KHZ	3
#define CLK_10KHZ	4
#define CLK_1KHZ	5
#define CLK_OUTNM1	6
#define CLK_EXT		7
#define CLK_CONFIG(chan, src)	((((chan) & 3) << 3) | ((src) & 7))
#define TIMEBASE_10MHZ		100
#define TIMEBASE_1MHZ		1000
#define TIMEBASE_100KHZ		10000
#define TIMEBASE_10KHZ		100000
#define TIMEBASE_1KHZ		1000000
#define GAT_VCC		0
#define GAT_GND		1
#define GAT_EXT		2
#define GAT_NOUTNM2	3
#define GAT_CONFIG(chan, src)	((((chan) & 3) << 3) | ((src) & 7))
#define PCI230_INT_DISABLE		0
#define PCI230_INT_PPI_C0		(1<<0)
#define PCI230_INT_PPI_C3		(1<<1)
#define PCI230_INT_ADC			(1<<2)
#define PCI230_INT_ZCLK_CT1		(1<<5)
#define PCI230P2_INT_DAC		(1<<4)
#define PCI230_TEST_BIT(val, n)	((val>>n)&1)
enum ;
enum ;
#define COMBINE(old, new, mask)	(((old) & ~(mask)) | ((new) & (mask)))
#define NULLFUNC	0
#define THISCPU		smp_processor_id()
#define AI_CMD_STARTED	0
#define AO_CMD_STARTED	1
struct pci230_board ;
static const struct pci230_board pci230_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(pci230_pci_table) = ;
MODULE_DEVICE_TABLE(pci, pci230_pci_table);
#define n_pci230_boards ARRAY_SIZE(pci230_boards)
#define thisboard ((const struct pci230_board *)dev->board_ptr)
struct pci230_private ;
#define devpriv ((struct pci230_private *)dev->private)
static const unsigned int pci230_timebase[8] = ;
static const struct comedi_lrange pci230_ai_range = ;
static const unsigned char pci230_ai_gain[7] = ;
static const unsigned char pci230_ai_bipolar[7] = ;
static const struct comedi_lrange pci230_ao_range = ;
static const unsigned char pci230_ao_bipolar[2] = ;
static int pci230_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int pci230_detach(struct comedi_device *dev);
static struct comedi_driver driver_amplc_pci230 = ;
static int __devinit driver_amplc_pci230_pci_probe(struct pci_dev *dev,
const struct pci_device_id
*ent)
static void __devexit driver_amplc_pci230_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_amplc_pci230_pci_driver = ;
static int __init driver_amplc_pci230_init_module(void)
static void __exit driver_amplc_pci230_cleanup_module(void)
module_init(driver_amplc_pci230_init_module);
module_exit(driver_amplc_pci230_cleanup_module);
static int pci230_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int pci230_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static int pci230_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data);
static void pci230_ct_setup_ns_mode(struct comedi_device *dev, unsigned int ct,
unsigned int mode, uint64_t ns,
unsigned int round);
static void pci230_ns_to_single_timer(unsigned int *ns, unsigned int round);
static void pci230_cancel_ct(struct comedi_device *dev, unsigned int ct);
static irqreturn_t pci230_interrupt(int irq, void *d);
static int pci230_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int pci230_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int pci230_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void pci230_ao_stop(struct comedi_device *dev,
struct comedi_subdevice *s);
static void pci230_handle_ao_nofifo(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pci230_handle_ao_fifo(struct comedi_device *dev,
struct comedi_subdevice *s);
static int pci230_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int pci230_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int pci230_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static void pci230_ai_stop(struct comedi_device *dev,
struct comedi_subdevice *s);
static void pci230_handle_ai(struct comedi_device *dev,
struct comedi_subdevice *s);
static short pci230_ai_read(struct comedi_device *dev)
static inline unsigned short pci230_ao_mangle_datum(struct comedi_device *dev,
short datum)
static inline void pci230_ao_write_nofifo(struct comedi_device *dev,
short datum, unsigned int chan)
static inline void pci230_ao_write_fifo(struct comedi_device *dev, short datum,
unsigned int chan)
static int pci230_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int pci230_detach(struct comedi_device *dev)
static int get_resources(struct comedi_device *dev, unsigned int res_mask,
unsigned char owner)
static inline int get_one_resource(struct comedi_device *dev,
unsigned int resource, unsigned char owner)
static void put_resources(struct comedi_device *dev, unsigned int res_mask,
unsigned char owner)
static inline void put_one_resource(struct comedi_device *dev,
unsigned int resource, unsigned char owner)
static inline void put_all_resources(struct comedi_device *dev,
unsigned char owner)
static int pci230_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int pci230_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int pci230_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int pci230_ao_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int pci230_ao_inttrig_scan_begin(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static void pci230_ao_start(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_ao_inttrig_start(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static int pci230_ao_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int pci230_ai_check_scan_period(struct comedi_cmd *cmd)
static int pci230_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static void pci230_ai_update_fifo_trigger_level(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_ai_inttrig_convert(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static int pci230_ai_inttrig_scan_begin(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static void pci230_ai_start(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_ai_inttrig_start(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trig_num)
static int pci230_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static unsigned int divide_ns(uint64_t ns, unsigned int timebase,
unsigned int round_mode)
static unsigned int pci230_choose_clk_count(uint64_t ns, unsigned int *count,
unsigned int round_mode)
static void pci230_ns_to_single_timer(unsigned int *ns, unsigned int round)
static void pci230_ct_setup_ns_mode(struct comedi_device *dev, unsigned int ct,
unsigned int mode, uint64_t ns,
unsigned int round)
static void pci230_cancel_ct(struct comedi_device *dev, unsigned int ct)
static irqreturn_t pci230_interrupt(int irq, void *d)
static void pci230_handle_ao_nofifo(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_handle_ao_fifo(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci230_handle_ai(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci230_ao_stop(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_ao_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
static void pci230_ai_stop(struct comedi_device *dev,
struct comedi_subdevice *s)
static int pci230_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
