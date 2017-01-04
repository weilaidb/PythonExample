#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
void wf_pid_init(struct wf_pid_state *st, struct wf_pid_param *param)
EXPORT_SYMBOL_GPL(wf_pid_init);
s32 wf_pid_run(struct wf_pid_state *st, s32 new_sample)
EXPORT_SYMBOL_GPL(wf_pid_run);
void wf_cpu_pid_init(struct wf_cpu_pid_state *st,
struct wf_cpu_pid_param *param)
EXPORT_SYMBOL_GPL(wf_cpu_pid_init);
s32 wf_cpu_pid_run(struct wf_cpu_pid_state *st, s32 new_power, s32 new_temp)
EXPORT_SYMBOL_GPL(wf_cpu_pid_run);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("PID algorithm for PowerMacs thermal control");
MODULE_LICENSE("GPL");
