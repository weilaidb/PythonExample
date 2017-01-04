#define __ARCH_ARM_MACH_OMAP1_CLOCK_H
extern int __init omap1_clk_init(void);
extern int omap1_clk_enable(struct clk *clk);
extern void omap1_clk_disable(struct clk *clk);
extern long omap1_clk_round_rate(struct clk *clk, unsigned long rate);
extern int omap1_clk_set_rate(struct clk *clk, unsigned long rate);
extern unsigned long omap1_ckctl_recalc(struct clk *clk);
extern int omap1_set_sossi_rate(struct clk *clk, unsigned long rate);
extern unsigned long omap1_sossi_recalc(struct clk *clk);
extern unsigned long omap1_ckctl_recalc_dsp_domain(struct clk *clk);
extern int omap1_clk_set_rate_dsp_domain(struct clk *clk, unsigned long rate);
extern int omap1_set_uart_rate(struct clk *clk, unsigned long rate);
extern unsigned long omap1_uart_recalc(struct clk *clk);
extern int omap1_set_ext_clk_rate(struct clk *clk, unsigned long rate);
extern long omap1_round_ext_clk_rate(struct clk *clk, unsigned long rate);
extern void omap1_init_ext_clk(struct clk *clk);
extern int omap1_select_table_rate(struct clk *clk, unsigned long rate);
extern long omap1_round_to_table_rate(struct clk *clk, unsigned long rate);
extern int omap1_clk_set_rate_ckctl_arm(struct clk *clk, unsigned long rate);
extern long omap1_clk_round_rate_ckctl_arm(struct clk *clk, unsigned long rate);
extern unsigned long omap1_watchdog_recalc(struct clk *clk);
extern void omap1_clk_disable_unused(struct clk *clk);
#define omap1_clk_disable_unused	NULL
struct uart_clk ;
struct arm_idlect1_clk ;
#define CKCTL_PERDIV_OFFSET	0
#define CKCTL_LCDDIV_OFFSET	2
#define CKCTL_ARMDIV_OFFSET	4
#define CKCTL_DSPDIV_OFFSET	6
#define CKCTL_TCDIV_OFFSET	8
#define CKCTL_DSPMMUDIV_OFFSET	10
#define EN_DSPCK		13
#define CKCTL_DSPPERDIV_OFFSET	0
#define EN_WDTCK	0
#define EN_XORPCK	1
#define EN_PERCK	2
#define EN_LCDCK	3
#define EN_LBCK		4
#define EN_APICK	6
#define EN_TIMCK	7
#define DMACK_REQ	8
#define EN_GPIOCK	9
#define EN_CKOUT_ARM	11
#define EN_OCPI_CK	0
#define EN_TC1_CK	2
#define EN_TC2_CK	4
#define EN_DSPTIMCK	5
#define SDW_MCLK_INV_BIT	2
#define USB_MCLK_EN_BIT		4
#define USB_HOST_HHC_UHOST_EN	9
#define SWD_ULPD_PLL_CLK_REQ	1
#define COM_ULPD_PLL_CLK_REQ	1
#define SWD_CLK_DIV_CTRL_SEL	0xfffe0874
#define COM_CLK_DIV_CTRL_SEL	0xfffe0878
#define SOFT_REQ_REG		0xfffe0834
#define SOFT_REQ_REG2		0xfffe0880
extern __u32 arm_idlect1_mask;
extern struct clk *api_ck_p, *ck_dpll1_p, *ck_ref_p;
extern const struct clkops clkops_dspck;
extern const struct clkops clkops_dummy;
extern const struct clkops clkops_uart_16xx;
extern const struct clkops clkops_generic;
