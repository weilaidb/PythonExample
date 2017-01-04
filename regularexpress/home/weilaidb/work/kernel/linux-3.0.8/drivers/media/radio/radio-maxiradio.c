MODULE_AUTHOR("Dimitromanolakis Apostolos, apdim@grecian.net");
MODULE_DESCRIPTION("Radio driver for the Guillemot Maxi Radio FM2000 radio.");
MODULE_LICENSE("GPL");
static int radio_nr = -1;
module_param(radio_nr, int, 0);
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "activates debug info");
#define DRIVER_VERSION	"0.77"
#define RADIO_VERSION KERNEL_VERSION(0, 7, 7)
#define dprintk(dev, num, fmt, arg...) \
v4l2_dbg(num, debug, &dev->v4l2_dev, fmt, ## arg)
#define PCI_VENDOR_ID_GUILLEMOT 0x5046
#define PCI_DEVICE_ID_GUILLEMOT_MAXIRADIO 0x1001
static const int clk = 1, data = 2, wren = 4, mo_st = 8, power = 16;
#define FREQ_LO		(87 * 16000)
#define FREQ_HI		(108 * 16000)
#define FREQ_IF         171200
#define FREQ_STEP       200
#define FREQ2BITS(x) \
((((unsigned int)(x) + FREQ_IF + (FREQ_STEP << 1)) / (FREQ_STEP << 2)) << 2)
#define BITS2FREQ(x)	((x) * FREQ_STEP - FREQ_IF)
struct maxiradio
;
static inline struct maxiradio *to_maxiradio(struct v4l2_device *v4l2_dev)
static void outbit(unsigned long bit, u16 io)
static void turn_power(struct maxiradio *dev, int p)
static void set_freq(struct maxiradio *dev, u32 freq)
static int get_stereo(u16 io)
static int get_tune(u16 io)
static int vidioc_querycap(struct file *file, void  *priv,
struct v4l2_capability *v)
static int vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *v)
static int vidioc_g_input(struct file *filp, void *priv, unsigned int *i)
static int vidioc_s_input(struct file *filp, void *priv, unsigned int i)
static int vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *a)
static int vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *f)
static int vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static const struct v4l2_file_operations maxiradio_fops = ;
static const struct v4l2_ioctl_ops maxiradio_ioctl_ops = ;
static int __devinit maxiradio_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit maxiradio_remove_one(struct pci_dev *pdev)
static struct pci_device_id maxiradio_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, maxiradio_pci_tbl);
static struct pci_driver maxiradio_driver = ;
static int __init maxiradio_radio_init(void)
static void __exit maxiradio_radio_exit(void)
module_init(maxiradio_radio_init);
module_exit(maxiradio_radio_exit);
