#define RADIO_VERSION KERNEL_VERSION(0, 0, 3)
MODULE_AUTHOR("Jonas Munsin, Pekka Seppänen <pexu@kapsi.fi>");
MODULE_DESCRIPTION("A driver for the GemTek Radio card.");
MODULE_LICENSE("GPL");
#define CONFIG_RADIO_GEMTEK_PORT -1
#define CONFIG_RADIO_GEMTEK_PROBE 1
static int io		= CONFIG_RADIO_GEMTEK_PORT;
static int probe	= CONFIG_RADIO_GEMTEK_PROBE;
static int hardmute;
static int shutdown	= 1;
static int keepmuted	= 1;
static int initmute	= 1;
static int radio_nr	= -1;
module_param(io, int, 0444);
MODULE_PARM_DESC(io, "Force I/O port for the GemTek Radio card if automatic "
"probing is disabled or fails. The most common I/O ports are: 0x20c "
"0x30c, 0x24c or 0x34c (0x20c, 0x248 and 0x28c have been reported to "
"work for the combined sound/radiocard).");
module_param(probe, bool, 0444);
MODULE_PARM_DESC(probe, "Enable automatic device probing. Note: only the most "
"common I/O ports used by the card are probed.");
module_param(hardmute, bool, 0644);
MODULE_PARM_DESC(hardmute, "Enable `hard muting' by shutting down PLL, may "
"reduce static noise.");
module_param(shutdown, bool, 0644);
MODULE_PARM_DESC(shutdown, "Enable shutting down PLL and muting line when "
"module is unloaded.");
module_param(keepmuted, bool, 0644);
MODULE_PARM_DESC(keepmuted, "Keep card muted even when frequency is changed.");
module_param(initmute, bool, 0444);
MODULE_PARM_DESC(initmute, "Mute card when module is loaded.");
module_param(radio_nr, int, 0444);
#define GEMTEK_LOWFREQ	(87*16000)
#define GEMTEK_HIGHFREQ	(108*16000)
#define FSCALE		8
#define IF_OFFSET	((unsigned int)(10.52 * 16000 * (1<<FSCALE)))
#define REF_FREQ	((unsigned int)(6.39 * 16 * (1<<FSCALE)))
#define GEMTEK_CK		0x01
#define GEMTEK_DA		0x02
#define GEMTEK_CE		0x04
#define GEMTEK_NS		0x08
#define GEMTEK_MT		0x10
#define GEMTEK_STDF_3_125_KHZ	0x01
#define GEMTEK_PLL_OFF		0x07
#define BU2614_BUS_SIZE	32
#define SHORT_DELAY 5
#define LONG_DELAY 75
struct gemtek ;
static struct gemtek gemtek_card;
#define BU2614_FREQ_BITS 	16
#define BU2614_PORT_BITS	3
#define BU2614_VOID_BITS	4
#define BU2614_FMES_BITS	1
#define BU2614_STDF_BITS	3
#define BU2614_SWIN_BITS	1
#define BU2614_SWAL_BITS        1
#define BU2614_VOID2_BITS	1
#define BU2614_FMUN_BITS	1
#define BU2614_TEST_BITS	1
#define BU2614_FREQ_SHIFT 	0
#define BU2614_PORT_SHIFT	(BU2614_FREQ_BITS + BU2614_FREQ_SHIFT)
#define BU2614_VOID_SHIFT	(BU2614_PORT_BITS + BU2614_PORT_SHIFT)
#define BU2614_FMES_SHIFT	(BU2614_VOID_BITS + BU2614_VOID_SHIFT)
#define BU2614_STDF_SHIFT	(BU2614_FMES_BITS + BU2614_FMES_SHIFT)
#define BU2614_SWIN_SHIFT	(BU2614_STDF_BITS + BU2614_STDF_SHIFT)
#define BU2614_SWAL_SHIFT	(BU2614_SWIN_BITS + BU2614_SWIN_SHIFT)
#define BU2614_VOID2_SHIFT	(BU2614_SWAL_BITS + BU2614_SWAL_SHIFT)
#define BU2614_FMUN_SHIFT	(BU2614_VOID2_BITS + BU2614_VOID2_SHIFT)
#define BU2614_TEST_SHIFT	(BU2614_FMUN_BITS + BU2614_FMUN_SHIFT)
#define MKMASK(field)	(((1<<BU2614_##field##_BITS) - 1) << \
BU2614_##field##_SHIFT)
#define BU2614_PORT_MASK	MKMASK(PORT)
#define BU2614_FREQ_MASK	MKMASK(FREQ)
#define BU2614_VOID_MASK	MKMASK(VOID)
#define BU2614_FMES_MASK	MKMASK(FMES)
#define BU2614_STDF_MASK	MKMASK(STDF)
#define BU2614_SWIN_MASK	MKMASK(SWIN)
#define BU2614_SWAL_MASK	MKMASK(SWAL)
#define BU2614_VOID2_MASK	MKMASK(VOID2)
#define BU2614_FMUN_MASK	MKMASK(FMUN)
#define BU2614_TEST_MASK	MKMASK(TEST)
#define gemtek_bu2614_set(dev, field, data) ((dev)->bu2614data = \
((dev)->bu2614data & ~field##_MASK) | ((data) << field##_SHIFT))
static void gemtek_bu2614_transmit(struct gemtek *gt)
static unsigned long gemtek_convfreq(unsigned long freq)
static void gemtek_setfreq(struct gemtek *gt, unsigned long freq)
static void gemtek_mute(struct gemtek *gt)
static void gemtek_unmute(struct gemtek *gt)
static inline int gemtek_getsigstr(struct gemtek *gt)
static int gemtek_verify(struct gemtek *gt, int port)
static int gemtek_probe(struct gemtek *gt)
static const struct v4l2_file_operations gemtek_fops = ;
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv, struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv, struct v4l2_tuner *v)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv, struct v4l2_audio *a)
static const struct v4l2_ioctl_ops gemtek_ioctl_ops = ;
static int __init gemtek_init(void)
static void __exit gemtek_exit(void)
module_init(gemtek_init);
module_exit(gemtek_exit);
