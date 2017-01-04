#define VA_C5(item) ((unsigned long)(item) + BAST_VAM_CS5)
#define VA_C4(item) ((unsigned long)(item) + BAST_VAM_CS4)
#define VA_C3(item) ((unsigned long)(item) + BAST_VAM_CS3)
#define VA_C2(item) ((unsigned long)(item) + BAST_VAM_CS2)
#define PA_CS2(item) (__phys_to_pfn((item) + S3C2410_CS2))
#define PA_CS3(item) (__phys_to_pfn((item) + S3C2410_CS3))
#define PA_CS4(item) (__phys_to_pfn((item) + S3C2410_CS4))
#define PA_CS5(item) (__phys_to_pfn((item) + S3C2410_CS5))
static struct map_desc vr1000_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c24xx_uart_clksrc vr1000_serial_clocks[] = ;
static struct s3c2410_uartcfg vr1000_uartcfgs[] __initdata = ;
#define VR1000_BAUDBASE (3692307)
#define VR1000_SERIAL_MAPBASE(x) (VR1000_PA_SERIAL + 0x80 + ((x) << 5))
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct resource vr1000_dm9k0_resource[] = ;
static struct resource vr1000_dm9k1_resource[] = ;
static struct dm9000_plat_data vr1000_dm9k_platdata = ;
static struct platform_device vr1000_dm9k0 = ;
static struct platform_device vr1000_dm9k1 = ;
static struct s3c24xx_led_platdata vr1000_led1_pdata = ;
static struct s3c24xx_led_platdata vr1000_led2_pdata = ;
static struct s3c24xx_led_platdata vr1000_led3_pdata = ;
static struct platform_device vr1000_led1 = ;
static struct platform_device vr1000_led2 = ;
static struct platform_device vr1000_led3 = ;
static struct i2c_board_info vr1000_i2c_devs[] __initdata = ;
static struct platform_device *vr1000_devices[] __initdata = ;
static struct clk *vr1000_clocks[] __initdata = ;
static void vr1000_power_off(void)
static void __init vr1000_map_io(void)
static void __init vr1000_init(void)
MACHINE_START(VR1000, "Thorcom-VR1000")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= vr1000_map_io,
.init_machine	= vr1000_init,
.init_irq	= s3c24xx_init_irq,
.timer		= &s3c24xx_timer,
MACHINE_END
