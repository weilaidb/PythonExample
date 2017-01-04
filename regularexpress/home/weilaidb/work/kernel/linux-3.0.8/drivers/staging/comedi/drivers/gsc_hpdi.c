static int hpdi_attach(struct comedi_device *dev, struct comedi_devconfig *it);
static int hpdi_detach(struct comedi_device *dev);
static void abort_dma(struct comedi_device *dev, unsigned int channel);
static int hpdi_cmd(struct comedi_device *dev, struct comedi_subdevice *s);
static int hpdi_cmd_test(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd);
static int hpdi_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static irqreturn_t handle_interrupt(int irq, void *d);
static int dio_config_block_size(struct comedi_device *dev, unsigned int *data);
#undef HPDI_DEBUG
#define DEBUG_PRINT(format, args...)  printk(format , ## args)
#define DEBUG_PRINT(format, args...)
#define TIMER_BASE 50
#define DMA_BUFFER_SIZE 0x10000
#define NUM_DMA_BUFFERS 4
#define NUM_DMA_DESCRIPTORS 256
enum base_address_regions ;
enum hpdi_registers ;
int command_channel_valid(unsigned int channel)
enum firmware_revision_bits ;
int firmware_revision(uint32_t fwr_bits)
int pcb_revision(uint32_t fwr_bits)
int hpdi_subid(uint32_t fwr_bits)
enum board_control_bits ;
uint32_t command_discrete_output_bits(unsigned int channel, int output,
int output_value)
enum board_status_bits ;
uint32_t almost_full_bits(unsigned int num_words)
uint32_t almost_empty_bits(unsigned int num_words)
unsigned int almost_full_num_words(uint32_t bits)
unsigned int almost_empty_num_words(uint32_t bits)
enum features_bits ;
enum interrupt_sources ;
int command_intr_source(unsigned int channel)
uint32_t intr_bit(int interrupt_source)
uint32_t tx_clock_divisor_bits(unsigned int divisor)
unsigned int fifo_size(uint32_t fifo_size_bits)
unsigned int fifo_words(uint32_t fifo_words_bits)
uint32_t intr_edge_bit(int interrupt_source)
uint32_t intr_active_high_bit(int interrupt_source)
struct hpdi_board ;
static const struct hpdi_board hpdi_boards[] = ;
static DEFINE_PCI_DEVICE_TABLE(hpdi_pci_table) = ;
MODULE_DEVICE_TABLE(pci, hpdi_pci_table);
static inline struct hpdi_board *board(const struct comedi_device *dev)
struct hpdi_private ;
static inline struct hpdi_private *priv(struct comedi_device *dev)
static struct comedi_driver driver_hpdi = ;
static int __devinit driver_hpdi_pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit driver_hpdi_pci_remove(struct pci_dev *dev)
static struct pci_driver driver_hpdi_pci_driver = ;
static int __init driver_hpdi_init_module(void)
static void __exit driver_hpdi_cleanup_module(void)
module_init(driver_hpdi_init_module);
module_exit(driver_hpdi_cleanup_module);
static int dio_config_insn(struct comedi_device *dev,
struct comedi_subdevice *s, struct comedi_insn *insn,
unsigned int *data)
static void disable_plx_interrupts(struct comedi_device *dev)
static void init_plx9080(struct comedi_device *dev)
static int setup_subdevices(struct comedi_device *dev)
static int init_hpdi(struct comedi_device *dev)
static int setup_dma_descriptors(struct comedi_device *dev,
unsigned int transfer_size)
static int hpdi_attach(struct comedi_device *dev, struct comedi_devconfig *it)
static int hpdi_detach(struct comedi_device *dev)
static int dio_config_block_size(struct comedi_device *dev, unsigned int *data)
static int di_cmd_test(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static int hpdi_cmd_test(struct comedi_device *dev, struct comedi_subdevice *s,
struct comedi_cmd *cmd)
static inline void hpdi_writel(struct comedi_device *dev, uint32_t bits,
unsigned int offset)
static int di_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static int hpdi_cmd(struct comedi_device *dev, struct comedi_subdevice *s)
static void drain_dma_buffers(struct comedi_device *dev, unsigned int channel)
static irqreturn_t handle_interrupt(int irq, void *d)
{
struct comedi_device *dev = d;
struct comedi_subdevice *s = dev->read_subdev;
struct comedi_async *async = s->async;
uint32_t hpdi_intr_status, hpdi_board_status;
uint32_t plx_status;
uint32_t plx_bits;
uint8_t dma0_status, dma1_status;
unsigned long flags;
if (!dev->attached)
return IRQ_NONE;
plx_status = readl(priv(dev)->plx9080_iobase + PLX_INTRCS_REG);
if ((plx_status & (ICS_DMA0_A | ICS_DMA1_A | ICS_LIA)) == 0)
return IRQ_NONE;
hpdi_intr_status = readl(priv(dev)->hpdi_iobase + INTERRUPT_STATUS_REG);
hpdi_board_status = readl(priv(dev)->hpdi_iobase + BOARD_STATUS_REG);
async->events = 0;
if (hpdi_intr_status)
spin_lock_irqsave(&dev->spinlock, flags);
dma0_status = readb(priv(dev)->plx9080_iobase + PLX_DMA0_CS_REG);
if (plx_status & ICS_DMA0_A)
spin_unlock_irqrestore(&dev->spinlock, flags);
spin_lock_irqsave(&dev->spinlock, flags);
dma1_status = readb(priv(dev)->plx9080_iobase + PLX_DMA1_CS_REG);
if (plx_status & ICS_DMA1_A)
static void abort_dma(struct comedi_device *dev, unsigned int channel)
static int hpdi_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
