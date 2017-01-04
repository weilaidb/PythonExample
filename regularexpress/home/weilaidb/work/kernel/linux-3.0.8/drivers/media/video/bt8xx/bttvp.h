#define _BTTVP_H_
#define BTTV_VERSION_CODE KERNEL_VERSION(0,9,18)
#define FORMAT_FLAGS_DITHER       0x01
#define FORMAT_FLAGS_PACKED       0x02
#define FORMAT_FLAGS_PLANAR       0x04
#define FORMAT_FLAGS_RAW          0x08
#define FORMAT_FLAGS_CrCb         0x10
#define RISC_SLOT_O_VBI        4
#define RISC_SLOT_O_FIELD      6
#define RISC_SLOT_E_VBI       10
#define RISC_SLOT_E_FIELD     12
#define RISC_SLOT_LOOP        14
#define RESOURCE_OVERLAY       1
#define RESOURCE_VIDEO_STREAM  2
#define RESOURCE_VBI           4
#define RESOURCE_VIDEO_READ    8
#define RAW_LINES            640
#define RAW_BPL             1024
#define UNSET (-1U)
#define MIN_VDELAY 2
#define MAX_HDELAY (0x3FF & -2)
#define MAX_HACTIVE (0x3FF & -4)
#define BTTV_NORMS    (\
V4L2_STD_PAL    | V4L2_STD_PAL_N | \
V4L2_STD_PAL_Nc | V4L2_STD_SECAM | \
V4L2_STD_NTSC   | V4L2_STD_PAL_M | \
V4L2_STD_PAL_60)
struct bttv_tvnorm ;
extern const struct bttv_tvnorm bttv_tvnorms[];
struct bttv_format ;
struct bttv_ir ;
struct bttv_geometry ;
struct bttv_buffer ;
struct bttv_buffer_set ;
struct bttv_overlay ;
struct bttv_vbi_fmt ;
void bttv_vbi_fmt_reset(struct bttv_vbi_fmt *f, unsigned int norm);
struct bttv_crop ;
struct bttv_fh ;
int bttv_risc_packed(struct bttv *btv, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int offset, unsigned int bpl,
unsigned int pitch, unsigned int skip_lines,
unsigned int store_lines);
void bttv_set_dma(struct bttv *btv, int override);
int bttv_risc_init_main(struct bttv *btv);
int bttv_risc_hook(struct bttv *btv, int slot, struct btcx_riscmem *risc,
int irqflags);
int bttv_buffer_risc(struct bttv *btv, struct bttv_buffer *buf);
int bttv_buffer_activate_video(struct bttv *btv,
struct bttv_buffer_set *set);
int bttv_buffer_activate_vbi(struct bttv *btv,
struct bttv_buffer *vbi);
void bttv_dma_free(struct videobuf_queue *q, struct bttv *btv,
struct bttv_buffer *buf);
int bttv_overlay_risc(struct bttv *btv, struct bttv_overlay *ov,
const struct bttv_format *fmt,
struct bttv_buffer *buf);
int bttv_try_fmt_vbi_cap(struct file *file, void *fh, struct v4l2_format *f);
int bttv_g_fmt_vbi_cap(struct file *file, void *fh, struct v4l2_format *f);
int bttv_s_fmt_vbi_cap(struct file *file, void *fh, struct v4l2_format *f);
extern struct videobuf_queue_ops bttv_vbi_qops;
extern struct bus_type bttv_sub_bus_type;
int bttv_sub_add_device(struct bttv_core *core, char *name);
int bttv_sub_del_devices(struct bttv_core *core);
extern int no_overlay;
extern void init_bttv_i2c_ir(struct bttv *btv);
extern int fini_bttv_i2c(struct bttv *btv);
extern unsigned int bttv_verbose;
extern unsigned int bttv_debug;
extern unsigned int bttv_gpio;
extern void bttv_gpio_tracking(struct bttv *btv, char *comment);
extern int init_bttv_i2c(struct bttv *btv);
#define bttv_printk if (bttv_verbose) printk
#define dprintk  if (bttv_debug >= 1) printk
#define d2printk if (bttv_debug >= 2) printk
#define BTTV_MAX_FBUF   0x208000
#define BTTV_TIMEOUT    msecs_to_jiffies(500)
#define BTTV_FREE_IDLE  msecs_to_jiffies(1000)
struct bttv_pll_info ;
struct bttv_input ;
struct bttv_suspend_state ;
struct bttv ;
static inline struct bttv *to_bttv(struct v4l2_device *v4l2_dev)
#define BTTV_MAX 32
extern unsigned int bttv_num;
extern struct bttv *bttvs[BTTV_MAX];
static inline unsigned int bttv_muxsel(const struct bttv *btv,
unsigned int input)
#define btwrite(dat,adr)    writel((dat), btv->bt848_mmio+(adr))
#define btread(adr)         readl(btv->bt848_mmio+(adr))
#define btand(dat,adr)      btwrite((dat) & btread(adr), adr)
#define btor(dat,adr)       btwrite((dat) | btread(adr), adr)
#define btaor(dat,mask,adr) btwrite((dat) | ((mask) & btread(adr)), adr)
