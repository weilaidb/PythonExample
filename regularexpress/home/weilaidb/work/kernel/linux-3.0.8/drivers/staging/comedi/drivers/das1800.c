#define DAS1800_SIZE           16
#define FIFO_SIZE              1024
#define TIMER_BASE             200
#define UNIPOLAR               0x4
#define DMA_BUF_SIZE           0x1ff00
#define DAS1800_FIFO            0x0
#define DAS1800_QRAM            0x0
#define DAS1800_DAC             0x0
#define DAS1800_SELECT          0x2
#define   ADC                     0x0
#define   QRAM                    0x1
#define   DAC(a)                  (0x2 + a)
#define DAS1800_DIGITAL         0x3
#define DAS1800_CONTROL_A       0x4
#define   FFEN                    0x1
#define   CGEN                    0x4
#define   CGSL                    0x8
#define   TGEN                    0x10
#define   TGSL                    0x20
#define   ATEN                    0x80
#define DAS1800_CONTROL_B       0x5
#define   DMA_CH5                 0x1
#define   DMA_CH6                 0x2
#define   DMA_CH7                 0x3
#define   DMA_CH5_CH6             0x5
#define   DMA_CH6_CH7             0x6
#define   DMA_CH7_CH5             0x7
#define   DMA_ENABLED             0x3
#define   DMA_DUAL                0x4
#define   IRQ3                    0x8
#define   IRQ5                    0x10
#define   IRQ7                    0x18
#define   IRQ10                   0x28
#define   IRQ11                   0x30
#define   IRQ15                   0x38
#define   FIMD                    0x40
#define DAS1800_CONTROL_C       0X6
#define   IPCLK                   0x1
#define   XPCLK                   0x3
#define   BMDE                    0x4
#define   CMEN                    0x8
#define   UQEN                    0x10
#define   SD                      0x40
#define   UB                      0x80
#define DAS1800_STATUS          0x7
#define   CLEAR_INTR_MASK         (CVEN_MASK | 0x1f)
#define   INT                     0x1
#define   DMATC                   0x2
#define   CT0TC                   0x8
#define   OVF                     0x10
#define   FHF                     0x20
#define   FNE                     0x40
#define   CVEN_MASK               0x40
#define   CVEN                    0x80
#define DAS1800_BURST_LENGTH    0x8
#define DAS1800_BURST_RATE      0x9
#define DAS1800_QRAM_ADDRESS    0xa
#define DAS1800_COUNTER         0xc
#define IOBASE2                   0x400
enum ;
static int das1800_attach(struct comedi_device *dev,
struct comedi_devconfig *it);
static int das1800_detach(struct comedi_device *dev);
static int das1800_probe(struct comedi_device *dev);
static int das1800_cancel(struct comedi_device *dev,
struct comedi_subdevice *s);
static irqreturn_t das1800_interrupt(int irq, void *d);
static int das1800_ai_poll(struct comedi_device *dev,
struct comedi_subdevice *s);
static void das1800_ai_handler(struct comedi_device *dev);
static void das1800_handle_dma(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int status);
static void das1800_flush_dma(struct comedi_device *dev,
struct comedi_subdevice *s);
static void das1800_flush_dma_channel(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int channel, uint16_t * buffer);
static void das1800_handle_fifo_half_full(struct comedi_device *dev,
struct comedi_subdevice *s);
static void das1800_handle_fifo_not_empty(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das1800_ai_do_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int das1800_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s);
static int das1800_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das1800_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das1800_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das1800_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data);
static int das1800_set_frequency(struct comedi_device *dev);
static unsigned int burst_convert_arg(unsigned int convert_arg, int round_mode);
static unsigned int suggest_transfer_size(struct comedi_cmd *cmd);
static const struct comedi_lrange range_ai_das1801 = ;
static const struct comedi_lrange range_ai_das1802 = ;
struct das1800_board ;
static const struct das1800_board das1800_boards[] = ;
#define thisboard ((const struct das1800_board *)dev->board_ptr)
struct das1800_private ;
#define devpriv ((struct das1800_private *)dev->private)
static const struct comedi_lrange range_ao_1 = ;
static struct comedi_driver driver_das1800 = ;
static int __init driver_das1800_init_module(void)
static void __exit driver_das1800_cleanup_module(void)
module_init(driver_das1800_init_module);
module_exit(driver_das1800_cleanup_module);
static int das1800_init_dma(struct comedi_device *dev, unsigned int dma0,
unsigned int dma1)
static int das1800_attach(struct comedi_device *dev,
struct comedi_devconfig *it)
;
static int das1800_detach(struct comedi_device *dev)
;
static int das1800_probe(struct comedi_device *dev)
static int das1800_ai_poll(struct comedi_device *dev,
struct comedi_subdevice *s)
static irqreturn_t das1800_interrupt(int irq, void *d)
static void das1800_ai_handler(struct comedi_device *dev)
static void das1800_handle_dma(struct comedi_device *dev,
struct comedi_subdevice *s, unsigned int status)
static inline uint16_t munge_bipolar_sample(const struct comedi_device *dev,
uint16_t sample)
static void munge_data(struct comedi_device *dev, uint16_t * array,
unsigned int num_elements)
static void das1800_flush_dma_channel(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int channel, uint16_t * buffer)
static void das1800_flush_dma(struct comedi_device *dev,
struct comedi_subdevice *s)
static void das1800_handle_fifo_half_full(struct comedi_device *dev,
struct comedi_subdevice *s)
static void das1800_handle_fifo_not_empty(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das1800_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static int das1800_ai_do_cmdtest(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int control_a_bits(struct comedi_cmd cmd)
static int control_c_bits(struct comedi_cmd cmd)
static int setup_counters(struct comedi_device *dev, struct comedi_cmd cmd)
static void setup_dma(struct comedi_device *dev, struct comedi_cmd cmd)
static void program_chanlist(struct comedi_device *dev, struct comedi_cmd cmd)
static int das1800_ai_do_cmd(struct comedi_device *dev,
struct comedi_subdevice *s)
static int das1800_ai_rinsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das1800_ao_winsn(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das1800_di_rbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das1800_do_wbits(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_insn *insn, unsigned int *data)
static int das1800_set_frequency(struct comedi_device *dev)
static unsigned int burst_convert_arg(unsigned int convert_arg, int round_mode)
static unsigned int suggest_transfer_size(struct comedi_cmd *cmd)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
