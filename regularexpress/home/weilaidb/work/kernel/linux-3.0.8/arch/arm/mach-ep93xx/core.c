#define pr_fmt(fmt) "ep93xx " KBUILD_MODNAME ": " fmt
static struct map_desc ep93xx_io_desc[] __initdata = ;
void __init ep93xx_map_io(void)
#define EP93XX_TIMER_REG(x)		(EP93XX_TIMER_BASE + (x))
#define EP93XX_TIMER1_LOAD		EP93XX_TIMER_REG(0x00)
#define EP93XX_TIMER1_VALUE		EP93XX_TIMER_REG(0x04)
#define EP93XX_TIMER1_CONTROL		EP93XX_TIMER_REG(0x08)
#define EP93XX_TIMER123_CONTROL_ENABLE	(1 << 7)
#define EP93XX_TIMER123_CONTROL_MODE	(1 << 6)
#define EP93XX_TIMER123_CONTROL_CLKSEL	(1 << 3)
#define EP93XX_TIMER1_CLEAR		EP93XX_TIMER_REG(0x0c)
#define EP93XX_TIMER2_LOAD		EP93XX_TIMER_REG(0x20)
#define EP93XX_TIMER2_VALUE		EP93XX_TIMER_REG(0x24)
#define EP93XX_TIMER2_CONTROL		EP93XX_TIMER_REG(0x28)
#define EP93XX_TIMER2_CLEAR		EP93XX_TIMER_REG(0x2c)
#define EP93XX_TIMER4_VALUE_LOW		EP93XX_TIMER_REG(0x60)
#define EP93XX_TIMER4_VALUE_HIGH	EP93XX_TIMER_REG(0x64)
#define EP93XX_TIMER4_VALUE_HIGH_ENABLE	(1 << 8)
#define EP93XX_TIMER3_LOAD		EP93XX_TIMER_REG(0x80)
#define EP93XX_TIMER3_VALUE		EP93XX_TIMER_REG(0x84)
#define EP93XX_TIMER3_CONTROL		EP93XX_TIMER_REG(0x88)
#define EP93XX_TIMER3_CLEAR		EP93XX_TIMER_REG(0x8c)
#define EP93XX_TIMER123_CLOCK		508469
#define EP93XX_TIMER4_CLOCK		983040
#define TIMER1_RELOAD			((EP93XX_TIMER123_CLOCK / HZ) - 1)
#define TIMER4_TICKS_PER_JIFFY		DIV_ROUND_CLOSEST(CLOCK_TICK_RATE, HZ)
static unsigned int last_jiffy_time;
static irqreturn_t ep93xx_timer_interrupt(int irq, void *dev_id)
static struct irqaction ep93xx_timer_irq = ;
static void __init ep93xx_timer_init(void)
static unsigned long ep93xx_gettimeoffset(void)
struct sys_timer ep93xx_timer = ;
extern void ep93xx_gpio_init_irq(void);
void __init ep93xx_init_irq(void)
static DEFINE_SPINLOCK(syscon_swlock);
void ep93xx_syscon_swlocked_write(unsigned int val, void __iomem *reg)
EXPORT_SYMBOL(ep93xx_syscon_swlocked_write);
void ep93xx_devcfg_set_clear(unsigned int set_bits, unsigned int clear_bits)
EXPORT_SYMBOL(ep93xx_devcfg_set_clear);
unsigned int ep93xx_chip_revision(void)
#define EP93XX_UART_MCR_OFFSET		(0x0100)
static void ep93xx_uart_set_mctrl(struct amba_device *dev,
void __iomem *base, unsigned int mctrl)
static struct amba_pl010_data ep93xx_uart_data = ;
static struct amba_device uart1_device = ;
static struct amba_device uart2_device = ;
static struct amba_device uart3_device = ;
static struct resource ep93xx_rtc_resource[] = ;
static struct platform_device ep93xx_rtc_device = ;
static struct resource ep93xx_ohci_resources[] = ;
static struct platform_device ep93xx_ohci_device = ;
static struct physmap_flash_data ep93xx_flash_data;
static struct resource ep93xx_flash_resource = ;
static struct platform_device ep93xx_flash = ;
void __init ep93xx_register_flash(unsigned int width,
resource_size_t start, resource_size_t size)
static struct ep93xx_eth_data ep93xx_eth_data;
static struct resource ep93xx_eth_resource[] = ;
static u64 ep93xx_eth_dma_mask = DMA_BIT_MASK(32);
static struct platform_device ep93xx_eth_device = ;
void __init ep93xx_register_eth(struct ep93xx_eth_data *data, int copy_addr)
static struct i2c_gpio_platform_data ep93xx_i2c_data;
static struct platform_device ep93xx_i2c_device = ;
void __init ep93xx_register_i2c(struct i2c_gpio_platform_data *data,
struct i2c_board_info *devices, int num)
static struct ep93xx_spi_info ep93xx_spi_master_data;
static struct resource ep93xx_spi_resources[] = ;
static struct platform_device ep93xx_spi_device = ;
void __init ep93xx_register_spi(struct ep93xx_spi_info *info,
struct spi_board_info *devices, int num)
static struct gpio_led ep93xx_led_pins[] = ;
static struct gpio_led_platform_data ep93xx_led_data = ;
static struct platform_device ep93xx_leds = ;
static struct resource ep93xx_pwm0_resource[] = ;
static struct platform_device ep93xx_pwm0_device = ;
static struct resource ep93xx_pwm1_resource[] = ;
static struct platform_device ep93xx_pwm1_device = ;
void __init ep93xx_register_pwm(int pwm0, int pwm1)
int ep93xx_pwm_acquire_gpio(struct platform_device *pdev)
EXPORT_SYMBOL(ep93xx_pwm_acquire_gpio);
void ep93xx_pwm_release_gpio(struct platform_device *pdev)
EXPORT_SYMBOL(ep93xx_pwm_release_gpio);
static struct ep93xxfb_mach_info ep93xxfb_data;
static struct resource ep93xx_fb_resource[] = ;
static struct platform_device ep93xx_fb_device = ;
static struct platform_device ep93xx_bl_device = ;
void __init ep93xx_register_fb(struct ep93xxfb_mach_info *data)
static struct ep93xx_keypad_platform_data ep93xx_keypad_data;
static struct resource ep93xx_keypad_resource[] = ;
static struct platform_device ep93xx_keypad_device = ;
void __init ep93xx_register_keypad(struct ep93xx_keypad_platform_data *data)
int ep93xx_keypad_acquire_gpio(struct platform_device *pdev)
EXPORT_SYMBOL(ep93xx_keypad_acquire_gpio);
void ep93xx_keypad_release_gpio(struct platform_device *pdev)
EXPORT_SYMBOL(ep93xx_keypad_release_gpio);
static struct resource ep93xx_i2s_resource[] = ;
static struct platform_device ep93xx_i2s_device = ;
static struct platform_device ep93xx_pcm_device = ;
void __init ep93xx_register_i2s(void)
#define EP93XX_SYSCON_DEVCFG_I2S_MASK	(EP93XX_SYSCON_DEVCFG_I2SONSSP | \
EP93XX_SYSCON_DEVCFG_I2SONAC97)
#define EP93XX_I2SCLKDIV_MASK		(EP93XX_SYSCON_I2SCLKDIV_ORIDE | \
EP93XX_SYSCON_I2SCLKDIV_SPOL)
int ep93xx_i2s_acquire(unsigned i2s_pins, unsigned i2s_config)
EXPORT_SYMBOL(ep93xx_i2s_acquire);
void ep93xx_i2s_release(void)
EXPORT_SYMBOL(ep93xx_i2s_release);
static struct resource ep93xx_ac97_resources[] = ;
static struct platform_device ep93xx_ac97_device = ;
void __init ep93xx_register_ac97(void)
extern void ep93xx_gpio_init(void);
void __init ep93xx_init_devices(void)
