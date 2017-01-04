static struct map_desc at91sam9rl_io_desc[] __initdata = ;
static struct map_desc at91sam9rl_sram_desc[] __initdata = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioC_clk = ;
static struct clk pioD_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk usart3_clk = ;
static struct clk mmc_clk = ;
static struct clk twi0_clk = ;
static struct clk twi1_clk = ;
static struct clk spi_clk = ;
static struct clk ssc0_clk = ;
static struct clk ssc1_clk = ;
static struct clk tc0_clk = ;
static struct clk tc1_clk = ;
static struct clk tc2_clk = ;
static struct clk pwm_clk = ;
static struct clk tsc_clk = ;
static struct clk dma_clk = ;
static struct clk udphs_clk = ;
static struct clk lcdc_clk = ;
static struct clk ac97_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static void __init at91sam9rl_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91sam9rl_set_console_clock(int id)
static struct at91_gpio_bank at91sam9rl_gpio[] = ;
static void at91sam9rl_poweroff(void)
void __init at91sam9rl_map_io(void)
void __init at91sam9rl_initialize(unsigned long main_clock)
static unsigned int at91sam9rl_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91sam9rl_init_interrupts(unsigned int priority[NR_AIC_IRQS])
