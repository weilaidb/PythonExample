#define DRIVERNAME "arm-charlcd"
#define CHARLCD_TIMEOUT (msecs_to_jiffies(1000))
#define CHAR_COM	0x00U
#define CHAR_DAT	0x04U
#define CHAR_RD		0x08U
#define CHAR_RAW	0x0CU
#define CHAR_MASK	0x10U
#define CHAR_STAT	0x14U
#define CHAR_RAW_CLEAR	0x00000000U
#define CHAR_RAW_VALID	0x00000100U
#define HD_CLEAR			0x01U
#define HD_HOME				0x02U
#define HD_ENTRYMODE			0x04U
#define HD_ENTRYMODE_INCREMENT		0x02U
#define HD_ENTRYMODE_SHIFT		0x01U
#define HD_DISPCTRL			0x08U
#define HD_DISPCTRL_ON			0x04U
#define HD_DISPCTRL_CURSOR_ON		0x02U
#define HD_DISPCTRL_CURSOR_BLINK	0x01U
#define HD_CRSR_SHIFT			0x10U
#define HD_CRSR_SHIFT_DISPLAY		0x08U
#define HD_CRSR_SHIFT_DISPLAY_RIGHT	0x04U
#define HD_FUNCSET			0x20U
#define HD_FUNCSET_8BIT			0x10U
#define HD_FUNCSET_2_LINES		0x08U
#define HD_FUNCSET_FONT_5X10		0x04U
#define HD_SET_CGRAM			0x40U
#define HD_SET_DDRAM			0x80U
#define HD_BUSY_FLAG			0x80U
struct charlcd ;
static irqreturn_t charlcd_interrupt(int irq, void *data)
static void charlcd_wait_complete_irq(struct charlcd *lcd)
static u8 charlcd_4bit_read_char(struct charlcd *lcd)
static bool charlcd_4bit_read_bf(struct charlcd *lcd)
static void charlcd_4bit_wait_busy(struct charlcd *lcd)
static void charlcd_4bit_command(struct charlcd *lcd, u8 cmd)
static void charlcd_4bit_char(struct charlcd *lcd, u8 ch)
static void charlcd_4bit_print(struct charlcd *lcd, int line, const char *str)
static void charlcd_4bit_init(struct charlcd *lcd)
static void charlcd_init_work(struct work_struct *work)
static int __init charlcd_probe(struct platform_device *pdev)
static int __exit charlcd_remove(struct platform_device *pdev)
static int charlcd_suspend(struct device *dev)
static int charlcd_resume(struct device *dev)
static const struct dev_pm_ops charlcd_pm_ops = ;
static struct platform_driver charlcd_driver = ;
static int __init charlcd_init(void)
static void __exit charlcd_exit(void)
module_init(charlcd_init);
module_exit(charlcd_exit);
MODULE_AUTHOR("Linus Walleij <triad@df.lth.se>");
MODULE_DESCRIPTION("ARM Character LCD Driver");
MODULE_LICENSE("GPL v2");
