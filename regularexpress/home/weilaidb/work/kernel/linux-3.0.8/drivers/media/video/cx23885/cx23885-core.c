MODULE_DESCRIPTION("Driver for cx23885 based TV cards");
MODULE_AUTHOR("Steven Toth <stoth@linuxtv.org>");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
static unsigned int card[]  = ;
module_param_array(card,  int, NULL, 0444);
MODULE_PARM_DESC(card, "card type");
#define dprintk(level, fmt, arg...)\
do  while (0)
static unsigned int cx23885_devcount;
#define NO_SYNC_LINE (-1U)
static struct sram_channel cx23885_sram_channels[] = ;
static struct sram_channel cx23887_sram_channels[] = ;
void cx23885_irq_add(struct cx23885_dev *dev, u32 mask)
void cx23885_irq_add_enable(struct cx23885_dev *dev, u32 mask)
void cx23885_irq_enable(struct cx23885_dev *dev, u32 mask)
static inline void cx23885_irq_enable_all(struct cx23885_dev *dev)
void cx23885_irq_disable(struct cx23885_dev *dev, u32 mask)
static inline void cx23885_irq_disable_all(struct cx23885_dev *dev)
void cx23885_irq_remove(struct cx23885_dev *dev, u32 mask)
static u32 cx23885_irq_get_mask(struct cx23885_dev *dev)
static int cx23885_risc_decode(u32 risc)
void cx23885_wakeup(struct cx23885_tsport *port,
struct cx23885_dmaqueue *q, u32 count)
int cx23885_sram_channel_setup(struct cx23885_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc)
void cx23885_sram_channel_dump(struct cx23885_dev *dev,
struct sram_channel *ch)
static void cx23885_risc_disasm(struct cx23885_tsport *port,
struct btcx_riscmem *risc)
static void cx23885_shutdown(struct cx23885_dev *dev)
static void cx23885_reset(struct cx23885_dev *dev)
static int cx23885_pci_quirks(struct cx23885_dev *dev)
static int get_resources(struct cx23885_dev *dev)
static void cx23885_timeout(unsigned long data);
int cx23885_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value);
static int cx23885_init_tsport(struct cx23885_dev *dev,
struct cx23885_tsport *port, int portno)
static void cx23885_dev_checkrevision(struct cx23885_dev *dev)
struct v4l2_subdev *cx23885_find_hw(struct cx23885_dev *dev, u32 hw)
static int cx23885_dev_setup(struct cx23885_dev *dev)
static void cx23885_dev_unregister(struct cx23885_dev *dev)
static __le32 *cx23885_risc_field(__le32 *rp, struct scatterlist *sglist,
unsigned int offset, u32 sync_line,
unsigned int bpl, unsigned int padding,
unsigned int lines)
int cx23885_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist, unsigned int top_offset,
unsigned int bottom_offset, unsigned int bpl,
unsigned int padding, unsigned int lines)
static int cx23885_risc_databuffer(struct pci_dev *pci,
struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int bpl,
unsigned int lines)
int cx23885_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value)
void cx23885_free_buffer(struct videobuf_queue *q, struct cx23885_buffer *buf)
static void cx23885_tsport_reg_dump(struct cx23885_tsport *port)
static int cx23885_start_dma(struct cx23885_tsport *port,
struct cx23885_dmaqueue *q,
struct cx23885_buffer   *buf)
static int cx23885_stop_dma(struct cx23885_tsport *port)
int cx23885_restart_queue(struct cx23885_tsport *port,
struct cx23885_dmaqueue *q)
int cx23885_buf_prepare(struct videobuf_queue *q, struct cx23885_tsport *port,
struct cx23885_buffer *buf, enum v4l2_field field)
void cx23885_buf_queue(struct cx23885_tsport *port, struct cx23885_buffer *buf)
static void do_cancel_buffers(struct cx23885_tsport *port, char *reason,
int restart)
void cx23885_cancel_buffers(struct cx23885_tsport *port)
static void cx23885_timeout(unsigned long data)
int cx23885_irq_417(struct cx23885_dev *dev, u32 status)
static int cx23885_irq_ts(struct cx23885_tsport *port, u32 status)
static irqreturn_t cx23885_irq(int irq, void *dev_id)
static void cx23885_v4l2_dev_notify(struct v4l2_subdev *sd,
unsigned int notification, void *arg)
static void cx23885_v4l2_dev_notify_init(struct cx23885_dev *dev)
static inline int encoder_on_portb(struct cx23885_dev *dev)
static inline int encoder_on_portc(struct cx23885_dev *dev)
void cx23885_gpio_set(struct cx23885_dev *dev, u32 mask)
void cx23885_gpio_clear(struct cx23885_dev *dev, u32 mask)
u32 cx23885_gpio_get(struct cx23885_dev *dev, u32 mask)
void cx23885_gpio_enable(struct cx23885_dev *dev, u32 mask, int asoutput)
static int __devinit cx23885_initdev(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit cx23885_finidev(struct pci_dev *pci_dev)
static struct pci_device_id cx23885_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cx23885_pci_tbl);
static struct pci_driver cx23885_pci_driver = ;
static int __init cx23885_init(void)
static void __exit cx23885_fini(void)
module_init(cx23885_init);
module_exit(cx23885_fini);
