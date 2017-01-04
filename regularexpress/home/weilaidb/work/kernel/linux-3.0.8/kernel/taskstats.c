#define TASKSTATS_CPUMASK_MAXLEN	(100+6*NR_CPUS)
static DEFINE_PER_CPU(__u32, taskstats_seqnum);
static int family_registered;
struct kmem_cache *taskstats_cache;
static struct genl_family family = ;
static const struct nla_policy taskstats_cmd_get_policy[TASKSTATS_CMD_ATTR_MAX+1] = ;
static const struct nla_policy cgroupstats_cmd_get_policy[CGROUPSTATS_CMD_ATTR_MAX+1] = ;
struct listener ;
struct listener_list ;
static DEFINE_PER_CPU(struct listener_list, listener_array);
enum actions ;
static int prepare_reply(struct genl_info *info, u8 cmd, struct sk_buff **skbp,
size_t size)
static int send_reply(struct sk_buff *skb, struct genl_info *info)
static void send_cpu_listeners(struct sk_buff *skb,
struct listener_list *listeners)
static void fill_stats(struct task_struct *tsk, struct taskstats *stats)
static int fill_stats_for_pid(pid_t pid, struct taskstats *stats)
static int fill_stats_for_tgid(pid_t tgid, struct taskstats *stats)
static void fill_tgid_exit(struct task_struct *tsk)
static int add_del_listener(pid_t pid, const struct cpumask *mask, int isadd)
static int parse(struct nlattr *na, struct cpumask *mask)
#if defined(CONFIG_64BIT) && !defined(CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS)
#define TASKSTATS_NEEDS_PADDING 1
static struct taskstats *mk_reply(struct sk_buff *skb, int type, u32 pid)
static int cgroupstats_user_cmd(struct sk_buff *skb, struct genl_info *info)
static int cmd_attr_register_cpumask(struct genl_info *info)
static int cmd_attr_deregister_cpumask(struct genl_info *info)
static size_t taskstats_packet_size(void)
static int cmd_attr_pid(struct genl_info *info)
static int cmd_attr_tgid(struct genl_info *info)
static int taskstats_user_cmd(struct sk_buff *skb, struct genl_info *info)
static struct taskstats *taskstats_tgid_alloc(struct task_struct *tsk)
void taskstats_exit(struct task_struct *tsk, int group_dead)
static struct genl_ops taskstats_ops = ;
static struct genl_ops cgroupstats_ops = ;
void __init taskstats_init_early(void)
static int __init taskstats_init(void)
late_initcall(taskstats_init);
