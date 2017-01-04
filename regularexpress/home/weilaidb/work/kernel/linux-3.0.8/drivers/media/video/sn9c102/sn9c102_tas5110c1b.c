static int tas5110c1b_init(struct sn9c102_device* cam)
static int tas5110c1b_set_ctrl(struct sn9c102_device* cam,
const struct v4l2_control* ctrl)
static int tas5110c1b_set_crop(struct sn9c102_device* cam,
const struct v4l2_rect* rect)
static int tas5110c1b_set_pix_format(struct sn9c102_device* cam,
const struct v4l2_pix_format* pix)
static const struct sn9c102_sensor tas5110c1b = ;
int sn9c102_probe_tas5110c1b(struct sn9c102_device* cam)
