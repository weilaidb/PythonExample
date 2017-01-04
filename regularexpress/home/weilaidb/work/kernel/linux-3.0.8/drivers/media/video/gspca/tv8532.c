#define MODULE_NAME "tv8532"
MODULE_AUTHOR("Michel Xhaard <mxhaard@users.sourceforge.net>");
MODULE_DESCRIPTION("TV8532 USB Camera Driver");
MODULE_LICENSE("GPL");
struct sd ;
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val);
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val);
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val);
static const struct ctrl sd_ctrls[] = ;
static const struct v4l2_pix_format sif_mode[] = ;
#define R00_PART_CONTROL 0x00
#define		LATENT_CHANGE	0x80
#define		EXPO_CHANGE	0x04
#define R01_TIMING_CONTROL_LOW 0x01
#define		CMD_EEprom_Open 0x30
#define		CMD_EEprom_Close 0x29
#define R03_TABLE_ADDR 0x03
#define R04_WTRAM_DATA_L 0x04
#define R05_WTRAM_DATA_M 0x05
#define R06_WTRAM_DATA_H 0x06
#define R07_TABLE_LEN	0x07
#define R08_RAM_WRITE_ACTION 0x08
#define R0C_AD_WIDTHL	0x0c
#define R0D_AD_WIDTHH	0x0d
#define R0E_AD_HEIGHTL	0x0e
#define R0F_AD_HEIGHTH	0x0f
#define R10_AD_COL_BEGINL 0x10
#define R11_AD_COL_BEGINH 0x11
#define		MIRROR		0x04
#define R14_AD_ROW_BEGINL 0x14
#define R15_AD_ROWBEGINH  0x15
#define R1C_AD_EXPOSE_TIMEL 0x1c
#define R20_GAIN_G1L	0x20
#define R21_GAIN_G1H	0x21
#define R22_GAIN_RL	0x22
#define R23_GAIN_RH	0x23
#define R24_GAIN_BL	0x24
#define R25_GAIN_BH	0x25
#define R26_GAIN_G2L	0x26
#define R27_GAIN_G2H	0x27
#define R28_QUANT	0x28
#define R29_LINE	0x29
#define R2C_POLARITY	0x2c
#define R2D_POINT	0x2d
#define R2E_POINTH	0x2e
#define R2F_POINTB	0x2f
#define R30_POINTBH	0x30
#define R31_UPD		0x31
#define R2A_HIGH_BUDGET 0x2a
#define R2B_LOW_BUDGET	0x2b
#define R34_VID		0x34
#define R35_VIDH	0x35
#define R36_PID		0x36
#define R37_PIDH	0x37
#define R39_Test1	0x39
#define R3B_Test3	0x3b
#define R83_AD_IDH	0x83
#define R91_AD_SLOPEREG 0x91
#define R94_AD_BITCONTROL 0x94
static const u8 eeprom_data[][3] = ;
static void reg_w1(struct gspca_dev *gspca_dev,
__u16 index, __u8 value)
static void reg_w2(struct gspca_dev *gspca_dev,
u16 index, u16 value)
static void tv_8532WriteEEprom(struct gspca_dev *gspca_dev)
static int sd_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static void tv_8532_setReg(struct gspca_dev *gspca_dev)
static int sd_init(struct gspca_dev *gspca_dev)
static void setexposure(struct gspca_dev *gspca_dev)
static void setgain(struct gspca_dev *gspca_dev)
static int sd_start(struct gspca_dev *gspca_dev)
static void sd_stopN(struct gspca_dev *gspca_dev)
static void sd_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int sd_setexposure(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getexposure(struct gspca_dev *gspca_dev, __s32 *val)
static int sd_setgain(struct gspca_dev *gspca_dev, __s32 val)
static int sd_getgain(struct gspca_dev *gspca_dev, __s32 *val)
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
