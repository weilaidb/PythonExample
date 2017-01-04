static irqreturn_t psw_irq_handler(int irq, void *arg)
static struct resource psw_power_resources[] = ;
static struct resource psw_usl5p_resources[] = ;
static struct push_switch_platform_info psw_power_platform_data = ;
static struct push_switch_platform_info psw1_platform_data = ;
static struct push_switch_platform_info psw2_platform_data = ;
static struct push_switch_platform_info psw3_platform_data = ;
static struct platform_device psw_power_switch_device = ;
static struct platform_device psw1_switch_device = ;
static struct platform_device psw2_switch_device = ;
static struct platform_device psw3_switch_device = ;
static struct platform_device *psw_devices[] = ;
static int __init psw_init(void)
module_init(psw_init);
