#undef NEW_BOARD_LEARNING_MODE
static void omap_kp_tasklet(unsigned long);
static void omap_kp_timer(unsigned long);
static unsigned char keypad_state[8];
static DEFINE_MUTEX(kp_enable_mutex);
static int kp_enable = 1;
static int kp_cur_group = -1;
struct omap_kp ;
static DECLARE_TASKLET_DISABLED(kp_tasklet, omap_kp_tasklet, 0);
static unsigned int *row_gpios;
static unsigned int *col_gpios;
static void set_col_gpio_val(struct omap_kp *omap_kp, u8 value)
static u8 get_row_gpio_val(struct omap_kp *omap_kp)
#define		set_col_gpio_val(x, y)	do  while (0)
#define		get_row_gpio_val(x)	0
static irqreturn_t omap_kp_interrupt(int irq, void *dev_id)
static void omap_kp_timer(unsigned long data)
static void omap_kp_scan_keypad(struct omap_kp *omap_kp, unsigned char *state)
static void omap_kp_tasklet(unsigned long data)
static ssize_t omap_kp_enable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t omap_kp_enable_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(enable, S_IRUGO | S_IWUSR, omap_kp_enable_show, omap_kp_enable_store);
static int omap_kp_suspend(struct platform_device *dev, pm_message_t state)
static int omap_kp_resume(struct platform_device *dev)
#define omap_kp_suspend	NULL
#define omap_kp_resume	NULL
static int __devinit omap_kp_probe(struct platform_device *pdev)
static int __devexit omap_kp_remove(struct platform_device *pdev)
static struct platform_driver omap_kp_driver = ;
static int __init omap_kp_init(void)
static void __exit omap_kp_exit(void)
module_init(omap_kp_init);
module_exit(omap_kp_exit);
MODULE_AUTHOR("Timo Teräs");
MODULE_DESCRIPTION("OMAP Keypad Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:omap-keypad");
