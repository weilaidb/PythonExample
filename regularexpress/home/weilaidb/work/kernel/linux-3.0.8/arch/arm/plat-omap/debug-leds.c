static spinlock_t			lock;
static struct h2p2_dbg_fpga __iomem	*fpga;
static u16				led_state, hw_led_state;
#define new_led_api()	1
#define new_led_api()	0
#define GPIO_LED_RED		3
#define GPIO_LED_GREEN		OMAP_MPUIO(4)
#define LED_STATE_ENABLED	0x01
#define LED_STATE_CLAIMED	0x02
#define LED_TIMER_ON		0x04
#define GPIO_IDLE		GPIO_LED_GREEN
#define GPIO_TIMER		GPIO_LED_RED
static void h2p2_dbg_leds_event(led_event_t evt)
struct dbg_led ;
static struct dbg_led dbg_leds[] = ;
static void
fpga_led_set(struct led_classdev *cdev, enum led_brightness value)
static void __init newled_init(struct device *dev)
static int fpga_probe(struct platform_device *pdev)
static int fpga_suspend_noirq(struct device *dev)
static int fpga_resume_noirq(struct device *dev)
static const struct dev_pm_ops fpga_dev_pm_ops = ;
static struct platform_driver led_driver = ;
static int __init fpga_init(void)
fs_initcall(fpga_init);
