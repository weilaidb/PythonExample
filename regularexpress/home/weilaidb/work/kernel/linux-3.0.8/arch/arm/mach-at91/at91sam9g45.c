static struct map_desc at91sam9g45_io_desc[] __initdata = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioC_clk = ;
static struct clk pioDE_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk usart3_clk = ;
static struct clk mmc0_clk = ;
static struct clk twi0_clk = ;
static struct clk twi1_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk ssc0_clk = ;
static struct clk ssc1_clk = ;
static struct clk tcb0_clk = ;
static struct clk pwm_clk = ;
static struct clk tsc_clk = ;
static struct clk dma_clk = ;
static struct clk uhphs_clk = ;
static struct clk lcdc_clk = ;
static struct clk ac97_clk = ;
static struct clk macb_clk = ;
static struct clk isi_clk = ;
static struct clk udphs_clk = ;
static struct clk mmc1_clk = ;
static struct clk vdec_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static void __init at91sam9g45_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91sam9g45_set_console_clock(int id)
static struct at91_gpio_bank at91sam9g45_gpio[] = ;
static void at91sam9g45_reset(void)
static void at91sam9g45_poweroff(void)
void __init at91sam9g45_map_io(void)
void __init at91sam9g45_initialize(unsigned long main_clock)
static unsigned int at91sam9g45_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91sam9g45_init_interrupts(unsigned int priority[NR_AIC_IRQS])
