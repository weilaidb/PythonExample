#define DEBUG_VARIABLE debug
#define I2C_SAA7111A  0x24
#define	I2C_TDA9840   0x42
#define	I2C_TEA6415C  0x43
#define	I2C_TEA6420_1 0x4c
#define	I2C_TEA6420_2 0x4d
#define	I2C_TUNER     0x60
#define MXB_BOARD_CAN_DO_VBI(dev)   (dev->revision != 0)
static int mxb_num;
static int freq = 4148;
module_param(freq, int, 0644);
MODULE_PARM_DESC(freq, "initial frequency the tuner will be tuned to while setup");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off device debugging (default:off).");
#define MXB_INPUTS 4
enum ;
static struct v4l2_input mxb_inputs[MXB_INPUTS] = ;
static struct  input_port_selection[MXB_INPUTS] = ;
static int video_audio_connect[MXB_INPUTS] =
;
struct mxb_routing ;
static struct mxb_routing TEA6420_cd[MXB_AUDIOS + 1][2] = ;
static struct mxb_routing TEA6420_line[MXB_AUDIOS + 1][2] = ;
#define MAXCONTROLS	1
static struct v4l2_queryctrl mxb_controls[] = ;
struct mxb
;
#define saa7111a_call(mxb, o, f, args...) \
v4l2_subdev_call(mxb->saa7111a, o, f, ##args)
#define tda9840_call(mxb, o, f, args...) \
v4l2_subdev_call(mxb->tda9840, o, f, ##args)
#define tea6415c_call(mxb, o, f, args...) \
v4l2_subdev_call(mxb->tea6415c, o, f, ##args)
#define tuner_call(mxb, o, f, args...) \
v4l2_subdev_call(mxb->tuner, o, f, ##args)
#define call_all(dev, o, f, args...) \
v4l2_device_call_until_err(&dev->v4l2_dev, 0, o, f, ##args)
static inline void tea6420_route_cd(struct mxb *mxb, int idx)
static inline void tea6420_route_line(struct mxb *mxb, int idx)
static struct saa7146_extension extension;
static int mxb_probe(struct saa7146_dev *dev)
static struct  mxb_saa7740_init[] = ;
static int mxb_init_done(struct saa7146_dev* dev)
static int vidioc_queryctrl(struct file *file, void *fh, struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *vc)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *vc)
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *i)
static int vidioc_s_input(struct file *file, void *fh, unsigned int input)
static int vidioc_g_tuner(struct file *file, void *fh, struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *fh, struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *fh, struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *fh, struct v4l2_frequency *f)
static int vidioc_g_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_g_register(struct file *file, void *fh, struct v4l2_dbg_register *reg)
static int vidioc_s_register(struct file *file, void *fh, struct v4l2_dbg_register *reg)
static long vidioc_default(struct file *file, void *fh, bool valid_prio,
int cmd, void *arg)
static struct saa7146_ext_vv vv_data;
static int mxb_attach(struct saa7146_dev *dev, struct saa7146_pci_extension_data *info)
static int mxb_detach(struct saa7146_dev *dev)
static int std_callback(struct saa7146_dev *dev, struct saa7146_standard *standard)
static struct saa7146_standard standard[] = ;
static struct saa7146_pci_extension_data mxb = ;
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_ext_vv vv_data = ;
static struct saa7146_extension extension = ;
static int __init mxb_init_module(void)
static void __exit mxb_cleanup_module(void)
module_init(mxb_init_module);
module_exit(mxb_cleanup_module);
MODULE_DESCRIPTION("video4linux-2 driver for the Siemens-Nixdorf 'Multimedia eXtension board'");
MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_LICENSE("GPL");
