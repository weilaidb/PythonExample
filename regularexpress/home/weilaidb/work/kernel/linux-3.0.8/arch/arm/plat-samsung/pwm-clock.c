static struct clk clk_timer_scaler[];
static unsigned long clk_pwm_scaler_get_rate(struct clk *clk)
static unsigned long clk_pwm_scaler_round_rate(struct clk *clk,
unsigned long rate)
static int clk_pwm_scaler_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops clk_pwm_scaler_ops = ;
static struct clk clk_timer_scaler[] = ;
static struct clk clk_timer_tclk[] = ;
struct pwm_tdiv_clk ;
static inline struct pwm_tdiv_clk *to_tdiv(struct clk *clk)
static unsigned long clk_pwm_tdiv_get_rate(struct clk *clk)
static unsigned long clk_pwm_tdiv_round_rate(struct clk *clk,
unsigned long rate)
static unsigned long clk_pwm_tdiv_bits(struct pwm_tdiv_clk *divclk)
static void clk_pwm_tdiv_update(struct pwm_tdiv_clk *divclk)
static int clk_pwm_tdiv_set_rate(struct clk *clk, unsigned long rate)
static struct clk_ops clk_tdiv_ops = ;
static struct pwm_tdiv_clk clk_timer_tdiv[] = ;
static int __init clk_pwm_tdiv_register(unsigned int id)
static inline struct clk *s3c24xx_pwmclk_tclk(unsigned int id)
static inline struct clk *s3c24xx_pwmclk_tdiv(unsigned int id)
static int clk_pwm_tin_set_parent(struct clk *clk, struct clk *parent)
static struct clk_ops clk_tin_ops = ;
static struct clk clk_tin[] = ;
static __init int clk_pwm_tin_register(struct clk *pwm)
__init void s3c_pwmclk_init(void)
