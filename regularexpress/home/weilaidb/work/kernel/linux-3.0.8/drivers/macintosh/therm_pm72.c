#define VERSION "1.3"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
static struct platform_device *		of_dev;
static struct i2c_adapter *		u3_0;
static struct i2c_adapter *		u3_1;
static struct i2c_adapter *		k2;
static struct i2c_client *		fcu;
static struct cpu_pid_state		processor_state[2];
static struct basckside_pid_params	backside_params;
static struct backside_pid_state	backside_state;
static struct drives_pid_state		drives_state;
static struct dimm_pid_state		dimms_state;
static struct slots_pid_state		slots_state;
static int				state;
static int				cpu_count;
static int				cpu_pid_type;
static struct task_struct		*ctrl_task;
static struct completion		ctrl_complete;
static int				critical_state;
static int				rackmac;
static s32				dimm_output_clamp;
static int 				fcu_rpm_shift;
static int				fcu_tickle_ticks;
static DEFINE_MUTEX(driver_lock);
#define CPU_PID_TYPE_SPLIT	0
#define CPU_PID_TYPE_COMBINED	1
#define CPU_PID_TYPE_RACKMAC	2
struct fcu_fan_table
;
#define FCU_FAN_RPM		0
#define FCU_FAN_PWM		1
#define FCU_FAN_ABSENT_ID	-1
#define FCU_FAN_COUNT		ARRAY_SIZE(fcu_fans)
struct fcu_fan_table	fcu_fans[] = ;
static struct i2c_driver therm_pm72_driver;
static struct i2c_client *attach_i2c_chip(int id, const char *name)
static void initialize_adc(struct cpu_pid_state *state)
static int read_smon_adc(struct cpu_pid_state *state, int chan)
static int read_lm87_reg(struct i2c_client * chip, int reg)
static int fan_read_reg(int reg, unsigned char *buf, int nb)
static int fan_write_reg(int reg, const unsigned char *ptr, int nb)
static int start_fcu(void)
static int set_rpm_fan(int fan_index, int rpm)
static int get_rpm_fan(int fan_index, int programmed)
static int set_pwm_fan(int fan_index, int pwm)
static int get_pwm_fan(int fan_index)
static void tickle_fcu(void)
static int read_eeprom(int cpu, struct mpu_data *out)
static void fetch_cpu_pumps_minmax(void)
#define BUILD_SHOW_FUNC_FIX(name, data)				\
static ssize_t show_##name(struct device *dev, struct device_attribute *attr, char *buf)	\
#define BUILD_SHOW_FUNC_INT(name, data)				\
static ssize_t show_##name(struct device *dev, struct device_attribute *attr, char *buf)	\
BUILD_SHOW_FUNC_FIX(cpu0_temperature, processor_state[0].last_temp)
BUILD_SHOW_FUNC_FIX(cpu0_voltage, processor_state[0].voltage)
BUILD_SHOW_FUNC_FIX(cpu0_current, processor_state[0].current_a)
BUILD_SHOW_FUNC_INT(cpu0_exhaust_fan_rpm, processor_state[0].rpm)
BUILD_SHOW_FUNC_INT(cpu0_intake_fan_rpm, processor_state[0].intake_rpm)
BUILD_SHOW_FUNC_FIX(cpu1_temperature, processor_state[1].last_temp)
BUILD_SHOW_FUNC_FIX(cpu1_voltage, processor_state[1].voltage)
BUILD_SHOW_FUNC_FIX(cpu1_current, processor_state[1].current_a)
BUILD_SHOW_FUNC_INT(cpu1_exhaust_fan_rpm, processor_state[1].rpm)
BUILD_SHOW_FUNC_INT(cpu1_intake_fan_rpm, processor_state[1].intake_rpm)
BUILD_SHOW_FUNC_FIX(backside_temperature, backside_state.last_temp)
BUILD_SHOW_FUNC_INT(backside_fan_pwm, backside_state.pwm)
BUILD_SHOW_FUNC_FIX(drives_temperature, drives_state.last_temp)
BUILD_SHOW_FUNC_INT(drives_fan_rpm, drives_state.rpm)
BUILD_SHOW_FUNC_FIX(slots_temperature, slots_state.last_temp)
BUILD_SHOW_FUNC_INT(slots_fan_pwm, slots_state.pwm)
BUILD_SHOW_FUNC_FIX(dimms_temperature, dimms_state.last_temp)
static DEVICE_ATTR(cpu0_temperature,S_IRUGO,show_cpu0_temperature,NULL);
static DEVICE_ATTR(cpu0_voltage,S_IRUGO,show_cpu0_voltage,NULL);
static DEVICE_ATTR(cpu0_current,S_IRUGO,show_cpu0_current,NULL);
static DEVICE_ATTR(cpu0_exhaust_fan_rpm,S_IRUGO,show_cpu0_exhaust_fan_rpm,NULL);
static DEVICE_ATTR(cpu0_intake_fan_rpm,S_IRUGO,show_cpu0_intake_fan_rpm,NULL);
static DEVICE_ATTR(cpu1_temperature,S_IRUGO,show_cpu1_temperature,NULL);
static DEVICE_ATTR(cpu1_voltage,S_IRUGO,show_cpu1_voltage,NULL);
static DEVICE_ATTR(cpu1_current,S_IRUGO,show_cpu1_current,NULL);
static DEVICE_ATTR(cpu1_exhaust_fan_rpm,S_IRUGO,show_cpu1_exhaust_fan_rpm,NULL);
static DEVICE_ATTR(cpu1_intake_fan_rpm,S_IRUGO,show_cpu1_intake_fan_rpm,NULL);
static DEVICE_ATTR(backside_temperature,S_IRUGO,show_backside_temperature,NULL);
static DEVICE_ATTR(backside_fan_pwm,S_IRUGO,show_backside_fan_pwm,NULL);
static DEVICE_ATTR(drives_temperature,S_IRUGO,show_drives_temperature,NULL);
static DEVICE_ATTR(drives_fan_rpm,S_IRUGO,show_drives_fan_rpm,NULL);
static DEVICE_ATTR(slots_temperature,S_IRUGO,show_slots_temperature,NULL);
static DEVICE_ATTR(slots_fan_pwm,S_IRUGO,show_slots_fan_pwm,NULL);
static DEVICE_ATTR(dimms_temperature,S_IRUGO,show_dimms_temperature,NULL);
static int do_read_one_cpu_values(struct cpu_pid_state *state, s32 *temp, s32 *power)
static void do_cpu_pid(struct cpu_pid_state *state, s32 temp, s32 power)
static void do_monitor_cpu_combined(void)
static void do_monitor_cpu_split(struct cpu_pid_state *state)
static void do_monitor_cpu_rack(struct cpu_pid_state *state)
static int init_processor_state(struct cpu_pid_state *state, int index)
static void dispose_processor_state(struct cpu_pid_state *state)
static void do_monitor_backside(struct backside_pid_state *state)
static int init_backside_state(struct backside_pid_state *state)
static void dispose_backside_state(struct backside_pid_state *state)
static void do_monitor_drives(struct drives_pid_state *state)
static int init_drives_state(struct drives_pid_state *state)
static void dispose_drives_state(struct drives_pid_state *state)
static void do_monitor_dimms(struct dimm_pid_state *state)
static int init_dimms_state(struct dimm_pid_state *state)
static void dispose_dimms_state(struct dimm_pid_state *state)
static void do_monitor_slots(struct slots_pid_state *state)
static int init_slots_state(struct slots_pid_state *state)
static void dispose_slots_state(struct slots_pid_state *state)
static int call_critical_overtemp(void)
static int main_control_loop(void *x)
static void dispose_control_loops(void)
static int create_control_loops(void)
static void start_control_loops(void)
static void stop_control_loops(void)
static int attach_fcu(void)
static void detach_fcu(void)
static int therm_pm72_attach(struct i2c_adapter *adapter)
static int therm_pm72_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int therm_pm72_remove(struct i2c_client *client)
static const struct i2c_device_id therm_pm72_id[] = ;
static struct i2c_driver therm_pm72_driver = ;
static int fan_check_loc_match(const char *loc, int fan)
static void fcu_lookup_fans(struct device_node *fcu_node)
static int fcu_of_probe(struct platform_device* dev)
static int fcu_of_remove(struct platform_device* dev)
static const struct of_device_id fcu_match[] =
;
MODULE_DEVICE_TABLE(of, fcu_match);
static struct platform_driver fcu_of_platform_driver =
;
static int __init therm_pm72_init(void)
static void __exit therm_pm72_exit(void)
module_init(therm_pm72_init);
module_exit(therm_pm72_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("Driver for Apple's PowerMac G5 thermal control");
MODULE_LICENSE("GPL");
