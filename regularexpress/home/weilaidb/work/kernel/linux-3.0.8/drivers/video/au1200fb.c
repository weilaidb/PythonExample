#define CONFIG_FB_AU1200_DEVS 4
#define DRIVER_NAME "au1200fb"
#define DRIVER_DESC "LCD controller driver for AU1200 processors"
#define DEBUG 1
#define print_err(f, arg...) printk(KERN_ERR DRIVER_NAME ": " f "\n", ## arg)
#define print_warn(f, arg...) printk(KERN_WARNING DRIVER_NAME ": " f "\n", ## arg)
#define print_info(f, arg...) printk(KERN_INFO DRIVER_NAME ": " f "\n", ## arg)
#if DEBUG
#define print_dbg(f, arg...) printk(KERN_DEBUG __FILE__ ": " f "\n", ## arg)
#define print_dbg(f, arg...) do  while (0)
#define AU1200_LCD_FB_IOCTL 0x46FF
#define AU1200_LCD_SET_SCREEN 1
#define AU1200_LCD_GET_SCREEN 2
#define AU1200_LCD_SET_WINDOW 3
#define AU1200_LCD_GET_WINDOW 4
#define AU1200_LCD_SET_PANEL  5
#define AU1200_LCD_GET_PANEL  6
#define SCREEN_SIZE		    (1<< 1)
#define SCREEN_BACKCOLOR    (1<< 2)
#define SCREEN_BRIGHTNESS   (1<< 3)
#define SCREEN_COLORKEY     (1<< 4)
#define SCREEN_MASK         (1<< 5)
struct au1200_lcd_global_regs_t ;
#define WIN_POSITION            (1<< 0)
#define WIN_ALPHA_COLOR         (1<< 1)
#define WIN_ALPHA_MODE          (1<< 2)
#define WIN_PRIORITY            (1<< 3)
#define WIN_CHANNEL             (1<< 4)
#define WIN_BUFFER_FORMAT       (1<< 5)
#define WIN_COLOR_ORDER         (1<< 6)
#define WIN_PIXEL_ORDER         (1<< 7)
#define WIN_SIZE                (1<< 8)
#define WIN_COLORKEY_MODE       (1<< 9)
#define WIN_DOUBLE_BUFFER_MODE  (1<< 10)
#define WIN_RAM_ARRAY_MODE      (1<< 11)
#define WIN_BUFFER_SCALE        (1<< 12)
#define WIN_ENABLE	            (1<< 13)
struct au1200_lcd_window_regs_t ;
struct au1200_lcd_iodata_t ;
#if defined(__BIG_ENDIAN)
#define LCD_CONTROL_DEFAULT_PO LCD_CONTROL_PO_11
#define LCD_CONTROL_DEFAULT_PO LCD_CONTROL_PO_00
#define LCD_CONTROL_DEFAULT_SBPPF LCD_CONTROL_SBPPF_565
struct au1200fb_device ;
static struct au1200fb_device _au1200fb_devices[CONFIG_FB_AU1200_DEVS];
#define AU1200_LCD_MAX_XRES	1280
#define AU1200_LCD_MAX_YRES	1024
#define AU1200_LCD_MAX_BPP	32
#define AU1200_LCD_MAX_CLK	96000000
#define AU1200_LCD_NBR_PALETTE_ENTRIES 256
#define AU1200FB_NBR_VIDEO_BUFFERS 1
static struct au1200_lcd *lcd = (struct au1200_lcd *) AU1200_LCD_ADDR;
static int window_index = 2;
static int panel_index = 2;
static struct window_settings *win;
static struct panel_settings *panel;
static int noblanking = 1;
static int nohwcursor = 0;
struct window_settings ;
#if defined(__BIG_ENDIAN)
#define LCD_WINCTRL1_PO_16BPP LCD_WINCTRL1_PO_00
#define LCD_WINCTRL1_PO_16BPP LCD_WINCTRL1_PO_01
extern int board_au1200fb_panel_init (void);
extern int board_au1200fb_panel_shutdown (void);
int au1200fb_pm_callback(au1xxx_power_dev_t *dev,
au1xxx_request_t request, void *data);
au1xxx_power_dev_t *LCD_pm_dev;
static struct window_settings windows[] = ;
struct panel_settings
;
static struct panel_settings known_lcd_panels[] =
;
#define NUM_PANELS (ARRAY_SIZE(known_lcd_panels))
static int set_brightness(unsigned int brightness)
static int winbpp (unsigned int winctrl1)
static int fbinfo2index (struct fb_info *fb_info)
static int au1200_setlocation (struct au1200fb_device *fbdev, int plane,
int xpos, int ypos)
static void au1200_setpanel (struct panel_settings *newpanel)
static void au1200_setmode(struct au1200fb_device *fbdev)
#define panel_is_color(panel) ((panel->mode_screen & LCD_SCREEN_PT) <= LCD_SCREEN_PT_CDSTN)
static struct fb_bitfield rgb_bitfields[][4] = ;
static void au1200fb_update_fbinfo(struct fb_info *fbi)
static int au1200fb_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static int au1200fb_fb_set_par(struct fb_info *fbi)
static int au1200fb_fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *fbi)
static int au1200fb_fb_blank(int blank_mode, struct fb_info *fbi)
static int au1200fb_fb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static void set_global(u_int cmd, struct au1200_lcd_global_regs_t *pdata)
static void get_global(u_int cmd, struct au1200_lcd_global_regs_t *pdata)
static void set_window(unsigned int plane,
struct au1200_lcd_window_regs_t *pdata)
static void get_window(unsigned int plane,
struct au1200_lcd_window_regs_t *pdata)
static int au1200fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static struct fb_ops au1200fb_fb_ops = ;
static irqreturn_t au1200fb_handle_irq(int irq, void* dev_id)
static int au1200fb_init_fbinfo(struct au1200fb_device *fbdev)
static int au1200fb_drv_probe(struct platform_device *dev)
static int au1200fb_drv_remove(struct platform_device *dev)
static int au1200fb_drv_suspend(struct platform_device *dev, u32 state)
static int au1200fb_drv_resume(struct platform_device *dev)
static struct platform_driver au1200fb_driver = ;
static void au1200fb_setup(void)
static int au1200fb_pm_callback(au1xxx_power_dev_t *dev,
au1xxx_request_t request, void *data)
static int __init au1200fb_init(void)
static void __exit au1200fb_cleanup(void)
module_init(au1200fb_init);
module_exit(au1200fb_cleanup);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
