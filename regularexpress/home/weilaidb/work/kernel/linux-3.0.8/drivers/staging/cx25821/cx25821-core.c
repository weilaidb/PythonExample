#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Driver for Athena cards");
MODULE_AUTHOR("Shu Lin - Hiep Huynh");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
static unsigned int card[] = ;
module_param_array(card, int, NULL, 0444);
MODULE_PARM_DESC(card, "card type");
static unsigned int cx25821_devcount;
DEFINE_MUTEX(cx25821_devlist_mutex);
EXPORT_SYMBOL(cx25821_devlist_mutex);
LIST_HEAD(cx25821_devlist);
EXPORT_SYMBOL(cx25821_devlist);
struct sram_channel cx25821_sram_channels[] = ;
EXPORT_SYMBOL(cx25821_sram_channels);
struct sram_channel *channel0 = &cx25821_sram_channels[SRAM_CH00];
struct sram_channel *channel1 = &cx25821_sram_channels[SRAM_CH01];
struct sram_channel *channel2 = &cx25821_sram_channels[SRAM_CH02];
struct sram_channel *channel3 = &cx25821_sram_channels[SRAM_CH03];
struct sram_channel *channel4 = &cx25821_sram_channels[SRAM_CH04];
struct sram_channel *channel5 = &cx25821_sram_channels[SRAM_CH05];
struct sram_channel *channel6 = &cx25821_sram_channels[SRAM_CH06];
struct sram_channel *channel7 = &cx25821_sram_channels[SRAM_CH07];
struct sram_channel *channel9 = &cx25821_sram_channels[SRAM_CH09];
struct sram_channel *channel10 = &cx25821_sram_channels[SRAM_CH10];
struct sram_channel *channel11 = &cx25821_sram_channels[SRAM_CH11];
struct cx25821_dmaqueue mpegq;
static int cx25821_risc_decode(u32 risc)
static inline int i2c_slave_did_ack(struct i2c_adapter *i2c_adap)
void cx_i2c_read_print(struct cx25821_dev *dev, u32 reg, const char *reg_string)
static void cx25821_registers_init(struct cx25821_dev *dev)
int cx25821_sram_channel_setup(struct cx25821_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc)
EXPORT_SYMBOL(cx25821_sram_channel_setup);
int cx25821_sram_channel_setup_audio(struct cx25821_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc)
EXPORT_SYMBOL(cx25821_sram_channel_setup_audio);
void cx25821_sram_channel_dump(struct cx25821_dev *dev, struct sram_channel *ch)
EXPORT_SYMBOL(cx25821_sram_channel_dump);
void cx25821_sram_channel_dump_audio(struct cx25821_dev *dev,
struct sram_channel *ch)
EXPORT_SYMBOL(cx25821_sram_channel_dump_audio);
static void cx25821_shutdown(struct cx25821_dev *dev)
void cx25821_set_pixel_format(struct cx25821_dev *dev, int channel_select,
u32 format)
static void cx25821_set_vip_mode(struct cx25821_dev *dev,
struct sram_channel *ch)
static void cx25821_initialize(struct cx25821_dev *dev)
static int cx25821_get_resources(struct cx25821_dev *dev)
static void cx25821_dev_checkrevision(struct cx25821_dev *dev)
static void cx25821_iounmap(struct cx25821_dev *dev)
static int cx25821_dev_setup(struct cx25821_dev *dev)
void cx25821_start_upstream_video_ch1(struct cx25821_dev *dev,
struct upstream_user_struct *up_data)
void cx25821_start_upstream_video_ch2(struct cx25821_dev *dev,
struct upstream_user_struct *up_data)
void cx25821_start_upstream_audio(struct cx25821_dev *dev,
struct upstream_user_struct *up_data)
void cx25821_dev_unregister(struct cx25821_dev *dev)
EXPORT_SYMBOL(cx25821_dev_unregister);
static __le32 *cx25821_risc_field(__le32 * rp, struct scatterlist *sglist,
unsigned int offset, u32 sync_line,
unsigned int bpl, unsigned int padding,
unsigned int lines)
int cx25821_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist, unsigned int top_offset,
unsigned int bottom_offset, unsigned int bpl,
unsigned int padding, unsigned int lines)
static __le32 *cx25821_risc_field_audio(__le32 * rp, struct scatterlist *sglist,
unsigned int offset, u32 sync_line,
unsigned int bpl, unsigned int padding,
unsigned int lines, unsigned int lpi)
int cx25821_risc_databuffer_audio(struct pci_dev *pci,
struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int bpl,
unsigned int lines, unsigned int lpi)
EXPORT_SYMBOL(cx25821_risc_databuffer_audio);
int cx25821_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value)
void cx25821_free_buffer(struct videobuf_queue *q, struct cx25821_buffer *buf)
static irqreturn_t cx25821_irq(int irq, void *dev_id)
void cx25821_print_irqbits(char *name, char *tag, char **strings,
int len, u32 bits, u32 mask)
EXPORT_SYMBOL(cx25821_print_irqbits);
struct cx25821_dev *cx25821_dev_get(struct pci_dev *pci)
EXPORT_SYMBOL(cx25821_dev_get);
static int __devinit cx25821_initdev(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit cx25821_finidev(struct pci_dev *pci_dev)
static struct pci_device_id cx25821_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, cx25821_pci_tbl);
static struct pci_driver cx25821_pci_driver = ;
static int __init cx25821_init(void)
static void __exit cx25821_fini(void)
EXPORT_SYMBOL(cx25821_set_gpiopin_direction);
module_init(cx25821_init);
module_exit(cx25821_fini);
