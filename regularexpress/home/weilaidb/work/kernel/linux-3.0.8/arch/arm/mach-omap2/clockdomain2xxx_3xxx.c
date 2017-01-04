static int omap2_clkdm_add_wkdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap2_clkdm_del_wkdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap2_clkdm_read_wkdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap2_clkdm_clear_all_wkdeps(struct clockdomain *clkdm)
static int omap3_clkdm_add_sleepdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap3_clkdm_del_sleepdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap3_clkdm_read_sleepdep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap3_clkdm_clear_all_sleepdeps(struct clockdomain *clkdm)
static int omap2_clkdm_sleep(struct clockdomain *clkdm)
static int omap2_clkdm_wakeup(struct clockdomain *clkdm)
static void omap2_clkdm_allow_idle(struct clockdomain *clkdm)
static void omap2_clkdm_deny_idle(struct clockdomain *clkdm)
static void _enable_hwsup(struct clockdomain *clkdm)
static void _disable_hwsup(struct clockdomain *clkdm)
static int omap2_clkdm_clk_enable(struct clockdomain *clkdm)
static int omap2_clkdm_clk_disable(struct clockdomain *clkdm)
static int omap3_clkdm_sleep(struct clockdomain *clkdm)
static int omap3_clkdm_wakeup(struct clockdomain *clkdm)
static void omap3_clkdm_allow_idle(struct clockdomain *clkdm)
static void omap3_clkdm_deny_idle(struct clockdomain *clkdm)
struct clkdm_ops omap2_clkdm_operations = ;
struct clkdm_ops omap3_clkdm_operations = ;
