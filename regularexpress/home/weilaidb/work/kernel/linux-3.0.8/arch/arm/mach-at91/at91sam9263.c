static struct map_desc at91sam9263_io_desc[] __initdata = ;
static struct clk pioA_clk = ;
static struct clk pioB_clk = ;
static struct clk pioCDE_clk = ;
static struct clk usart0_clk = ;
static struct clk usart1_clk = ;
static struct clk usart2_clk = ;
static struct clk mmc0_clk = ;
static struct clk mmc1_clk = ;
static struct clk can_clk = ;
static struct clk twi_clk = ;
static struct clk spi0_clk = ;
static struct clk spi1_clk = ;
static struct clk ssc0_clk = ;
static struct clk ssc1_clk = ;
static struct clk ac97_clk = ;
static struct clk tcb_clk = ;
static struct clk pwm_clk = ;
static struct clk macb_clk = ;
static struct clk dma_clk = ;
static struct clk twodge_clk = ;
static struct clk udc_clk = ;
static struct clk isi_clk = ;
static struct clk lcdc_clk = ;
static struct clk ohci_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static struct clk pck2 = ;
static struct clk pck3 = ;
static void __init at91sam9263_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91sam9263_set_console_clock(int id)
static struct at91_gpio_bank at91sam9263_gpio[] = ;
static void at91sam9263_poweroff(void)
void __init at91sam9263_map_io(void)
void __init at91sam9263_initialize(unsigned long main_clock)
static unsigned int at91sam9263_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91sam9263_init_interrupts(unsigned int priority[NR_AIC_IRQS])
