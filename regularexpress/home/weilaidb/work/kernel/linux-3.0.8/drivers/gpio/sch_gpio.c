static DEFINE_SPINLOCK(gpio_lock);
#define CGEN	(0x00)
#define CGIO	(0x04)
#define CGLV	(0x08)
#define RGEN	(0x20)
#define RGIO	(0x24)
#define RGLV	(0x28)
static unsigned short gpio_ba;
static int sch_gpio_core_direction_in(struct gpio_chip *gc, unsigned  gpio_num)
static int sch_gpio_core_get(struct gpio_chip *gc, unsigned gpio_num)
static void sch_gpio_core_set(struct gpio_chip *gc, unsigned gpio_num, int val)
static int sch_gpio_core_direction_out(struct gpio_chip *gc,
unsigned gpio_num, int val)
static struct gpio_chip sch_gpio_core = ;
static int sch_gpio_resume_direction_in(struct gpio_chip *gc,
unsigned gpio_num)
static int sch_gpio_resume_get(struct gpio_chip *gc, unsigned gpio_num)
static void sch_gpio_resume_set(struct gpio_chip *gc,
unsigned gpio_num, int val)
static int sch_gpio_resume_direction_out(struct gpio_chip *gc,
unsigned gpio_num, int val)
static struct gpio_chip sch_gpio_resume = ;
static int __devinit sch_gpio_probe(struct platform_device *pdev)
static int __devexit sch_gpio_remove(struct platform_device *pdev)
static struct platform_driver sch_gpio_driver = ;
static int __init sch_gpio_init(void)
static void __exit sch_gpio_exit(void)
module_init(sch_gpio_init);
module_exit(sch_gpio_exit);
MODULE_AUTHOR("Denis Turischev <denis@compulab.co.il>");
MODULE_DESCRIPTION("GPIO interface for Intel Poulsbo SCH");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sch_gpio");
