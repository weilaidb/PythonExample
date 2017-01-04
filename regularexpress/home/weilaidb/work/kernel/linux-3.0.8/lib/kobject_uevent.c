u64 uevent_seqnum;
char uevent_helper[UEVENT_HELPER_PATH_LEN] = CONFIG_UEVENT_HELPER_PATH;
static DEFINE_SPINLOCK(sequence_lock);
struct uevent_sock ;
static LIST_HEAD(uevent_sock_list);
static DEFINE_MUTEX(uevent_sock_mutex);
static const char *kobject_actions[] = ;
int kobject_action_type(const char *buf, size_t count,
enum kobject_action *type)
static int kobj_bcast_filter(struct sock *dsk, struct sk_buff *skb, void *data)
static int kobj_usermode_filter(struct kobject *kobj)
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
char *envp_ext[])
EXPORT_SYMBOL_GPL(kobject_uevent_env);
int kobject_uevent(struct kobject *kobj, enum kobject_action action)
EXPORT_SYMBOL_GPL(kobject_uevent);
int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
EXPORT_SYMBOL_GPL(add_uevent_var);
#if defined(CONFIG_NET)
static int uevent_net_init(struct net *net)
static void uevent_net_exit(struct net *net)
static struct pernet_operations uevent_net_ops = ;
static int __init kobject_uevent_init(void)
postcore_initcall(kobject_uevent_init);
