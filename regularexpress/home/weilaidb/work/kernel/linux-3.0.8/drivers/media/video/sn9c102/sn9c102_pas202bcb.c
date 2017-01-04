static int pas202bcb_init(struct sn9c102_device* cam)
static int pas202bcb_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int pas202bcb_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static int pas202bcb_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int pas202bcb_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static const struct sn9c102_sensor pas202bcb = ;
int sn9c102_probe_pas202bcb(struct sn9c102_device* cam)
