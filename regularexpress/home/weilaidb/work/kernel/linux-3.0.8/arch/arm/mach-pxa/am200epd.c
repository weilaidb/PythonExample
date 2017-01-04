static unsigned int panel_type = 6;
static struct platform_device *am200_device;
static struct metronome_board am200_board;
static struct pxafb_mode_info am200_fb_mode_9inch7 = ;
static struct pxafb_mode_info am200_fb_mode_8inch = ;
static struct pxafb_mode_info am200_fb_mode_6inch = ;
static struct pxafb_mach_info am200_fb_info = ;
#define LED_GPIO_PIN 51
#define STDBY_GPIO_PIN 48
#define RST_GPIO_PIN 49
#define RDY_GPIO_PIN 32
#define ERR_GPIO_PIN 17
#define PCBPWR_GPIO_PIN 16
static int gpios[] = ;
static char *gpio_names[] = ;
static int am200_init_gpio_regs(struct metronomefb_par *par)
static void am200_cleanup(struct metronomefb_par *par)
static int am200_share_video_mem(struct fb_info *info)
static int am200_unshare_video_mem(struct fb_info *info)
static int am200_fb_notifier_callback(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block am200_fb_notif = ;
static void __init am200_presetup_fb(void)
static int am200_setup_fb(struct metronomefb_par *par)
static int am200_get_panel_type(void)
static irqreturn_t am200_handle_irq(int irq, void *dev_id)
static int am200_setup_irq(struct fb_info *info)
static void am200_set_rst(struct metronomefb_par *par, int state)
static void am200_set_stdby(struct metronomefb_par *par, int state)
static int am200_wait_event(struct metronomefb_par *par)
static int am200_wait_event_intr(struct metronomefb_par *par)
static struct metronome_board am200_board = ;
static unsigned long am200_pin_config[] __initdata = ;
int __init am200_init(void)
module_param(panel_type, uint, 0);
MODULE_PARM_DESC(panel_type, "Select the panel type: 6, 8, 97");
MODULE_DESCRIPTION("board driver for am200 metronome epd kit");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
