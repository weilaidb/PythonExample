static int ov7660_init(struct sn9c102_device* cam)
static int ov7660_get_ctrl(struct sn9c102_device* cam,
struct v4l2_control* ctrl)
static int ov7660_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int ov7660_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int ov7660_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor ov7660 = ;
int sn9c102_probe_ov7660(struct sn9c102_device* cam)
