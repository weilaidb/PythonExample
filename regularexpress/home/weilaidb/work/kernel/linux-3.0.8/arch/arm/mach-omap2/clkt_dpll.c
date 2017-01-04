#undef DEBUG
#define DPLL_MIN_MULTIPLIER		2
#define DPLL_MIN_DIVIDER		1
#define DPLL_MULT_UNDERFLOW		-1
#define DPLL_SCALE_FACTOR		64
#define DPLL_SCALE_BASE			2
#define DPLL_ROUNDING_VAL		((DPLL_SCALE_BASE / 2) * \
(DPLL_SCALE_FACTOR / DPLL_SCALE_BASE))
#define DPLL_FINT_BAND1_MIN		750000
#define DPLL_FINT_BAND1_MAX		2100000
#define DPLL_FINT_BAND2_MIN		7500000
#define DPLL_FINT_BAND2_MAX		21000000
#define DPLL_FINT_UNDERFLOW		-1
#define DPLL_FINT_INVALID		-2
static int _dpll_test_fint(struct clk *clk, u8 n)
static unsigned long _dpll_compute_new_rate(unsigned long parent_rate,
unsigned int m, unsigned int n)
static int _dpll_test_mult(int *m, int n, unsigned long *new_rate,
unsigned long target_rate,
unsigned long parent_rate)
void omap2_init_dpll_parent(struct clk *clk)
u32 omap2_get_dpll_rate(struct clk *clk)
long omap2_dpll_round_rate(struct clk *clk, unsigned long target_rate)
