#define TRACE_ON 1
#define TRACE_OFF 0
static void send_dm_alert(struct work_struct *unused);
static int trace_state = TRACE_OFF;
static DEFINE_SPINLOCK(trace_state_lock);
struct per_cpu_dm_data ;
struct dm_hw_stat_delta ;
static struct genl_family net_drop_monitor_family = ;
static DEFINE_PER_CPU(struct per_cpu_dm_data, dm_cpu_data);
static int dm_hit_limit = 64;
static int dm_delay = 1;
static unsigned long dm_hw_check_delta = 2*HZ;
static LIST_HEAD(hw_stats_list);
static void reset_per_cpu_data(struct per_cpu_dm_data *data)
static void send_dm_alert(struct work_struct *unused)
static void sched_send_work(unsigned long unused)
static void trace_drop_common(struct sk_buff *skb, void *location)
static void trace_kfree_skb_hit(void *ignore, struct sk_buff *skb, void *location)
static void trace_napi_poll_hit(void *ignore, struct napi_struct *napi)
static int set_all_monitor_traces(int state)
static int net_dm_cmd_config(struct sk_buff *skb,
struct genl_info *info)
static int net_dm_cmd_trace(struct sk_buff *skb,
struct genl_info *info)
static int dropmon_net_event(struct notifier_block *ev_block,
unsigned long event, void *ptr)
static struct genl_ops dropmon_ops[] = ;
static struct notifier_block dropmon_net_notifier = ;
static int __init init_net_drop_monitor(void)
late_initcall(init_net_drop_monitor);
