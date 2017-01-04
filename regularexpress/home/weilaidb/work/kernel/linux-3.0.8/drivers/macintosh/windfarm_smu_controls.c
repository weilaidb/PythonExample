#define VERSION "0.4"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
static int smu_supports_new_fans_ops = 1;
static LIST_HEAD(smu_fans);
struct smu_fan_control ;
#define to_smu_fan(c) container_of(c, struct smu_fan_control, ctrl)
static int smu_set_fan(int pwm, u8 id, u16 value)
static void smu_fan_release(struct wf_control *ct)
static int smu_fan_set(struct wf_control *ct, s32 value)
static int smu_fan_get(struct wf_control *ct, s32 *value)
static s32 smu_fan_min(struct wf_control *ct)
static s32 smu_fan_max(struct wf_control *ct)
static struct wf_control_ops smu_fan_ops = ;
static struct smu_fan_control *smu_fan_create(struct device_node *node,
int pwm_fan)
static int __init smu_controls_init(void)
static void __exit smu_controls_exit(void)
module_init(smu_controls_init);
module_exit(smu_controls_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("SMU control objects for PowerMacs thermal control");
MODULE_LICENSE("GPL");
