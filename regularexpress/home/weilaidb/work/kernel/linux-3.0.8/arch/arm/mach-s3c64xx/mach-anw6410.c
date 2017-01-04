#define ANW6410_PA_DM9000	(0x18000000)
#define ANW6410_VA_EXTDEV	S3C_ADDR(0x02000000)
#define ANW6410_PA_EXTDEV	(0x30000000)
#define ANW6410_EN_DM9000	(1<<11)
#define ANW6410_EN_LCD		(1<<14)
static __u32 anw6410_extdev_status;
static struct s3c2410_uartcfg anw6410_uartcfgs[] __initdata = ;
static void __init anw6410_lcd_mode_set(void)
static void anw6410_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data anw6410_lcd_power_data = ;
static struct platform_device anw6410_lcd_powerdev = ;
static struct s3c_fb_pd_win anw6410_fb_win0 = ;
static struct s3c_fb_platdata anw6410_lcd_pdata __initdata = ;
static void __init anw6410_dm9000_enable(void)
static struct resource anw6410_dm9000_resource[] = ;
static struct dm9000_plat_data anw6410_dm9000_pdata = ;
static struct platform_device anw6410_device_eth = ;
static struct map_desc anw6410_iodesc[] __initdata = ;
static struct platform_device *anw6410_devices[] __initdata = ;
static void __init anw6410_map_io(void)
static void __init anw6410_machine_init(void)
MACHINE_START(ANW6410, "A&W6410")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= anw6410_map_io,
.init_machine	= anw6410_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
