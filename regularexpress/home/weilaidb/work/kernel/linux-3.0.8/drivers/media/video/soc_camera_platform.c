struct soc_camera_platform_priv ;
static struct soc_camera_platform_priv *get_priv(struct platform_device *pdev)
static struct soc_camera_platform_info *get_info(struct soc_camera_device *icd)
static int soc_camera_platform_s_stream(struct v4l2_subdev *sd, int enable)
static int soc_camera_platform_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long
soc_camera_platform_query_bus_param(struct soc_camera_device *icd)
static int soc_camera_platform_fill_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static struct v4l2_subdev_core_ops platform_subdev_core_ops;
static int soc_camera_platform_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int soc_camera_platform_g_crop(struct v4l2_subdev *sd,
struct v4l2_crop *a)
static int soc_camera_platform_cropcap(struct v4l2_subdev *sd,
struct v4l2_cropcap *a)
static struct v4l2_subdev_video_ops platform_subdev_video_ops = ;
static struct v4l2_subdev_ops platform_subdev_ops = ;
static struct soc_camera_ops soc_camera_platform_ops = ;
static int soc_camera_platform_probe(struct platform_device *pdev)
static int soc_camera_platform_remove(struct platform_device *pdev)
static struct platform_driver soc_camera_platform_driver = ;
static int __init soc_camera_platform_module_init(void)
static void __exit soc_camera_platform_module_exit(void)
module_init(soc_camera_platform_module_init);
module_exit(soc_camera_platform_module_exit);
MODULE_DESCRIPTION("SoC Camera Platform driver");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:soc_camera_platform");
