static struct map_desc at91cap9_io_desc[] __initdata = ;
static struct clk pioABCD_clk = ;
static struct clk mpb0_clk = ;
static struct clk mpb1_clk = ;
static struct clk mpb2_clk = ;
static struct clk mpb3_clk = ;
static struct clk mpb4_clk = ;
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
static struct clk aestdes_clk = ;
static struct clk adc_clk = ;
static struct clk isi_clk = ;
static struct clk lcdc_clk = ;
static struct clk dma_clk = ;
static struct clk udphs_clk = ;
static struct clk ohci_clk = ;
static struct clk *periph_clocks[] __initdata = ;
static struct clk_lookup periph_clocks_lookups[] = ;
static struct clk_lookup usart_clocks_lookups[] = ;
static struct clk pck0 = ;
static struct clk pck1 = ;
static struct clk pck2 = ;
static struct clk pck3 = ;
static void __init at91cap9_register_clocks(void)
static struct clk_lookup console_clock_lookup;
void __init at91cap9_set_console_clock(int id)
static struct at91_gpio_bank at91cap9_gpio[] = ;
static void at91cap9_reset(void)
static void at91cap9_poweroff(void)
void __init at91cap9_map_io(void)
void __init at91cap9_initialize(unsigned long main_clock)
static unsigned int at91cap9_default_irq_priority[NR_AIC_IRQS] __initdata = ;
void __init at91cap9_init_interrupts(unsigned int priority[NR_AIC_IRQS])
