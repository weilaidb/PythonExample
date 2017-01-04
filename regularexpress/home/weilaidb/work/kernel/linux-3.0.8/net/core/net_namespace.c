static LIST_HEAD(pernet_list);
static struct list_head *first_device = &pernet_list;
static DEFINE_MUTEX(net_mutex);
LIST_HEAD(net_namespace_list);
EXPORT_SYMBOL_GPL(net_namespace_list);
struct net init_net;
EXPORT_SYMBOL(init_net);
#define INITIAL_NET_GEN_PTRS	13
static int net_assign_generic(struct net *net, int id, void *data)
static int ops_init(const struct pernet_operations *ops, struct net *net)
static void ops_free(const struct pernet_operations *ops, struct net *net)
static void ops_exit_list(const struct pernet_operations *ops,
struct list_head *net_exit_list)
static void ops_free_list(const struct pernet_operations *ops,
struct list_head *net_exit_list)
static __net_init int setup_net(struct net *net)
static struct net_generic *net_alloc_generic(void)
static struct kmem_cache *net_cachep;
static struct workqueue_struct *netns_wq;
static struct net *net_alloc(void)
static void net_free(struct net *net)
void net_drop_ns(void *p)
struct net *copy_net_ns(unsigned long flags, struct net *old_net)
static DEFINE_SPINLOCK(cleanup_list_lock);
static LIST_HEAD(cleanup_list);
static void cleanup_net(struct work_struct *work)
static DECLARE_WORK(net_cleanup_work, cleanup_net);
void __put_net(struct net *net)
EXPORT_SYMBOL_GPL(__put_net);
struct net *get_net_ns_by_fd(int fd)
struct net *copy_net_ns(unsigned long flags, struct net *old_net)
struct net *get_net_ns_by_fd(int fd)
struct net *get_net_ns_by_pid(pid_t pid)
EXPORT_SYMBOL_GPL(get_net_ns_by_pid);
static int __init net_ns_init(void)
pure_initcall(net_ns_init);
static int __register_pernet_operations(struct list_head *list,
struct pernet_operations *ops)
static void __unregister_pernet_operations(struct pernet_operations *ops)
static int __register_pernet_operations(struct list_head *list,
struct pernet_operations *ops)
static void __unregister_pernet_operations(struct pernet_operations *ops)
static DEFINE_IDA(net_generic_ids);
static int register_pernet_operations(struct list_head *list,
struct pernet_operations *ops)
static void unregister_pernet_operations(struct pernet_operations *ops)
int register_pernet_subsys(struct pernet_operations *ops)
EXPORT_SYMBOL_GPL(register_pernet_subsys);
void unregister_pernet_subsys(struct pernet_operations *ops)
EXPORT_SYMBOL_GPL(unregister_pernet_subsys);
int register_pernet_device(struct pernet_operations *ops)
EXPORT_SYMBOL_GPL(register_pernet_device);
void unregister_pernet_device(struct pernet_operations *ops)
EXPORT_SYMBOL_GPL(unregister_pernet_device);
static void *netns_get(struct task_struct *task)
static void netns_put(void *ns)
static int netns_install(struct nsproxy *nsproxy, void *ns)
const struct proc_ns_operations netns_operations = ;
