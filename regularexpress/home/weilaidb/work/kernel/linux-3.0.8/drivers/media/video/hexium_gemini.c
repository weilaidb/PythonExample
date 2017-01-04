#define DEBUG_VARIABLE debug
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "debug verbosity");
static int hexium_num;
#define HEXIUM_GEMINI			4
#define HEXIUM_GEMINI_DUAL		5
#define HEXIUM_INPUTS	9
static struct v4l2_input hexium_inputs[HEXIUM_INPUTS] = ;
#define HEXIUM_AUDIOS	0
struct hexium_data
;
#define HEXIUM_CONTROLS	1
static struct v4l2_queryctrl hexium_controls[] = ;
#define HEXIUM_GEMINI_V_1_0		1
#define HEXIUM_GEMINI_DUAL_V_1_0	2
struct hexium
;
static u8 hexium_ks0127b[0x100]=;
static struct hexium_data hexium_pal[] = ;
static struct hexium_data hexium_pal_bw[] = ;
static struct hexium_data hexium_ntsc[] = ;
static struct hexium_data hexium_ntsc_bw[] = ;
static struct hexium_data hexium_secam[] = ;
static struct hexium_data hexium_input_select[] = ;
static struct saa7146_standard hexium_standards[] = ;
static int hexium_init_done(struct saa7146_dev *dev)
static int hexium_set_input(struct hexium *hexium, int input)
static int hexium_set_standard(struct hexium *hexium, struct hexium_data *vdec)
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *input)
static int vidioc_s_input(struct file *file, void *fh, unsigned int input)
static int vidioc_queryctrl(struct file *file, void *fh, struct v4l2_queryctrl *qc)
static int vidioc_g_ctrl(struct file *file, void *fh, struct v4l2_control *vc)
static int vidioc_s_ctrl(struct file *file, void *fh, struct v4l2_control *vc)
static struct saa7146_ext_vv vv_data;
static int hexium_attach(struct saa7146_dev *dev, struct saa7146_pci_extension_data *info)
static int hexium_detach(struct saa7146_dev *dev)
static int std_callback(struct saa7146_dev *dev, struct saa7146_standard *std)
static struct saa7146_extension hexium_extension;
static struct saa7146_pci_extension_data hexium_gemini_4bnc = ;
static struct saa7146_pci_extension_data hexium_gemini_dual_4bnc = ;
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_ext_vv vv_data = ;
static struct saa7146_extension hexium_extension = ;
static int __init hexium_init_module(void)
static void __exit hexium_cleanup_module(void)
module_init(hexium_init_module);
module_exit(hexium_cleanup_module);
MODULE_DESCRIPTION("video4linux-2 driver for Hexium Gemini frame grabber cards");
MODULE_AUTHOR("Michael Hunold <michael@mihu.de>");
MODULE_LICENSE("GPL");
