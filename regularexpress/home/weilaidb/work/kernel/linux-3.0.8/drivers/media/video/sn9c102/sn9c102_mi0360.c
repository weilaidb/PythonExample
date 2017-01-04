static int mi0360_init(struct sn9c102_device* cam)
static int mi0360_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int mi0360_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int mi0360_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int mi0360_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor mi0360 = ;
int sn9c102_probe_mi0360(struct sn9c102_device* cam)
