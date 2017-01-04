static int set_frequency(struct poseidon *p, __u32 frequency);
static int poseidon_fm_close(struct file *filp);
static int poseidon_fm_open(struct file *filp);
#define TUNER_FREQ_MIN_FM 76000000
#define TUNER_FREQ_MAX_FM 108000000
#define MAX_PREEMPHASIS (V4L2_PREEMPHASIS_75_uS + 1)
static int preemphasis[MAX_PREEMPHASIS] = ;
static int poseidon_check_mode_radio(struct poseidon *p)
static int pm_fm_suspend(struct poseidon *p)
static int pm_fm_resume(struct poseidon *p)
static int poseidon_fm_open(struct file *filp)
static int poseidon_fm_close(struct file *filp)
static int vidioc_querycap(struct file *file, void *priv,
struct v4l2_capability *v)
static const struct v4l2_file_operations poseidon_fm_fops = ;
static int tlg_fm_vidioc_g_tuner(struct file *file, void *priv,
struct v4l2_tuner *vt)
static int fm_get_freq(struct file *file, void *priv,
struct v4l2_frequency *argp)
static int set_frequency(struct poseidon *p, __u32 frequency)
static int fm_set_freq(struct file *file, void *priv,
struct v4l2_frequency *argp)
static int tlg_fm_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *arg)
static int tlg_fm_vidioc_g_exts_ctrl(struct file *file, void *fh,
struct v4l2_ext_controls *ctrls)
static int tlg_fm_vidioc_s_exts_ctrl(struct file *file, void *fh,
struct v4l2_ext_controls *ctrls)
static int tlg_fm_vidioc_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int tlg_fm_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *ctrl)
static int tlg_fm_vidioc_querymenu(struct file *file, void *fh,
struct v4l2_querymenu *qmenu)
static int vidioc_s_tuner(struct file *file, void *priv, struct v4l2_tuner *vt)
static int vidioc_s_audio(struct file *file, void *priv, struct v4l2_audio *va)
static int vidioc_g_audio(struct file *file, void *priv, struct v4l2_audio *a)
static int vidioc_s_input(struct file *filp, void *priv, u32 i)
static int vidioc_g_input(struct file *filp, void *priv, u32 *i)
static const struct v4l2_ioctl_ops poseidon_fm_ioctl_ops = ;
static struct video_device poseidon_fm_template = ;
int poseidon_fm_init(struct poseidon *p)
int poseidon_fm_exit(struct poseidon *p)
