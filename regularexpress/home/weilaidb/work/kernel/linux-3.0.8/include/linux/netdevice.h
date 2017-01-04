#define _LINUX_NETDEVICE_H
struct vlan_group;
struct netpoll_info;
struct phy_device;
struct wireless_dev;
#define SET_ETHTOOL_OPS(netdev,ops) \
( (netdev)->ethtool_ops = (ops) )
#define HAVE_ALLOC_NETDEV
#define HAVE_FREE_NETDEV
#define HAVE_NETDEV_PRIV
#define NET_ADDR_PERM		0
#define NET_ADDR_RANDOM		1
#define NET_ADDR_STOLEN		2
#define NET_RX_SUCCESS		0
#define NET_RX_DROP		1
#define NET_XMIT_SUCCESS	0x00
#define NET_XMIT_DROP		0x01
#define NET_XMIT_CN		0x02
#define NET_XMIT_POLICED	0x03
#define NET_XMIT_MASK		0x0f
#define net_xmit_eval(e)	((e) == NET_XMIT_CN ? 0 : (e))
#define net_xmit_errno(e)	((e) != NET_XMIT_CN ? -ENOBUFS : 0)
#define NETDEV_TX_MASK		0xf0
enum netdev_tx ;
typedef enum netdev_tx netdev_tx_t;
static inline bool dev_xmit_complete(int rc)
#define MAX_ADDR_LEN	32
#define INIT_NETDEV_GROUP	0
#if defined(CONFIG_WLAN) || defined(CONFIG_AX25) || defined(CONFIG_AX25_MODULE)
# if defined(CONFIG_MAC80211_MESH)
#  define LL_MAX_HEADER 128
# else
#  define LL_MAX_HEADER 96
# endif
#elif defined(CONFIG_TR) || defined(CONFIG_TR_MODULE)
# define LL_MAX_HEADER 48
# define LL_MAX_HEADER 32
#if !defined(CONFIG_NET_IPIP) && !defined(CONFIG_NET_IPIP_MODULE) && \
!defined(CONFIG_NET_IPGRE) &&  !defined(CONFIG_NET_IPGRE_MODULE) && \
!defined(CONFIG_IPV6_SIT) && !defined(CONFIG_IPV6_SIT_MODULE) && \
!defined(CONFIG_IPV6_TUNNEL) && !defined(CONFIG_IPV6_TUNNEL_MODULE)
#define MAX_HEADER LL_MAX_HEADER
#define MAX_HEADER (LL_MAX_HEADER + 48)
struct net_device_stats ;
enum ;
struct neighbour;
struct neigh_parms;
struct sk_buff;
struct netdev_hw_addr ;
struct netdev_hw_addr_list ;
#define netdev_hw_addr_list_count(l) ((l)->count)
#define netdev_hw_addr_list_empty(l) (netdev_hw_addr_list_count(l) == 0)
#define netdev_hw_addr_list_for_each(ha, l) \
list_for_each_entry(ha, &(l)->list, list)
#define netdev_uc_count(dev) netdev_hw_addr_list_count(&(dev)->uc)
#define netdev_uc_empty(dev) netdev_hw_addr_list_empty(&(dev)->uc)
#define netdev_for_each_uc_addr(ha, dev) \
netdev_hw_addr_list_for_each(ha, &(dev)->uc)
#define netdev_mc_count(dev) netdev_hw_addr_list_count(&(dev)->mc)
#define netdev_mc_empty(dev) netdev_hw_addr_list_empty(&(dev)->mc)
#define netdev_for_each_mc_addr(ha, dev) \
netdev_hw_addr_list_for_each(ha, &(dev)->mc)
struct hh_cache ;
static inline void hh_cache_put(struct hh_cache *hh)
#define LL_RESERVED_SPACE(dev) \
((((dev)->hard_header_len+(dev)->needed_headroom)&~(HH_DATA_MOD - 1)) + HH_DATA_MOD)
#define LL_RESERVED_SPACE_EXTRA(dev,extra) \
((((dev)->hard_header_len+(dev)->needed_headroom+(extra))&~(HH_DATA_MOD - 1)) + HH_DATA_MOD)
#define LL_ALLOCATED_SPACE(dev) \
((((dev)->hard_header_len+(dev)->needed_headroom+(dev)->needed_tailroom)&~(HH_DATA_MOD - 1)) + HH_DATA_MOD)
struct header_ops ;
enum netdev_state_t ;
struct netdev_boot_setup ;
#define NETDEV_BOOT_SETUP_MAX 8
extern int __init netdev_boot_setup(char *str);
struct napi_struct ;
enum ;
enum gro_result ;
typedef enum gro_result gro_result_t;
enum rx_handler_result ;
typedef enum rx_handler_result rx_handler_result_t;
typedef rx_handler_result_t rx_handler_func_t(struct sk_buff **pskb);
extern void __napi_schedule(struct napi_struct *n);
static inline int napi_disable_pending(struct napi_struct *n)
static inline int napi_schedule_prep(struct napi_struct *n)
static inline void napi_schedule(struct napi_struct *n)
static inline int napi_reschedule(struct napi_struct *napi)
extern void __napi_complete(struct napi_struct *n);
extern void napi_complete(struct napi_struct *n);
static inline void napi_disable(struct napi_struct *n)
static inline void napi_enable(struct napi_struct *n)
static inline void napi_synchronize(const struct napi_struct *n)
# define napi_synchronize(n)	barrier()
enum netdev_queue_state_t ;
struct netdev_queue  ____cacheline_aligned_in_smp;
static inline int netdev_queue_numa_node_read(const struct netdev_queue *q)
static inline void netdev_queue_numa_node_write(struct netdev_queue *q, int node)
struct rps_map ;
#define RPS_MAP_SIZE(_num) (sizeof(struct rps_map) + (_num * sizeof(u16)))
struct rps_dev_flow ;
#define RPS_NO_FILTER 0xffff
struct rps_dev_flow_table ;
#define RPS_DEV_FLOW_TABLE_SIZE(_num) (sizeof(struct rps_dev_flow_table) + \
(_num * sizeof(struct rps_dev_flow)))
struct rps_sock_flow_table ;
#define	RPS_SOCK_FLOW_TABLE_SIZE(_num) (sizeof(struct rps_sock_flow_table) + \
(_num * sizeof(u16)))
#define RPS_NO_CPU 0xffff
static inline void rps_record_sock_flow(struct rps_sock_flow_table *table,
u32 hash)
static inline void rps_reset_sock_flow(struct rps_sock_flow_table *table,
u32 hash)
extern struct rps_sock_flow_table __rcu *rps_sock_flow_table;
extern bool rps_may_expire_flow(struct net_device *dev, u16 rxq_index,
u32 flow_id, u16 filter_id);
struct netdev_rx_queue  ____cacheline_aligned_in_smp;
struct xps_map ;
#define XPS_MAP_SIZE(_num) (sizeof(struct xps_map) + (_num * sizeof(u16)))
#define XPS_MIN_MAP_ALLOC ((L1_CACHE_BYTES - sizeof(struct xps_map))	\
/ sizeof(u16))
struct xps_dev_maps ;
#define XPS_DEV_MAPS_SIZE (sizeof(struct xps_dev_maps) +		\
(nr_cpu_ids * sizeof(struct xps_map *)))
#define TC_MAX_QUEUE	16
#define TC_BITMASK	15
struct netdev_tc_txq ;
#define HAVE_NET_DEVICE_OPS
struct net_device_ops ;
struct net_device ;
#define to_net_dev(d) container_of(d, struct net_device, dev)
#define	NETDEV_ALIGN		32
static inline
int netdev_get_prio_tc_map(const struct net_device *dev, u32 prio)
static inline
int netdev_set_prio_tc_map(struct net_device *dev, u8 prio, u8 tc)
static inline
void netdev_reset_tc(struct net_device *dev)
static inline
int netdev_set_tc_queue(struct net_device *dev, u8 tc, u16 count, u16 offset)
static inline
int netdev_set_num_tc(struct net_device *dev, u8 num_tc)
static inline
int netdev_get_num_tc(struct net_device *dev)
static inline
struct netdev_queue *netdev_get_tx_queue(const struct net_device *dev,
unsigned int index)
static inline void netdev_for_each_tx_queue(struct net_device *dev,
void (*f)(struct net_device *,
struct netdev_queue *,
void *),
void *arg)
static inline
struct net *dev_net(const struct net_device *dev)
static inline
void dev_net_set(struct net_device *dev, struct net *net)
static inline bool netdev_uses_dsa_tags(struct net_device *dev)
static inline void skb_set_dev(struct sk_buff *skb, struct net_device *dev)
void skb_set_dev(struct sk_buff *skb, struct net_device *dev);
static inline bool netdev_uses_trailer_tags(struct net_device *dev)
static inline void *netdev_priv(const struct net_device *dev)
#define SET_NETDEV_DEV(net, pdev)	((net)->dev.parent = (pdev))
#define SET_NETDEV_DEVTYPE(net, devtype)	((net)->dev.type = (devtype))
void netif_napi_add(struct net_device *dev, struct napi_struct *napi,
int (*poll)(struct napi_struct *, int), int weight);
void netif_napi_del(struct napi_struct *napi);
struct napi_gro_cb ;
#define NAPI_GRO_CB(skb) ((struct napi_gro_cb *)(skb)->cb)
struct packet_type ;
extern rwlock_t				dev_base_lock;
#define for_each_netdev(net, d)		\
list_for_each_entry(d, &(net)->dev_base_head, dev_list)
#define for_each_netdev_reverse(net, d)	\
list_for_each_entry_reverse(d, &(net)->dev_base_head, dev_list)
#define for_each_netdev_rcu(net, d)		\
list_for_each_entry_rcu(d, &(net)->dev_base_head, dev_list)
#define for_each_netdev_safe(net, d, n)	\
list_for_each_entry_safe(d, n, &(net)->dev_base_head, dev_list)
#define for_each_netdev_continue(net, d)		\
list_for_each_entry_continue(d, &(net)->dev_base_head, dev_list)
#define for_each_netdev_continue_rcu(net, d)		\
list_for_each_entry_continue_rcu(d, &(net)->dev_base_head, dev_list)
#define net_device_entry(lh)	list_entry(lh, struct net_device, dev_list)
static inline struct net_device *next_net_device(struct net_device *dev)
static inline struct net_device *next_net_device_rcu(struct net_device *dev)
static inline struct net_device *first_net_device(struct net *net)
static inline struct net_device *first_net_device_rcu(struct net *net)
extern int 			netdev_boot_setup_check(struct net_device *dev);
extern unsigned long		netdev_boot_base(const char *prefix, int unit);
extern struct net_device *dev_getbyhwaddr_rcu(struct net *net, unsigned short type,
const char *hwaddr);
extern struct net_device *dev_getfirstbyhwtype(struct net *net, unsigned short type);
extern struct net_device *__dev_getfirstbyhwtype(struct net *net, unsigned short type);
extern void		dev_add_pack(struct packet_type *pt);
extern void		dev_remove_pack(struct packet_type *pt);
extern void		__dev_remove_pack(struct packet_type *pt);
extern struct net_device	*dev_get_by_flags_rcu(struct net *net, unsigned short flags,
unsigned short mask);
extern struct net_device	*dev_get_by_name(struct net *net, const char *name);
extern struct net_device	*dev_get_by_name_rcu(struct net *net, const char *name);
extern struct net_device	*__dev_get_by_name(struct net *net, const char *name);
extern int		dev_alloc_name(struct net_device *dev, const char *name);
extern int		dev_open(struct net_device *dev);
extern int		dev_close(struct net_device *dev);
extern void		dev_disable_lro(struct net_device *dev);
extern int		dev_queue_xmit(struct sk_buff *skb);
extern int		register_netdevice(struct net_device *dev);
extern void		unregister_netdevice_queue(struct net_device *dev,
struct list_head *head);
extern void		unregister_netdevice_many(struct list_head *head);
static inline void unregister_netdevice(struct net_device *dev)
extern int 		netdev_refcnt_read(const struct net_device *dev);
extern void		free_netdev(struct net_device *dev);
extern void		synchronize_net(void);
extern int 		register_netdevice_notifier(struct notifier_block *nb);
extern int		unregister_netdevice_notifier(struct notifier_block *nb);
extern int		init_dummy_netdev(struct net_device *dev);
extern void		netdev_resync_ops(struct net_device *dev);
extern int call_netdevice_notifiers(unsigned long val, struct net_device *dev);
extern struct net_device	*dev_get_by_index(struct net *net, int ifindex);
extern struct net_device	*__dev_get_by_index(struct net *net, int ifindex);
extern struct net_device	*dev_get_by_index_rcu(struct net *net, int ifindex);
extern int		dev_restart(struct net_device *dev);
extern int		netpoll_trap(void);
extern int	       skb_gro_receive(struct sk_buff **head,
struct sk_buff *skb);
extern void	       skb_gro_reset_offset(struct sk_buff *skb);
static inline unsigned int skb_gro_offset(const struct sk_buff *skb)
static inline unsigned int skb_gro_len(const struct sk_buff *skb)
static inline void skb_gro_pull(struct sk_buff *skb, unsigned int len)
static inline void *skb_gro_header_fast(struct sk_buff *skb,
unsigned int offset)
static inline int skb_gro_header_hard(struct sk_buff *skb, unsigned int hlen)
static inline void *skb_gro_header_slow(struct sk_buff *skb, unsigned int hlen,
unsigned int offset)
static inline void *skb_gro_mac_header(struct sk_buff *skb)
static inline void *skb_gro_network_header(struct sk_buff *skb)
static inline int dev_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr,
unsigned len)
static inline int dev_parse_header(const struct sk_buff *skb,
unsigned char *haddr)
typedef int gifconf_func_t(struct net_device * dev, char __user * bufptr, int len);
extern int		register_gifconf(unsigned int family, gifconf_func_t * gifconf);
static inline int unregister_gifconf(unsigned int family)
struct softnet_data ;
static inline void input_queue_head_incr(struct softnet_data *sd)
static inline void input_queue_tail_incr_save(struct softnet_data *sd,
unsigned int *qtail)
DECLARE_PER_CPU_ALIGNED(struct softnet_data, softnet_data);
#define HAVE_NETIF_QUEUE
extern void __netif_schedule(struct Qdisc *q);
static inline void netif_schedule_queue(struct netdev_queue *txq)
static inline void netif_tx_schedule_all(struct net_device *dev)
static inline void netif_tx_start_queue(struct netdev_queue *dev_queue)
static inline void netif_start_queue(struct net_device *dev)
static inline void netif_tx_start_all_queues(struct net_device *dev)
static inline void netif_tx_wake_queue(struct netdev_queue *dev_queue)
static inline void netif_wake_queue(struct net_device *dev)
static inline void netif_tx_wake_all_queues(struct net_device *dev)
static inline void netif_tx_stop_queue(struct netdev_queue *dev_queue)
static inline void netif_stop_queue(struct net_device *dev)
static inline void netif_tx_stop_all_queues(struct net_device *dev)
static inline int netif_tx_queue_stopped(const struct netdev_queue *dev_queue)
static inline int netif_queue_stopped(const struct net_device *dev)
static inline int netif_tx_queue_frozen_or_stopped(const struct netdev_queue *dev_queue)
static inline int netif_running(const struct net_device *dev)
static inline void netif_start_subqueue(struct net_device *dev, u16 queue_index)
static inline void netif_stop_subqueue(struct net_device *dev, u16 queue_index)
static inline int __netif_subqueue_stopped(const struct net_device *dev,
u16 queue_index)
static inline int netif_subqueue_stopped(const struct net_device *dev,
struct sk_buff *skb)
static inline void netif_wake_subqueue(struct net_device *dev, u16 queue_index)
static inline u16 skb_tx_hash(const struct net_device *dev,
const struct sk_buff *skb)
static inline int netif_is_multiqueue(const struct net_device *dev)
extern int netif_set_real_num_tx_queues(struct net_device *dev,
unsigned int txq);
extern int netif_set_real_num_rx_queues(struct net_device *dev,
unsigned int rxq);
static inline int netif_set_real_num_rx_queues(struct net_device *dev,
unsigned int rxq)
static inline int netif_copy_real_num_queues(struct net_device *to_dev,
const struct net_device *from_dev)
extern void dev_kfree_skb_irq(struct sk_buff *skb);
extern void dev_kfree_skb_any(struct sk_buff *skb);
#define HAVE_NETIF_RX 1
extern int		netif_rx(struct sk_buff *skb);
extern int		netif_rx_ni(struct sk_buff *skb);
#define HAVE_NETIF_RECEIVE_SKB 1
extern int		netif_receive_skb(struct sk_buff *skb);
extern gro_result_t	dev_gro_receive(struct napi_struct *napi,
struct sk_buff *skb);
extern gro_result_t	napi_skb_finish(gro_result_t ret, struct sk_buff *skb);
extern gro_result_t	napi_gro_receive(struct napi_struct *napi,
struct sk_buff *skb);
extern void		napi_gro_flush(struct napi_struct *napi);
extern struct sk_buff *	napi_get_frags(struct napi_struct *napi);
extern gro_result_t	napi_frags_finish(struct napi_struct *napi,
struct sk_buff *skb,
gro_result_t ret);
extern struct sk_buff *	napi_frags_skb(struct napi_struct *napi);
extern gro_result_t	napi_gro_frags(struct napi_struct *napi);
static inline void napi_free_frags(struct napi_struct *napi)
extern int netdev_rx_handler_register(struct net_device *dev,
rx_handler_func_t *rx_handler,
void *rx_handler_data);
extern void netdev_rx_handler_unregister(struct net_device *dev);
extern int		dev_valid_name(const char *name);
extern int		dev_ioctl(struct net *net, unsigned int cmd, void __user *);
extern int		dev_ethtool(struct net *net, struct ifreq *);
extern unsigned		dev_get_flags(const struct net_device *);
extern int		__dev_change_flags(struct net_device *, unsigned int flags);
extern int		dev_change_flags(struct net_device *, unsigned);
extern void		__dev_notify_flags(struct net_device *, unsigned int old_flags);
extern int		dev_change_name(struct net_device *, const char *);
extern int		dev_set_alias(struct net_device *, const char *, size_t);
extern int		dev_change_net_namespace(struct net_device *,
struct net *, const char *);
extern int		dev_set_mtu(struct net_device *, int);
extern void		dev_set_group(struct net_device *, int);
extern int		dev_set_mac_address(struct net_device *,
struct sockaddr *);
extern int		dev_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev,
struct netdev_queue *txq);
extern int		dev_forward_skb(struct net_device *dev,
struct sk_buff *skb);
extern int		netdev_budget;
extern void netdev_run_todo(void);
static inline void dev_put(struct net_device *dev)
static inline void dev_hold(struct net_device *dev)
extern void linkwatch_fire_event(struct net_device *dev);
extern void linkwatch_forget_dev(struct net_device *dev);
static inline int netif_carrier_ok(const struct net_device *dev)
extern unsigned long dev_trans_start(struct net_device *dev);
extern void __netdev_watchdog_up(struct net_device *dev);
extern void netif_carrier_on(struct net_device *dev);
extern void netif_carrier_off(struct net_device *dev);
extern void netif_notify_peers(struct net_device *dev);
static inline void netif_dormant_on(struct net_device *dev)
static inline void netif_dormant_off(struct net_device *dev)
static inline int netif_dormant(const struct net_device *dev)
static inline int netif_oper_up(const struct net_device *dev)
static inline int netif_device_present(struct net_device *dev)
extern void netif_device_detach(struct net_device *dev);
extern void netif_device_attach(struct net_device *dev);
#define HAVE_NETIF_MSG 1
enum ;
#define netif_msg_drv(p)	((p)->msg_enable & NETIF_MSG_DRV)
#define netif_msg_probe(p)	((p)->msg_enable & NETIF_MSG_PROBE)
#define netif_msg_link(p)	((p)->msg_enable & NETIF_MSG_LINK)
#define netif_msg_timer(p)	((p)->msg_enable & NETIF_MSG_TIMER)
#define netif_msg_ifdown(p)	((p)->msg_enable & NETIF_MSG_IFDOWN)
#define netif_msg_ifup(p)	((p)->msg_enable & NETIF_MSG_IFUP)
#define netif_msg_rx_err(p)	((p)->msg_enable & NETIF_MSG_RX_ERR)
#define netif_msg_tx_err(p)	((p)->msg_enable & NETIF_MSG_TX_ERR)
#define netif_msg_tx_queued(p)	((p)->msg_enable & NETIF_MSG_TX_QUEUED)
#define netif_msg_intr(p)	((p)->msg_enable & NETIF_MSG_INTR)
#define netif_msg_tx_done(p)	((p)->msg_enable & NETIF_MSG_TX_DONE)
#define netif_msg_rx_status(p)	((p)->msg_enable & NETIF_MSG_RX_STATUS)
#define netif_msg_pktdata(p)	((p)->msg_enable & NETIF_MSG_PKTDATA)
#define netif_msg_hw(p)		((p)->msg_enable & NETIF_MSG_HW)
#define netif_msg_wol(p)	((p)->msg_enable & NETIF_MSG_WOL)
static inline u32 netif_msg_init(int debug_value, int default_msg_enable_bits)
static inline void __netif_tx_lock(struct netdev_queue *txq, int cpu)
static inline void __netif_tx_lock_bh(struct netdev_queue *txq)
static inline int __netif_tx_trylock(struct netdev_queue *txq)
static inline void __netif_tx_unlock(struct netdev_queue *txq)
static inline void __netif_tx_unlock_bh(struct netdev_queue *txq)
static inline void txq_trans_update(struct netdev_queue *txq)
static inline void netif_tx_lock(struct net_device *dev)
static inline void netif_tx_lock_bh(struct net_device *dev)
static inline void netif_tx_unlock(struct net_device *dev)
static inline void netif_tx_unlock_bh(struct net_device *dev)
#define HARD_TX_LOCK(dev, txq, cpu)
#define HARD_TX_UNLOCK(dev, txq)
static inline void netif_tx_disable(struct net_device *dev)
static inline void netif_addr_lock(struct net_device *dev)
static inline void netif_addr_lock_bh(struct net_device *dev)
static inline void netif_addr_unlock(struct net_device *dev)
static inline void netif_addr_unlock_bh(struct net_device *dev)
#define for_each_dev_addr(dev, ha) \
list_for_each_entry_rcu(ha, &dev->dev_addrs.list, list)
extern void		ether_setup(struct net_device *dev);
extern struct net_device *alloc_netdev_mqs(int sizeof_priv, const char *name,
void (*setup)(struct net_device *),
unsigned int txqs, unsigned int rxqs);
#define alloc_netdev(sizeof_priv, name, setup) \
alloc_netdev_mqs(sizeof_priv, name, setup, 1, 1)
#define alloc_netdev_mq(sizeof_priv, name, setup, count) \
alloc_netdev_mqs(sizeof_priv, name, setup, count, count)
extern int		register_netdev(struct net_device *dev);
extern void		unregister_netdev(struct net_device *dev);
extern int __hw_addr_add_multiple(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len, unsigned char addr_type);
extern void __hw_addr_del_multiple(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len, unsigned char addr_type);
extern int __hw_addr_sync(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len);
extern void __hw_addr_unsync(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len);
extern void __hw_addr_flush(struct netdev_hw_addr_list *list);
extern void __hw_addr_init(struct netdev_hw_addr_list *list);
extern int dev_addr_add(struct net_device *dev, unsigned char *addr,
unsigned char addr_type);
extern int dev_addr_del(struct net_device *dev, unsigned char *addr,
unsigned char addr_type);
extern int dev_addr_add_multiple(struct net_device *to_dev,
struct net_device *from_dev,
unsigned char addr_type);
extern int dev_addr_del_multiple(struct net_device *to_dev,
struct net_device *from_dev,
unsigned char addr_type);
extern void dev_addr_flush(struct net_device *dev);
extern int dev_addr_init(struct net_device *dev);
extern int dev_uc_add(struct net_device *dev, unsigned char *addr);
extern int dev_uc_del(struct net_device *dev, unsigned char *addr);
extern int dev_uc_sync(struct net_device *to, struct net_device *from);
extern void dev_uc_unsync(struct net_device *to, struct net_device *from);
extern void dev_uc_flush(struct net_device *dev);
extern void dev_uc_init(struct net_device *dev);
extern int dev_mc_add(struct net_device *dev, unsigned char *addr);
extern int dev_mc_add_global(struct net_device *dev, unsigned char *addr);
extern int dev_mc_del(struct net_device *dev, unsigned char *addr);
extern int dev_mc_del_global(struct net_device *dev, unsigned char *addr);
extern int dev_mc_sync(struct net_device *to, struct net_device *from);
extern void dev_mc_unsync(struct net_device *to, struct net_device *from);
extern void dev_mc_flush(struct net_device *dev);
extern void dev_mc_init(struct net_device *dev);
extern void		dev_set_rx_mode(struct net_device *dev);
extern void		__dev_set_rx_mode(struct net_device *dev);
extern int		dev_set_promiscuity(struct net_device *dev, int inc);
extern int		dev_set_allmulti(struct net_device *dev, int inc);
extern void		netdev_state_change(struct net_device *dev);
extern int		netdev_bonding_change(struct net_device *dev,
unsigned long event);
extern void		netdev_features_change(struct net_device *dev);
extern void		dev_load(struct net *net, const char *name);
extern void		dev_mcast_init(void);
extern struct rtnl_link_stats64 *dev_get_stats(struct net_device *dev,
struct rtnl_link_stats64 *storage);
extern int		netdev_max_backlog;
extern int		netdev_tstamp_prequeue;
extern int		weight_p;
extern int		bpf_jit_enable;
extern int		netdev_set_master(struct net_device *dev, struct net_device *master);
extern int netdev_set_bond_master(struct net_device *dev,
struct net_device *master);
extern int skb_checksum_help(struct sk_buff *skb);
extern struct sk_buff *skb_gso_segment(struct sk_buff *skb, u32 features);
extern void netdev_rx_csum_fault(struct net_device *dev);
static inline void netdev_rx_csum_fault(struct net_device *dev)
extern void		net_enable_timestamp(void);
extern void		net_disable_timestamp(void);
extern void *dev_seq_start(struct seq_file *seq, loff_t *pos);
extern void *dev_seq_next(struct seq_file *seq, void *v, loff_t *pos);
extern void dev_seq_stop(struct seq_file *seq, void *v);
extern int netdev_class_create_file(struct class_attribute *class_attr);
extern void netdev_class_remove_file(struct class_attribute *class_attr);
extern struct kobj_ns_type_operations net_ns_type_operations;
extern const char *netdev_drivername(const struct net_device *dev);
extern void linkwatch_run_queue(void);
static inline u32 netdev_get_wanted_features(struct net_device *dev)
u32 netdev_increment_features(u32 all, u32 one, u32 mask);
u32 netdev_fix_features(struct net_device *dev, u32 features);
int __netdev_update_features(struct net_device *dev);
void netdev_update_features(struct net_device *dev);
void netdev_change_features(struct net_device *dev);
void netif_stacked_transfer_operstate(const struct net_device *rootdev,
struct net_device *dev);
u32 netif_skb_features(struct sk_buff *skb);
static inline int net_gso_ok(u32 features, int gso_type)
static inline int skb_gso_ok(struct sk_buff *skb, u32 features)
static inline int netif_needs_gso(struct sk_buff *skb, int features)
static inline void netif_set_gso_max_size(struct net_device *dev,
unsigned int size)
static inline int netif_is_bond_slave(struct net_device *dev)
extern struct pernet_operations __net_initdata loopback_net_ops;
int dev_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd);
static inline u32 dev_ethtool_get_rx_csum(struct net_device *dev)
static inline u32 dev_ethtool_get_flags(struct net_device *dev)
static inline const char *netdev_name(const struct net_device *dev)
extern int netdev_printk(const char *level, const struct net_device *dev,
const char *format, ...)
__attribute__ ((format (printf, 3, 4)));
extern int netdev_emerg(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_alert(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_crit(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_err(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_warn(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_notice(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
extern int netdev_info(const struct net_device *dev, const char *format, ...)
__attribute__ ((format (printf, 2, 3)));
#define MODULE_ALIAS_NETDEV(device) \
MODULE_ALIAS("netdev-" device)
#if defined(DEBUG)
#define netdev_dbg(__dev, format, args...)			\
netdev_printk(KERN_DEBUG, __dev, format, ##args)
#elif defined(CONFIG_DYNAMIC_DEBUG)
#define netdev_dbg(__dev, format, args...)			\
do  while (0)
#define netdev_dbg(__dev, format, args...)			\
()
#if defined(VERBOSE_DEBUG)
#define netdev_vdbg	netdev_dbg
#define netdev_vdbg(dev, format, args...)			\
()
#define netdev_WARN(dev, format, args...)			\
WARN(1, "netdevice: %s\n" format, netdev_name(dev), ##args);
#define netif_printk(priv, type, level, dev, fmt, args...)	\
do  while (0)
#define netif_level(level, priv, type, dev, fmt, args...)	\
do  while (0)
#define netif_emerg(priv, type, dev, fmt, args...)		\
netif_level(emerg, priv, type, dev, fmt, ##args)
#define netif_alert(priv, type, dev, fmt, args...)		\
netif_level(alert, priv, type, dev, fmt, ##args)
#define netif_crit(priv, type, dev, fmt, args...)		\
netif_level(crit, priv, type, dev, fmt, ##args)
#define netif_err(priv, type, dev, fmt, args...)		\
netif_level(err, priv, type, dev, fmt, ##args)
#define netif_warn(priv, type, dev, fmt, args...)		\
netif_level(warn, priv, type, dev, fmt, ##args)
#define netif_notice(priv, type, dev, fmt, args...)		\
netif_level(notice, priv, type, dev, fmt, ##args)
#define netif_info(priv, type, dev, fmt, args...)		\
netif_level(info, priv, type, dev, fmt, ##args)
#if defined(DEBUG)
#define netif_dbg(priv, type, dev, format, args...)		\
netif_printk(priv, type, KERN_DEBUG, dev, format, ##args)
#elif defined(CONFIG_DYNAMIC_DEBUG)
#define netif_dbg(priv, type, netdev, format, args...)		\
do  while (0)
#define netif_dbg(priv, type, dev, format, args...)			\
()
#if defined(VERBOSE_DEBUG)
#define netif_vdbg	netif_dbg
#define netif_vdbg(priv, type, dev, format, args...)		\
()
