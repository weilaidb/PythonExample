enum rfkill_gpio_clk_state ;
#define PWR_CLK_SET(_RF, _EN) \
((_RF)->pwr_clk_enabled = (!(_EN) ? PWR_ENABLED : PWR_DISABLED))
#define PWR_CLK_ENABLED(_RF) ((_RF)->pwr_clk_enabled == PWR_ENABLED)
#define PWR_CLK_DISABLED(_RF) ((_RF)->pwr_clk_enabled != PWR_ENABLED)
struct rfkill_gpio_data ;
static int rfkill_gpio_set_power(void *data, bool blocked)
static const struct rfkill_ops rfkill_gpio_ops = ;
static int rfkill_gpio_probe(struct platform_device *pdev)
static int rfkill_gpio_remove(struct platform_device *pdev)
static struct platform_driver rfkill_gpio_driver = ;
static int __init rfkill_gpio_init(void)
static void __exit rfkill_gpio_exit(void)
module_init(rfkill_gpio_init);
module_exit(rfkill_gpio_exit);
MODULE_DESCRIPTION("gpio rfkill");
MODULE_AUTHOR("NVIDIA");
MODULE_LICENSE("GPL");
