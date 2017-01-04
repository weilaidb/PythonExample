MODULE_AUTHOR("Gianluca Palli <gpalli@deis.unibo.it>");
MODULE_DESCRIPTION("Sensoray 626 Comedi driver module");
MODULE_LICENSE("GPL");
struct s626_board ;
static const struct s626_board s626_boards[] = ;
#define thisboard ((const struct s626_board *)dev->board_ptr)
#define PCI_VENDOR_ID_S626 0x1131
#define PCI_DEVICE_ID_S626 0x7146
static DEFINE_PCI_DEVICE_TABLE(s626_pci_table) = ;
MODULE_DEVICE_TABLE(pci, s626_pci_table);
static int s626_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int s626_detach(struct comedi_device *dev);
static struct comedi_driver driver_s626 = ;
struct s626_private ;
struct dio_private ;
static struct dio_private dio_private_A = ;
static struct dio_private dio_private_B = ;
static struct dio_private dio_private_C = ;
#define devpriv ((struct s626_private *)dev->private)
#define diopriv ((struct dio_private *)s->private)
static int __devinit driver_s626_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_s626_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_s626_pci_driver = ;
static int __init driver_s626_init_module(void)
static void __exit driver_s626_cleanup_module(void)
module_init(driver_s626_init_module);
module_exit(driver_s626_cleanup_module);
static int s626_ai_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int s626_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd);
static int s626_ai_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static int s626_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_dio_set_irq(struct comedi_device *dev, unsigned int chan);
static int s626_dio_reset_irq(struct comedi_device *dev, unsigned int gruop,
unsigned int mask);
static int s626_dio_clear_irq(struct comedi_device *dev);
static int s626_enc_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_enc_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_enc_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int s626_ns_to_timer(int *nanosec, int round_mode);
static int s626_ai_load_polllist(uint8_t *ppl, struct comedi_cmd *cmd);
static int s626_ai_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum);
static irqreturn_t s626_irq_handler(int irq, void *d);
static unsigned int s626_ai_reg_to_uint(int data);
static void s626_dio_init(struct comedi_device *dev);
static void ResetADC(struct comedi_device *dev, uint8_t * ppl);
static void LoadTrimDACs(struct comedi_device *dev);
static void WriteTrimDAC(struct comedi_device *dev, uint8_t LogicalChan,
uint8_t DacData);
static uint8_t I2Cread(struct comedi_device *dev, uint8_t addr);
static uint32_t I2Chandshake(struct comedi_device *dev, uint32_t val);
static void SetDAC(struct comedi_device *dev, uint16_t chan, short dacdata);
static void SendDAC(struct comedi_device *dev, uint32_t val);
static void WriteMISC2(struct comedi_device *dev, uint16_t NewImage);
static void DEBItransfer(struct comedi_device *dev);
static uint16_t DEBIread(struct comedi_device *dev, uint16_t addr);
static void DEBIwrite(struct comedi_device *dev, uint16_t addr, uint16_t wdata);
static void DEBIreplace(struct comedi_device *dev, uint16_t addr, uint16_t mask,
uint16_t wdata);
static void CloseDMAB(struct comedi_device *dev, struct bufferDMA *pdma,
size_t bsize);
struct enc_private ;
#define encpriv ((struct enc_private *)(dev->subdevices+5)->private)
static void s626_timer_load(struct comedi_device *dev, struct enc_private *k,
int tick);
static uint32_t ReadLatch(struct comedi_device *dev, struct enc_private *k);
static void ResetCapFlags_A(struct comedi_device *dev, struct enc_private *k);
static void ResetCapFlags_B(struct comedi_device *dev, struct enc_private *k);
static uint16_t GetMode_A(struct comedi_device *dev, struct enc_private *k);
static uint16_t GetMode_B(struct comedi_device *dev, struct enc_private *k);
static void SetMode_A(struct comedi_device *dev, struct enc_private *k,
uint16_t Setup, uint16_t DisableIntSrc);
static void SetMode_B(struct comedi_device *dev, struct enc_private *k,
uint16_t Setup, uint16_t DisableIntSrc);
static void SetEnable_A(struct comedi_device *dev, struct enc_private *k,
uint16_t enab);
static void SetEnable_B(struct comedi_device *dev, struct enc_private *k,
uint16_t enab);
static uint16_t GetEnable_A(struct comedi_device *dev, struct enc_private *k);
static uint16_t GetEnable_B(struct comedi_device *dev, struct enc_private *k);
static void SetLatchSource(struct comedi_device *dev, struct enc_private *k,
uint16_t value);
static void SetLoadTrig_A(struct comedi_device *dev, struct enc_private *k,
uint16_t Trig);
static void SetLoadTrig_B(struct comedi_device *dev, struct enc_private *k,
uint16_t Trig);
static uint16_t GetLoadTrig_A(struct comedi_device *dev, struct enc_private *k);
static uint16_t GetLoadTrig_B(struct comedi_device *dev, struct enc_private *k);
static void SetIntSrc_B(struct comedi_device *dev, struct enc_private *k,
uint16_t IntSource);
static void SetIntSrc_A(struct comedi_device *dev, struct enc_private *k,
uint16_t IntSource);
static uint16_t GetIntSrc_A(struct comedi_device *dev, struct enc_private *k);
static uint16_t GetIntSrc_B(struct comedi_device *dev, struct enc_private *k);
static void PulseIndex_A(struct comedi_device *dev, struct enc_private *k);
static void PulseIndex_B(struct comedi_device *dev, struct enc_private *k);
static void Preload(struct comedi_device *dev, struct enc_private *k,
uint32_t value);
static void CountersInit(struct comedi_device *dev);
#define INDXMASK(C)		(1 << (((C) > 2) ? ((C) * 2 - 1) : ((C) * 2 +  4)))
#define OVERMASK(C)		(1 << (((C) > 2) ? ((C) * 2 + 5) : ((C) * 2 + 10)))
#define EVBITS(C)
static struct enc_private enc_private_data[] = ;
#define MC_ENABLE(REGADRS, CTRLWORD)	writel(((uint32_t)(CTRLWORD) << 16) | (uint32_t)(CTRLWORD), devpriv->base_addr+(REGADRS))
#define MC_DISABLE(REGADRS, CTRLWORD)	writel((uint32_t)(CTRLWORD) << 16 , devpriv->base_addr+(REGADRS))
#define MC_TEST(REGADRS, CTRLWORD)	((readl(devpriv->base_addr+(REGADRS)) & CTRLWORD) != 0)
#define WR7146(REGARDS, CTRLWORD) writel(CTRLWORD, devpriv->base_addr+(REGARDS))
#define RR7146(REGARDS)		readl(devpriv->base_addr+(REGARDS))
#define BUGFIX_STREG(REGADRS)   (REGADRS - 4)
#define VECTPORT(VECTNUM)		(P_TSL2 + ((VECTNUM) << 2))
#define SETVECT(VECTNUM, VECTVAL)	WR7146(VECTPORT(VECTNUM), (VECTVAL))
#define I2C_B2(ATTR, VAL)	(((ATTR) << 6) | ((VAL) << 24))
#define I2C_B1(ATTR, VAL)	(((ATTR) << 4) | ((VAL) << 16))
#define I2C_B0(ATTR, VAL)	(((ATTR) << 2) | ((VAL) <<  8))
static const struct comedi_lrange s626_range_table = ;
static int s626_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static unsigned int s626_ai_reg_to_uint(int data)
static irqreturn_t s626_irq_handler(int irq, void *d)
static int s626_detach(struct comedi_device *dev)
void ResetADC(struct comedi_device *dev, uint8_t * ppl)
static int s626_ai_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_ai_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_ai_load_polllist(uint8_t *ppl, struct comedi_cmd *cmd)
static int s626_ai_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int trignum)
static int s626_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int s626_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int s626_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int s626_ns_to_timer(int *nanosec, int round_mode)
static int s626_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void s626_dio_init(struct comedi_device *dev)
static int s626_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_dio_set_irq(struct comedi_device *dev, unsigned int chan)
static int s626_dio_reset_irq(struct comedi_device *dev, unsigned int group,
unsigned int mask)
static int s626_dio_clear_irq(struct comedi_device *dev)
static int s626_enc_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_enc_insn_read(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int s626_enc_insn_write(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static void s626_timer_load(struct comedi_device *dev, struct enc_private *k,
int tick)
#define VECT0	(XSD2 | RSD3 | SIB_A2)
static uint8_t trimchan[] = ;
static uint8_t trimadrs[] = ;
static void LoadTrimDACs(struct comedi_device *dev)
static void WriteTrimDAC(struct comedi_device *dev, uint8_t LogicalChan,
uint8_t DacData)
static uint8_t I2Cread(struct comedi_device *dev, uint8_t addr)
static uint32_t I2Chandshake(struct comedi_device *dev, uint32_t val)
static void SetDAC(struct comedi_device *dev, uint16_t chan, short dacdata)
static void SendDAC(struct comedi_device *dev, uint32_t val)
static void WriteMISC2(struct comedi_device *dev, uint16_t NewImage)
static uint16_t DEBIread(struct comedi_device *dev, uint16_t addr)
static void DEBItransfer(struct comedi_device *dev)
static void DEBIwrite(struct comedi_device *dev, uint16_t addr, uint16_t wdata)
static void DEBIreplace(struct comedi_device *dev, uint16_t addr, uint16_t mask,
uint16_t wdata)
static void CloseDMAB(struct comedi_device *dev, struct bufferDMA *pdma,
size_t bsize)
static uint32_t ReadLatch(struct comedi_device *dev, struct enc_private *k)
static void ResetCapFlags_A(struct comedi_device *dev, struct enc_private *k)
static void ResetCapFlags_B(struct comedi_device *dev, struct enc_private *k)
static uint16_t GetMode_A(struct comedi_device *dev, struct enc_private *k)
static uint16_t GetMode_B(struct comedi_device *dev, struct enc_private *k)
static void SetMode_A(struct comedi_device *dev, struct enc_private *k,
uint16_t Setup, uint16_t DisableIntSrc)
static void SetMode_B(struct comedi_device *dev, struct enc_private *k,
uint16_t Setup, uint16_t DisableIntSrc)
static void SetEnable_A(struct comedi_device *dev, struct enc_private *k,
uint16_t enab)
static void SetEnable_B(struct comedi_device *dev, struct enc_private *k,
uint16_t enab)
static uint16_t GetEnable_A(struct comedi_device *dev, struct enc_private *k)
static uint16_t GetEnable_B(struct comedi_device *dev, struct enc_private *k)
static void SetLatchSource(struct comedi_device *dev, struct enc_private *k,
uint16_t value)
static void SetLoadTrig_A(struct comedi_device *dev, struct enc_private *k,
uint16_t Trig)
static void SetLoadTrig_B(struct comedi_device *dev, struct enc_private *k,
uint16_t Trig)
static uint16_t GetLoadTrig_A(struct comedi_device *dev, struct enc_private *k)
static uint16_t GetLoadTrig_B(struct comedi_device *dev, struct enc_private *k)
static void SetIntSrc_A(struct comedi_device *dev, struct enc_private *k,
uint16_t IntSource)
static void SetIntSrc_B(struct comedi_device *dev, struct enc_private *k,
uint16_t IntSource)
static uint16_t GetIntSrc_A(struct comedi_device *dev, struct enc_private *k)
static uint16_t GetIntSrc_B(struct comedi_device *dev, struct enc_private *k)
static void PulseIndex_A(struct comedi_device *dev, struct enc_private *k)
static void PulseIndex_B(struct comedi_device *dev, struct enc_private *k)
static void Preload(struct comedi_device *dev, struct enc_private *k,
uint32_t value)
static void CountersInit(struct comedi_device *dev)
