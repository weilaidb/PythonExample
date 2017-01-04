static struct resource watchdog_resources[] = ;
struct platform_device lpc32xx_watchdog_device = ;
static struct i2c_pnx_data i2c0_data = ;
static struct i2c_pnx_data i2c1_data = ;
static struct i2c_pnx_data i2c2_data = ;
struct platform_device lpc32xx_i2c0_device = ;
struct platform_device lpc32xx_i2c1_device = ;
struct platform_device lpc32xx_i2c2_device = ;
void lpc32xx_get_uid(u32 devid[4])
int clk_is_sysclk_mainosc(void)
void lpc32xx_watchdog_reset(void)
#define LPC32XX_IRAM_BANK_SIZE SZ_128K
static u32 iram_size;
u32 lpc32xx_return_iram_size(void)
u32 clk_check_pll_setup(u32 ifreq, struct clk_pll_setup *pllsetup)
u32 clk_get_pclk_div(void)
static struct map_desc lpc32xx_io_desc[] __initdata = ;
void __init lpc32xx_map_io(void)
