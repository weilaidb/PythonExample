static unsigned long lpd270_pin_config[] __initdata = ;
static unsigned int lpd270_irq_enabled;
static void lpd270_mask_irq(struct irq_data *d)
static void lpd270_unmask_irq(struct irq_data *d)
static struct irq_chip lpd270_irq_chip = ;
static void lpd270_irq_handler(unsigned int irq, struct irq_desc *desc)
static void __init lpd270_init_irq(void)
static void lpd270_irq_resume(void)
static struct syscore_ops lpd270_irq_syscore_ops = ;
static int __init lpd270_irq_device_init(void)
device_initcall(lpd270_irq_device_init);
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct resource lpd270_flash_resources[] = ;
static struct mtd_partition lpd270_flash0_partitions[] = ;
static struct flash_platform_data lpd270_flash_data[2] = ;
static struct platform_device lpd270_flash_device[2] = ;
static struct platform_pwm_backlight_data lpd270_backlight_data = ;
static struct platform_device lpd270_backlight_device = ;
static struct pxafb_mode_info sharp_lq057q3dc02_mode = ;
static struct pxafb_mach_info sharp_lq057q3dc02 = ;
static struct pxafb_mode_info sharp_lq121s1dg31_mode = ;
static struct pxafb_mach_info sharp_lq121s1dg31 = ;
static struct pxafb_mode_info sharp_lq036q1da01_mode = ;
static struct pxafb_mach_info sharp_lq036q1da01 = ;
static struct pxafb_mode_info sharp_lq64d343_mode = ;
static struct pxafb_mach_info sharp_lq64d343 = ;
static struct pxafb_mode_info sharp_lq10d368_mode = ;
static struct pxafb_mach_info sharp_lq10d368 = ;
static struct pxafb_mode_info sharp_lq035q7db02_20_mode = ;
static struct pxafb_mach_info sharp_lq035q7db02_20 = ;
static struct pxafb_mach_info *lpd270_lcd_to_use;
static int __init lpd270_set_lcd(char *str)
__setup("lcd=", lpd270_set_lcd);
static struct platform_device *platform_devices[] __initdata = ;
static struct pxaohci_platform_data lpd270_ohci_platform_data = ;
static void __init lpd270_init(void)
static struct map_desc lpd270_io_desc[] __initdata = ;
static void __init lpd270_map_io(void)
MACHINE_START(LOGICPD_PXA270, "LogicPD PXA270 Card Engine")
.boot_params	= 0xa0000100,
.map_io		= lpd270_map_io,
.nr_irqs	= LPD270_NR_IRQS,
.init_irq	= lpd270_init_irq,
.timer		= &pxa_timer,
.init_machine	= lpd270_init,
MACHINE_END
