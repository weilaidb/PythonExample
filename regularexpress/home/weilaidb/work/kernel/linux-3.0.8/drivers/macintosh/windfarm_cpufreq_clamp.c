#define VERSION "0.3"
static int clamped;
static struct wf_control *clamp_control;
static int clamp_notifier_call(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block clamp_notifier = ;
static int clamp_set(struct wf_control *ct, s32 value)
static int clamp_get(struct wf_control *ct, s32 *value)
static s32 clamp_min(struct wf_control *ct)
static s32 clamp_max(struct wf_control *ct)
static struct wf_control_ops clamp_ops = ;
static int __init wf_cpufreq_clamp_init(void)
static void __exit wf_cpufreq_clamp_exit(void)
module_init(wf_cpufreq_clamp_init);
module_exit(wf_cpufreq_clamp_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("CPU frequency clamp for PowerMacs thermal control");
MODULE_LICENSE("GPL");
