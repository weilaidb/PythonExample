#define ASSABET_BCR_DB1110 \
(ASSABET_BCR_SPK_OFF    | ASSABET_BCR_QMUTE     | \
ASSABET_BCR_LED_GREEN  | ASSABET_BCR_LED_RED   | \
ASSABET_BCR_RS232EN    | ASSABET_BCR_LCD_12RGB | \
ASSABET_BCR_IRDA_MD0)
#define ASSABET_BCR_DB1111 \
(ASSABET_BCR_SPK_OFF    | ASSABET_BCR_QMUTE     | \
ASSABET_BCR_LED_GREEN  | ASSABET_BCR_LED_RED   | \
ASSABET_BCR_RS232EN    | ASSABET_BCR_LCD_12RGB | \
ASSABET_BCR_CF_BUS_OFF | ASSABET_BCR_STEREO_LB | \
ASSABET_BCR_IRDA_MD0   | ASSABET_BCR_CF_RST)
unsigned long SCR_value = ASSABET_SCR_INIT;
EXPORT_SYMBOL(SCR_value);
static unsigned long BCR_value = ASSABET_BCR_DB1110;
void ASSABET_BCR_frob(unsigned int mask, unsigned int val)
EXPORT_SYMBOL(ASSABET_BCR_frob);
static void assabet_backlight_power(int on)
static void assabet_lcd_power(int on)
static struct mtd_partition assabet_partitions[] = ;
static struct mtd_partition assabet_partitions[] = ;
static struct flash_platform_data assabet_flash_data = ;
static struct resource assabet_flash_resources[] = ;
static int assabet_irda_set_power(struct device *dev, unsigned int state)
static void assabet_irda_set_speed(struct device *dev, unsigned int speed)
static struct irda_platform_data assabet_irda_data = ;
static struct mcp_plat_data assabet_mcp_data = ;
static void __init assabet_init(void)
static void __init map_sa1100_gpio_regs( void )
static void __init get_assabet_scr(void)
static void __init
fixup_assabet(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
static void assabet_uart_pm(struct uart_port *port, u_int state, u_int oldstate)
static void assabet_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int assabet_get_mctrl(struct uart_port *port)
static struct sa1100_port_fns assabet_port_fns __initdata = ;
static struct map_desc assabet_io_desc[] __initdata = ;
static void __init assabet_map_io(void)
MACHINE_START(ASSABET, "Intel-Assabet")
.boot_params	= 0xc0000100,
.fixup		= fixup_assabet,
.map_io		= assabet_map_io,
.init_irq	= sa1100_init_irq,
.timer		= &sa1100_timer,
.init_machine	= assabet_init,
MACHINE_END
