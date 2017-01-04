static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define S5PCSIS_CTRL			0x00
#define S5PCSIS_CTRL_DPDN_DEFAULT	(0 << 31)
#define S5PCSIS_CTRL_DPDN_SWAP		(1 << 31)
#define S5PCSIS_CTRL_ALIGN_32BIT	(1 << 20)
#define S5PCSIS_CTRL_UPDATE_SHADOW	(1 << 16)
#define S5PCSIS_CTRL_WCLK_EXTCLK	(1 << 8)
#define S5PCSIS_CTRL_RESET		(1 << 4)
#define S5PCSIS_CTRL_ENABLE		(1 << 0)
#define S5PCSIS_DPHYCTRL		0x04
#define S5PCSIS_DPHYCTRL_HSS_MASK	(0x1f << 27)
#define S5PCSIS_DPHYCTRL_ENABLE		(0x1f << 0)
#define S5PCSIS_CONFIG			0x08
#define S5PCSIS_CFG_FMT_YCBCR422_8BIT	(0x1e << 2)
#define S5PCSIS_CFG_FMT_RAW8		(0x2a << 2)
#define S5PCSIS_CFG_FMT_RAW10		(0x2b << 2)
#define S5PCSIS_CFG_FMT_RAW12		(0x2c << 2)
#define S5PCSIS_CFG_FMT_USER(x)		((0x30 + x - 1) << 2)
#define S5PCSIS_CFG_FMT_MASK		(0x3f << 2)
#define S5PCSIS_CFG_NR_LANE_MASK	3
#define S5PCSIS_INTMSK			0x10
#define S5PCSIS_INTMSK_EN_ALL		0xf000003f
#define S5PCSIS_INTSRC			0x14
#define S5PCSIS_RESOL			0x2c
#define CSIS_MAX_PIX_WIDTH		0xffff
#define CSIS_MAX_PIX_HEIGHT		0xffff
enum ;
static char *csi_clock_name[] = ;
#define NUM_CSIS_CLOCKS	ARRAY_SIZE(csi_clock_name)
enum ;
struct csis_state ;
struct csis_pix_format ;
static const struct csis_pix_format s5pcsis_formats[] = ;
#define s5pcsis_write(__csis, __r, __v) writel(__v, __csis->regs + __r)
#define s5pcsis_read(__csis, __r) readl(__csis->regs + __r)
static struct csis_state *sd_to_csis_state(struct v4l2_subdev *sdev)
static const struct csis_pix_format *find_csis_format(
struct v4l2_mbus_framefmt *mf)
static void s5pcsis_enable_interrupts(struct csis_state *state, bool on)
static void s5pcsis_reset(struct csis_state *state)
static void s5pcsis_system_enable(struct csis_state *state, int on)
static void __s5pcsis_set_format(struct csis_state *state)
static void s5pcsis_set_hsync_settle(struct csis_state *state, int settle)
static void s5pcsis_set_params(struct csis_state *state)
static void s5pcsis_clk_put(struct csis_state *state)
static int s5pcsis_clk_get(struct csis_state *state)
static int s5pcsis_s_power(struct v4l2_subdev *sd, int on)
static void s5pcsis_start_stream(struct csis_state *state)
static void s5pcsis_stop_stream(struct csis_state *state)
static int s5pcsis_s_stream(struct v4l2_subdev *sd, int enable)
static int s5pcsis_enum_mbus_code(struct v4l2_subdev *sd,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static struct csis_pix_format const *s5pcsis_try_format(
struct v4l2_mbus_framefmt *mf)
static struct v4l2_mbus_framefmt *__s5pcsis_get_format(
struct csis_state *state, struct v4l2_subdev_fh *fh,
u32 pad, enum v4l2_subdev_format_whence which)
static int s5pcsis_set_fmt(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static int s5pcsis_get_fmt(struct v4l2_subdev *sd, struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *fmt)
static struct v4l2_subdev_core_ops s5pcsis_core_ops = ;
static struct v4l2_subdev_pad_ops s5pcsis_pad_ops = ;
static struct v4l2_subdev_video_ops s5pcsis_video_ops = ;
static struct v4l2_subdev_ops s5pcsis_subdev_ops = ;
static irqreturn_t s5pcsis_irq_handler(int irq, void *dev_id)
static int __devinit s5pcsis_probe(struct platform_device *pdev)
static int s5pcsis_suspend(struct device *dev)
static int s5pcsis_resume(struct device *dev)
static int s5pcsis_pm_suspend(struct device *dev)
static int s5pcsis_pm_resume(struct device *dev)
static int __devexit s5pcsis_remove(struct platform_device *pdev)
static const struct dev_pm_ops s5pcsis_pm_ops = ;
static struct platform_driver s5pcsis_driver = ;
static int __init s5pcsis_init(void)
static void __exit s5pcsis_exit(void)
module_init(s5pcsis_init);
module_exit(s5pcsis_exit);
MODULE_AUTHOR("Sylwester Nawrocki <s.nawrocki@samsung.com>");
MODULE_DESCRIPTION("S5P/EXYNOS4 MIPI CSI receiver driver");
MODULE_LICENSE("GPL");
