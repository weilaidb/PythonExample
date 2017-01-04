struct amba_device uart_device[] = ;
static struct pl061_platform_data gpio_plat_data[] = ;
struct amba_device gpio_device[] = ;
void __init spear6xx_init(void)
void __init spear6xx_init_irq(void)
static struct map_desc spear6xx_io_desc[] __initdata = ;
void __init spear6xx_map_io(void)
static void __init spear6xx_timer_init(void)
struct sys_timer spear6xx_timer = ;
