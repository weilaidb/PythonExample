#define LED_PWM_CTRL1	0xF4
#define LED_PWM_CTRL2	0xF5
#define PWM_CTRL1_MAX	255
#define PWM_CTRL2_DIS_PD	(1 << 6)
#define PWM_CTRL2_CURR_02	(2 << 4)
#define PWM_CTRL2_SRC_VAC	(1 << 2)
#define PWM_CTRL2_MODE_HW	(0 << 0)
#define PWM_CTRL2_MODE_SW	(1 << 0)
#define PWM_CTRL2_MODE_DIS	(2 << 0)
#define PWM_CTRL2_MODE_MASK	0x3
struct pwm_device ;
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
EXPORT_SYMBOL(pwm_config);
int pwm_enable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_enable);
void pwm_disable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_disable);
struct pwm_device *pwm_request(int pwm_id, const char *label)
EXPORT_SYMBOL(pwm_request);
void pwm_free(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_free);
