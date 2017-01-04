MODULE_DESCRIPTION("v4l2 driver module for cx2388x based TV cards");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int core_debug;
module_param(core_debug,int,0644);
MODULE_PARM_DESC(core_debug,"enable debug messages [core]");
static unsigned int nicam;
module_param(nicam,int,0644);
MODULE_PARM_DESC(nicam,"tv audio is nicam");
static unsigned int nocomb;
module_param(nocomb,int,0644);
MODULE_PARM_DESC(nocomb,"disable comb filter");
#define dprintk(level,fmt, arg...)	if (core_debug >= level)	\
printk(KERN_DEBUG "%s: " fmt, core->name , ## arg)
static unsigned int cx88_devcount;
static LIST_HEAD(cx88_devlist);
static DEFINE_MUTEX(devlist);
#define NO_SYNC_LINE (-1U)
static __le32* cx88_risc_field(__le32 *rp, struct scatterlist *sglist,
unsigned int offset, u32 sync_line,
unsigned int bpl, unsigned int padding,
unsigned int lines, unsigned int lpi)
int cx88_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int top_offset, unsigned int bottom_offset,
unsigned int bpl, unsigned int padding, unsigned int lines)
int cx88_risc_databuffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist, unsigned int bpl,
unsigned int lines, unsigned int lpi)
int cx88_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value)
void
cx88_free_buffer(struct videobuf_queue *q, struct cx88_buffer *buf)
const struct sram_channel const cx88_sram_channels[] = ;
int cx88_sram_channel_setup(struct cx88_core *core,
const struct sram_channel *ch,
unsigned int bpl, u32 risc)
static int cx88_risc_decode(u32 risc)
void cx88_sram_channel_dump(struct cx88_core *core,
const struct sram_channel *ch)
static const char *cx88_pci_irqs[32] = ;
void cx88_print_irqbits(const char *name, const char *tag, const char *strings[],
int len, u32 bits, u32 mask)
int cx88_core_irq(struct cx88_core *core, u32 status)
void cx88_wakeup(struct cx88_core *core,
struct cx88_dmaqueue *q, u32 count)
void cx88_shutdown(struct cx88_core *core)
int cx88_reset(struct cx88_core *core)
static unsigned int inline norm_swidth(v4l2_std_id norm)
static unsigned int inline norm_hdelay(v4l2_std_id norm)
static unsigned int inline norm_vdelay(v4l2_std_id norm)
static unsigned int inline norm_fsc8(v4l2_std_id norm)
static unsigned int inline norm_htotal(v4l2_std_id norm)
static unsigned int inline norm_vbipack(v4l2_std_id norm)
int cx88_set_scale(struct cx88_core *core, unsigned int width, unsigned int height,
enum v4l2_field field)
static const u32 xtal = 28636363;
static int set_pll(struct cx88_core *core, int prescale, u32 ofreq)
int cx88_start_audio_dma(struct cx88_core *core)
int cx88_stop_audio_dma(struct cx88_core *core)
static int set_tvaudio(struct cx88_core *core)
int cx88_set_tvnorm(struct cx88_core *core, v4l2_std_id norm)
struct video_device *cx88_vdev_init(struct cx88_core *core,
struct pci_dev *pci,
const struct video_device *template_,
const char *type)
struct cx88_core* cx88_core_get(struct pci_dev *pci)
void cx88_core_put(struct cx88_core *core, struct pci_dev *pci)
EXPORT_SYMBOL(cx88_print_irqbits);
EXPORT_SYMBOL(cx88_core_irq);
EXPORT_SYMBOL(cx88_wakeup);
EXPORT_SYMBOL(cx88_reset);
EXPORT_SYMBOL(cx88_shutdown);
EXPORT_SYMBOL(cx88_risc_buffer);
EXPORT_SYMBOL(cx88_risc_databuffer);
EXPORT_SYMBOL(cx88_risc_stopper);
EXPORT_SYMBOL(cx88_free_buffer);
EXPORT_SYMBOL(cx88_sram_channels);
EXPORT_SYMBOL(cx88_sram_channel_setup);
EXPORT_SYMBOL(cx88_sram_channel_dump);
EXPORT_SYMBOL(cx88_set_tvnorm);
EXPORT_SYMBOL(cx88_set_scale);
EXPORT_SYMBOL(cx88_vdev_init);
EXPORT_SYMBOL(cx88_core_get);
EXPORT_SYMBOL(cx88_core_put);
EXPORT_SYMBOL(cx88_ir_start);
EXPORT_SYMBOL(cx88_ir_stop);
