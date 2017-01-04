#define GORDON_REG_NOP          0x00
#define GORDON_REG_IMGCTL1      0x10
#define GORDON_REG_IMGCTL2      0x11
#define GORDON_REG_IMGSET1      0x12
#define GORDON_REG_IMGSET2      0x13
#define GORDON_REG_IVBP1        0x14
#define GORDON_REG_IHBP1        0x15
#define GORDON_REG_IVNUM1       0x16
#define GORDON_REG_IHNUM1       0x17
#define GORDON_REG_IVBP2        0x18
#define GORDON_REG_IHBP2        0x19
#define GORDON_REG_IVNUM2       0x1A
#define GORDON_REG_IHNUM2       0x1B
#define GORDON_REG_LCDIFCTL1    0x30
#define GORDON_REG_VALTRAN      0x31
#define GORDON_REG_AVCTL        0x33
#define GORDON_REG_LCDIFCTL2    0x34
#define GORDON_REG_LCDIFCTL3    0x35
#define GORDON_REG_LCDIFSET1    0x36
#define GORDON_REG_PCCTL        0x3C
#define GORDON_REG_TPARAM1      0x40
#define GORDON_REG_TLCDIF1      0x41
#define GORDON_REG_TSSPB_ST1    0x42
#define GORDON_REG_TSSPB_ED1    0x43
#define GORDON_REG_TSCK_ST1     0x44
#define GORDON_REG_TSCK_WD1     0x45
#define GORDON_REG_TGSPB_VST1   0x46
#define GORDON_REG_TGSPB_VED1   0x47
#define GORDON_REG_TGSPB_CH1    0x48
#define GORDON_REG_TGCK_ST1     0x49
#define GORDON_REG_TGCK_ED1     0x4A
#define GORDON_REG_TPCTL_ST1    0x4B
#define GORDON_REG_TPCTL_ED1    0x4C
#define GORDON_REG_TPCHG_ED1    0x4D
#define GORDON_REG_TCOM_CH1     0x4E
#define GORDON_REG_THBP1        0x4F
#define GORDON_REG_TPHCTL1      0x50
#define GORDON_REG_EVPH1        0x51
#define GORDON_REG_EVPL1        0x52
#define GORDON_REG_EVNH1        0x53
#define GORDON_REG_EVNL1        0x54
#define GORDON_REG_TBIAS1       0x55
#define GORDON_REG_TPARAM2      0x56
#define GORDON_REG_TLCDIF2      0x57
#define GORDON_REG_TSSPB_ST2    0x58
#define GORDON_REG_TSSPB_ED2    0x59
#define GORDON_REG_TSCK_ST2     0x5A
#define GORDON_REG_TSCK_WD2     0x5B
#define GORDON_REG_TGSPB_VST2   0x5C
#define GORDON_REG_TGSPB_VED2   0x5D
#define GORDON_REG_TGSPB_CH2    0x5E
#define GORDON_REG_TGCK_ST2     0x5F
#define GORDON_REG_TGCK_ED2     0x60
#define GORDON_REG_TPCTL_ST2    0x61
#define GORDON_REG_TPCTL_ED2    0x62
#define GORDON_REG_TPCHG_ED2    0x63
#define GORDON_REG_TCOM_CH2     0x64
#define GORDON_REG_THBP2        0x65
#define GORDON_REG_TPHCTL2      0x66
#define GORDON_REG_POWCTL       0x80
static int lcdc_gordon_panel_off(struct platform_device *pdev);
static int spi_cs;
static int spi_sclk;
static int spi_sdo;
static int spi_sdi;
static int spi_dac;
static unsigned char bit_shift[8] = ;
struct gordon_state_type;
static struct gordon_state_type gordon_state = ;
static struct msm_panel_common_pdata *lcdc_gordon_pdata;
static void serigo(uint16 reg, uint8 data)
static void spi_init(void)
static void gordon_disp_powerup(void)
static void gordon_init(void)
static void gordon_disp_on(void)
static int lcdc_gordon_panel_on(struct platform_device *pdev)
static int lcdc_gordon_panel_off(struct platform_device *pdev)
static void lcdc_gordon_set_backlight(struct msm_fb_data_type *mfd)
static int __init gordon_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data gordon_panel_data = ;
static struct platform_device this_device = ;
static int __init lcdc_gordon_panel_init(void)
module_init(lcdc_gordon_panel_init);
