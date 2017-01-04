#undef ENVCTRL_TRACE
struct temp_limits ;
static struct temp_limits cpu_temp_limits[2] = ;
static struct temp_limits amb_temp_limits[2] = ;
static LIST_HEAD(all_temps);
static LIST_HEAD(all_fans);
#define CPU_FAN_REG	0xf0
#define SYS_FAN_REG	0xf2
#define PSUPPLY_FAN_REG	0xf4
#define FAN_SPEED_MIN	0x0c
#define FAN_SPEED_MAX	0x3f
#define PSUPPLY_FAN_ON	0x1f
#define PSUPPLY_FAN_OFF	0x00
static void set_fan_speeds(struct bbc_fan_control *fp)
static void get_current_temps(struct bbc_cpu_temperature *tp)
static void do_envctrl_shutdown(struct bbc_cpu_temperature *tp)
#define WARN_INTERVAL	(30 * HZ)
static void analyze_ambient_temp(struct bbc_cpu_temperature *tp, unsigned long *last_warn, int tick)
static void analyze_cpu_temp(struct bbc_cpu_temperature *tp, unsigned long *last_warn, int tick)
static void analyze_temps(struct bbc_cpu_temperature *tp, unsigned long *last_warn)
static enum fan_action prioritize_fan_action(int which_fan)
static int maybe_new_ambient_fan_speed(struct bbc_fan_control *fp)
static int maybe_new_cpu_fan_speed(struct bbc_fan_control *fp)
static void maybe_new_fan_speeds(struct bbc_fan_control *fp)
static void fans_full_blast(void)
#define POLL_INTERVAL	(5 * 1000)
static unsigned long last_warning_jiffies;
static struct task_struct *kenvctrld_task;
static int kenvctrld(void *__unused)
static void attach_one_temp(struct bbc_i2c_bus *bp, struct platform_device *op,
int temp_idx)
static void attach_one_fan(struct bbc_i2c_bus *bp, struct platform_device *op,
int fan_idx)
static void destroy_one_temp(struct bbc_cpu_temperature *tp)
static void destroy_all_temps(struct bbc_i2c_bus *bp)
static void destroy_one_fan(struct bbc_fan_control *fp)
static void destroy_all_fans(struct bbc_i2c_bus *bp)
int bbc_envctrl_init(struct bbc_i2c_bus *bp)
void bbc_envctrl_cleanup(struct bbc_i2c_bus *bp)
