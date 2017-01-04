static struct map_desc at91sam9260_io_desc[] __initdata = ;
static struct map_desc at91sam9260_sram_desc[] __initdata = ;
static struct map_desc at91sam9g20_sram_desc[] __initdata = ;
static struct map_desc at91sam9xe_sram_desc[] __initdata = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioC_clk = ;
static struct clk adc_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk mmc_clk = ;
static struct clk udc_clk = ;
static struct clk twi_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk ssc_clk = ;
static struct clk tc0_clk = ;
static struct clk tc1_clk = ;
static struct clk tc2_clk = ;
static struct clk ohci_clk = ;
static struct clk macb_clk = ;
static struct clk isi_clk = ;
static struct clk usart3_clk = ;
static struct clk usart4_clk = ;
static struct clk usart5_clk = ;
static struct clk tc3_clk = ;
static struct clk tc4_clk = ;
static struct clk tc5_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static void __init at91sam9260_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91sam9260_set_console_clock(int id)
static struct at91_gpio_bank at91sam9260_gpio[] = ;
static void at91sam9260_poweroff(void)
static void __init at91sam9xe_map_io(void)
void __init at91sam9260_map_io(void)
void __init at91sam9260_initialize(unsigned long main_clock)
static unsigned int at91sam9260_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91sam9260_init_interrupts(unsigned int priority[NR_AIC_IRQS])
