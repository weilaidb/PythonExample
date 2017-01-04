static struct mfp_addr_map pxa95x_mfp_addr_map[] __initdata = ;
static DEFINE_CK(pxa95x_lcd, LCD, &clk_pxa3xx_hsio_ops);
static DEFINE_CLK(pxa95x_pout, &clk_pxa3xx_pout_ops, 13000000, 70);
static DEFINE_PXA3_CKEN(pxa95x_ffuart, FFUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa95x_btuart, BTUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa95x_stuart, STUART, 14857000, 1);
static DEFINE_PXA3_CKEN(pxa95x_i2c, I2C, 32842000, 0);
static DEFINE_PXA3_CKEN(pxa95x_keypad, KEYPAD, 32768, 0);
static DEFINE_PXA3_CKEN(pxa95x_ssp1, SSP1, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa95x_ssp2, SSP2, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa95x_ssp3, SSP3, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa95x_ssp4, SSP4, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa95x_pwm0, PWM0, 13000000, 0);
static DEFINE_PXA3_CKEN(pxa95x_pwm1, PWM1, 13000000, 0);
static struct clk_lookup pxa95x_clkregs[] = ;
void __init pxa95x_init_irq(void)
void __init pxa95x_set_i2c_power_info(struct i2c_pxa_platform_data *info)
static struct platform_device *devices[] __initdata = ;
static int __init pxa95x_init(void)
postcore_initcall(pxa95x_init);
