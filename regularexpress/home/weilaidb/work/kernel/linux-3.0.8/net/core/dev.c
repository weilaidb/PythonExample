#define MAX_GRO_SKBS 8
#define GRO_MAX_HEAD (MAX_HEADER + 128)
#define PTYPE_HASH_SIZE	(16)
#define PTYPE_HASH_MASK	(PTYPE_HASH_SIZE - 1)
static DEFINE_SPINLOCK(ptype_lock);
static struct list_head ptype_base[PTYPE_HASH_SIZE] __read_mostly;
static struct list_head ptype_all __read_mostly;
DEFINE_RWLOCK(dev_base_lock);
EXPORT_SYMBOL(dev_base_lock);
static inline struct hlist_head *dev_name_hash(struct net *net, const char *name)
static inline struct hlist_head *dev_index_hash(struct net *net, int ifindex)
static inline void rps_lock(struct softnet_data *sd)
static inline void rps_unlock(struct softnet_data *sd)
static int list_netdevice(struct net_device *dev)
static void unlist_netdevice(struct net_device *dev)
static RAW_NOTIFIER_HEAD(netdev_chain);
DEFINE_PER_CPU_ALIGNED(struct softnet_data, softnet_data);
EXPORT_PER_CPU_SYMBOL(softnet_data);
static const unsigned short netdev_lock_type[] =
;
static const char *const netdev_lock_name[] =
;
static struct lock_class_key netdev_xmit_lock_key[ARRAY_SIZE(netdev_lock_type)];
static struct lock_class_key netdev_addr_lock_key[ARRAY_SIZE(netdev_lock_type)];
static inline unsigned short netdev_lock_pos(unsigned short dev_type)
static inline void netdev_set_xmit_lockdep_class(spinlock_t *lock,
unsigned short dev_type)
static inline void netdev_set_addr_lockdep_class(struct net_device *dev)
static inline void netdev_set_xmit_lockdep_class(spinlock_t *lock,
unsigned short dev_type)
static inline void netdev_set_addr_lockdep_class(struct net_device *dev)
static inline struct list_head *ptype_head(const struct packet_type *pt)
void dev_add_pack(struct packet_type *pt)
EXPORT_SYMBOL(dev_add_pack);
void __dev_remove_pack(struct packet_type *pt)
EXPORT_SYMBOL(__dev_remove_pack);
void dev_remove_pack(struct packet_type *pt)
EXPORT_SYMBOL(dev_remove_pack);
static struct netdev_boot_setup dev_boot_setup[NETDEV_BOOT_SETUP_MAX];
static int netdev_boot_setup_add(char *name, struct ifmap *map)
int netdev_boot_setup_check(struct net_device *dev)
EXPORT_SYMBOL(netdev_boot_setup_check);
unsigned long netdev_boot_base(const char *prefix, int unit)
int __init netdev_boot_setup(char *str)
__setup("netdev=", netdev_boot_setup);
struct net_device *__dev_get_by_name(struct net *net, const char *name)
EXPORT_SYMBOL(__dev_get_by_name);
struct net_device *dev_get_by_name_rcu(struct net *net, const char *name)
EXPORT_SYMBOL(dev_get_by_name_rcu);
struct net_device *dev_get_by_name(struct net *net, const char *name)
EXPORT_SYMBOL(dev_get_by_name);
struct net_device *__dev_get_by_index(struct net *net, int ifindex)
EXPORT_SYMBOL(__dev_get_by_index);
struct net_device *dev_get_by_index_rcu(struct net *net, int ifindex)
EXPORT_SYMBOL(dev_get_by_index_rcu);
struct net_device *dev_get_by_index(struct net *net, int ifindex)
EXPORT_SYMBOL(dev_get_by_index);
struct net_device *dev_getbyhwaddr_rcu(struct net *net, unsigned short type,
const char *ha)
EXPORT_SYMBOL(dev_getbyhwaddr_rcu);
struct net_device *__dev_getfirstbyhwtype(struct net *net, unsigned short type)
EXPORT_SYMBOL(__dev_getfirstbyhwtype);
struct net_device *dev_getfirstbyhwtype(struct net *net, unsigned short type)
EXPORT_SYMBOL(dev_getfirstbyhwtype);
struct net_device *dev_get_by_flags_rcu(struct net *net, unsigned short if_flags,
unsigned short mask)
EXPORT_SYMBOL(dev_get_by_flags_rcu);
int dev_valid_name(const char *name)
EXPORT_SYMBOL(dev_valid_name);
static int __dev_alloc_name(struct net *net, const char *name, char *buf)
int dev_alloc_name(struct net_device *dev, const char *name)
EXPORT_SYMBOL(dev_alloc_name);
static int dev_get_valid_name(struct net_device *dev, const char *name)
int dev_change_name(struct net_device *dev, const char *newname)
int dev_set_alias(struct net_device *dev, const char *alias, size_t len)
void netdev_features_change(struct net_device *dev)
EXPORT_SYMBOL(netdev_features_change);
void netdev_state_change(struct net_device *dev)
EXPORT_SYMBOL(netdev_state_change);
int netdev_bonding_change(struct net_device *dev, unsigned long event)
EXPORT_SYMBOL(netdev_bonding_change);
void dev_load(struct net *net, const char *name)
EXPORT_SYMBOL(dev_load);
static int __dev_open(struct net_device *dev)
int dev_open(struct net_device *dev)
EXPORT_SYMBOL(dev_open);
static int __dev_close_many(struct list_head *head)
static int __dev_close(struct net_device *dev)
static int dev_close_many(struct list_head *head)
int dev_close(struct net_device *dev)
EXPORT_SYMBOL(dev_close);
void dev_disable_lro(struct net_device *dev)
EXPORT_SYMBOL(dev_disable_lro);
static int dev_boot_phase = 1;
int register_netdevice_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(register_netdevice_notifier);
int unregister_netdevice_notifier(struct notifier_block *nb)
EXPORT_SYMBOL(unregister_netdevice_notifier);
int call_netdevice_notifiers(unsigned long val, struct net_device *dev)
EXPORT_SYMBOL(call_netdevice_notifiers);
static atomic_t netstamp_needed = ATOMIC_INIT(0);
void net_enable_timestamp(void)
EXPORT_SYMBOL(net_enable_timestamp);
void net_disable_timestamp(void)
EXPORT_SYMBOL(net_disable_timestamp);
static inline void net_timestamp_set(struct sk_buff *skb)
static inline void net_timestamp_check(struct sk_buff *skb)
static inline bool is_skb_forwardable(struct net_device *dev,
struct sk_buff *skb)
int dev_forward_skb(struct net_device *dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dev_forward_skb);
static inline int deliver_skb(struct sk_buff *skb,
struct packet_type *pt_prev,
struct net_device *orig_dev)
static void dev_queue_xmit_nit(struct sk_buff *skb, struct net_device *dev)
static void netif_setup_tc(struct net_device *dev, unsigned int txq)
int netif_set_real_num_tx_queues(struct net_device *dev, unsigned int txq)
EXPORT_SYMBOL(netif_set_real_num_tx_queues);
int netif_set_real_num_rx_queues(struct net_device *dev, unsigned int rxq)
EXPORT_SYMBOL(netif_set_real_num_rx_queues);
static inline void __netif_reschedule(struct Qdisc *q)
void __netif_schedule(struct Qdisc *q)
EXPORT_SYMBOL(__netif_schedule);
void dev_kfree_skb_irq(struct sk_buff *skb)
EXPORT_SYMBOL(dev_kfree_skb_irq);
void dev_kfree_skb_any(struct sk_buff *skb)
EXPORT_SYMBOL(dev_kfree_skb_any);
void netif_device_detach(struct net_device *dev)
EXPORT_SYMBOL(netif_device_detach);
void netif_device_attach(struct net_device *dev)
EXPORT_SYMBOL(netif_device_attach);
void skb_set_dev(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(skb_set_dev);
int skb_checksum_help(struct sk_buff *skb)
EXPORT_SYMBOL(skb_checksum_help);
struct sk_buff *skb_gso_segment(struct sk_buff *skb, u32 features)
EXPORT_SYMBOL(skb_gso_segment);
void netdev_rx_csum_fault(struct net_device *dev)
EXPORT_SYMBOL(netdev_rx_csum_fault);
static int illegal_highdma(struct net_device *dev, struct sk_buff *skb)
struct dev_gso_cb ;
#define DEV_GSO_CB(skb) ((struct dev_gso_cb *)(skb)->cb)
static void dev_gso_skb_destructor(struct sk_buff *skb)
static int dev_gso_segment(struct sk_buff *skb, int features)
static inline void skb_orphan_try(struct sk_buff *skb)
static bool can_checksum_protocol(unsigned long features, __be16 protocol)
static u32 harmonize_features(struct sk_buff *skb, __be16 protocol, u32 features)
u32 netif_skb_features(struct sk_buff *skb)
EXPORT_SYMBOL(netif_skb_features);
static inline int skb_needs_linearize(struct sk_buff *skb,
int features)
int dev_hard_start_xmit(struct sk_buff *skb, struct net_device *dev,
struct netdev_queue *txq)
static u32 hashrnd __read_mostly;
u16 __skb_tx_hash(const struct net_device *dev, const struct sk_buff *skb,
unsigned int num_tx_queues)
EXPORT_SYMBOL(__skb_tx_hash);
static inline u16 dev_cap_txqueue(struct net_device *dev, u16 queue_index)
static inline int get_xps_queue(struct net_device *dev, struct sk_buff *skb)
static struct netdev_queue *dev_pick_tx(struct net_device *dev,
struct sk_buff *skb)
static inline int __dev_xmit_skb(struct sk_buff *skb, struct Qdisc *q,
struct net_device *dev,
struct netdev_queue *txq)
static DEFINE_PER_CPU(int, xmit_recursion);
#define RECURSION_LIMIT 10
int dev_queue_xmit(struct sk_buff *skb)
EXPORT_SYMBOL(dev_queue_xmit);
int netdev_max_backlog __read_mostly = 1000;
int netdev_tstamp_prequeue __read_mostly = 1;
int netdev_budget __read_mostly = 300;
int weight_p __read_mostly = 64;
static inline void ____napi_schedule(struct softnet_data *sd,
struct napi_struct *napi)
__u32 __skb_get_rxhash(struct sk_buff *skb)
EXPORT_SYMBOL(__skb_get_rxhash);
struct rps_sock_flow_table __rcu *rps_sock_flow_table __read_mostly;
EXPORT_SYMBOL(rps_sock_flow_table);
static struct rps_dev_flow *
set_rps_cpu(struct net_device *dev, struct sk_buff *skb,
struct rps_dev_flow *rflow, u16 next_cpu)
static int get_rps_cpu(struct net_device *dev, struct sk_buff *skb,
struct rps_dev_flow **rflowp)
bool rps_may_expire_flow(struct net_device *dev, u16 rxq_index,
u32 flow_id, u16 filter_id)
EXPORT_SYMBOL(rps_may_expire_flow);
static void rps_trigger_softirq(void *data)
static int rps_ipi_queued(struct softnet_data *sd)
static int enqueue_to_backlog(struct sk_buff *skb, int cpu,
unsigned int *qtail)
int netif_rx(struct sk_buff *skb)
EXPORT_SYMBOL(netif_rx);
int netif_rx_ni(struct sk_buff *skb)
EXPORT_SYMBOL(netif_rx_ni);
static void net_tx_action(struct softirq_action *h)
#if (defined(CONFIG_BRIDGE) || defined(CONFIG_BRIDGE_MODULE)) && \
(defined(CONFIG_ATM_LANE) || defined(CONFIG_ATM_LANE_MODULE))
int (*br_fdb_test_addr_hook)(struct net_device *dev,
unsigned char *addr) __read_mostly;
EXPORT_SYMBOL_GPL(br_fdb_test_addr_hook);
static int ing_filter(struct sk_buff *skb, struct netdev_queue *rxq)
static inline struct sk_buff *handle_ing(struct sk_buff *skb,
struct packet_type **pt_prev,
int *ret, struct net_device *orig_dev)
int netdev_rx_handler_register(struct net_device *dev,
rx_handler_func_t *rx_handler,
void *rx_handler_data)
EXPORT_SYMBOL_GPL(netdev_rx_handler_register);
void netdev_rx_handler_unregister(struct net_device *dev)
EXPORT_SYMBOL_GPL(netdev_rx_handler_unregister);
static int __netif_receive_skb(struct sk_buff *skb)
int netif_receive_skb(struct sk_buff *skb)
EXPORT_SYMBOL(netif_receive_skb);
static void flush_backlog(void *arg)
static int napi_gro_complete(struct sk_buff *skb)
inline void napi_gro_flush(struct napi_struct *napi)
EXPORT_SYMBOL(napi_gro_flush);
enum gro_result dev_gro_receive(struct napi_struct *napi, struct sk_buff *skb)
EXPORT_SYMBOL(dev_gro_receive);
static inline gro_result_t
__napi_gro_receive(struct napi_struct *napi, struct sk_buff *skb)
gro_result_t napi_skb_finish(gro_result_t ret, struct sk_buff *skb)
EXPORT_SYMBOL(napi_skb_finish);
void skb_gro_reset_offset(struct sk_buff *skb)
EXPORT_SYMBOL(skb_gro_reset_offset);
gro_result_t napi_gro_receive(struct napi_struct *napi, struct sk_buff *skb)
EXPORT_SYMBOL(napi_gro_receive);
static void napi_reuse_skb(struct napi_struct *napi, struct sk_buff *skb)
struct sk_buff *napi_get_frags(struct napi_struct *napi)
EXPORT_SYMBOL(napi_get_frags);
gro_result_t napi_frags_finish(struct napi_struct *napi, struct sk_buff *skb,
gro_result_t ret)
EXPORT_SYMBOL(napi_frags_finish);
struct sk_buff *napi_frags_skb(struct napi_struct *napi)
EXPORT_SYMBOL(napi_frags_skb);
gro_result_t napi_gro_frags(struct napi_struct *napi)
EXPORT_SYMBOL(napi_gro_frags);
static void net_rps_action_and_irq_enable(struct softnet_data *sd)
static int process_backlog(struct napi_struct *napi, int quota)
void __napi_schedule(struct napi_struct *n)
EXPORT_SYMBOL(__napi_schedule);
void __napi_complete(struct napi_struct *n)
EXPORT_SYMBOL(__napi_complete);
void napi_complete(struct napi_struct *n)
EXPORT_SYMBOL(napi_complete);
void netif_napi_add(struct net_device *dev, struct napi_struct *napi,
int (*poll)(struct napi_struct *, int), int weight)
EXPORT_SYMBOL(netif_napi_add);
void netif_napi_del(struct napi_struct *napi)
EXPORT_SYMBOL(netif_napi_del);
static void net_rx_action(struct softirq_action *h)
static gifconf_func_t *gifconf_list[NPROTO];
int register_gifconf(unsigned int family, gifconf_func_t *gifconf)
EXPORT_SYMBOL(register_gifconf);
static int dev_ifname(struct net *net, struct ifreq __user *arg)
static int dev_ifconf(struct net *net, char __user *arg)
void *dev_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
void *dev_seq_next(struct seq_file *seq, void *v, loff_t *pos)
void dev_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static void dev_seq_printf_stats(struct seq_file *seq, struct net_device *dev)
static int dev_seq_show(struct seq_file *seq, void *v)
static struct softnet_data *softnet_get_online(loff_t *pos)
static void *softnet_seq_start(struct seq_file *seq, loff_t *pos)
static void *softnet_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void softnet_seq_stop(struct seq_file *seq, void *v)
static int softnet_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations dev_seq_ops = ;
static int dev_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dev_seq_fops = ;
static const struct seq_operations softnet_seq_ops = ;
static int softnet_seq_open(struct inode *inode, struct file *file)
static const struct file_operations softnet_seq_fops = ;
static void *ptype_get_idx(loff_t pos)
static void *ptype_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(RCU)
static void *ptype_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ptype_seq_stop(struct seq_file *seq, void *v)
__releases(RCU)
static int ptype_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ptype_seq_ops = ;
static int ptype_seq_open(struct inode *inode, struct file *file)
static const struct file_operations ptype_seq_fops = ;
static int __net_init dev_proc_net_init(struct net *net)
static void __net_exit dev_proc_net_exit(struct net *net)
static struct pernet_operations __net_initdata dev_proc_ops = ;
static int __init dev_proc_init(void)
#define dev_proc_init() 0
int netdev_set_master(struct net_device *slave, struct net_device *master)
EXPORT_SYMBOL(netdev_set_master);
int netdev_set_bond_master(struct net_device *slave, struct net_device *master)
EXPORT_SYMBOL(netdev_set_bond_master);
static void dev_change_rx_flags(struct net_device *dev, int flags)
static int __dev_set_promiscuity(struct net_device *dev, int inc)
int dev_set_promiscuity(struct net_device *dev, int inc)
EXPORT_SYMBOL(dev_set_promiscuity);
int dev_set_allmulti(struct net_device *dev, int inc)
EXPORT_SYMBOL(dev_set_allmulti);
void __dev_set_rx_mode(struct net_device *dev)
void dev_set_rx_mode(struct net_device *dev)
int dev_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
EXPORT_SYMBOL(dev_ethtool_get_settings);
unsigned dev_get_flags(const struct net_device *dev)
EXPORT_SYMBOL(dev_get_flags);
int __dev_change_flags(struct net_device *dev, unsigned int flags)
void __dev_notify_flags(struct net_device *dev, unsigned int old_flags)
int dev_change_flags(struct net_device *dev, unsigned flags)
EXPORT_SYMBOL(dev_change_flags);
int dev_set_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL(dev_set_mtu);
void dev_set_group(struct net_device *dev, int new_group)
EXPORT_SYMBOL(dev_set_group);
int dev_set_mac_address(struct net_device *dev, struct sockaddr *sa)
EXPORT_SYMBOL(dev_set_mac_address);
static int dev_ifsioc_locked(struct net *net, struct ifreq *ifr, unsigned int cmd)
static int dev_ifsioc(struct net *net, struct ifreq *ifr, unsigned int cmd)
int dev_ioctl(struct net *net, unsigned int cmd, void __user *arg)
static int dev_new_index(struct net *net)
static LIST_HEAD(net_todo_list);
static void net_set_todo(struct net_device *dev)
static void rollback_registered_many(struct list_head *head)
static void rollback_registered(struct net_device *dev)
u32 netdev_fix_features(struct net_device *dev, u32 features)
EXPORT_SYMBOL(netdev_fix_features);
int __netdev_update_features(struct net_device *dev)
void netdev_update_features(struct net_device *dev)
EXPORT_SYMBOL(netdev_update_features);
void netdev_change_features(struct net_device *dev)
EXPORT_SYMBOL(netdev_change_features);
void netif_stacked_transfer_operstate(const struct net_device *rootdev,
struct net_device *dev)
EXPORT_SYMBOL(netif_stacked_transfer_operstate);
static int netif_alloc_rx_queues(struct net_device *dev)
static void netdev_init_one_queue(struct net_device *dev,
struct netdev_queue *queue, void *_unused)
static int netif_alloc_netdev_queues(struct net_device *dev)
int register_netdevice(struct net_device *dev)
EXPORT_SYMBOL(register_netdevice);
int init_dummy_netdev(struct net_device *dev)
EXPORT_SYMBOL_GPL(init_dummy_netdev);
int register_netdev(struct net_device *dev)
EXPORT_SYMBOL(register_netdev);
int netdev_refcnt_read(const struct net_device *dev)
EXPORT_SYMBOL(netdev_refcnt_read);
static void netdev_wait_allrefs(struct net_device *dev)
void netdev_run_todo(void)
static void netdev_stats_to_stats64(struct rtnl_link_stats64 *stats64,
const struct net_device_stats *netdev_stats)
struct rtnl_link_stats64 *dev_get_stats(struct net_device *dev,
struct rtnl_link_stats64 *storage)
EXPORT_SYMBOL(dev_get_stats);
struct netdev_queue *dev_ingress_queue_create(struct net_device *dev)
struct net_device *alloc_netdev_mqs(int sizeof_priv, const char *name,
void (*setup)(struct net_device *),
unsigned int txqs, unsigned int rxqs)
EXPORT_SYMBOL(alloc_netdev_mqs);
void free_netdev(struct net_device *dev)
EXPORT_SYMBOL(free_netdev);
void synchronize_net(void)
EXPORT_SYMBOL(synchronize_net);
void unregister_netdevice_queue(struct net_device *dev, struct list_head *head)
EXPORT_SYMBOL(unregister_netdevice_queue);
void unregister_netdevice_many(struct list_head *head)
EXPORT_SYMBOL(unregister_netdevice_many);
void unregister_netdev(struct net_device *dev)
EXPORT_SYMBOL(unregister_netdev);
int dev_change_net_namespace(struct net_device *dev, struct net *net, const char *pat)
EXPORT_SYMBOL_GPL(dev_change_net_namespace);
static int dev_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *ocpu)
u32 netdev_increment_features(u32 all, u32 one, u32 mask)
EXPORT_SYMBOL(netdev_increment_features);
static struct hlist_head *netdev_create_hash(void)
static int __net_init netdev_init(struct net *net)
const char *netdev_drivername(const struct net_device *dev)
static int __netdev_printk(const char *level, const struct net_device *dev,
struct va_format *vaf)
int netdev_printk(const char *level, const struct net_device *dev,
const char *format, ...)
EXPORT_SYMBOL(netdev_printk);
#define define_netdev_printk_level(func, level)			\
int func(const struct net_device *dev, const char *fmt, ...)	\
\
EXPORT_SYMBOL(func);
define_netdev_printk_level(netdev_emerg, KERN_EMERG);
define_netdev_printk_level(netdev_alert, KERN_ALERT);
define_netdev_printk_level(netdev_crit, KERN_CRIT);
define_netdev_printk_level(netdev_err, KERN_ERR);
define_netdev_printk_level(netdev_warn, KERN_WARNING);
define_netdev_printk_level(netdev_notice, KERN_NOTICE);
define_netdev_printk_level(netdev_info, KERN_INFO);
static void __net_exit netdev_exit(struct net *net)
static struct pernet_operations __net_initdata netdev_net_ops = ;
static void __net_exit default_device_exit(struct net *net)
static void __net_exit default_device_exit_batch(struct list_head *net_list)
static struct pernet_operations __net_initdata default_device_ops = ;
static int __init net_dev_init(void)
subsys_initcall(net_dev_init);
static int __init initialize_hashrnd(void)
late_initcall_sync(initialize_hashrnd);
