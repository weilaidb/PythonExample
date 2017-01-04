#define TM_GET_DID(id) ((id) & 0xff)
#define TM_GET_PID(id) (((id) & 0xff00)>>8)
#define MDDI_CLIENT_CORE_BASE  0x108000
#define LCD_CONTROL_BLOCK_BASE 0x110000
#define SPI_BLOCK_BASE         0x120000
#define PWM_BLOCK_BASE         0x140000
#define SYSTEM_BLOCK1_BASE     0x160000
#define TTBUSSEL    (MDDI_CLIENT_CORE_BASE|0x18)
#define DPSET0      (MDDI_CLIENT_CORE_BASE|0x1C)
#define DPSET1      (MDDI_CLIENT_CORE_BASE|0x20)
#define DPSUS       (MDDI_CLIENT_CORE_BASE|0x24)
#define DPRUN       (MDDI_CLIENT_CORE_BASE|0x28)
#define SYSCKENA    (MDDI_CLIENT_CORE_BASE|0x2C)
#define BITMAP0     (MDDI_CLIENT_CORE_BASE|0x44)
#define BITMAP1     (MDDI_CLIENT_CORE_BASE|0x48)
#define BITMAP2     (MDDI_CLIENT_CORE_BASE|0x4C)
#define BITMAP3     (MDDI_CLIENT_CORE_BASE|0x50)
#define BITMAP4     (MDDI_CLIENT_CORE_BASE|0x54)
#define SRST        (LCD_CONTROL_BLOCK_BASE|0x00)
#define PORT_ENB    (LCD_CONTROL_BLOCK_BASE|0x04)
#define START       (LCD_CONTROL_BLOCK_BASE|0x08)
#define PORT        (LCD_CONTROL_BLOCK_BASE|0x0C)
#define INTFLG      (LCD_CONTROL_BLOCK_BASE|0x18)
#define INTMSK      (LCD_CONTROL_BLOCK_BASE|0x1C)
#define MPLFBUF     (LCD_CONTROL_BLOCK_BASE|0x20)
#define PXL         (LCD_CONTROL_BLOCK_BASE|0x30)
#define HCYCLE      (LCD_CONTROL_BLOCK_BASE|0x34)
#define HSW         (LCD_CONTROL_BLOCK_BASE|0x38)
#define HDE_START   (LCD_CONTROL_BLOCK_BASE|0x3C)
#define HDE_SIZE    (LCD_CONTROL_BLOCK_BASE|0x40)
#define VCYCLE      (LCD_CONTROL_BLOCK_BASE|0x44)
#define VSW         (LCD_CONTROL_BLOCK_BASE|0x48)
#define VDE_START   (LCD_CONTROL_BLOCK_BASE|0x4C)
#define VDE_SIZE    (LCD_CONTROL_BLOCK_BASE|0x50)
#define WAKEUP      (LCD_CONTROL_BLOCK_BASE|0x54)
#define REGENB      (LCD_CONTROL_BLOCK_BASE|0x5C)
#define VSYNIF      (LCD_CONTROL_BLOCK_BASE|0x60)
#define WRSTB       (LCD_CONTROL_BLOCK_BASE|0x64)
#define RDSTB       (LCD_CONTROL_BLOCK_BASE|0x68)
#define ASY_DATA    (LCD_CONTROL_BLOCK_BASE|0x6C)
#define ASY_DATB    (LCD_CONTROL_BLOCK_BASE|0x70)
#define ASY_DATC    (LCD_CONTROL_BLOCK_BASE|0x74)
#define ASY_DATD    (LCD_CONTROL_BLOCK_BASE|0x78)
#define ASY_DATE    (LCD_CONTROL_BLOCK_BASE|0x7C)
#define ASY_DATF    (LCD_CONTROL_BLOCK_BASE|0x80)
#define ASY_DATG    (LCD_CONTROL_BLOCK_BASE|0x84)
#define ASY_DATH    (LCD_CONTROL_BLOCK_BASE|0x88)
#define ASY_CMDSET  (LCD_CONTROL_BLOCK_BASE|0x8C)
#define MONI        (LCD_CONTROL_BLOCK_BASE|0xB0)
#define VPOS        (LCD_CONTROL_BLOCK_BASE|0xC0)
#define SSICTL      (SPI_BLOCK_BASE|0x00)
#define SSITIME     (SPI_BLOCK_BASE|0x04)
#define SSITX       (SPI_BLOCK_BASE|0x08)
#define SSIINTS     (SPI_BLOCK_BASE|0x14)
#define TIMER0LOAD    (PWM_BLOCK_BASE|0x00)
#define TIMER0CTRL    (PWM_BLOCK_BASE|0x08)
#define PWM0OFF       (PWM_BLOCK_BASE|0x1C)
#define TIMER1LOAD    (PWM_BLOCK_BASE|0x20)
#define TIMER1CTRL    (PWM_BLOCK_BASE|0x28)
#define PWM1OFF       (PWM_BLOCK_BASE|0x3C)
#define TIMER2LOAD    (PWM_BLOCK_BASE|0x40)
#define TIMER2CTRL    (PWM_BLOCK_BASE|0x48)
#define PWM2OFF       (PWM_BLOCK_BASE|0x5C)
#define PWMCR         (PWM_BLOCK_BASE|0x68)
#define GPIOIS      (GPIO_BLOCK_BASE|0x08)
#define GPIOIEV     (GPIO_BLOCK_BASE|0x10)
#define GPIOIC      (GPIO_BLOCK_BASE|0x20)
#define WKREQ       (SYSTEM_BLOCK1_BASE|0x00)
#define CLKENB      (SYSTEM_BLOCK1_BASE|0x04)
#define DRAMPWR     (SYSTEM_BLOCK1_BASE|0x08)
#define INTMASK     (SYSTEM_BLOCK1_BASE|0x0C)
#define CNT_DIS     (SYSTEM_BLOCK1_BASE|0x10)
typedef enum  mddi_toshiba_state_t;
static uint32 mddi_toshiba_curr_vpos;
static boolean mddi_toshiba_monitor_refresh_value = FALSE;
static boolean mddi_toshiba_report_refresh_measurements = FALSE;
boolean mddi_toshiba_61Hz_refresh = TRUE;
static uint32 mddi_toshiba_rows_per_second = 39526;
static uint32 mddi_toshiba_usecs_per_refresh = 16344;
static uint32 mddi_toshiba_rows_per_refresh = 646;
extern boolean mddi_vsync_detect_enabled;
static msm_fb_vsync_handler_type mddi_toshiba_vsync_handler;
static void *mddi_toshiba_vsync_handler_arg;
static uint16 mddi_toshiba_vsync_attempts;
static mddi_toshiba_state_t toshiba_state = TOSHIBA_STATE_OFF;
static struct msm_panel_common_pdata *mddi_toshiba_pdata;
static int mddi_toshiba_lcd_on(struct platform_device *pdev);
static int mddi_toshiba_lcd_off(struct platform_device *pdev);
static void mddi_toshiba_state_transition(mddi_toshiba_state_t a,
mddi_toshiba_state_t b)
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
#define GORDON_REG_EVPH2        0x67
#define GORDON_REG_EVPL2        0x68
#define GORDON_REG_EVNH2        0x69
#define GORDON_REG_EVNL2        0x6A
#define GORDON_REG_TBIAS2       0x6B
#define GORDON_REG_POWCTL       0x80
#define GORDON_REG_POWOSC1      0x81
#define GORDON_REG_POWOSC2      0x82
#define GORDON_REG_POWSET       0x83
#define GORDON_REG_POWTRM1      0x85
#define GORDON_REG_POWTRM2      0x86
#define GORDON_REG_POWTRM3      0x87
#define GORDON_REG_POWTRMSEL    0x88
#define GORDON_REG_POWHIZ       0x89
void serigo(uint16 reg, uint8 data)
void gordon_init(void)
void gordon_disp_on(void)
void gordon_disp_off(void)
void gordon_disp_init(void)
static void toshiba_common_initial_setup(struct msm_fb_data_type *mfd)
static void toshiba_prim_start(struct msm_fb_data_type *mfd)
static void toshiba_sec_start(struct msm_fb_data_type *mfd)
static void toshiba_prim_lcd_off(struct msm_fb_data_type *mfd)
static void toshiba_sec_lcd_off(struct msm_fb_data_type *mfd)
static void toshiba_sec_cont_update_start(struct msm_fb_data_type *mfd)
static void toshiba_sec_cont_update_stop(struct msm_fb_data_type *mfd)
static void toshiba_sec_backlight_on(struct msm_fb_data_type *mfd)
static void toshiba_sec_sleep_in(struct msm_fb_data_type *mfd)
static void toshiba_sec_sleep_out(struct msm_fb_data_type *mfd)
static void mddi_toshiba_lcd_set_backlight(struct msm_fb_data_type *mfd)
static void mddi_toshiba_vsync_set_handler(msm_fb_vsync_handler_type handler,
void *arg)
static void mddi_toshiba_lcd_vsync_detected(boolean detected)
static void mddi_toshiba_prim_init(struct msm_fb_data_type *mfd)
static void mddi_toshiba_sec_init(struct msm_fb_data_type *mfd)
static void mddi_toshiba_lcd_powerdown(struct msm_fb_data_type *mfd)
static int mddi_sharpgordon_firsttime = 1;
static int mddi_toshiba_lcd_on(struct platform_device *pdev)
static int mddi_toshiba_lcd_off(struct platform_device *pdev)
static int __init mddi_toshiba_lcd_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data toshiba_panel_data = ;
static int ch_used[3];
int mddi_toshiba_device_register(struct msm_panel_info *pinfo,
u32 channel, u32 panel)
static int __init mddi_toshiba_lcd_init(void)
module_init(mddi_toshiba_lcd_init);
