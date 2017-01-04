static struct map_desc at91rm9200_io_desc[] __initdata = ;
static struct clk udc_clk = ;
static struct clk ohci_clk = ;
static struct clk ether_clk = ;
static struct clk mmc_clk = ;
static struct clk twi_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk usart3_clk = ;
static struct clk spi_clk = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioC_clk = ;
static struct clk pioD_clk = ;
static struct clk ssc0_clk = ;
static struct clk ssc1_clk = ;
static struct clk ssc2_clk = ;
static struct clk tc0_clk = ;
static struct clk tc1_clk = ;
static struct clk tc2_clk = ;
static struct clk tc3_clk = ;
static struct clk tc4_clk = ;
static struct clk tc5_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static struct clk pck2 = ;
static struct clk pck3 = ;
static void __init at91rm9200_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91rm9200_set_console_clock(int id)
static struct at91_gpio_bank at91rm9200_gpio[] = ;
static void at91rm9200_reset(void)
int rm9200_type;
EXPORT_SYMBOL(rm9200_type);
void __init at91rm9200_set_type(int type)
void __init at91rm9200_map_io(void)
void __init at91rm9200_initialize(unsigned long main_clock)
static unsigned int at91rm9200_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91rm9200_init_interrupts(unsigned int priority[NR_AIC_IRQS])
