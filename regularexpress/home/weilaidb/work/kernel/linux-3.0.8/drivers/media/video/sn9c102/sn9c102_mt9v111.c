static int mt9v111_init(struct sn9c102_device *cam)
static int mt9v111_get_ctrl(struct sn9c102_device *cam,
struct v4l2_control *ctrl)
static int mt9v111_set_ctrl(struct sn9c102_device *cam,
const struct v4l2_control *ctrl)
static int mt9v111_set_crop(struct sn9c102_device *cam,
const struct v4l2_rect *rect)
static int mt9v111_set_pix_format(struct sn9c102_device *cam,
const struct v4l2_pix_format *pix)
static const struct sn9c102_sensor mt9v111 = ;
int sn9c102_probe_mt9v111(struct sn9c102_device *cam)
