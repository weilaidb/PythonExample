#define VERSION "0.4"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
#undef HACKED_OVERTEMP
static int wf_smu_mach_model;
static struct wf_sensor	*sensor_cpu_power;
static struct wf_sensor	*sensor_cpu_temp;
static struct wf_sensor	*sensor_hd_temp;
static struct wf_control *fan_cpu_main;
static struct wf_control *fan_hd;
static struct wf_control *fan_system;
static struct wf_control *cpufreq_clamp;
static int wf_smu_all_controls_ok, wf_smu_all_sensors_ok, wf_smu_started;
#define FAILURE_FAN		0x01
#define FAILURE_SENSOR		0x02
#define FAILURE_OVERTEMP	0x04
static unsigned int wf_smu_failure_state;
static int wf_smu_readjust, wf_smu_skipping;
struct wf_smu_sys_fans_param ;
#define WF_SMU_SYS_FANS_INTERVAL	5
#define WF_SMU_SYS_FANS_HISTORY_SIZE	2
struct wf_smu_sys_fans_state ;
static struct wf_smu_sys_fans_param wf_smu_sys_all_params[] = ;
#define WF_SMU_SYS_FANS_NUM_CONFIGS ARRAY_SIZE(wf_smu_sys_all_params)
static struct wf_smu_sys_fans_state *wf_smu_sys_fans;
#define WF_SMU_CPU_FANS_INTERVAL	1
#define WF_SMU_CPU_FANS_MAX_HISTORY	16
#define WF_SMU_CPU_FANS_SIBLING_SCALE	0x00001000
#define WF_SMU_CPU_FANS_SIBLING_OFFSET	0xfffffb50
struct wf_smu_cpu_fans_state ;
static struct wf_smu_cpu_fans_state *wf_smu_cpu_fans;
static void wf_smu_create_sys_fans(void)
static void wf_smu_sys_fans_tick(struct wf_smu_sys_fans_state *st)
static void wf_smu_create_cpu_fans(void)
static void wf_smu_cpu_fans_tick(struct wf_smu_cpu_fans_state *st)
static void wf_smu_tick(void)
static void wf_smu_new_control(struct wf_control *ct)
static void wf_smu_new_sensor(struct wf_sensor *sr)
static int wf_smu_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block wf_smu_events = ;
static int wf_init_pm(void)
static int wf_smu_probe(struct platform_device *ddev)
static int __devexit wf_smu_remove(struct platform_device *ddev)
static struct platform_driver wf_smu_driver = ;
static int __init wf_smu_init(void)
static void __exit wf_smu_exit(void)
module_init(wf_smu_init);
module_exit(wf_smu_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("Thermal control logic for iMac G5");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:windfarm");
