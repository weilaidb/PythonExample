unsigned int bttv_num;
struct bttv *bttvs[BTTV_MAX];
unsigned int bttv_debug;
unsigned int bttv_verbose = 1;
unsigned int bttv_gpio;
static unsigned int bigendian=1;
static unsigned int bigendian;
static unsigned int radio[BTTV_MAX];
static unsigned int irq_debug;
static unsigned int gbuffers = 8;
static unsigned int gbufsize = 0x208000;
static unsigned int reset_crop = 1;
static int video_nr[BTTV_MAX] = ;
static int radio_nr[BTTV_MAX] = ;
static int vbi_nr[BTTV_MAX] = ;
static int debug_latency;
static int disable_ir;
static unsigned int fdsr;
static unsigned int combfilter;
static unsigned int lumafilter;
static unsigned int automute    = 1;
static unsigned int chroma_agc;
static unsigned int adc_crush   = 1;
static unsigned int whitecrush_upper = 0xCF;
static unsigned int whitecrush_lower = 0x7F;
static unsigned int vcr_hack;
static unsigned int irq_iswitch;
static unsigned int uv_ratio    = 50;
static unsigned int full_luma_range;
static unsigned int coring;
static unsigned int v4l2        = 1;
module_param(bttv_verbose,      int, 0644);
module_param(bttv_gpio,         int, 0644);
module_param(bttv_debug,        int, 0644);
module_param(irq_debug,         int, 0644);
module_param(debug_latency,     int, 0644);
module_param(disable_ir,        int, 0444);
module_param(fdsr,              int, 0444);
module_param(gbuffers,          int, 0444);
module_param(gbufsize,          int, 0444);
module_param(reset_crop,        int, 0444);
module_param(v4l2,              int, 0644);
module_param(bigendian,         int, 0644);
module_param(irq_iswitch,       int, 0644);
module_param(combfilter,        int, 0444);
module_param(lumafilter,        int, 0444);
module_param(automute,          int, 0444);
module_param(chroma_agc,        int, 0444);
module_param(adc_crush,         int, 0444);
module_param(whitecrush_upper,  int, 0444);
module_param(whitecrush_lower,  int, 0444);
module_param(vcr_hack,          int, 0444);
module_param(uv_ratio,          int, 0444);
module_param(full_luma_range,   int, 0444);
module_param(coring,            int, 0444);
module_param_array(radio,       int, NULL, 0444);
module_param_array(video_nr,    int, NULL, 0444);
module_param_array(radio_nr,    int, NULL, 0444);
module_param_array(vbi_nr,      int, NULL, 0444);
MODULE_PARM_DESC(radio,"The TV card supports radio, default is 0 (no)");
MODULE_PARM_DESC(bigendian,"byte order of the framebuffer, default is native endian");
MODULE_PARM_DESC(bttv_verbose,"verbose startup messages, default is 1 (yes)");
MODULE_PARM_DESC(bttv_gpio,"log gpio changes, default is 0 (no)");
MODULE_PARM_DESC(bttv_debug,"debug messages, default is 0 (no)");
MODULE_PARM_DESC(irq_debug,"irq handler debug messages, default is 0 (no)");
MODULE_PARM_DESC(disable_ir, "disable infrared remote support");
MODULE_PARM_DESC(gbuffers,"number of capture buffers. range 2-32, default 8");
MODULE_PARM_DESC(gbufsize,"size of the capture buffers, default is 0x208000");
MODULE_PARM_DESC(reset_crop,"reset cropping parameters at open(), default "
"is 1 (yes) for compatibility with older applications");
MODULE_PARM_DESC(automute,"mute audio on bad/missing video signal, default is 1 (yes)");
MODULE_PARM_DESC(chroma_agc,"enables the AGC of chroma signal, default is 0 (no)");
MODULE_PARM_DESC(adc_crush,"enables the luminance ADC crush, default is 1 (yes)");
MODULE_PARM_DESC(whitecrush_upper,"sets the white crush upper value, default is 207");
MODULE_PARM_DESC(whitecrush_lower,"sets the white crush lower value, default is 127");
MODULE_PARM_DESC(vcr_hack,"enables the VCR hack (improves synch on poor VCR tapes), default is 0 (no)");
MODULE_PARM_DESC(irq_iswitch,"switch inputs in irq handler");
MODULE_PARM_DESC(uv_ratio,"ratio between u and v gains, default is 50");
MODULE_PARM_DESC(full_luma_range,"use the full luma range, default is 0 (no)");
MODULE_PARM_DESC(coring,"set the luma coring level, default is 0 (no)");
MODULE_PARM_DESC(video_nr, "video device numbers");
MODULE_PARM_DESC(vbi_nr, "vbi device numbers");
MODULE_PARM_DESC(radio_nr, "radio device numbers");
MODULE_DESCRIPTION("bttv - v4l/v4l2 driver module for bt848/878 based cards");
MODULE_AUTHOR("Ralph Metzler & Marcus Metzler & Gerd Knorr");
MODULE_LICENSE("GPL");
static ssize_t show_card(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(card, S_IRUGO, show_card, NULL);
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_modules(struct bttv *dev)
static void flush_request_modules(struct bttv *dev)
#define request_modules(dev)
#define flush_request_modules(dev)
static u8 SRAM_Table[][60] =
;
#define CROPCAP(minhdelayx1, hdelayx1, swidth, totalwidth, sqwidth,	 \
vdelay, sheight, videostart0)				 \
.cropcap.bounds.left = minhdelayx1,				 \	 \		 \
.cropcap.bounds.top = (videostart0) * 2 - (vdelay) + MIN_VDELAY, \		 \
.cropcap.bounds.width = (totalwidth) - (minhdelayx1) - 4,	 \
.cropcap.bounds.height = (sheight) + (vdelay) - MIN_VDELAY,	 \
.cropcap.defrect.left = hdelayx1,				 \
.cropcap.defrect.top = (videostart0) * 2,			 \
.cropcap.defrect.width = swidth,				 \
.cropcap.defrect.height = sheight,				 \
.cropcap.pixelaspect.numerator = totalwidth,			 \
.cropcap.pixelaspect.denominator = sqwidth,
const struct bttv_tvnorm bttv_tvnorms[] = ;
static const unsigned int BTTV_TVNORMS = ARRAY_SIZE(bttv_tvnorms);
static const struct bttv_format formats[] = ;
static const unsigned int FORMATS = ARRAY_SIZE(formats);
#define V4L2_CID_PRIVATE_CHROMA_AGC  (V4L2_CID_PRIVATE_BASE + 0)
#define V4L2_CID_PRIVATE_COMBFILTER  (V4L2_CID_PRIVATE_BASE + 1)
#define V4L2_CID_PRIVATE_AUTOMUTE    (V4L2_CID_PRIVATE_BASE + 2)
#define V4L2_CID_PRIVATE_LUMAFILTER  (V4L2_CID_PRIVATE_BASE + 3)
#define V4L2_CID_PRIVATE_AGC_CRUSH   (V4L2_CID_PRIVATE_BASE + 4)
#define V4L2_CID_PRIVATE_VCR_HACK    (V4L2_CID_PRIVATE_BASE + 5)
#define V4L2_CID_PRIVATE_WHITECRUSH_UPPER   (V4L2_CID_PRIVATE_BASE + 6)
#define V4L2_CID_PRIVATE_WHITECRUSH_LOWER   (V4L2_CID_PRIVATE_BASE + 7)
#define V4L2_CID_PRIVATE_UV_RATIO    (V4L2_CID_PRIVATE_BASE + 8)
#define V4L2_CID_PRIVATE_FULL_LUMA_RANGE    (V4L2_CID_PRIVATE_BASE + 9)
#define V4L2_CID_PRIVATE_CORING      (V4L2_CID_PRIVATE_BASE + 10)
#define V4L2_CID_PRIVATE_LASTP1      (V4L2_CID_PRIVATE_BASE + 11)
static const struct v4l2_queryctrl no_ctl = ;
static const struct v4l2_queryctrl bttv_ctls[] = ;
static const struct v4l2_queryctrl *ctrl_by_id(int id)
#define VBI_RESOURCES (RESOURCE_VBI)
#define VIDEO_RESOURCES (RESOURCE_VIDEO_READ | \
RESOURCE_VIDEO_STREAM | \
RESOURCE_OVERLAY)
static
int check_alloc_btres_lock(struct bttv *btv, struct bttv_fh *fh, int bit)
static
int check_btres(struct bttv_fh *fh, int bit)
static
int locked_btres(struct bttv *btv, int bit)
static void
disclaim_vbi_lines(struct bttv *btv)
static void
disclaim_video_lines(struct bttv *btv)
static
void free_btres_lock(struct bttv *btv, struct bttv_fh *fh, int bits)
static void set_pll_freq(struct bttv *btv, unsigned int fin, unsigned int fout)
static void set_pll(struct bttv *btv)
static void bt848A_set_timing(struct bttv *btv)
static void bt848_bright(struct bttv *btv, int bright)
static void bt848_hue(struct bttv *btv, int hue)
static void bt848_contrast(struct bttv *btv, int cont)
static void bt848_sat(struct bttv *btv, int color)
static int
video_mux(struct bttv *btv, unsigned int input)
static char *audio_modes[] = ;
static int
audio_mux(struct bttv *btv, int input, int mute)
static inline int
audio_mute(struct bttv *btv, int mute)
static inline int
audio_input(struct bttv *btv, int input)
static void
bttv_crop_calc_limits(struct bttv_crop *c)
static void
bttv_crop_reset(struct bttv_crop *c, unsigned int norm)
static int
set_tvnorm(struct bttv *btv, unsigned int norm)
static void
set_input(struct bttv *btv, unsigned int input, unsigned int norm)
static void init_irqreg(struct bttv *btv)
static void init_bt848(struct bttv *btv)
static void bttv_reinit_bt848(struct bttv *btv)
static int bttv_g_ctrl(struct file *file, void *priv,
struct v4l2_control *c)
static int bttv_s_ctrl(struct file *file, void *f,
struct v4l2_control *c)
void bttv_gpio_tracking(struct bttv *btv, char *comment)
static void bttv_field_count(struct bttv *btv)
static const struct bttv_format*
format_by_fourcc(int fourcc)
static int
bttv_switch_overlay(struct bttv *btv, struct bttv_fh *fh,
struct bttv_buffer *new)
static int bttv_prepare_buffer(struct videobuf_queue *q,struct bttv *btv,
struct bttv_buffer *buf,
const struct bttv_format *fmt,
unsigned int width, unsigned int height,
enum v4l2_field field)
static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
static int
buffer_prepare(struct videobuf_queue *q, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
buffer_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void buffer_release(struct videobuf_queue *q, struct videobuf_buffer *vb)
static struct videobuf_queue_ops bttv_video_qops = ;
static int bttv_s_std(struct file *file, void *priv, v4l2_std_id *id)
static int bttv_querystd(struct file *file, void *f, v4l2_std_id *id)
static int bttv_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int bttv_g_input(struct file *file, void *priv, unsigned int *i)
static int bttv_s_input(struct file *file, void *priv, unsigned int i)
static int bttv_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int bttv_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int bttv_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int bttv_log_status(struct file *file, void *f)
static int bttv_g_register(struct file *file, void *f,
struct v4l2_dbg_register *reg)
static int bttv_s_register(struct file *file, void *f,
struct v4l2_dbg_register *reg)
static void
bttv_crop_adjust	(struct bttv_crop *             c,
const struct v4l2_rect *	b,
__s32                          width,
__s32                          height,
enum v4l2_field                field)
static int
limit_scaled_size_lock       (struct bttv_fh *               fh,
__s32 *                        width,
__s32 *                        height,
enum v4l2_field                field,
unsigned int			width_mask,
unsigned int			width_bias,
int                            adjust_size,
int                            adjust_crop)
static int
verify_window_lock		(struct bttv_fh *               fh,
struct v4l2_window *           win,
int                            adjust_size,
int                            adjust_crop)
static int setup_window_lock(struct bttv_fh *fh, struct bttv *btv,
struct v4l2_window *win, int fixup)
static struct videobuf_queue* bttv_queue(struct bttv_fh *fh)
static int bttv_resource(struct bttv_fh *fh)
static int bttv_switch_type(struct bttv_fh *fh, enum v4l2_buf_type type)
static void
pix_format_set_size     (struct v4l2_pix_format *       f,
const struct bttv_format *     fmt,
unsigned int                   width,
unsigned int                   height)
static int bttv_g_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_g_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_try_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_try_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_s_fmt_vid_cap(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_s_fmt_vid_overlay(struct file *file, void *priv,
struct v4l2_format *f)
static int bttv_querycap(struct file *file, void  *priv,
struct v4l2_capability *cap)
static int bttv_enum_fmt_cap_ovr(struct v4l2_fmtdesc *f)
static int bttv_enum_fmt_vid_cap(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int bttv_enum_fmt_vid_overlay(struct file *file, void  *priv,
struct v4l2_fmtdesc *f)
static int bttv_g_fbuf(struct file *file, void *f,
struct v4l2_framebuffer *fb)
static int bttv_overlay(struct file *file, void *f, unsigned int on)
static int bttv_s_fbuf(struct file *file, void *f,
struct v4l2_framebuffer *fb)
static int bttv_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *p)
static int bttv_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b)
static int bttv_qbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int bttv_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b)
static int bttv_streamon(struct file *file, void *priv,
enum v4l2_buf_type type)
static int bttv_streamoff(struct file *file, void *priv,
enum v4l2_buf_type type)
static int bttv_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int bttv_g_parm(struct file *file, void *f,
struct v4l2_streamparm *parm)
static int bttv_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int bttv_g_priority(struct file *file, void *f, enum v4l2_priority *p)
static int bttv_s_priority(struct file *file, void *f,
enum v4l2_priority prio)
static int bttv_cropcap(struct file *file, void *priv,
struct v4l2_cropcap *cap)
static int bttv_g_crop(struct file *file, void *f, struct v4l2_crop *crop)
static int bttv_s_crop(struct file *file, void *f, struct v4l2_crop *crop)
static int bttv_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int bttv_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static ssize_t bttv_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int bttv_poll(struct file *file, poll_table *wait)
static int bttv_open(struct file *file)
static int bttv_release(struct file *file)
static int
bttv_mmap(struct file *file, struct vm_area_struct *vma)
static const struct v4l2_file_operations bttv_fops =
;
static const struct v4l2_ioctl_ops bttv_ioctl_ops = ;
static struct video_device bttv_video_template = ;
static int radio_open(struct file *file)
static int radio_release(struct file *file)
static int radio_querycap(struct file *file, void *priv,
struct v4l2_capability *cap)
static int radio_g_tuner(struct file *file, void *priv, struct v4l2_tuner *t)
static int radio_enum_input(struct file *file, void *priv,
struct v4l2_input *i)
static int radio_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *t)
static int radio_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int radio_s_input(struct file *filp, void *priv, unsigned int i)
static int radio_s_std(struct file *file, void *fh, v4l2_std_id *norm)
static int radio_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *c)
static int radio_g_input(struct file *filp, void *priv, unsigned int *i)
static ssize_t radio_read(struct file *file, char __user *data,
size_t count, loff_t *ppos)
static unsigned int radio_poll(struct file *file, poll_table *wait)
static const struct v4l2_file_operations radio_fops =
;
static const struct v4l2_ioctl_ops radio_ioctl_ops = ;
static struct video_device radio_template = ;
static int bttv_risc_decode(u32 risc)
static void bttv_risc_disasm(struct bttv *btv,
struct btcx_riscmem *risc)
static void bttv_print_riscaddr(struct bttv *btv)
static char *irq_name[] = ;
static void bttv_print_irqbits(u32 print, u32 mark)
static void bttv_irq_debug_low_latency(struct bttv *btv, u32 rc)
static int
bttv_irq_next_video(struct bttv *btv, struct bttv_buffer_set *set)
static void
bttv_irq_wakeup_video(struct bttv *btv, struct bttv_buffer_set *wakeup,
struct bttv_buffer_set *curr, unsigned int state)
static void
bttv_irq_wakeup_vbi(struct bttv *btv, struct bttv_buffer *wakeup,
unsigned int state)
static void bttv_irq_timeout(unsigned long data)
static void
bttv_irq_wakeup_top(struct bttv *btv)
static inline int is_active(struct btcx_riscmem *risc, u32 rc)
static void
bttv_irq_switch_video(struct bttv *btv)
static void
bttv_irq_switch_vbi(struct bttv *btv)
static irqreturn_t bttv_irq(int irq, void *dev_id)
static struct video_device *vdev_init(struct bttv *btv,
const struct video_device *template,
const char *type_name)
static void bttv_unregister_video(struct bttv *btv)
static int __devinit bttv_register_video(struct bttv *btv)
static void pci_set_command(struct pci_dev *dev)
static int __devinit bttv_probe(struct pci_dev *dev,
const struct pci_device_id *pci_id)
static void __devexit bttv_remove(struct pci_dev *pci_dev)
static int bttv_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int bttv_resume(struct pci_dev *pci_dev)
static struct pci_device_id bttv_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, bttv_pci_tbl);
static struct pci_driver bttv_pci_driver = ;
static int __init bttv_init_module(void)
static void __exit bttv_cleanup_module(void)
module_init(bttv_init_module);
module_exit(bttv_cleanup_module);
