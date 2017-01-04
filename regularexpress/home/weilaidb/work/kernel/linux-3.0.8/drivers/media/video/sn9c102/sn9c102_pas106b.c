static int pas106b_init(struct sn9c102_device* cam)
static int pas106b_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int pas106b_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int pas106b_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int pas106b_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor pas106b = ;
int sn9c102_probe_pas106b(struct sn9c102_device* cam)
