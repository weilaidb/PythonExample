static struct map_desc nuc900_iodesc[] __initdata = ;
static DEFINE_CLK(lcd, 0);
static DEFINE_CLK(audio, 1);
static DEFINE_CLK(fmi, 4);
static DEFINE_SUBCLK(ms, 0);
static DEFINE_SUBCLK(sd, 1);
static DEFINE_CLK(dmac, 5);
static DEFINE_CLK(atapi, 6);
static DEFINE_CLK(emc, 7);
static DEFINE_SUBCLK(rmii, 2);
static DEFINE_CLK(usbd, 8);
static DEFINE_CLK(usbh, 9);
static DEFINE_CLK(g2d, 10);;
static DEFINE_CLK(pwm, 18);
static DEFINE_CLK(ps2, 24);
static DEFINE_CLK(kpi, 25);
static DEFINE_CLK(wdt, 26);
static DEFINE_CLK(gdma, 27);
static DEFINE_CLK(adc, 28);
static DEFINE_CLK(usi, 29);
static DEFINE_CLK(ext, 0);
static DEFINE_CLK(timer0, 19);
static DEFINE_CLK(timer1, 20);
static DEFINE_CLK(timer2, 21);
static DEFINE_CLK(timer3, 22);
static DEFINE_CLK(timer4, 23);
static struct clk_lookup nuc900_clkregs[] = ;
struct plat_serial8250_port nuc900_uart_data[] = ;
struct platform_device nuc900_serial_device = ;
static int __init nuc900_set_clkval(unsigned int cpufreq)
static int __init nuc900_set_cpufreq(char *str)
__setup("cpufreq=", nuc900_set_cpufreq);
void __init nuc900_map_io(struct map_desc *mach_desc, int mach_size)
void __init nuc900_init_clocks(void)
