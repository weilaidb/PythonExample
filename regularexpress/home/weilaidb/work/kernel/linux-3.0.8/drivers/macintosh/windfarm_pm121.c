#undef	DEBUG
#define VERSION "0.3"
static int pm121_mach_model;
static struct wf_sensor	*sensor_cpu_power;
static struct wf_sensor	*sensor_cpu_temp;
static struct wf_sensor	*sensor_cpu_voltage;
static struct wf_sensor	*sensor_cpu_current;
static struct wf_sensor	*sensor_gpu_temp;
static struct wf_sensor	*sensor_north_bridge_temp;
static struct wf_sensor	*sensor_hard_drive_temp;
static struct wf_sensor	*sensor_optical_drive_temp;
static struct wf_sensor	*sensor_incoming_air_temp;
enum ;
static struct wf_control *controls[N_CONTROLS] = ;
static int pm121_all_controls_ok, pm121_all_sensors_ok, pm121_started;
enum ;
enum ;
static const char *loop_names[N_LOOPS] = ;
#define	PM121_NUM_CONFIGS	2
static unsigned int pm121_failure_state;
static int pm121_readjust, pm121_skipping;
static s32 average_power;
struct pm121_correction ;
static struct pm121_correction corrections[N_CONTROLS][PM121_NUM_CONFIGS] = ;
struct pm121_connection ;
static struct pm121_connection pm121_connections[] = ;
static struct pm121_connection *pm121_connection;
struct pm121_sys_param ;
static struct pm121_sys_param
pm121_sys_all_params[N_LOOPS][PM121_NUM_CONFIGS] = ;
#define	PM121_SYS_GD		0x00000000
#define	PM121_SYS_GR		0x00019999
#define	PM121_SYS_HISTORY_SIZE	2
#define	PM121_SYS_INTERVAL	5
struct pm121_sys_state ;
struct pm121_sys_state *pm121_sys_state[N_LOOPS] = ;
#define PM121_CPU_INTERVAL	1
struct pm121_cpu_state ;
static struct pm121_cpu_state *pm121_cpu_state;
static s32 pm121_correct(s32 new_setpoint,
unsigned int control_id,
s32 min)
static s32 pm121_connect(unsigned int control_id, s32 setpoint)
static void pm121_create_sys_fans(int loop_id)
static void pm121_sys_fans_tick(int loop_id)
static void pm121_create_cpu_fans(void)
static void pm121_cpu_fans_tick(struct pm121_cpu_state *st)
static void pm121_tick(void)
static struct wf_control* pm121_register_control(struct wf_control *ct,
const char *match,
unsigned int id)
static void pm121_new_control(struct wf_control *ct)
static struct wf_sensor* pm121_register_sensor(struct wf_sensor *sensor,
const char *match,
struct wf_sensor **var)
static void pm121_new_sensor(struct wf_sensor *sr)
static int pm121_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block pm121_events = ;
static int pm121_init_pm(void)
static int pm121_probe(struct platform_device *ddev)
static int __devexit pm121_remove(struct platform_device *ddev)
static struct platform_driver pm121_driver = ;
static int __init pm121_init(void)
static void __exit pm121_exit(void)
module_init(pm121_init);
module_exit(pm121_exit);
MODULE_AUTHOR("Étienne Bersac <bersace@gmail.com>");
MODULE_DESCRIPTION("Thermal control logic for iMac G5 (iSight)");
MODULE_LICENSE("GPL");
