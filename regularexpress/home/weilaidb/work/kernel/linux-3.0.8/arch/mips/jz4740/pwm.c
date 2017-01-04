static struct clk *jz4740_pwm_clk;
DEFINE_MUTEX(jz4740_pwm_mutex);
struct pwm_device ;
static struct pwm_device jz4740_pwm_list[] = ;
struct pwm_device *pwm_request(int id, const char *label)
void pwm_free(struct pwm_device *pwm)
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
int pwm_enable(struct pwm_device *pwm)
void pwm_disable(struct pwm_device *pwm)
static int __init jz4740_pwm_init(void)
subsys_initcall(jz4740_pwm_init);
