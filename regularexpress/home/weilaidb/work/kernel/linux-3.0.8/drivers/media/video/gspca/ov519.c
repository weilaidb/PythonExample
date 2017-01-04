#define MODULE_NAME "ov519"
#define CONEX_CAM
MODULE_AUTHOR("Jean-Francois Moine <http:
MODULE_DESCRIPTION("OV519 USB Camera Driver");
MODULE_LICENSE("GPL");
static int frame_rate;
static int i2c_detect_tries = 10;
enum e_ctrl ;
struct sd ;
enum sensors ;
static void setbrightness(struct gspca_dev *gspca_dev);
static void setcontrast(struct gspca_dev *gspca_dev);
static void setexposure(struct gspca_dev *gspca_dev);
static void setcolors(struct gspca_dev *gspca_dev);
static void sethvflip(struct gspca_dev *gspca_dev);
static void setautobright(struct gspca_dev *gspca_dev);
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val);
static void setfreq(struct gspca_dev *gspca_dev);
static void setfreq_i(struct sd *sd);
static const struct ctrl sd_ctrls[] = ;
static const unsigned ctrl_dis[] = ;
static const struct v4l2_pix_format ov519_vga_mode[] = ;
static const struct v4l2_pix_format ov519_sif_mode[] = ;
static const struct v4l2_pix_format ov518_vga_mode[] = ;
static const struct v4l2_pix_format ov518_sif_mode[] = ;
static const struct v4l2_pix_format ov511_vga_mode[] = ;
static const struct v4l2_pix_format ov511_sif_mode[] = ;
static const struct v4l2_pix_format ovfx2_vga_mode[] = ;
static const struct v4l2_pix_format ovfx2_cif_mode[] = ;
static const struct v4l2_pix_format ovfx2_ov2610_mode[] = ;
static const struct v4l2_pix_format ovfx2_ov3610_mode[] = ;
#define R51x_FIFO_PSIZE			0x30
#define R51x_SYS_RESET			0x50
#define	OV511_RESET_OMNICE	0x08
#define R51x_SYS_INIT			0x53
#define R51x_SYS_SNAP			0x52
#define R51x_SYS_CUST_ID		0x5f
#define R51x_COMP_LUT_BEGIN		0x80
#define R511_CAM_DELAY			0x10
#define R511_CAM_EDGE			0x11
#define R511_CAM_PXCNT			0x12
#define R511_CAM_LNCNT			0x13
#define R511_CAM_PXDIV			0x14
#define R511_CAM_LNDIV			0x15
#define R511_CAM_UV_EN			0x16
#define R511_CAM_LINE_MODE		0x17
#define R511_CAM_OPTS			0x18
#define R511_SNAP_FRAME			0x19
#define R511_SNAP_PXCNT			0x1a
#define R511_SNAP_LNCNT			0x1b
#define R511_SNAP_PXDIV			0x1c
#define R511_SNAP_LNDIV			0x1d
#define R511_SNAP_UV_EN			0x1e
#define R511_SNAP_OPTS			0x1f
#define R511_DRAM_FLOW_CTL		0x20
#define R511_FIFO_OPTS			0x31
#define R511_I2C_CTL			0x40
#define R511_SYS_LED_CTL		0x55
#define R511_COMP_EN			0x78
#define R511_COMP_LUT_EN		0x79
#define R518_GPIO_OUT			0x56
#define R518_GPIO_CTL			0x57
#define OV519_R10_H_SIZE		0x10
#define OV519_R11_V_SIZE		0x11
#define OV519_R12_X_OFFSETL		0x12
#define OV519_R13_X_OFFSETH		0x13
#define OV519_R14_Y_OFFSETL		0x14
#define OV519_R15_Y_OFFSETH		0x15
#define OV519_R16_DIVIDER		0x16
#define OV519_R20_DFR			0x20
#define OV519_R25_FORMAT		0x25
#define OV519_R51_RESET1		0x51
#define OV519_R54_EN_CLK1		0x54
#define OV519_R57_SNAPSHOT		0x57
#define OV519_GPIO_DATA_OUT0		0x71
#define OV519_GPIO_IO_CTRL0		0x72
#define OVFX2_BULK_SIZE (13 * 4096)
#define R51x_I2C_W_SID		0x41
#define R51x_I2C_SADDR_3	0x42
#define R51x_I2C_SADDR_2	0x43
#define R51x_I2C_R_SID		0x44
#define R51x_I2C_DATA		0x45
#define R518_I2C_CTL		0x47
#define OVFX2_I2C_ADDR		0x00
#define OV7xx0_SID   0x42
#define OV_HIRES_SID 0x60
#define OV8xx0_SID   0xa0
#define OV6xx0_SID   0xc0
#define OV7610_REG_GAIN		0x00
#define OV7610_REG_BLUE		0x01
#define OV7610_REG_RED		0x02
#define OV7610_REG_SAT		0x03
#define OV8610_REG_HUE		0x04
#define OV7610_REG_CNT		0x05
#define OV7610_REG_BRT		0x06
#define OV7610_REG_COM_C	0x14
#define OV7610_REG_ID_HIGH	0x1c
#define OV7610_REG_ID_LOW	0x1d
#define OV7610_REG_COM_I	0x29
#define OV7670_R00_GAIN		0x00
#define OV7670_R01_BLUE		0x01
#define OV7670_R02_RED		0x02
#define OV7670_R03_VREF		0x03
#define OV7670_R04_COM1		0x04
#define OV7670_R0C_COM3		0x0c
#define OV7670_R0D_COM4		0x0d
#define OV7670_R0E_COM5		0x0e
#define OV7670_R0F_COM6		0x0f
#define OV7670_R10_AECH		0x10
#define OV7670_R11_CLKRC	0x11
#define OV7670_R12_COM7		0x12
#define   OV7670_COM7_FMT_VGA	 0x00
#define   OV7670_COM7_FMT_QVGA	 0x10
#define   OV7670_COM7_FMT_MASK	 0x38
#define   OV7670_COM7_RESET	 0x80
#define OV7670_R13_COM8		0x13
#define   OV7670_COM8_AEC	 0x01
#define   OV7670_COM8_AWB	 0x02
#define   OV7670_COM8_AGC	 0x04
#define   OV7670_COM8_BFILT	 0x20
#define   OV7670_COM8_AECSTEP	 0x40
#define   OV7670_COM8_FASTAEC	 0x80
#define OV7670_R14_COM9		0x14
#define OV7670_R15_COM10	0x15
#define OV7670_R17_HSTART	0x17
#define OV7670_R18_HSTOP	0x18
#define OV7670_R19_VSTART	0x19
#define OV7670_R1A_VSTOP	0x1a
#define OV7670_R1E_MVFP		0x1e
#define   OV7670_MVFP_VFLIP	 0x10
#define   OV7670_MVFP_MIRROR	 0x20
#define OV7670_R24_AEW		0x24
#define OV7670_R25_AEB		0x25
#define OV7670_R26_VPT		0x26
#define OV7670_R32_HREF		0x32
#define OV7670_R3A_TSLB		0x3a
#define OV7670_R3B_COM11	0x3b
#define   OV7670_COM11_EXP	 0x02
#define   OV7670_COM11_HZAUTO	 0x10
#define OV7670_R3C_COM12	0x3c
#define OV7670_R3D_COM13	0x3d
#define   OV7670_COM13_GAMMA	 0x80
#define   OV7670_COM13_UVSAT	 0x40
#define OV7670_R3E_COM14	0x3e
#define OV7670_R3F_EDGE		0x3f
#define OV7670_R40_COM15	0x40
#define OV7670_R41_COM16	0x41
#define   OV7670_COM16_AWBGAIN	 0x08
#define OV7670_R55_BRIGHT	0x55
#define OV7670_R56_CONTRAS	0x56
#define OV7670_R69_GFIX		0x69
#define OV7670_R9F_HAECC1	0x9f
#define OV7670_RA0_HAECC2	0xa0
#define OV7670_RA5_BD50MAX	0xa5
#define OV7670_RA6_HAECC3	0xa6
#define OV7670_RA7_HAECC4	0xa7
#define OV7670_RA8_HAECC5	0xa8
#define OV7670_RA9_HAECC6	0xa9
#define OV7670_RAA_HAECC7	0xaa
#define OV7670_RAB_BD60MAX	0xab
struct ov_regvals ;
struct ov_i2c_regvals ;
static const struct ov_i2c_regvals norm_2610[] = ;
static const struct ov_i2c_regvals norm_2610ae[] = ;
static const struct ov_i2c_regvals norm_3620b[] = ;
static const struct ov_i2c_regvals norm_6x20[] = ;
static const struct ov_i2c_regvals norm_6x30[] = ;
static const struct ov_i2c_regvals norm_7610[] = ;
static const struct ov_i2c_regvals norm_7620[] = ;
static const struct ov_i2c_regvals norm_7640[] = ;
static const struct ov_regvals init_519_ov7660[] = ;
static const struct ov_i2c_regvals norm_7660[] = ;
static const struct ov_i2c_regvals norm_7670[] = ;
static const struct ov_i2c_regvals norm_8610[] = ;
static unsigned char ov7670_abs_to_sm(unsigned char v)
static void reg_w(struct sd *sd, u16 index, u16 value)
static int reg_r(struct sd *sd, u16 index)
static int reg_r8(struct sd *sd,
u16 index)
static void reg_w_mask(struct sd *sd,
u16 index,
u8 value,
u8 mask)
static void ov518_reg_w32(struct sd *sd, u16 index, u32 value, int n)
static void ov511_i2c_w(struct sd *sd, u8 reg, u8 value)
static int ov511_i2c_r(struct sd *sd, u8 reg)
static void ov518_i2c_w(struct sd *sd,
u8 reg,
u8 value)
static int ov518_i2c_r(struct sd *sd, u8 reg)
static void ovfx2_i2c_w(struct sd *sd, u8 reg, u8 value)
static int ovfx2_i2c_r(struct sd *sd, u8 reg)
static void i2c_w(struct sd *sd, u8 reg, u8 value)
static int i2c_r(struct sd *sd, u8 reg)
static void i2c_w_mask(struct sd *sd,
u8 reg,
u8 value,
u8 mask)
static inline void ov51x_stop(struct sd *sd)
static inline void ov51x_restart(struct sd *sd)
static void ov51x_set_slave_ids(struct sd *sd, u8 slave);
static int init_ov_sensor(struct sd *sd, u8 slave)
static void ov51x_set_slave_ids(struct sd *sd,
u8 slave)
static void write_regvals(struct sd *sd,
const struct ov_regvals *regvals,
int n)
static void write_i2c_regvals(struct sd *sd,
const struct ov_i2c_regvals *regvals,
int n)
static void ov_hires_configure(struct sd *sd)
static void ov8xx0_configure(struct sd *sd)
static void ov7xx0_configure(struct sd *sd)
static void ov6xx0_configure(struct sd *sd)
static void ov51x_led_control(struct sd *sd, int on)
static void sd_reset_snapshot(struct gspca_dev *gspca_dev)
static void ov51x_upload_quan_tables(struct sd *sd)
static void ov511_configure(struct gspca_dev *gspca_dev)
static void ov518_configure(struct gspca_dev *gspca_dev)
static void ov519_configure(struct sd *sd)
static void ovfx2_configure(struct sd *sd)
static void ov519_set_mode(struct sd *sd)
static void ov519_set_fr(struct sd *sd)
static void setautogain(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int sd_init(struct gspca_dev *gspca_dev)
static int sd_isoc_init(struct gspca_dev *gspca_dev)
static void ov511_mode_init_regs(struct sd *sd)
static void ov518_mode_init_regs(struct sd *sd)
static void ov519_mode_init_regs(struct sd *sd)
static void mode_init_ov_sensor_regs(struct sd *sd)
static void sethvflip(struct gspca_dev *gspca_dev)
static void set_ov_sensor_window(struct sd *sd)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_stop0(struct gspca_dev *gspca_dev)
static void ov51x_handle_button(struct gspca_dev *gspca_dev, u8 state)
static void ov511_pkt_scan(struct gspca_dev *gspca_dev,
u8 *in,
int len)
static void ov518_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void ov519_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void ovfx2_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static void setbrightness(struct gspca_dev *gspca_dev)
static void setcontrast(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setcolors(struct gspca_dev *gspca_dev)
static void setautobright(struct gspca_dev *gspca_dev)
static int sd_setautogain(struct gspca_dev *gspca_dev, __s32 val)
static void setfreq_i(struct sd *sd)
static void setfreq(struct gspca_dev *gspca_dev)
static int sd_querymenu(struct gspca_dev *gspca_dev,
struct v4l2_querymenu *menu)
static int sd_get_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static int sd_set_jcomp(struct gspca_dev *gspca_dev,
struct v4l2_jpegcompression *jcomp)
static const struct sd_desc sd_desc = ;
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
module_param(frame_rate, int, 0644);
MODULE_PARM_DESC(frame_rate, "Frame rate (5, 10, 15, 20 or 30 fps)");
