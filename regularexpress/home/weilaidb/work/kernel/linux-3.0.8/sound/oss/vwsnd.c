#undef VWSND_DEBUG
static DEFINE_MUTEX(vwsnd_mutex);
static int shut_up = 1;
static void dbgassert(const char *fcn, int line, const char *expr)
#define ASSERT(e)      ((e) ? (void) 0 : dbgassert(__func__, __LINE__, #e))
#define DBGDO(x)            x
#define DBGX(fmt, args...)  (in_interrupt() ? 0 : printk(KERN_ERR fmt, ##args))
#define DBGP(fmt, args...)  (DBGX("%s: " fmt, __func__ , ##args))
#define DBGE(fmt, args...)  (DBGX("%s" fmt, __func__ , ##args))
#define DBGC(rtn)           (DBGP("calling %s\n", rtn))
#define DBGR()              (DBGP("returning\n"))
#define DBGXV(fmt, args...) (shut_up ? 0 : DBGX(fmt, ##args))
#define DBGPV(fmt, args...) (shut_up ? 0 : DBGP(fmt, ##args))
#define DBGEV(fmt, args...) (shut_up ? 0 : DBGE(fmt, ##args))
#define DBGCV(rtn)          (shut_up ? 0 : DBGC(rtn))
#define DBGRV()             (shut_up ? 0 : DBGR())
#define ASSERT(e)           ((void) 0)
#define DBGDO(x)
#define DBGX(fmt, args...)  ((void) 0)
#define DBGP(fmt, args...)  ((void) 0)
#define DBGE(fmt, args...)  ((void) 0)
#define DBGC(rtn)           ((void) 0)
#define DBGR()              ((void) 0)
#define DBGPV(fmt, args...) ((void) 0)
#define DBGXV(fmt, args...) ((void) 0)
#define DBGEV(fmt, args...) ((void) 0)
#define DBGCV(rtn)          ((void) 0)
#define DBGRV()             ((void) 0)
enum ;
typedef struct lithium  lithium_t;
static void li_destroy(lithium_t *lith)
static int __init li_create(lithium_t *lith, unsigned long baseaddr)
static __inline__ unsigned long li_readl(lithium_t *lith, int off)
static __inline__ unsigned char li_readb(lithium_t *lith, int off)
static __inline__ void li_writel(lithium_t *lith, int off, unsigned long val)
static __inline__ void li_writeb(lithium_t *lith, int off, unsigned char val)
#define LI_HOST_CONTROLLER	0x000
# define LI_HC_RESET		 0x00008000
# define LI_HC_LINK_ENABLE	 0x00004000
# define LI_HC_LINK_FAILURE	 0x00000004
# define LI_HC_LINK_CODEC	 0x00000002
# define LI_HC_LINK_READY	 0x00000001
#define LI_INTR_STATUS		0x010
#define LI_INTR_MASK		0x014
# define LI_INTR_LINK_ERR	 0x00008000
# define LI_INTR_COMM2_TRIG	 0x00000008
# define LI_INTR_COMM2_UNDERFLOW 0x00000004
# define LI_INTR_COMM1_TRIG	 0x00000002
# define LI_INTR_COMM1_OVERFLOW  0x00000001
#define LI_CODEC_COMMAND	0x018
# define LI_CC_BUSY		 0x00008000
# define LI_CC_DIR		 0x00000080
#  define LI_CC_DIR_RD		  LI_CC_DIR
#  define LI_CC_DIR_WR		(!LI_CC_DIR)
# define LI_CC_ADDR_MASK	 0x0000007F
#define LI_CODEC_DATA		0x01C
#define LI_COMM1_BASE		0x100
#define LI_COMM1_CTL		0x104
# define LI_CCTL_RESET		 0x80000000
# define LI_CCTL_SIZE		 0x70000000
# define LI_CCTL_DMA_ENABLE	 0x08000000
# define LI_CCTL_TMASK		 0x07000000
# define LI_CCTL_TPTR		 0x00FF0000
# define LI_CCTL_RPTR		 0x0000FF00
# define LI_CCTL_WPTR		 0x000000FF
#define LI_COMM1_CFG		0x108
# define LI_CCFG_LOCK		 0x00008000
# define LI_CCFG_SLOT		 0x00000070
# define LI_CCFG_DIRECTION	 0x00000008
#  define LI_CCFG_DIR_IN	(!LI_CCFG_DIRECTION)
#  define LI_CCFG_DIR_OUT	  LI_CCFG_DIRECTION
# define LI_CCFG_MODE		 0x00000004
#  define LI_CCFG_MODE_MONO	(!LI_CCFG_MODE)
#  define LI_CCFG_MODE_STEREO	  LI_CCFG_MODE
# define LI_CCFG_FORMAT		 0x00000003
#  define LI_CCFG_FMT_8BIT	  0x00000000
#  define LI_CCFG_FMT_16BIT	  0x00000001
#define LI_COMM2_BASE		0x10C
#define LI_COMM2_CTL		0x110
#define LI_COMM2_CFG		0x114
#define LI_UST_LOW		0x200
#define LI_UST_HIGH		0x204
#define LI_AUDIO1_UST		0x300
#define LI_AUDIO1_MSC		0x304
#define LI_AUDIO2_UST		0x308
#define LI_AUDIO2_MSC		0x30C
#define DMACHUNK_SHIFT 5
#define DMACHUNK_SIZE (1 << DMACHUNK_SHIFT)
#define BYTES_TO_CHUNKS(bytes) ((bytes) >> DMACHUNK_SHIFT)
#define CHUNKS_TO_BYTES(chunks) ((chunks) << DMACHUNK_SHIFT)
#define SHIFT_FIELD(val, mask) (((val) * ((mask) & -(mask))) & (mask))
#define UNSHIFT_FIELD(val, mask) (((val) & (mask)) / ((mask) & -(mask)))
typedef struct dma_chan_desc  dma_chan_desc_t;
static const dma_chan_desc_t li_comm1 = ;
static const dma_chan_desc_t li_comm2 = ;
typedef struct dma_chan  dma_chan_t;
typedef struct ustmsc  ustmsc_t;
static int li_ad1843_wait(lithium_t *lith)
static int li_read_ad1843_reg(lithium_t *lith, int reg)
static void li_write_ad1843_reg(lithium_t *lith, int reg, int newval)
static void li_setup_dma(dma_chan_t *chan,
const dma_chan_desc_t *desc,
lithium_t *lith,
unsigned long buffer_paddr,
int bufshift,
int fragshift,
int channels,
int sampsize)
static void li_shutdown_dma(dma_chan_t *chan)
static __inline__ void li_activate_dma(dma_chan_t *chan)
static void li_deactivate_dma(dma_chan_t *chan)
static __inline__ int li_read_swptr(dma_chan_t *chan)
static __inline__ int li_read_hwptr(dma_chan_t *chan)
static __inline__ void li_write_swptr(dma_chan_t *chan, int val)
static void li_read_USTMSC(dma_chan_t *chan, ustmsc_t *ustmsc)
static void li_enable_interrupts(lithium_t *lith, unsigned int mask)
static void li_disable_interrupts(lithium_t *lith, unsigned int mask)
static unsigned int li_get_clear_intr_status(lithium_t *lith)
static int li_init(lithium_t *lith)
typedef struct ad1843_bitfield  ad1843_bitfield_t;
static const ad1843_bitfield_t
ad1843_PDNO   = ,
ad1843_INIT   = ,
ad1843_RIG    = ,
ad1843_RMGE   = ,
ad1843_RSS    = ,
ad1843_LIG    = ,
ad1843_LMGE   = ,
ad1843_LSS    = ,
ad1843_RX1M   = ,
ad1843_RX1MM  = ,
ad1843_LX1M   = ,
ad1843_LX1MM  = ,
ad1843_RX2M   = ,
ad1843_RX2MM  = ,
ad1843_LX2M   = ,
ad1843_LX2MM  = ,
ad1843_RMCM   = ,
ad1843_RMCMM  = ,
ad1843_LMCM   = ,
ad1843_LMCMM  = ,
ad1843_HPOS   = ,
ad1843_HPOM   = ,
ad1843_RDA1G  = ,
ad1843_RDA1GM = ,
ad1843_LDA1G  = ,
ad1843_LDA1GM = ,
ad1843_RDA1AM = ,
ad1843_LDA1AM = ,
ad1843_ADLC   = ,
ad1843_ADRC   = ,
ad1843_DA1C   = ,
ad1843_C1C    = ,
ad1843_C2C    = ,
ad1843_DAADL  = ,
ad1843_DAADR  = ,
ad1843_DRSFLT = ,
ad1843_ADLF   = ,
ad1843_ADRF   = ,
ad1843_ADTLK  = ,
ad1843_SCF    = ,
ad1843_DA1F   = ,
ad1843_DA1SM  = ,
ad1843_ADLEN  = ,
ad1843_ADREN  = ,
ad1843_AAMEN  = ,
ad1843_ANAEN  = ,
ad1843_DA1EN  = ,
ad1843_DA2EN  = ,
ad1843_C1EN   = ,
ad1843_C2EN   = ,
ad1843_PDNI   = ;
typedef struct ad1843_gain  ad1843_gain_t;
static const ad1843_gain_t ad1843_gain_RECLEV
= ;
static const ad1843_gain_t ad1843_gain_LINE
= ;
static const ad1843_gain_t ad1843_gain_CD
= ;
static const ad1843_gain_t ad1843_gain_MIC
= ;
static const ad1843_gain_t ad1843_gain_PCM
= ;
static int ad1843_read_bits(lithium_t *lith, const ad1843_bitfield_t *field)
static int ad1843_write_bits(lithium_t *lith,
const ad1843_bitfield_t *field,
int newval)
static void ad1843_read_multi(lithium_t *lith, int argcount, ...)
static void ad1843_write_multi(lithium_t *lith, int argcount, ...)
static int ad1843_get_gain(lithium_t *lith, const ad1843_gain_t *gp)
static int ad1843_set_gain(lithium_t *lith,
const ad1843_gain_t *gp,
int newval)
static int ad1843_get_recsrc(lithium_t *lith)
static void ad1843_set_resample_mode(lithium_t *lith, int onoff)
static int ad1843_set_recsrc(lithium_t *lith, int newsrc)
static int ad1843_get_outsrc(lithium_t *lith)
static int ad1843_set_outsrc(lithium_t *lith, int mask)
static void ad1843_setup_dac(lithium_t *lith,
int framerate,
int fmt,
int channels)
static void ad1843_shutdown_dac(lithium_t *lith)
static void ad1843_setup_adc(lithium_t *lith, int framerate, int fmt, int channels)
static void ad1843_shutdown_adc(lithium_t *lith)
static int __init ad1843_init(lithium_t *lith)
#define READ_INTR_MASK  (LI_INTR_COMM1_TRIG | LI_INTR_COMM1_OVERFLOW)
#define WRITE_INTR_MASK (LI_INTR_COMM2_TRIG | LI_INTR_COMM2_UNDERFLOW)
typedef enum vwsnd_port_swstate  vwsnd_port_swstate_t;
typedef enum vwsnd_port_hwstate  vwsnd_port_hwstate_t;
typedef enum vwsnd_port_flags  vwsnd_port_flags_t;
typedef struct vwsnd_port  vwsnd_port_t;
typedef struct vwsnd_dev  vwsnd_dev_t;
static vwsnd_dev_t *vwsnd_dev_list;
static atomic_t vwsnd_use_count = ATOMIC_INIT(0);
# define INC_USE_COUNT (atomic_inc(&vwsnd_use_count))
# define DEC_USE_COUNT (atomic_dec(&vwsnd_use_count))
# define IN_USE        (atomic_read(&vwsnd_use_count) != 0)
#define HWBUF_SHIFT 13
#define HWBUF_SIZE (1 << HWBUF_SHIFT)
# define HBO         (HWBUF_SHIFT > PAGE_SHIFT ? HWBUF_SHIFT - PAGE_SHIFT : 0)
# define HWBUF_ORDER (HBO + 1)
#define MIN_SPEED 4000
#define MAX_SPEED 49000
#define MIN_FRAGSHIFT			(DMACHUNK_SHIFT + 1)
#define MAX_FRAGSHIFT			(PAGE_SHIFT)
#define MIN_FRAGSIZE			(1 << MIN_FRAGSHIFT)
#define MAX_FRAGSIZE			(1 << MAX_FRAGSHIFT)
#define MIN_FRAGCOUNT(fragsize)		3
#define MAX_FRAGCOUNT(fragsize)		(32 * PAGE_SIZE / (fragsize))
#define DEFAULT_FRAGSHIFT		12
#define DEFAULT_FRAGCOUNT		16
#define DEFAULT_SUBDIVSHIFT		0
static __inline__ unsigned int __swb_inc_u(vwsnd_port_t *port, int inc)
static __inline__ unsigned int swb_inc_u(vwsnd_port_t *port, int inc)
static __inline__ unsigned int __swb_inc_i(vwsnd_port_t *port, int inc)
static __inline__ unsigned int swb_inc_i(vwsnd_port_t *port, int inc)
static int pcm_setup(vwsnd_dev_t *devc,
vwsnd_port_t *rport,
vwsnd_port_t *wport)
static void pcm_shutdown_port(vwsnd_dev_t *devc,
vwsnd_port_t *aport,
unsigned int mask)
static void pcm_shutdown(vwsnd_dev_t *devc,
vwsnd_port_t *rport,
vwsnd_port_t *wport)
static void pcm_copy_in(vwsnd_port_t *rport, int swidx, int hwidx, int nb)
static void pcm_copy_out(vwsnd_port_t *wport, int swidx, int hwidx, int nb)
static void pcm_output(vwsnd_dev_t *devc, int erflown, int nb)
static void pcm_input(vwsnd_dev_t *devc, int erflown, int nb)
static void pcm_flush_frag(vwsnd_dev_t *devc)
static void pcm_write_sync(vwsnd_dev_t *devc)
static void vwsnd_audio_read_intr(vwsnd_dev_t *devc, unsigned int status)
static void vwsnd_audio_write_intr(vwsnd_dev_t *devc, unsigned int status)
static irqreturn_t vwsnd_audio_intr(int irq, void *dev_id)
static ssize_t vwsnd_audio_do_read(struct file *file,
char *buffer,
size_t count,
loff_t *ppos)
static ssize_t vwsnd_audio_read(struct file *file,
char *buffer,
size_t count,
loff_t *ppos)
static ssize_t vwsnd_audio_do_write(struct file *file,
const char *buffer,
size_t count,
loff_t *ppos)
static ssize_t vwsnd_audio_write(struct file *file,
const char *buffer,
size_t count,
loff_t *ppos)
static unsigned int vwsnd_audio_poll(struct file *file,
struct poll_table_struct *wait)
static int vwsnd_audio_do_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static long vwsnd_audio_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static int vwsnd_audio_mmap(struct file *file, struct vm_area_struct *vma)
static int vwsnd_audio_open(struct inode *inode, struct file *file)
static int vwsnd_audio_release(struct inode *inode, struct file *file)
static const struct file_operations vwsnd_audio_fops = ;
static int vwsnd_mixer_open(struct inode *inode, struct file *file)
static int vwsnd_mixer_release(struct inode *inode, struct file *file)
static int mixer_read_ioctl(vwsnd_dev_t *devc, unsigned int nr, void __user *arg)
static int mixer_write_ioctl(vwsnd_dev_t *devc, unsigned int nr, void __user *arg)
static long vwsnd_mixer_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static const struct file_operations vwsnd_mixer_fops = ;
static int __init probe_vwsnd(struct address_info *hw_config)
static int __init attach_vwsnd(struct address_info *hw_config)
static int __exit unload_vwsnd(struct address_info *hw_config)
static struct address_info the_hw_config = ;
MODULE_DESCRIPTION("SGI Visual Workstation sound module");
MODULE_AUTHOR("Bob Miller <kbob@sgi.com>");
MODULE_LICENSE("GPL");
static int __init init_vwsnd(void)
static void __exit cleanup_vwsnd(void)
module_init(init_vwsnd);
module_exit(cleanup_vwsnd);
