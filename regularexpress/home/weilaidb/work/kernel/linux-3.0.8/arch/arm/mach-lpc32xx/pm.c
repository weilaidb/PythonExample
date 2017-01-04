#define TEMP_IRAM_AREA  IO_ADDRESS(LPC32XX_IRAM_BASE)
static int lpc32xx_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops lpc32xx_pm_ops = ;
#define EMC_DYN_MEM_CTRL_OFS 0x20
#define EMC_SRMMC           (1 << 3)
#define EMC_CTRL_REG io_p2v(LPC32XX_EMC_BASE + EMC_DYN_MEM_CTRL_OFS)
static int __init lpc32xx_pm_init(void)
arch_initcall(lpc32xx_pm_init);
