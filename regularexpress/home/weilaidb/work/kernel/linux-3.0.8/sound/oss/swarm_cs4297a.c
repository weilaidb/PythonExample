struct cs4297a_state;
static DEFINE_MUTEX(swarm_cs4297a_mutex);
static void stop_dac(struct cs4297a_state *s);
static void stop_adc(struct cs4297a_state *s);
static void start_dac(struct cs4297a_state *s);
static void start_adc(struct cs4297a_state *s);
#undef OSS_DOCUMENTED_MIXER_SEMANTICS
#define CS4297a_MAGIC           0xf00beef1
#define CSDEBUG 0
#if CSDEBUG
#define CSDEBUG_INTERFACE 1
#undef CSDEBUG_INTERFACE
#define CS_INIT	 	0x00000001
#define CS_ERROR 	0x00000002
#define CS_INTERRUPT	0x00000004
#define CS_FUNCTION 	0x00000008
#define CS_WAVE_WRITE 	0x00000010
#define CS_WAVE_READ 	0x00000020
#define CS_AC97         0x00000040
#define CS_DESCR        0x00000080
#define CS_OPEN		0x00000400
#define CS_RELEASE	0x00000800
#define CS_PARMS	0x00001000
#define CS_IOCTL	0x00002000
#define CS_TMP		0x10000000
#if CSDEBUG
#define CS_DBGOUT(mask,level,x) if((cs_debuglevel >= (level)) && ((mask) & cs_debugmask) )
#define CS_DBGOUT(mask,level,x)
#if CSDEBUG
static unsigned long cs_debuglevel = 4;
static unsigned long cs_debugmask = CS_INIT;
module_param(cs_debuglevel, int, 0);
module_param(cs_debugmask, int, 0);
#define CS_TRUE 	1
#define CS_FALSE 	0
#define CS_TYPE_ADC 0
#define CS_TYPE_DAC 1
#define SER_BASE    (A_SER_BASE_1 + KSEG1)
#define SS_CSR(t)   (SER_BASE+t)
#define SS_TXTBL(t) (SER_BASE+R_SER_TX_TABLE_BASE+(t*8))
#define SS_RXTBL(t) (SER_BASE+R_SER_RX_TABLE_BASE+(t*8))
#define FRAME_BYTES            32
#define FRAME_SAMPLE_BYTES      4
#define SAMPLE_BUF_SIZE        (16*1024)
#define SAMPLE_FRAME_COUNT     (SAMPLE_BUF_SIZE / FRAME_SAMPLE_BYTES)
#define DMA_BLOAT_FACTOR       1
#define DMA_DESCR              (SAMPLE_FRAME_COUNT / DMA_BLOAT_FACTOR)
#define DMA_BUF_SIZE           (DMA_DESCR * FRAME_BYTES)
#define DMA_INT_CNT            ((1 << S_DMA_INT_PKTCNT) - 1)
#define REG_LATENCY            150
#define FRAME_TX_US             20
#define SERDMA_NEXTBUF(d,f) (((d)->f+1) % (d)->ringsz)
static const char invalid_magic[] =
KERN_CRIT "cs4297a: invalid magic value\n";
#define VALIDATE_STATE(s)                          \
()
struct list_head cs4297a_devs = ;
typedef struct serdma_descr_s  serdma_descr_t;
typedef unsigned long paddr_t;
typedef struct serdma_s  serdma_t;
struct cs4297a_state ;
#if 1
#define prog_codec(a,b)
#define dealloc_dmabuf(a,b);
static int prog_dmabuf_adc(struct cs4297a_state *s)
static int prog_dmabuf_dac(struct cs4297a_state *s)
static void clear_advance(void *buf, unsigned bsize, unsigned bptr,
unsigned len, unsigned char c)
#if CSDEBUG
#define SOUND_MIXER_CS_GETDBGLEVEL 	_SIOWR('M',120, int)
#define SOUND_MIXER_CS_SETDBGLEVEL 	_SIOWR('M',121, int)
#define SOUND_MIXER_CS_GETDBGMASK 	_SIOWR('M',122, int)
#define SOUND_MIXER_CS_SETDBGMASK 	_SIOWR('M',123, int)
static void cs_printioctl(unsigned int x)
static int ser_init(struct cs4297a_state *s)
static int init_serdma(serdma_t *dma)
static int dma_init(struct cs4297a_state *s)
static int serdma_reg_access(struct cs4297a_state *s, u64 data)
static int cs4297a_read_ac97(struct cs4297a_state *s, u32 offset,
u32 * value)
static int cs4297a_write_ac97(struct cs4297a_state *s, u32 offset,
u32 value)
static void stop_dac(struct cs4297a_state *s)
static void start_dac(struct cs4297a_state *s)
static void stop_adc(struct cs4297a_state *s)
static void start_adc(struct cs4297a_state *s)
static void cs4297a_update_ptr(struct cs4297a_state *s, int intflag)
static int mixer_ioctl(struct cs4297a_state *s, unsigned int cmd,
unsigned long arg)
static int cs4297a_open_mixdev(struct inode *inode, struct file *file)
static int cs4297a_release_mixdev(struct inode *inode, struct file *file)
static int cs4297a_ioctl_mixdev(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations cs4297a_mixer_fops = ;
static int drain_adc(struct cs4297a_state *s, int nonblock)
static int drain_dac(struct cs4297a_state *s, int nonblock)
static ssize_t cs4297a_read(struct file *file, char *buffer, size_t count,
loff_t * ppos)
static ssize_t cs4297a_write(struct file *file, const char *buffer,
size_t count, loff_t * ppos)
static unsigned int cs4297a_poll(struct file *file,
struct poll_table_struct *wait)
static int cs4297a_mmap(struct file *file, struct vm_area_struct *vma)
static int cs4297a_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long cs4297a_unlocked_ioctl(struct file *file, u_int cmd, u_long arg)
static int cs4297a_release(struct inode *inode, struct file *file)
static int cs4297a_locked_open(struct inode *inode, struct file *file)
static int cs4297a_open(struct inode *inode, struct file *file)
static const struct file_operations cs4297a_audio_fops = ;
static void cs4297a_interrupt(int irq, void *dev_id)
static int __init cs4297a_init(void)
static void __exit cs4297a_cleanup(void)
MODULE_AUTHOR("Kip Walker, Broadcom Corp.");
MODULE_DESCRIPTION("Cirrus Logic CS4297a Driver for Broadcom SWARM board");
module_init(cs4297a_init);
module_exit(cs4297a_cleanup);
