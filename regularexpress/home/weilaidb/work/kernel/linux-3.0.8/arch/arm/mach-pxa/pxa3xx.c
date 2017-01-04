#define PECR_IE(n)	((1 << ((n) * 2)) << 28)
#define PECR_IS(n)	((1 << ((n) * 2)) << 29)
static DEFINE_PXA3_CKEN(pxa3xx_ffuart, FFUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa3xx_btuart, BTUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa3xx_stuart, STUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa3xx_i2c, I2C, 32842000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_udc, UDC, 48000000, 5);
static DEFINE_PXA3_CKEN(pxa3xx_usbh, USBH, 48000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_u2d, USB2, 48000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_keypad, KEYPAD, 32768, 0);
static DEFINE_PXA3_CKEN(pxa3xx_ssp1, SSP1, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_ssp2, SSP2, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_ssp3, SSP3, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_ssp4, SSP4, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_pwm0, PWM0, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_pwm1, PWM1, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_mmc1, MMC1, 19500000, 0);
static DEFINE_PXA3_CKEN(pxa3xx_mmc2, MMC2, 19500000, 0);
static DEFINE_CK(pxa3xx_lcd, LCD, &clk_pxa3xx_hsio_ops);
static DEFINE_CK(pxa3xx_smemc, SMC, &clk_pxa3xx_smemc_ops);
static DEFINE_CK(pxa3xx_camera, CAMERA, &clk_pxa3xx_hsio_ops);
static DEFINE_CK(pxa3xx_ac97, AC97, &clk_pxa3xx_ac97_ops);
static DEFINE_CLK(pxa3xx_pout, &clk_pxa3xx_pout_ops, 13000000, 70);
static struct clk_lookup pxa3xx_clkregs[] = ;
#define ISRAM_START	0x5c000000
#define ISRAM_SIZE	SZ_256K
static void __iomem *sram;
static unsigned long wakeup_src;
static void pxa3xx_cpu_standby(unsigned int pwrmode)
static void pxa3xx_cpu_pm_suspend(void)
static void pxa3xx_cpu_pm_enter(suspend_state_t state)
static int pxa3xx_cpu_pm_valid(suspend_state_t state)
static struct pxa_cpu_pm_fns pxa3xx_cpu_pm_fns = ;
static void __init pxa3xx_init_pm(void)
static int pxa3xx_set_wake(struct irq_data *d, unsigned int on)
static inline void pxa3xx_init_pm(void)
#define pxa3xx_set_wake	NULL
static void pxa_ack_ext_wakeup(struct irq_data *d)
static void pxa_mask_ext_wakeup(struct irq_data *d)
static void pxa_unmask_ext_wakeup(struct irq_data *d)
static int pxa_set_ext_wakeup_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip pxa_ext_wakeup_chip = ;
static void __init pxa_init_ext_wakeup_irq(set_wake_t fn)
void __init pxa3xx_init_irq(void)
static struct map_desc pxa3xx_io_desc[] __initdata = ;
void __init pxa3xx_map_io(void)
void __init pxa3xx_set_i2c_power_info(struct i2c_pxa_platform_data *info)
static struct platform_device *devices[] __initdata = ;
static int __init pxa3xx_init(void)
postcore_initcall(pxa3xx_init);
