#define DRV_NAME "rtd520"
#define DMA_CHAIN_COUNT 2
#define TRANS_TARGET_PERIOD 10000000
#define RTD_MAX_CHANLIST	128
#define WAIT_QUIETLY
#define RTD_ADC_TIMEOUT	66000
#define RTD_DAC_TIMEOUT	66000
#define RTD_DMA_TIMEOUT	33000
#define WAIT_QUIETLY	udelay(1)
#define RTD_ADC_TIMEOUT	2000
#define RTD_DAC_TIMEOUT	2000
#define RTD_DMA_TIMEOUT	1000
#define PCI_VENDOR_ID_RTD	0x1435
#define LCFG_PCIINDEX	0
#define LAS0_PCIINDEX	2
#define LAS1_PCIINDEX	3
#define LCFG_PCISIZE	0x100
#define LAS0_PCISIZE	0x200
#define LAS1_PCISIZE	0x10
#define RTD_CLOCK_RATE	8000000
#define RTD_CLOCK_BASE	125
#define RTD_MAX_SPEED	1625
#define RTD_MAX_SPEED_1	875
#define RTD_MIN_SPEED	2097151875
#define RTD_MIN_SPEED_1	5000000
#define DMA_MODE_BITS (\
PLX_LOCAL_BUS_16_WIDE_BITS \
| PLX_DMA_EN_READYIN_BIT \
| PLX_DMA_LOCAL_BURST_EN_BIT \
| PLX_EN_CHAIN_BIT \
| PLX_DMA_INTR_PCI_BIT \
| PLX_LOCAL_ADDR_CONST_BIT \
| PLX_DEMAND_MODE_BIT)
#define DMA_TRANSFER_BITS (\ 	PLX_DESC_IN_PCI_BIT \ | PLX_INTR_TERM_COUNT \		| PLX_XFER_LOCAL_TO_PCI)
static const struct comedi_lrange rtd_ai_7520_range = ;
static const struct comedi_lrange rtd_ai_4520_range = ;
static const struct comedi_lrange rtd_ao_range = ;
struct rtdBoard ;
static const struct rtdBoard rtd520Boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(rtd520_pci_table) = ;
MODULE_DEVICE_TABLE(pci, rtd520_pci_table);
#define thisboard ((const struct rtdBoard *)dev->board_ptr)
struct rtdPrivate ;
#define SEND_EOS	0x01
#define DMA0_ACTIVE	0x02
#define DMA1_ACTIVE	0x04
#define CHAN_ARRAY_TEST(array, index) \
(((array)[(index)/8] >> ((index) & 0x7)) & 0x1)
#define CHAN_ARRAY_SET(array, index) \
(((array)[(index)/8] |= 1 << ((index) & 0x7)))
#define CHAN_ARRAY_CLEAR(array, index) \
(((array)[(index)/8] &= ~(1 << ((index) & 0x7))))
#define devpriv ((struct rtdPrivate *)dev->private)
#define RtdResetBoard(dev) \
writel(0, devpriv->las0+LAS0_BOARD_RESET)
#define RtdResetCGT(dev) \
writel(0, devpriv->las0+LAS0_CGT_RESET)
#define RtdClearCGT(dev) \
writel(0, devpriv->las0+LAS0_CGT_CLEAR)
#define RtdEnableCGT(dev, v) \
writel((v > 0) ? 1 : 0, devpriv->las0+LAS0_CGT_ENABLE)
#define RtdWriteCGTable(dev, v) \
writel(v, devpriv->las0+LAS0_CGT_WRITE)
#define RtdWriteCGLatch(dev, v) \
writel(v, devpriv->las0+LAS0_CGL_WRITE)
#define RtdAdcClearFifo(dev) \
writel(0, devpriv->las0+LAS0_ADC_FIFO_CLEAR)
#define RtdAdcConversionSource(dev, v) \
writel(v, devpriv->las0+LAS0_ADC_CONVERSION)
#define RtdBurstStartSource(dev, v) \
writel(v, devpriv->las0+LAS0_BURST_START)
#define RtdPacerStartSource(dev, v) \
writel(v, devpriv->las0+LAS0_PACER_START)
#define RtdPacerStopSource(dev, v) \
writel(v, devpriv->las0+LAS0_PACER_STOP)
#define RtdPacerClockSource(dev, v) \
writel((v > 0) ? 1 : 0, devpriv->las0+LAS0_PACER_SELECT)
#define RtdAdcSampleCounterSource(dev, v) \
writel(v, devpriv->las0+LAS0_ADC_SCNT_SRC)
#define RtdPacerTriggerMode(dev, v) \
writel((v > 0) ? 1 : 0, devpriv->las0+LAS0_PACER_REPEAT)
#define RtdAboutStopEnable(dev, v) \
writel((v > 0) ? 1 : 0, devpriv->las0+LAS0_ACNT_STOP_ENABLE)
#define RtdTriggerPolarity(dev, v) \
writel((v > 0) ? 1 : 0, devpriv->las0+LAS0_ETRG_POLARITY)
#define RtdAdcStart(dev) \
writew(0, devpriv->las0+LAS0_ADC)
#define RtdAdcFifoGet(dev) \
readw(devpriv->las1+LAS1_ADC_FIFO)
#define RtdAdcFifoGet2(dev) \
readl(devpriv->las1+LAS1_ADC_FIFO)
#define RtdFifoStatus(dev) \
readl(devpriv->las0+LAS0_ADC)
#define RtdPacerStart(dev) \
readl(devpriv->las0+LAS0_PACER)
#define RtdPacerStop(dev) \
writel(0, devpriv->las0+LAS0_PACER)
#define RtdInterruptStatus(dev) \
readw(devpriv->las0+LAS0_IT)
#define RtdInterruptMask(dev, v) \
writew((devpriv->intMask = (v)), devpriv->las0+LAS0_IT)
#define RtdInterruptClear(dev) \
readw(devpriv->las0+LAS0_CLEAR)
#define RtdInterruptClearMask(dev, v) \
writew((devpriv->intClearMask = (v)), devpriv->las0+LAS0_CLEAR)
#define RtdInterruptOverrunStatus(dev) \
readl(devpriv->las0+LAS0_OVERRUN)
#define RtdInterruptOverrunClear(dev) \
writel(0, devpriv->las0+LAS0_OVERRUN)
#define RtdPacerCount(dev) \
readl(devpriv->las0+LAS0_PCLK)
#define RtdPacerCounter(dev, v) \
writel((v) & 0xffffff, devpriv->las0+LAS0_PCLK)
#define RtdBurstCount(dev) \
readl(devpriv->las0+LAS0_BCLK)
#define RtdBurstCounter(dev, v) \
writel((v) & 0x3ff, devpriv->las0+LAS0_BCLK)
#define RtdDelayCount(dev) \
readl(devpriv->las0+LAS0_DCLK)
#define RtdDelayCounter(dev, v) \
writel((v) & 0xffff, devpriv->las0+LAS0_DCLK)
#define RtdAboutCount(dev) \
readl(devpriv->las0+LAS0_ACNT)
#define RtdAboutCounter(dev, v) \
writel((v) & 0xffff, devpriv->las0+LAS0_ACNT)
#define RtdAdcSampleCount(dev) \
readl(devpriv->las0+LAS0_ADC_SCNT)
#define RtdAdcSampleCounter(dev, v) \
writel((v) & 0x3ff, devpriv->las0+LAS0_ADC_SCNT)
#define RtdUtcCounterGet(dev, n) \
readb(devpriv->las0 \
+ ((n <= 0) ? LAS0_UTC0 : ((1 == n) ? LAS0_UTC1 : LAS0_UTC2)))
#define RtdUtcCounterPut(dev, n, v) \
writeb((v) & 0xff, devpriv->las0 \
+ ((n <= 0) ? LAS0_UTC0 : ((1 == n) ? LAS0_UTC1 : LAS0_UTC2)))
#define RtdUtcCtrlPut(dev, n, v) \
writeb(devpriv->utcCtrl[(n) & 3] = (((n) & 3) << 6) | ((v) & 0x3f), \
devpriv->las0 + LAS0_UTC_CTRL)
#define RtdUtcClockSource(dev, n, v) \
writew(v, devpriv->las0 \
+ ((n <= 0) ? LAS0_UTC0_CLOCK : \
((1 == n) ? LAS0_UTC1_CLOCK : LAS0_UTC2_CLOCK)))
#define RtdUtcGateSource(dev, n, v) \
writew(v, devpriv->las0 \
+ ((n <= 0) ? LAS0_UTC0_GATE : \
((1 == n) ? LAS0_UTC1_GATE : LAS0_UTC2_GATE)))
#define RtdUsrOutSource(dev, n, v) \
writel(v, devpriv->las0+((n <= 0) ? LAS0_UOUT0_SELECT : LAS0_UOUT1_SELECT))
#define RtdDio0Read(dev) \
(readw(devpriv->las0+LAS0_DIO0) & 0xff)
#define RtdDio0Write(dev, v) \
writew((v) & 0xff, devpriv->las0+LAS0_DIO0)
#define RtdDio1Read(dev) \
(readw(devpriv->las0+LAS0_DIO1) & 0xff)
#define RtdDio1Write(dev, v) \
writew((v) & 0xff, devpriv->las0+LAS0_DIO1)
#define RtdDioStatusRead(dev) \
(readw(devpriv->las0+LAS0_DIO_STATUS) & 0xff)
#define RtdDioStatusWrite(dev, v) \
writew((devpriv->dioStatus = (v)), devpriv->las0+LAS0_DIO_STATUS)
#define RtdDio0CtrlRead(dev) \
(readw(devpriv->las0+LAS0_DIO0_CTRL) & 0xff)
#define RtdDio0CtrlWrite(dev, v) \
writew((v) & 0xff, devpriv->las0+LAS0_DIO0_CTRL)
#define RtdDacFifoPut(dev, n, v) \
writew((v), devpriv->las1 + (((n) == 0) ? LAS1_DAC1_FIFO : LAS1_DAC2_FIFO))
#define RtdDacUpdate(dev, n) \
writew(0, devpriv->las0 + (((n) == 0) ? LAS0_DAC1 : LAS0_DAC2))
#define RtdDacBothUpdate(dev) \
writew(0, devpriv->las0+LAS0_DAC)
#define RtdDacRange(dev, n, v) \
writew((v) & 7, devpriv->las0 \
+(((n) == 0) ? LAS0_DAC1_CTRL : LAS0_DAC2_CTRL))
#define RtdDacClearFifo(dev, n) \
writel(0, devpriv->las0+(((n) == 0) ? LAS0_DAC1_RESET : LAS0_DAC2_RESET))
#define RtdDma0Source(dev, n) \
writel((n) & 0xf, devpriv->las0+LAS0_DMA0_SRC)
#define RtdDma1Source(dev, n) \
writel((n) & 0xf, devpriv->las0+LAS0_DMA1_SRC)
#define RtdDma0Reset(dev) \
writel(0, devpriv->las0+LAS0_DMA0_RESET)
#define RtdDma1Reset(dev) \
writel(0, devpriv->las0+LAS0_DMA1_SRC)
#define RtdPlxInterruptRead(dev) \
readl(devpriv->lcfg+LCFG_ITCSR)
#define RtdPlxInterruptWrite(dev, v) \
writel(v, devpriv->lcfg+LCFG_ITCSR)
#define RtdDma0Mode(dev, m) \
writel((m), devpriv->lcfg+LCFG_DMAMODE0)
#define RtdDma0PciAddr(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMAPADR0)
#define RtdDma0LocalAddr(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMALADR0)
#define RtdDma0Count(dev, c) \
writel((c), devpriv->lcfg+LCFG_DMASIZ0)
#define RtdDma0Next(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMADPR0)
#define RtdDma1Mode(dev, m) \
writel((m), devpriv->lcfg+LCFG_DMAMODE1)
#define RtdDma1PciAddr(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMAADR1)
#define RtdDma1LocalAddr(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMALADR1)
#define RtdDma1Count(dev, c) \
writel((c), devpriv->lcfg+LCFG_DMASIZ1)
#define RtdDma1Next(dev, a) \
writel((a), devpriv->lcfg+LCFG_DMADPR1)
#define RtdDma0Control(dev, n) \
writeb(devpriv->dma0Control = (n), devpriv->lcfg+LCFG_DMACSR0)
#define RtdDma0Status(dev) \
readb(devpriv->lcfg+LCFG_DMACSR0)
#define RtdDma1Control(dev, n) \
writeb(devpriv->dma1Control = (n), devpriv->lcfg+LCFG_DMACSR1)
#define RtdDma1Status(dev) \
readb(devpriv->lcfg+LCFG_DMACSR1)
static int rtd_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int rtd_detach(struct comedi_device *dev);
static struct comedi_driver rtd520Driver = ;
static int rtd_ai_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int rtd_ao_winsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int rtd_ao_rinsn(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int rtd_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int rtd_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int rtd_ai_cmdtest(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int rtd_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int rtd_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static int rtd_ns_to_timer(unsigned int *ns, int roundMode);
static irqreturn_t rtd_interrupt(int irq, void *d);
static int rtd520_probe_fifo_depth(struct comedi_device *dev);
static int rtd_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int rtd_detach(struct comedi_device *dev)
static unsigned short rtdConvertChanGain(struct comedi_device *dev,
unsigned int comediChan, int chanIndex)
static void rtd_load_channelgain_list(struct comedi_device *dev,
unsigned int n_chan, unsigned int *list)
static int rtd520_probe_fifo_depth(struct comedi_device *dev)
static int rtd_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int ai_read_n(struct comedi_device *dev, struct comedi_subdevice *s,
int count)
static int ai_read_dregs(struct comedi_device *dev, struct comedi_subdevice *s)
void abort_dma(struct comedi_device *dev, unsigned int channel)
static int ai_process_dma(struct comedi_device *dev, struct comedi_subdevice *s)
{
int ii, n;
s16 *dp;
if (devpriv->aiCount == 0)
return 0;
dp = devpriv->dma0Buff[devpriv->dma0Offset];
for (ii = 0; ii < devpriv->fifoLen / 2;)
static irqreturn_t rtd_interrupt(int irq,
void *d)
static int rtd_ai_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_cmd *cmd)
static int rtd_ai_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int rtd_ai_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int rtd_ns_to_timer_base(unsigned int *nanosec,
int round_mode, int base)
static int rtd_ns_to_timer(unsigned int *ns, int round_mode)
static int rtd_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int rtd_ao_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static int rtd_dio_insn_bits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int rtd_dio_insn_config(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int __devinit rtd520Driver_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit rtd520Driver_pci_remove(struct pci_dev *dev)
static struct pci_driver rtd520Driver_pci_driver = ;
static int __init rtd520Driver_init_module(void)
static void __exit rtd520Driver_cleanup_module(void)
module_init(rtd520Driver_init_module);
module_exit(rtd520Driver_cleanup_module);
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
