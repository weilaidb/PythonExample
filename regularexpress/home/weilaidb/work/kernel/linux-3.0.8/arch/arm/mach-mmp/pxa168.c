#define MFPR_VIRT_BASE	(APB_VIRT_BASE + 0x1e000)
static struct mfp_addr_map pxa168_mfp_addr_map[] __initdata =
;
#define APMASK(i)	(GPIO_REGS_VIRT + BANK_OFF(i) + 0x09c)
static void __init pxa168_init_gpio(void)
void __init pxa168_init_irq(void)
static APBC_CLK(uart1, PXA168_UART1, 1, 14745600);
static APBC_CLK(uart2, PXA168_UART2, 1, 14745600);
static APBC_CLK(twsi0, PXA168_TWSI0, 1, 33000000);
static APBC_CLK(twsi1, PXA168_TWSI1, 1, 33000000);
static APBC_CLK(pwm1, PXA168_PWM1, 1, 13000000);
static APBC_CLK(pwm2, PXA168_PWM2, 1, 13000000);
static APBC_CLK(pwm3, PXA168_PWM3, 1, 13000000);
static APBC_CLK(pwm4, PXA168_PWM4, 1, 13000000);
static APBC_CLK(ssp1, PXA168_SSP1, 4, 0);
static APBC_CLK(ssp2, PXA168_SSP2, 4, 0);
static APBC_CLK(ssp3, PXA168_SSP3, 4, 0);
static APBC_CLK(ssp4, PXA168_SSP4, 4, 0);
static APBC_CLK(ssp5, PXA168_SSP5, 4, 0);
static APBC_CLK(keypad, PXA168_KPC, 0, 32000);
static APMU_CLK(nand, NAND, 0x19b, 156000000);
static APMU_CLK(lcd, LCD, 0x7f, 312000000);
static struct clk_lookup pxa168_clkregs[] = ;
static int __init pxa168_init(void)
postcore_initcall(pxa168_init);
#define TIMER_CLK_RST	(APBC_APBCLK | APBC_FNCLK | APBC_FNCLKSEL(3))
static void __init pxa168_timer_init(void)
struct sys_timer pxa168_timer = ;
void pxa168_clear_keypad_wakeup(void)
PXA168_DEVICE(uart1, "pxa2xx-uart", 0, UART1, 0xd4017000, 0x30, 21, 22);
PXA168_DEVICE(uart2, "pxa2xx-uart", 1, UART2, 0xd4018000, 0x30, 23, 24);
PXA168_DEVICE(twsi0, "pxa2xx-i2c", 0, TWSI0, 0xd4011000, 0x28);
PXA168_DEVICE(twsi1, "pxa2xx-i2c", 1, TWSI1, 0xd4025000, 0x28);
PXA168_DEVICE(pwm1, "pxa168-pwm", 0, NONE, 0xd401a000, 0x10);
PXA168_DEVICE(pwm2, "pxa168-pwm", 1, NONE, 0xd401a400, 0x10);
PXA168_DEVICE(pwm3, "pxa168-pwm", 2, NONE, 0xd401a800, 0x10);
PXA168_DEVICE(pwm4, "pxa168-pwm", 3, NONE, 0xd401ac00, 0x10);
PXA168_DEVICE(nand, "pxa3xx-nand", -1, NAND, 0xd4283000, 0x80, 97, 99);
PXA168_DEVICE(ssp1, "pxa168-ssp", 0, SSP1, 0xd401b000, 0x40, 52, 53);
PXA168_DEVICE(ssp2, "pxa168-ssp", 1, SSP2, 0xd401c000, 0x40, 54, 55);
PXA168_DEVICE(ssp3, "pxa168-ssp", 2, SSP3, 0xd401f000, 0x40, 56, 57);
PXA168_DEVICE(ssp4, "pxa168-ssp", 3, SSP4, 0xd4020000, 0x40, 58, 59);
PXA168_DEVICE(ssp5, "pxa168-ssp", 4, SSP5, 0xd4021000, 0x40, 60, 61);
PXA168_DEVICE(fb, "pxa168-fb", -1, LCD, 0xd420b000, 0x1c8);
PXA168_DEVICE(keypad, "pxa27x-keypad", -1, KEYPAD, 0xd4012000, 0x4c);
