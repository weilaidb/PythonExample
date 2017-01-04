#define STK_IIC_BASE		(0x0200)
#  define STK_IIC_OP		(STK_IIC_BASE)
#    define STK_IIC_OP_TX	(0x05)
#    define STK_IIC_OP_RX	(0x70)
#  define STK_IIC_STAT		(STK_IIC_BASE+1)
#    define STK_IIC_STAT_TX_OK	(0x04)
#    define STK_IIC_STAT_RX_OK	(0x01)
#  define STK_IIC_ENABLE	(STK_IIC_BASE+2)
#    define STK_IIC_ENABLE_NO	(0x00)
#    define STK_IIC_ENABLE_YES	(0x1e)
#  define STK_IIC_ADDR		(STK_IIC_BASE+3)
#  define STK_IIC_TX_INDEX	(STK_IIC_BASE+4)
#  define STK_IIC_TX_VALUE	(STK_IIC_BASE+5)
#  define STK_IIC_RX_INDEX	(STK_IIC_BASE+8)
#  define STK_IIC_RX_VALUE	(STK_IIC_BASE+9)
#define MAX_RETRIES		(50)
#define SENSOR_ADDRESS		(0x60)
#define REG_GAIN	0x00
#define REG_BLUE	0x01
#define REG_RED		0x02
#define REG_VREF	0x03
#define REG_COM1	0x04
#define  COM1_CCIR656	  0x40
#define  COM1_QFMT	  0x20
#define  COM1_SKIP_0	  0x00
#define  COM1_SKIP_2	  0x04
#define  COM1_SKIP_3	  0x08
#define REG_BAVE	0x05
#define REG_GbAVE	0x06
#define REG_AECHH	0x07
#define REG_RAVE	0x08
#define REG_COM2	0x09
#define  COM2_SSLEEP	  0x10
#define REG_PID		0x0a
#define REG_VER		0x0b
#define REG_COM3	0x0c
#define  COM3_SWAP	  0x40
#define  COM3_SCALEEN	  0x08
#define  COM3_DCWEN	  0x04
#define REG_COM4	0x0d
#define REG_COM5	0x0e
#define REG_COM6	0x0f
#define REG_AECH	0x10
#define REG_CLKRC	0x11
#define   CLK_PLL	  0x80
#define   CLK_EXT	  0x40
#define   CLK_SCALE	  0x3f
#define REG_COM7	0x12
#define   COM7_RESET	  0x80
#define   COM7_FMT_MASK	  0x38
#define   COM7_FMT_SXGA	  0x00
#define   COM7_FMT_VGA	  0x40
#define	  COM7_FMT_CIF	  0x20
#define   COM7_FMT_QVGA	  0x10
#define   COM7_FMT_QCIF	  0x08
#define	  COM7_RGB	  0x04
#define	  COM7_YUV	  0x00
#define	  COM7_BAYER	  0x01
#define	  COM7_PBAYER	  0x05
#define REG_COM8	0x13
#define   COM8_FASTAEC	  0x80
#define   COM8_AECSTEP	  0x40
#define   COM8_BFILT	  0x20
#define   COM8_AGC	  0x04
#define   COM8_AWB	  0x02
#define   COM8_AEC	  0x01
#define REG_COM9	0x14
#define REG_COM10	0x15
#define   COM10_HSYNC	  0x40
#define   COM10_PCLK_HB	  0x20
#define   COM10_HREF_REV  0x08
#define   COM10_VS_LEAD	  0x04
#define   COM10_VS_NEG	  0x02
#define   COM10_HS_NEG	  0x01
#define REG_HSTART	0x17
#define REG_HSTOP	0x18
#define REG_VSTART	0x19
#define REG_VSTOP	0x1a
#define REG_PSHFT	0x1b
#define REG_MIDH	0x1c
#define REG_MIDL	0x1d
#define REG_MVFP	0x1e
#define   MVFP_MIRROR	  0x20
#define   MVFP_FLIP	  0x10
#define REG_AEW		0x24
#define REG_AEB		0x25
#define REG_VPT		0x26
#define REG_ADVFL	0x2d
#define REG_ADVFH	0x2e
#define REG_HSYST	0x30
#define REG_HSYEN	0x31
#define REG_HREF	0x32
#define REG_TSLB	0x3a
#define   TSLB_YLAST	  0x04
#define   TSLB_BYTEORD	  0x08
#define REG_COM11	0x3b
#define   COM11_NIGHT	  0x80
#define   COM11_NMFR	  0x60
#define   COM11_HZAUTO	  0x10
#define	  COM11_50HZ	  0x08
#define   COM11_EXP	  0x02
#define REG_COM12	0x3c
#define   COM12_HREF	  0x80
#define REG_COM13	0x3d
#define   COM13_GAMMA	  0x80
#define	  COM13_UVSAT	  0x40
#define	  COM13_CMATRIX	  0x10
#define   COM13_UVSWAP	  0x01
#define REG_COM14	0x3e
#define   COM14_DCWEN	  0x10
#define REG_EDGE	0x3f
#define REG_COM15	0x40
#define   COM15_R10F0	  0x00
#define	  COM15_R01FE	  0x80
#define   COM15_R00FF	  0xc0
#define   COM15_RGB565	  0x10
#define   COM15_RGBFIXME	  0x20
#define   COM15_RGB555	  0x30
#define REG_COM16	0x41
#define   COM16_AWBGAIN   0x08
#define REG_COM17	0x42
#define   COM17_AECWIN	  0xc0
#define   COM17_CBAR	  0x08
#define	REG_CMATRIX_BASE 0x4f
#define   CMATRIX_LEN 6
#define REG_CMATRIX_SIGN 0x58
#define REG_BRIGHT	0x55
#define REG_CONTRAS	0x56
#define REG_GFIX	0x69
#define REG_RGB444	0x8c
#define   R444_ENABLE	  0x02
#define   R444_RGBX	  0x01
#define REG_HAECC1	0x9f
#define REG_HAECC2	0xa0
#define REG_BD50MAX	0xa5
#define REG_HAECC3	0xa6
#define REG_HAECC4	0xa7
#define REG_HAECC5	0xa8
#define REG_HAECC6	0xa9
#define REG_HAECC7	0xaa
#define REG_BD60MAX	0xab
static int stk_sensor_outb(struct stk_camera *dev, u8 reg, u8 val)
static int stk_sensor_inb(struct stk_camera *dev, u8 reg, u8 *val)
static int stk_sensor_write_regvals(struct stk_camera *dev,
struct regval *rv)
int stk_sensor_sleep(struct stk_camera *dev)
int stk_sensor_wakeup(struct stk_camera *dev)
static struct regval ov_initvals[] = ;
int stk_sensor_init(struct stk_camera *dev)
static struct regval ov_fmt_uyvy[] = ;
static struct regval ov_fmt_yuyv[] = ;
static struct regval ov_fmt_rgbr[] = ;
static struct regval ov_fmt_rgbp[] = ;
static struct regval ov_fmt_bayer[] = ;
static int stk_sensor_set_hw(struct stk_camera *dev,
int hstart, int hstop, int vstart, int vstop)
int stk_sensor_configure(struct stk_camera *dev)
int stk_sensor_set_brightness(struct stk_camera *dev, int br)
