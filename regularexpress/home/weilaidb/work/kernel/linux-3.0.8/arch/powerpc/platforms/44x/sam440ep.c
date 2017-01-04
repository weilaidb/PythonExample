static __initdata struct of_device_id sam440ep_of_bus[] = ;
static int __init sam440ep_device_probe(void)
machine_device_initcall(sam440ep, sam440ep_device_probe);
static int __init sam440ep_probe(void)
define_machine(sam440ep) ;
static struct i2c_board_info sam440ep_rtc_info = ;
static int sam440ep_setup_rtc(void)
machine_device_initcall(sam440ep, sam440ep_setup_rtc);
