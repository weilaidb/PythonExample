static void __init at91eb01_init_irq(void)
static void __init at91eb01_init_early(void)
MACHINE_START(AT91EB01, "Atmel AT91 EB01")
.timer		= &at91x40_timer,
.init_early	= at91eb01_init_early,
.init_irq	= at91eb01_init_irq,
MACHINE_END
