static struct cpuidle_params cpuidle_params_table[] = ;
#define OMAP3_NUM_STATES ARRAY_SIZE(cpuidle_params_table)
struct omap3_idle_statedata ;
struct omap3_idle_statedata omap3_idle_data[OMAP3_NUM_STATES];
struct powerdomain *mpu_pd, *core_pd, *per_pd, *cam_pd;
static int _cpuidle_allow_idle(struct powerdomain *pwrdm,
struct clockdomain *clkdm)
static int _cpuidle_deny_idle(struct powerdomain *pwrdm,
struct clockdomain *clkdm)
static int omap3_enter_idle(struct cpuidle_device *dev,
struct cpuidle_state *state)
static struct cpuidle_state *next_valid_state(struct cpuidle_device *dev,
struct cpuidle_state *curr)
static int omap3_enter_idle_bm(struct cpuidle_device *dev,
struct cpuidle_state *state)
DEFINE_PER_CPU(struct cpuidle_device, omap3_idle_dev);
void omap3_pm_init_cpuidle(struct cpuidle_params *cpuidle_board_params)
struct cpuidle_driver omap3_idle_driver = ;
static inline struct omap3_idle_statedata *_fill_cstate(
struct cpuidle_device *dev,
int idx, const char *descr)
int __init omap3_idle_init(void)
int __init omap3_idle_init(void)
