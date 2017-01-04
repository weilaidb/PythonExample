static struct map_desc at91sam9261_io_desc[] __initdata = ;
static struct map_desc at91sam9261_sram_desc[] __initdata = ;
static struct map_desc at91sam9g10_sram_desc[] __initdata = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioC_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk mmc_clk = ;
static struct clk udc_clk = ;
static struct clk twi_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk ssc0_clk = ;
static struct clk ssc1_clk = ;
static struct clk ssc2_clk = ;
static struct clk tc0_clk = ;
static struct clk tc1_clk = ;
static struct clk tc2_clk = ;
static struct clk ohci_clk = ;
static struct clk lcdc_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static struct clk pck2 = ;
static struct clk pck3 = ;
static struct clk hck0 = ;
static struct clk hck1 = ;
static void __init at91sam9261_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91sam9261_set_console_clock(int id)
static struct at91_gpio_bank at91sam9261_gpio[] = ;
static void at91sam9261_poweroff(void)
void __init at91sam9261_map_io(void)
void __init at91sam9261_initialize(unsigned long main_clock)
static unsigned int at91sam9261_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91sam9261_init_interrupts(unsigned int priority[NR_AIC_IRQS])
