#define __ASM_PLAT_S5P_CLOCK_H __FILE__
#define GET_DIV(clk, field) ((((clk) & field##_MASK) >> field##_SHIFT) + 1)
#define clk_fin_apll clk_ext_xtal_mux
#define clk_fin_mpll clk_ext_xtal_mux
#define clk_fin_epll clk_ext_xtal_mux
#define clk_fin_dpll clk_ext_xtal_mux
#define clk_fin_vpll clk_ext_xtal_mux
#define clk_fin_hpll clk_ext_xtal_mux
extern struct clk clk_ext_xtal_mux;
extern struct clk clk_xusbxti;
extern struct clk clk_48m;
extern struct clk s5p_clk_27m;
extern struct clk clk_fout_apll;
extern struct clk clk_fout_mpll;
extern struct clk clk_fout_epll;
extern struct clk clk_fout_dpll;
extern struct clk clk_fout_vpll;
extern struct clk clk_arm;
extern struct clk clk_vpll;
extern struct clksrc_sources clk_src_apll;
extern struct clksrc_sources clk_src_mpll;
extern struct clksrc_sources clk_src_epll;
extern struct clksrc_sources clk_src_dpll;
extern int s5p_gatectrl(void __iomem *reg, struct clk *clk, int enable);
extern int s5p_epll_enable(struct clk *clk, int enable);
extern unsigned long s5p_epll_get_rate(struct clk *clk);
