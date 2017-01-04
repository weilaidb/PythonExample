#define SHARP_QVGA_PRIM 1
#define SHARP_128X128_SECD 2
extern uint32 mddi_host_core_version;
static boolean mddi_debug_prim_wait = FALSE;
static boolean mddi_sharp_vsync_wake = TRUE;
static boolean mddi_sharp_monitor_refresh_value = TRUE;
static boolean mddi_sharp_report_refresh_measurements = FALSE;
static uint32 mddi_sharp_rows_per_second = 13830;
static uint32 mddi_sharp_rows_per_refresh = 338;
static uint32 mddi_sharp_usecs_per_refresh = 24440;
static boolean mddi_sharp_debug_60hz_refresh = FALSE;
extern mddi_gpio_info_type mddi_gpio;
extern boolean mddi_vsync_detect_enabled;
static msm_fb_vsync_handler_type mddi_sharp_vsync_handler;
static void *mddi_sharp_vsync_handler_arg;
static uint16 mddi_sharp_vsync_attempts;
static void mddi_sharp_prim_lcd_init(void);
static void mddi_sharp_sub_lcd_init(void);
static void mddi_sharp_lcd_set_backlight(struct msm_fb_data_type *mfd);
static void mddi_sharp_vsync_set_handler(msm_fb_vsync_handler_type handler,
void *);
static void mddi_sharp_lcd_vsync_detected(boolean detected);
static struct msm_panel_common_pdata *mddi_sharp_pdata;
#define REG_SYSCTL    0x0000
#define REG_INTR    0x0006
#define REG_CLKCNF    0x000C
#define REG_CLKDIV1    0x000E
#define REG_CLKDIV2    0x0010
#define REG_GIOD    0x0040
#define REG_GIOA    0x0042
#define REG_AGM      0x010A
#define REG_FLFT    0x0110
#define REG_FRGT    0x0112
#define REG_FTOP    0x0114
#define REG_FBTM    0x0116
#define REG_FSTRX    0x0118
#define REG_FSTRY    0x011A
#define REG_VRAM    0x0202
#define REG_SSDCTL    0x0330
#define REG_SSD0    0x0332
#define REG_PSTCTL1    0x0400
#define REG_PSTCTL2    0x0402
#define REG_PTGCTL    0x042A
#define REG_PTHP    0x042C
#define REG_PTHB    0x042E
#define REG_PTHW    0x0430
#define REG_PTHF    0x0432
#define REG_PTVP    0x0434
#define REG_PTVB    0x0436
#define REG_PTVW    0x0438
#define REG_PTVF    0x043A
#define REG_VBLKS    0x0458
#define REG_VBLKE    0x045A
#define REG_SUBCTL    0x0700
#define REG_SUBTCMD    0x0702
#define REG_SUBTCMDD  0x0704
#define REG_REVBYTE    0x0A02
#define REG_REVCNT    0x0A04
#define REG_REVATTR    0x0A06
#define REG_REVFMT    0x0A08
#define SHARP_SUB_UNKNOWN 0xffffffff
#define SHARP_SUB_HYNIX 1
#define SHARP_SUB_ROHM  2
static uint32 sharp_subpanel_type = SHARP_SUB_UNKNOWN;
static void sub_through_write(int sub_rs, uint32 sub_data)
static uint32 sub_through_read(int sub_rs)
static void serigo(uint32 ssd)
static void mddi_sharp_lcd_powerdown(void)
static void mddi_sharp_lcd_set_backlight(struct msm_fb_data_type *mfd)
static void mddi_sharp_prim_lcd_init(void)
void mddi_sharp_sub_lcd_init(void)
void mddi_sharp_lcd_vsync_detected(boolean detected)
void mddi_sharp_vsync_set_handler(msm_fb_vsync_handler_type handler, void *arg)
static int mddi_sharp_lcd_on(struct platform_device *pdev)
static int mddi_sharp_lcd_off(struct platform_device *pdev)
static int __init mddi_sharp_probe(struct platform_device *pdev)
static struct platform_driver this_driver = ;
static struct msm_fb_panel_data mddi_sharp_panel_data0 = ;
static struct platform_device this_device_0 = ;
static struct msm_fb_panel_data mddi_sharp_panel_data1 = ;
static struct platform_device this_device_1 = ;
static int __init mddi_sharp_init(void)
module_init(mddi_sharp_init);
