#define DRIVER_NAME "saa7706h"
#define SAA7706H_REG_CTRL		0x0fff
#define SAA7706H_CTRL_BYP_PLL		0x0001
#define SAA7706H_CTRL_PLL_DIV_MASK	0x003e
#define SAA7706H_CTRL_PLL3_62975MHZ	0x003e
#define SAA7706H_CTRL_DSP_TURBO		0x0040
#define SAA7706H_CTRL_PC_RESET_DSP1	0x0080
#define SAA7706H_CTRL_PC_RESET_DSP2	0x0100
#define SAA7706H_CTRL_DSP1_ROM_EN_MASK	0x0600
#define SAA7706H_CTRL_DSP1_FUNC_PROM	0x0000
#define SAA7706H_CTRL_DSP2_ROM_EN_MASK	0x1800
#define SAA7706H_CTRL_DSP2_FUNC_PROM	0x0000
#define SAA7706H_CTRL_DIG_SIL_INTERPOL	0x8000
#define SAA7706H_REG_EVALUATION			0x1ff0
#define SAA7706H_EVAL_DISABLE_CHARGE_PUMP	0x000001
#define SAA7706H_EVAL_DCS_CLOCK			0x000002
#define SAA7706H_EVAL_GNDRC1_ENABLE		0x000004
#define SAA7706H_EVAL_GNDRC2_ENABLE		0x000008
#define SAA7706H_REG_CL_GEN1			0x1ff3
#define SAA7706H_CL_GEN1_MIN_LOOPGAIN_MASK	0x00000f
#define SAA7706H_CL_GEN1_LOOPGAIN_MASK		0x0000f0
#define SAA7706H_CL_GEN1_COARSE_RATION		0xffff00
#define SAA7706H_REG_CL_GEN2			0x1ff4
#define SAA7706H_CL_GEN2_WSEDGE_FALLING		0x000001
#define SAA7706H_CL_GEN2_STOP_VCO		0x000002
#define SAA7706H_CL_GEN2_FRERUN			0x000004
#define SAA7706H_CL_GEN2_ADAPTIVE		0x000008
#define SAA7706H_CL_GEN2_FINE_RATIO_MASK	0x0ffff0
#define SAA7706H_REG_CL_GEN4		0x1ff6
#define SAA7706H_CL_GEN4_BYPASS_PLL1	0x001000
#define SAA7706H_CL_GEN4_PLL1_DIV_MASK	0x03e000
#define SAA7706H_CL_GEN4_DSP1_TURBO	0x040000
#define SAA7706H_REG_SEL	0x1ff7
#define SAA7706H_SEL_DSP2_SRCA_MASK	0x000007
#define SAA7706H_SEL_DSP2_FMTA_MASK	0x000031
#define SAA7706H_SEL_DSP2_SRCB_MASK	0x0001c0
#define SAA7706H_SEL_DSP2_FMTB_MASK	0x000e00
#define SAA7706H_SEL_DSP1_SRC_MASK	0x003000
#define SAA7706H_SEL_DSP1_FMT_MASK	0x01c003
#define SAA7706H_SEL_SPDIF2		0x020000
#define SAA7706H_SEL_HOST_IO_FMT_MASK	0x1c0000
#define SAA7706H_SEL_EN_HOST_IO		0x200000
#define SAA7706H_REG_IAC		0x1ff8
#define SAA7706H_REG_CLK_SET		0x1ff9
#define SAA7706H_REG_CLK_COEFF		0x1ffa
#define SAA7706H_REG_INPUT_SENS		0x1ffb
#define SAA7706H_INPUT_SENS_RDS_VOL_MASK	0x0003f
#define SAA7706H_INPUT_SENS_FM_VOL_MASK		0x00fc0
#define SAA7706H_INPUT_SENS_FM_MPX		0x01000
#define SAA7706H_INPUT_SENS_OFF_FILTER_A_EN	0x02000
#define SAA7706H_INPUT_SENS_OFF_FILTER_B_EN	0x04000
#define SAA7706H_REG_PHONE_NAV_AUDIO	0x1ffc
#define SAA7706H_REG_IO_CONF_DSP2	0x1ffd
#define SAA7706H_REG_STATUS_DSP2	0x1ffe
#define SAA7706H_REG_PC_DSP2		0x1fff
#define SAA7706H_DSP1_MOD0	0x0800
#define SAA7706H_DSP1_ROM_VER	0x097f
#define SAA7706H_DSP2_MPTR0	0x1000
#define SAA7706H_DSP1_MODPNTR	0x0000
#define SAA7706H_DSP2_XMEM_CONTLLCW	0x113e
#define SAA7706H_DSP2_XMEM_BUSAMP	0x114a
#define SAA7706H_DSP2_XMEM_FDACPNTR	0x11f9
#define SAA7706H_DSP2_XMEM_IIS1PNTR	0x11fb
#define SAA7706H_DSP2_YMEM_PVGA		0x212a
#define SAA7706H_DSP2_YMEM_PVAT1	0x212b
#define SAA7706H_DSP2_YMEM_PVAT		0x212c
#define SAA7706H_DSP2_YMEM_ROM_VER	0x21ff
#define SUPPORTED_DSP1_ROM_VER		0x667
struct saa7706h_state ;
static inline struct saa7706h_state *to_state(struct v4l2_subdev *sd)
static int saa7706h_i2c_send(struct i2c_client *client, const u8 *data, int len)
static int saa7706h_i2c_transfer(struct i2c_client *client,
struct i2c_msg *msgs, int num)
static int saa7706h_set_reg24(struct v4l2_subdev *sd, u16 reg, u32 val)
static int saa7706h_set_reg24_err(struct v4l2_subdev *sd, u16 reg, u32 val,
int *err)
static int saa7706h_set_reg16(struct v4l2_subdev *sd, u16 reg, u16 val)
static int saa7706h_set_reg16_err(struct v4l2_subdev *sd, u16 reg, u16 val,
int *err)
static int saa7706h_get_reg16(struct v4l2_subdev *sd, u16 reg)
static int saa7706h_unmute(struct v4l2_subdev *sd)
static int saa7706h_mute(struct v4l2_subdev *sd)
static int saa7706h_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *qc)
static int saa7706h_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int saa7706h_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int saa7706h_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops saa7706h_core_ops = ;
static const struct v4l2_subdev_ops saa7706h_ops = ;
static int __devinit saa7706h_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit saa7706h_remove(struct i2c_client *client)
static const struct i2c_device_id saa7706h_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa7706h_id);
static struct i2c_driver saa7706h_driver = ;
static __init int saa7706h_init(void)
static __exit void saa7706h_exit(void)
module_init(saa7706h_init);
module_exit(saa7706h_exit);
MODULE_DESCRIPTION("SAA7706H Car Radio DSP driver");
MODULE_AUTHOR("Mocean Laboratories");
MODULE_LICENSE("GPL v2");
