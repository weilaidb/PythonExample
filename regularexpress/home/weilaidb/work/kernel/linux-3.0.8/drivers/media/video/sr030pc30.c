static int debug;
module_param(debug, int, 0644);
#define MODULE_NAME	"SR030PC30"
#define POWER_CTRL_REG		0x0001
#define PAGEMODE_REG		0x03
#define DEVICE_ID_REG		0x0004
#define NOON010PC30_ID		0x86
#define SR030PC30_ID		0x8C
#define VDO_CTL1_REG		0x0010
#define SUBSAMPL_NONE_VGA	0
#define SUBSAMPL_QVGA		0x10
#define SUBSAMPL_QQVGA		0x20
#define VDO_CTL2_REG		0x0011
#define SYNC_CTL_REG		0x0012
#define WIN_ROWH_REG		0x0020
#define WIN_ROWL_REG		0x0021
#define WIN_COLH_REG		0x0022
#define WIN_COLL_REG		0x0023
#define WIN_HEIGHTH_REG		0x0024
#define WIN_HEIGHTL_REG		0x0025
#define WIN_WIDTHH_REG		0x0026
#define WIN_WIDTHL_REG		0x0027
#define HBLANKH_REG		0x0040
#define HBLANKL_REG		0x0041
#define VSYNCH_REG		0x0042
#define VSYNCL_REG		0x0043
#define ISP_CTL_REG(n)		(0x1010 + (n))
#define YOFS_REG		0x1040
#define DARK_YOFS_REG		0x1041
#define AG_ABRTH_REG		0x1050
#define SAT_CTL_REG		0x1060
#define BSAT_REG		0x1061
#define RSAT_REG		0x1062
#define AG_SAT_TH_REG		0x1063
#define ZLPF_CTRL_REG		0x1110
#define ZLPF_CTRL2_REG		0x1112
#define ZLPF_AGH_THR_REG	0x1121
#define ZLPF_THR_REG		0x1160
#define ZLPF_DYN_THR_REG	0x1160
#define YCLPF_CTL1_REG		0x1240
#define YCLPF_CTL2_REG		0x1241
#define YCLPF_THR_REG		0x1250
#define BLPF_CTL_REG		0x1270
#define BLPF_THR1_REG		0x1274
#define BLPF_THR2_REG		0x1275
#define LENS_CTRL_REG		0x1410
#define LENS_XCEN_REG		0x1420
#define LENS_YCEN_REG		0x1421
#define LENS_R_COMP_REG		0x1422
#define LENS_G_COMP_REG		0x1423
#define LENS_B_COMP_REG		0x1424
#define CMC_CTL_REG		0x1510
#define CMC_OFSGH_REG		0x1514
#define CMC_OFSGL_REG		0x1516
#define CMC_SIGN_REG		0x1517
#define CMC_COEF_REG(n)		(0x1530 + (n))
#define CMC_OFS_REG(n)		(0x1540 + (n))
#define GMA_CTL_REG		0x1610
#define GMA_COEF_REG(n)		(0x1630 + (n))
#define AE_CTL1_REG		0x2010
#define AE_CTL2_REG		0x2011
#define AE_FRM_CTL_REG		0x2020
#define AE_FINE_CTL_REG(n)	(0x2028 + (n))
#define EXP_TIMEH_REG		0x2083
#define EXP_TIMEM_REG		0x2084
#define EXP_TIMEL_REG		0x2085
#define EXP_MMINH_REG		0x2086
#define EXP_MMINL_REG		0x2087
#define EXP_MMAXH_REG		0x2088
#define EXP_MMAXM_REG		0x2089
#define EXP_MMAXL_REG		0x208A
#define AWB_CTL1_REG		0x2210
#define AWB_ENABLE		0x80
#define AWB_CTL2_REG		0x2211
#define MWB_ENABLE		0x01
#define AWB_RGAIN_REG		0x2280
#define AWB_GGAIN_REG		0x2281
#define AWB_BGAIN_REG		0x2282
#define AWB_RMAX_REG		0x2283
#define AWB_RMIN_REG		0x2284
#define AWB_BMAX_REG		0x2285
#define AWB_BMIN_REG		0x2286
#define AWB_RMAXB_REG		0x2287
#define AWB_RMINB_REG		0x2288
#define AWB_BMAXB_REG		0x2289
#define AWB_BMINB_REG		0x228A
#define MWB_RGAIN_REG		0x22B2
#define MWB_BGAIN_REG		0x22B3
#define REG_TERM		0xFFFF
#define EXPOS_MIN_MS		1
#define EXPOS_MAX_MS		125
struct sr030pc30_info ;
struct sr030pc30_format ;
struct sr030pc30_frmsize ;
struct i2c_regval ;
static const struct v4l2_queryctrl sr030pc30_ctrl[] = ;
static const struct sr030pc30_frmsize sr030pc30_sizes[] = ;
static const struct sr030pc30_format sr030pc30_formats[] = ;
static const struct i2c_regval sr030pc30_base_regs[] = ;
static inline struct sr030pc30_info *to_sr030pc30(struct v4l2_subdev *sd)
static inline int set_i2c_page(struct sr030pc30_info *info,
struct i2c_client *client, unsigned int reg)
static int cam_i2c_read(struct v4l2_subdev *sd, u32 reg_addr)
static int cam_i2c_write(struct v4l2_subdev *sd, u32 reg_addr, u32 val)
static inline int sr030pc30_bulk_write_reg(struct v4l2_subdev *sd,
const struct i2c_regval *msg)
static int sr030pc30_pwr_ctrl(struct v4l2_subdev *sd,
bool reset, bool sleep)
static inline int sr030pc30_enable_autoexposure(struct v4l2_subdev *sd, int on)
static int sr030pc30_set_exposure(struct v4l2_subdev *sd, int value)
static int sr030pc30_enable_autowhitebalance(struct v4l2_subdev *sd, int on)
static int sr030pc30_set_flip(struct v4l2_subdev *sd)
static int sr030pc30_set_params(struct v4l2_subdev *sd)
static int sr030pc30_try_frame_size(struct v4l2_mbus_framefmt *mf)
static int sr030pc30_queryctrl(struct v4l2_subdev *sd,
struct v4l2_queryctrl *qc)
static inline int sr030pc30_set_bluebalance(struct v4l2_subdev *sd, int value)
static inline int sr030pc30_set_redbalance(struct v4l2_subdev *sd, int value)
static int sr030pc30_s_ctrl(struct v4l2_subdev *sd,
struct v4l2_control *ctrl)
static int sr030pc30_g_ctrl(struct v4l2_subdev *sd,
struct v4l2_control *ctrl)
static int sr030pc30_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int sr030pc30_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static const struct sr030pc30_format *try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int sr030pc30_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int sr030pc30_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int sr030pc30_base_config(struct v4l2_subdev *sd)
static int sr030pc30_s_stream(struct v4l2_subdev *sd, int enable)
static int sr030pc30_s_power(struct v4l2_subdev *sd, int on)
static const struct v4l2_subdev_core_ops sr030pc30_core_ops = ;
static const struct v4l2_subdev_video_ops sr030pc30_video_ops = ;
static const struct v4l2_subdev_ops sr030pc30_ops = ;
static int sr030pc30_detect(struct i2c_client *client)
static int sr030pc30_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int sr030pc30_remove(struct i2c_client *client)
static const struct i2c_device_id sr030pc30_id[] = ;
MODULE_DEVICE_TABLE(i2c, sr030pc30_id);
static struct i2c_driver sr030pc30_i2c_driver = ;
static int __init sr030pc30_init(void)
static void __exit sr030pc30_exit(void)
module_init(sr030pc30_init);
module_exit(sr030pc30_exit);
MODULE_DESCRIPTION("Siliconfile SR030PC30 camera driver");
MODULE_AUTHOR("Sylwester Nawrocki <s.nawrocki@samsung.com>");
MODULE_LICENSE("GPL");
