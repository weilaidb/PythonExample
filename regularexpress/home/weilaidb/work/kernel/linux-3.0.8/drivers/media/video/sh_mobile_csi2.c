#define SH_CSI2_TREF	0x00
#define SH_CSI2_SRST	0x04
#define SH_CSI2_PHYCNT	0x08
#define SH_CSI2_CHKSUM	0x0C
#define SH_CSI2_VCDT	0x10
struct sh_csi2 ;
static int sh_csi2_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int sh_csi2_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static struct v4l2_subdev_video_ops sh_csi2_subdev_video_ops = ;
static struct v4l2_subdev_core_ops sh_csi2_subdev_core_ops;
static struct v4l2_subdev_ops sh_csi2_subdev_ops = ;
static void sh_csi2_hwinit(struct sh_csi2 *priv)
static int sh_csi2_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long sh_csi2_query_bus_param(struct soc_camera_device *icd)
static int sh_csi2_notify(struct notifier_block *nb,
unsigned long action, void *data)
static __devinit int sh_csi2_probe(struct platform_device *pdev)
static __devexit int sh_csi2_remove(struct platform_device *pdev)
static struct platform_driver __refdata sh_csi2_pdrv = ;
static int __init sh_csi2_init(void)
static void __exit sh_csi2_exit(void)
module_init(sh_csi2_init);
module_exit(sh_csi2_exit);
MODULE_DESCRIPTION("SH-Mobile MIPI CSI-2 driver");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:sh-mobile-csi2");
