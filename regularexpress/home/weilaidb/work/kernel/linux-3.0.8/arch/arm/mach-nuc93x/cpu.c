static struct map_desc nuc93x_iodesc[] __initdata = ;
static DEFINE_CLK(audio, 2);
static DEFINE_CLK(sd, 3);
static DEFINE_CLK(jpg, 4);
static DEFINE_CLK(video, 5);
static DEFINE_CLK(vpost, 6);
static DEFINE_CLK(2d, 7);
static DEFINE_CLK(gpu, 8);
static DEFINE_CLK(gdma, 9);
static DEFINE_CLK(adc, 10);
static DEFINE_CLK(uart, 11);
static DEFINE_CLK(spi, 12);
static DEFINE_CLK(pwm, 13);
static DEFINE_CLK(timer, 14);
static DEFINE_CLK(wdt, 15);
static DEFINE_CLK(ac97, 16);
static DEFINE_CLK(i2s, 16);
static DEFINE_CLK(usbck, 17);
static DEFINE_CLK(usb48, 18);
static DEFINE_CLK(usbh, 19);
static DEFINE_CLK(i2c, 20);
static DEFINE_CLK(ext, 0);
static struct clk_lookup nuc932_clkregs[] = ;
struct plat_serial8250_port nuc93x_uart_data[] = ;
struct platform_device nuc93x_serial_device = ;
void __init nuc93x_map_io(struct map_desc *mach_desc, int mach_size)
void __init nuc93x_init_clocks(void)
