static int omap4_clkdm_add_wkup_sleep_dep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap4_clkdm_del_wkup_sleep_dep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap4_clkdm_read_wkup_sleep_dep(struct clockdomain *clkdm1,
struct clockdomain *clkdm2)
static int omap4_clkdm_clear_all_wkup_sleep_deps(struct clockdomain *clkdm)
static int omap4_clkdm_sleep(struct clockdomain *clkdm)
static int omap4_clkdm_wakeup(struct clockdomain *clkdm)
static void omap4_clkdm_allow_idle(struct clockdomain *clkdm)
static void omap4_clkdm_deny_idle(struct clockdomain *clkdm)
static int omap4_clkdm_clk_enable(struct clockdomain *clkdm)
static int omap4_clkdm_clk_disable(struct clockdomain *clkdm)
struct clkdm_ops omap4_clkdm_operations = ;
