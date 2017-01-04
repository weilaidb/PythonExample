int msp_writereg(struct av7110 *av7110, u8 dev, u16 reg, u16 val)
static int msp_readreg(struct av7110 *av7110, u8 dev, u16 reg, u16 *val)
static struct v4l2_input inputs[4] = ;
static int ves1820_writereg(struct saa7146_dev *dev, u8 addr, u8 reg, u8 data)
static int tuner_write(struct saa7146_dev *dev, u8 addr, u8 data [4])
static int ves1820_set_tv_freq(struct saa7146_dev *dev, u32 freq)
static int stv0297_set_tv_freq(struct saa7146_dev *dev, u32 freq)
static struct saa7146_standard analog_standard[];
static struct saa7146_standard dvb_standard[];
static struct saa7146_standard standard[];
static struct v4l2_audio msp3400_v4l2_audio = ;
static int av7110_dvb_c_switch(struct saa7146_fh *fh)
static int vidioc_g_tuner(struct file *file, void *fh, struct v4l2_tuner *t)
static int vidioc_s_tuner(struct file *file, void *fh, struct v4l2_tuner *t)
static int vidioc_g_frequency(struct file *file, void *fh, struct v4l2_frequency *f)
static int vidioc_s_frequency(struct file *file, void *fh, struct v4l2_frequency *f)
static int vidioc_enum_input(struct file *file, void *fh, struct v4l2_input *i)
static int vidioc_g_input(struct file *file, void *fh, unsigned int *input)
static int vidioc_s_input(struct file *file, void *fh, unsigned int input)
static int vidioc_g_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_s_audio(struct file *file, void *fh, struct v4l2_audio *a)
static int vidioc_g_sliced_vbi_cap(struct file *file, void *fh,
struct v4l2_sliced_vbi_cap *cap)
static int vidioc_g_fmt_sliced_vbi_out(struct file *file, void *fh,
struct v4l2_format *f)
static int vidioc_s_fmt_sliced_vbi_out(struct file *file, void *fh,
struct v4l2_format *f)
static int av7110_vbi_reset(struct file *file)
static ssize_t av7110_vbi_write(struct file *file, const char __user *data, size_t count, loff_t *ppos)
static u8 saa7113_init_regs[] = ;
static struct saa7146_ext_vv av7110_vv_data_st;
static struct saa7146_ext_vv av7110_vv_data_c;
int av7110_init_analog_module(struct av7110 *av7110)
int av7110_init_v4l(struct av7110 *av7110)
int av7110_exit_v4l(struct av7110 *av7110)
static struct saa7146_standard standard[] = ;
static struct saa7146_standard analog_standard[] = ;
static struct saa7146_standard dvb_standard[] = ;
static int std_callback(struct saa7146_dev* dev, struct saa7146_standard *std)
static struct saa7146_ext_vv av7110_vv_data_st = ;
static struct saa7146_ext_vv av7110_vv_data_c = ;
