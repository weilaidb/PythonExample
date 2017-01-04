#undef DEBUG
static LIST_HEAD(clkdm_list);
static struct clkdm_autodep *autodeps;
static struct clkdm_ops *arch_clkdm;
static struct clockdomain *_clkdm_lookup(const char *name)
static int _clkdm_register(struct clockdomain *clkdm)
static struct clkdm_dep *_clkdm_deps_lookup(struct clockdomain *clkdm,
struct clkdm_dep *deps)
static void _autodep_lookup(struct clkdm_autodep *autodep)
void _clkdm_add_autodeps(struct clockdomain *clkdm)
void _clkdm_del_autodeps(struct clockdomain *clkdm)
static void _resolve_clkdm_deps(struct clockdomain *clkdm,
struct clkdm_dep *clkdm_deps)
void clkdm_init(struct clockdomain **clkdms,
struct clkdm_autodep *init_autodeps,
struct clkdm_ops *custom_funcs)
struct clockdomain *clkdm_lookup(const char *name)
int clkdm_for_each(int (*fn)(struct clockdomain *clkdm, void *user),
void *user)
struct powerdomain *clkdm_get_pwrdm(struct clockdomain *clkdm)
int clkdm_add_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_del_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_read_wkdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_clear_all_wkdeps(struct clockdomain *clkdm)
int clkdm_add_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_del_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_read_sleepdep(struct clockdomain *clkdm1, struct clockdomain *clkdm2)
int clkdm_clear_all_sleepdeps(struct clockdomain *clkdm)
int clkdm_sleep(struct clockdomain *clkdm)
int clkdm_wakeup(struct clockdomain *clkdm)
void clkdm_allow_idle(struct clockdomain *clkdm)
void clkdm_deny_idle(struct clockdomain *clkdm)
int clkdm_clk_enable(struct clockdomain *clkdm, struct clk *clk)
int clkdm_clk_disable(struct clockdomain *clkdm, struct clk *clk)
