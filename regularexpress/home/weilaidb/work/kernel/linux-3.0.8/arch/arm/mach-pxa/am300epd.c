static unsigned int panel_type = 6;
static struct platform_device *am300_device;
static struct broadsheet_board am300_board;
static unsigned long am300_pin_config[] __initdata = ;
#define PWR_GPIO_PIN	16
#define CFG_GPIO_PIN	17
#define RDY_GPIO_PIN	32
#define DC_GPIO_PIN	48
#define RST_GPIO_PIN	49
#define LED_GPIO_PIN	51
#define RD_GPIO_PIN	74
#define WR_GPIO_PIN	75
#define CS_GPIO_PIN	76
#define IRQ_GPIO_PIN	77
#define DB0_GPIO_PIN	58
#define DB15_GPIO_PIN	73
static int gpios[] = ;
static char *gpio_names[] = ;
static int am300_wait_event(struct broadsheetfb_par *par)
static int am300_init_gpio_regs(struct broadsheetfb_par *par)
static int am300_init_board(struct broadsheetfb_par *par)
static void am300_cleanup(struct broadsheetfb_par *par)
static u16 am300_get_hdb(struct broadsheetfb_par *par)
static void am300_set_hdb(struct broadsheetfb_par *par, u16 data)
static void am300_set_ctl(struct broadsheetfb_par *par, unsigned char bit,
u8 state)
static int am300_get_panel_type(void)
static irqreturn_t am300_handle_irq(int irq, void *dev_id)
static int am300_setup_irq(struct fb_info *info)
static struct broadsheet_board am300_board = ;
int __init am300_init(void)
module_param(panel_type, uint, 0);
MODULE_PARM_DESC(panel_type, "Select the panel type: 37, 6, 97");
MODULE_DESCRIPTION("board driver for am300 epd kit");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
