#define DRIVER_DESC "Wl1273 FM Radio"
#define WL1273_POWER_SET_OFF		0
#define WL1273_POWER_SET_FM		BIT(0)
#define WL1273_POWER_SET_RDS		BIT(1)
#define WL1273_POWER_SET_RETENTION	BIT(4)
#define WL1273_PUPD_SET_OFF		0x00
#define WL1273_PUPD_SET_ON		0x01
#define WL1273_PUPD_SET_RETENTION	0x10
#define WL1273_FREQ(x)		(x * 10000 / 625)
#define WL1273_INV_FREQ(x)	(x * 625 / 10000)
static int radio_nr;
module_param(radio_nr, int, 0);
MODULE_PARM_DESC(radio_nr, "The number of the radio device. Default = 0");
struct wl1273_device ;
#define WL1273_IRQ_MASK	 (WL1273_FR_EVENT		|	\
WL1273_POW_ENB_EVENT)
static unsigned int rds_buf = 100;
module_param(rds_buf, uint, 0);
MODULE_PARM_DESC(rds_buf, "Number of RDS buffer entries. Default = 100");
static int wl1273_fm_write_fw(struct wl1273_core *core,
__u8 *fw, int len)
#define WL1273_FIFO_HAS_DATA(status)	(1 << 5 & status)
#define WL1273_RDS_CORRECTABLE_ERROR	(1 << 3)
#define WL1273_RDS_UNCORRECTABLE_ERROR	(1 << 4)
static int wl1273_fm_rds(struct wl1273_device *radio)
static irqreturn_t wl1273_fm_irq_thread_handler(int irq, void *dev_id)
static int wl1273_fm_set_tx_freq(struct wl1273_device *radio, unsigned int freq)
static int wl1273_fm_set_rx_freq(struct wl1273_device *radio, unsigned int freq)
static int wl1273_fm_get_freq(struct wl1273_device *radio)
static int wl1273_fm_upload_firmware_patch(struct wl1273_device *radio)
static int wl1273_fm_stop(struct wl1273_device *radio)
static int wl1273_fm_start(struct wl1273_device *radio, int new_mode)
static int wl1273_fm_suspend(struct wl1273_device *radio)
static int wl1273_fm_set_mode(struct wl1273_device *radio, int mode)
static int wl1273_fm_set_seek(struct wl1273_device *radio,
unsigned int wrap_around,
unsigned int seek_upward,
int level)
static unsigned int wl1273_fm_get_tx_ctune(struct wl1273_device *radio)
static int wl1273_fm_set_preemphasis(struct wl1273_device *radio,
unsigned int preemphasis)
static int wl1273_fm_rds_on(struct wl1273_device *radio)
static int wl1273_fm_rds_off(struct wl1273_device *radio)
static int wl1273_fm_set_rds(struct wl1273_device *radio, unsigned int new_mode)
static ssize_t wl1273_fm_fops_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int wl1273_fm_fops_poll(struct file *file,
struct poll_table_struct *pts)
static int wl1273_fm_fops_open(struct file *file)
static int wl1273_fm_fops_release(struct file *file)
static ssize_t wl1273_fm_fops_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct v4l2_file_operations wl1273_fops = ;
static int wl1273_fm_vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *capability)
static int wl1273_fm_vidioc_g_input(struct file *file, void *priv,
unsigned int *i)
static int wl1273_fm_vidioc_s_input(struct file *file, void *priv,
unsigned int i)
static int wl1273_fm_set_tx_power(struct wl1273_device *radio, u16 power)
#define WL1273_SPACING_50kHz	1
#define WL1273_SPACING_100kHz	2
#define WL1273_SPACING_200kHz	4
static int wl1273_fm_tx_set_spacing(struct wl1273_device *radio,
unsigned int spacing)
static int wl1273_fm_g_volatile_ctrl(struct v4l2_ctrl *ctrl)
#define WL1273_MUTE_SOFT_ENABLE    (1 << 0)
#define WL1273_MUTE_AC             (1 << 1)
#define WL1273_MUTE_HARD_LEFT      (1 << 2)
#define WL1273_MUTE_HARD_RIGHT     (1 << 3)
#define WL1273_MUTE_SOFT_FORCE     (1 << 4)
static inline struct wl1273_device *to_radio(struct v4l2_ctrl *ctrl)
static int wl1273_fm_vidioc_s_ctrl(struct v4l2_ctrl *ctrl)
static int wl1273_fm_vidioc_g_audio(struct file *file, void *priv,
struct v4l2_audio *audio)
static int wl1273_fm_vidioc_s_audio(struct file *file, void *priv,
struct v4l2_audio *audio)
#define WL1273_RDS_NOT_SYNCHRONIZED 0
#define WL1273_RDS_SYNCHRONIZED 1
static int wl1273_fm_vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int wl1273_fm_vidioc_s_tuner(struct file *file, void *priv,
struct v4l2_tuner *tuner)
static int wl1273_fm_vidioc_g_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
static int wl1273_fm_vidioc_s_frequency(struct file *file, void *priv,
struct v4l2_frequency *freq)
#define WL1273_DEFAULT_SEEK_LEVEL	7
static int wl1273_fm_vidioc_s_hw_freq_seek(struct file *file, void *priv,
struct v4l2_hw_freq_seek *seek)
static int wl1273_fm_vidioc_s_modulator(struct file *file, void *priv,
struct v4l2_modulator *modulator)
static int wl1273_fm_vidioc_g_modulator(struct file *file, void *priv,
struct v4l2_modulator *modulator)
static int wl1273_fm_vidioc_log_status(struct file *file, void *priv)
static void wl1273_vdev_release(struct video_device *dev)
static const struct v4l2_ctrl_ops wl1273_ctrl_ops = ;
static const struct v4l2_ioctl_ops wl1273_ioctl_ops = ;
static struct video_device wl1273_viddev_template = ;
static int wl1273_fm_radio_remove(struct platform_device *pdev)
static int __devinit wl1273_fm_radio_probe(struct platform_device *pdev)
MODULE_ALIAS("platform:wl1273_fm_radio");
static struct platform_driver wl1273_fm_radio_driver = ;
static int __init wl1273_fm_module_init(void)
module_init(wl1273_fm_module_init);
static void __exit wl1273_fm_module_exit(void)
module_exit(wl1273_fm_module_exit);
MODULE_AUTHOR("Matti Aaltonen <matti.j.aaltonen@nokia.com>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
