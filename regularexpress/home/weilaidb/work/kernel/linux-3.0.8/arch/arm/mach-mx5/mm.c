static struct map_desc mx51_io_desc[] __initdata = ;
static struct map_desc mx53_io_desc[] __initdata = ;
void __init mx51_map_io(void)
void __init imx51_init_early(void)
void __init mx53_map_io(void)
void __init imx53_init_early(void)
int imx51_register_gpios(void);
void __init mx51_init_irq(void)
int imx53_register_gpios(void);
void __init mx53_init_irq(void)
