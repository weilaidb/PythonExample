static int hv7131d_init(struct sn9c102_device* cam)
static int hv7131d_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int hv7131d_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int hv7131d_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int hv7131d_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor hv7131d = ;
int sn9c102_probe_hv7131d(struct sn9c102_device* cam)
