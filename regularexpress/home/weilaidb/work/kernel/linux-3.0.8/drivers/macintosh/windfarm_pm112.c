#define VERSION "0.2"
#define DEBUG
#undef LOTSA_DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
#define DBG_LOTS(args...)	printk(args)
#define DBG_LOTS(args...)	do  while(0)
#undef HACKED_OVERTEMP
#define NR_CHIPS	2
#define NR_CORES	4
#define NR_CPU_FANS	3 * NR_CHIPS
static struct wf_sensor *sens_cpu_temp[NR_CORES];
static struct wf_sensor *sens_cpu_power[NR_CORES];
static struct wf_sensor *hd_temp;
static struct wf_sensor *slots_power;
static struct wf_sensor *u4_temp;
static struct wf_control *cpu_fans[NR_CPU_FANS];
static char *cpu_fan_names[NR_CPU_FANS] = ;
static struct wf_control *cpufreq_clamp;
#define CPU_FANS_REQD		(NR_CPU_FANS - 2)
#define FIRST_PUMP		4
#define LAST_PUMP		5
#define CPU_TEMP_HIST_SIZE	180
static int cpu_fan_scale[NR_CPU_FANS] = ;
static struct wf_control *backside_fan;
static struct wf_control *slots_fan;
static struct wf_control *drive_bay_fan;
static struct wf_cpu_pid_state cpu_pid[NR_CORES];
static u32 cpu_thist[CPU_TEMP_HIST_SIZE];
static int cpu_thist_pt;
static s64 cpu_thist_total;
static s32 cpu_all_tmax = 100 << 16;
static int cpu_last_target;
static struct wf_pid_state backside_pid;
static int backside_tick;
static struct wf_pid_state slots_pid;
static int slots_started;
static struct wf_pid_state drive_bay_pid;
static int drive_bay_tick;
static int nr_cores;
static int have_all_controls;
static int have_all_sensors;
static int started;
static int failure_state;
#define FAILURE_SENSOR		1
#define FAILURE_FAN		2
#define FAILURE_PERM		4
#define FAILURE_LOW_OVERTEMP	8
#define FAILURE_HIGH_OVERTEMP	16
#define LOW_OVER_AVERAGE	0
#define LOW_OVER_IMMEDIATE	(10 << 16)
#define LOW_OVER_CLEAR		((-10) << 16)
#define HIGH_OVER_IMMEDIATE	(14 << 16)
#define HIGH_OVER_AVERAGE	(10 << 16)
#define HIGH_OVER_IMMEDIATE	(14 << 16)
static int create_cpu_loop(int cpu)
static void cpu_max_all_fans(void)
static int cpu_check_overtemp(s32 temp)
static void cpu_fans_tick(void)
static struct wf_pid_param backside_param = ;
static void backside_fan_tick(void)
static struct wf_pid_param drive_bay_prm = ;
static void drive_bay_fan_tick(void)
static struct wf_pid_param slots_param = ;
static void slots_fan_tick(void)
static void set_fail_state(void)
static void pm112_tick(void)
static void pm112_new_control(struct wf_control *ct)
static void pm112_new_sensor(struct wf_sensor *sr)
static int pm112_wf_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block pm112_events = ;
static int wf_pm112_probe(struct platform_device *dev)
static int __devexit wf_pm112_remove(struct platform_device *dev)
static struct platform_driver wf_pm112_driver = ;
static int __init wf_pm112_init(void)
static void __exit wf_pm112_exit(void)
module_init(wf_pm112_init);
module_exit(wf_pm112_exit);
MODULE_AUTHOR("Paul Mackerras <paulus@samba.org>");
MODULE_DESCRIPTION("Thermal control for PowerMac11,2");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:windfarm");
