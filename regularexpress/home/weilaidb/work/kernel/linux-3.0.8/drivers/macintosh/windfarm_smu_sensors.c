#define VERSION "0.2"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
static struct smu_sdbp_cpuvcp *cpuvcp;
static int  cpuvcp_version;
static struct smu_sdbp_cpudiode *cpudiode;
static struct smu_sdbp_slotspow *slotspow;
static u8 *debugswitches;
static LIST_HEAD(smu_ads);
struct smu_ad_sensor ;
#define to_smu_ads(c) container_of(c, struct smu_ad_sensor, sens)
static void smu_ads_release(struct wf_sensor *sr)
static int smu_read_adc(u8 id, s32 *value)
static int smu_cputemp_get(struct wf_sensor *sr, s32 *value)
static int smu_cpuamp_get(struct wf_sensor *sr, s32 *value)
static int smu_cpuvolt_get(struct wf_sensor *sr, s32 *value)
static int smu_slotspow_get(struct wf_sensor *sr, s32 *value)
static struct wf_sensor_ops smu_cputemp_ops = ;
static struct wf_sensor_ops smu_cpuamp_ops = ;
static struct wf_sensor_ops smu_cpuvolt_ops = ;
static struct wf_sensor_ops smu_slotspow_ops = ;
static struct smu_ad_sensor *smu_ads_create(struct device_node *node)
struct smu_cpu_power_sensor ;
#define to_smu_cpu_power(c) container_of(c, struct smu_cpu_power_sensor, sens)
static struct smu_cpu_power_sensor *smu_cpu_power;
static void smu_cpu_power_release(struct wf_sensor *sr)
static int smu_cpu_power_get(struct wf_sensor *sr, s32 *value)
static struct wf_sensor_ops smu_cpu_power_ops = ;
static struct smu_cpu_power_sensor *
smu_cpu_power_create(struct wf_sensor *volts, struct wf_sensor *amps)
static void smu_fetch_param_partitions(void)
static int __init smu_sensors_init(void)
static void __exit smu_sensors_exit(void)
module_init(smu_sensors_init);
module_exit(smu_sensors_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("SMU sensor objects for PowerMacs thermal control");
MODULE_LICENSE("GPL");
