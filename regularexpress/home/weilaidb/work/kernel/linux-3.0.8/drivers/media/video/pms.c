MODULE_LICENSE("GPL");
#define MOTOROLA	1
#define PHILIPS2	2
#define PHILIPS1	3
#define MVVMEMORYWIDTH	0x40
struct i2c_info ;
struct pms ;
static struct pms pms_card;
static int io_port = 0x250;
module_param(io_port, int, 0);
static int mem_base = 0xc8000;
module_param(mem_base, int, 0);
static int video_nr = -1;
module_param(video_nr, int, 0);
static inline void mvv_write(struct pms *dev, u8 index, u8 value)
static inline u8 mvv_read(struct pms *dev, u8 index)
static int pms_i2c_stat(struct pms *dev, u8 slave)
static int pms_i2c_write(struct pms *dev, u16 slave, u16 sub, u16 data)
static int pms_i2c_read(struct pms *dev, int slave, int sub)
static void pms_i2c_andor(struct pms *dev, int slave, int sub, int and, int or)
static void pms_videosource(struct pms *dev, short source)
static void pms_hue(struct pms *dev, short hue)
static void pms_saturation(struct pms *dev, short sat)
static void pms_contrast(struct pms *dev, short contrast)
static void pms_brightness(struct pms *dev, short brightness)
static void pms_format(struct pms *dev, short format)
static void pms_hstart(struct pms *dev, short start)
static void pms_bandpass(struct pms *dev, short pass)
static void pms_antisnow(struct pms *dev, short snow)
static void pms_sharpness(struct pms *dev, short sharp)
static void pms_chromaagc(struct pms *dev, short agc)
static void pms_vertnoise(struct pms *dev, short noise)
static void pms_forcecolour(struct pms *dev, short colour)
static void pms_antigamma(struct pms *dev, short gamma)
static void pms_prefilter(struct pms *dev, short filter)
static void pms_hfilter(struct pms *dev, short filter)
static void pms_vfilter(struct pms *dev, short filter)
static void pms_killcolour(struct pms *dev, short colour)
static void pms_chromagain(struct pms *dev, short chroma)
static void pms_spacialcompl(struct pms *dev, short data)
static void pms_spacialcomph(struct pms *dev, short data)
static void pms_vstart(struct pms *dev, short start)
static void pms_secamcross(struct pms *dev, short cross)
static void pms_swsense(struct pms *dev, short sense)
static void pms_framerate(struct pms *dev, short frr)
static void pms_vert(struct pms *dev, u8 deciden, u8 decinum)
static void pms_vertdeci(struct pms *dev, unsigned short decinum, unsigned short deciden)
static void pms_horzdeci(struct pms *dev, short decinum, short deciden)
static void pms_resolution(struct pms *dev, short width, short height)
static void pms_vcrinput(struct pms *dev, short input)
static int pms_capture(struct pms *dev, char __user *buf, int rgb555, int count)
static int pms_querycap(struct file *file, void  *priv,
struct v4l2_capability *vcap)
static int pms_enum_input(struct file *file, void *fh, struct v4l2_input *vin)
static int pms_g_input(struct file *file, void *fh, unsigned int *inp)
static int pms_s_input(struct file *file, void *fh, unsigned int inp)
static int pms_g_std(struct file *file, void *fh, v4l2_std_id *std)
static int pms_s_std(struct file *file, void *fh, v4l2_std_id *std)
static int pms_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int pms_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int pms_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int pms_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int pms_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int pms_s_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int pms_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *fmt)
static ssize_t pms_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct v4l2_file_operations pms_fops = ;
static const struct v4l2_ioctl_ops pms_ioctl_ops = ;
static int init_mediavision(struct pms *dev)
static int enable;
module_param(enable, int, 0);
static int __init pms_init(void)
static void __exit pms_exit(void)
module_init(pms_init);
module_exit(pms_exit);
