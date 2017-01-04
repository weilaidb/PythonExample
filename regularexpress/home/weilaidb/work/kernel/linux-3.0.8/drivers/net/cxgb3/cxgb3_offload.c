static LIST_HEAD(client_list);
static LIST_HEAD(ofld_dev_list);
static DEFINE_MUTEX(cxgb3_db_lock);
static DEFINE_RWLOCK(adapter_list_lock);
static LIST_HEAD(adapter_list);
static const unsigned int MAX_ATIDS = 64 * 1024;
static const unsigned int ATID_BASE = 0x10000;
static void cxgb_neigh_update(struct neighbour *neigh);
static void cxgb_redirect(struct dst_entry *old, struct dst_entry *new);
static inline int offload_activated(struct t3cdev *tdev)
void cxgb3_register_client(struct cxgb3_client *client)
EXPORT_SYMBOL(cxgb3_register_client);
void cxgb3_unregister_client(struct cxgb3_client *client)
EXPORT_SYMBOL(cxgb3_unregister_client);
void cxgb3_add_clients(struct t3cdev *tdev)
void cxgb3_remove_clients(struct t3cdev *tdev)
void cxgb3_event_notify(struct t3cdev *tdev, u32 event, u32 port)
static struct net_device *get_iff_from_mac(struct adapter *adapter,
const unsigned char *mac,
unsigned int vlan)
static int cxgb_ulp_iscsi_ctl(struct adapter *adapter, unsigned int req,
void *data)
#define ASYNC_NOTIF_RSPQ 0
static int cxgb_rdma_ctl(struct adapter *adapter, unsigned int req, void *data)
static int cxgb_offload_ctl(struct t3cdev *tdev, unsigned int req, void *data)
static int rx_offload_blackhole(struct t3cdev *dev, struct sk_buff **skbs,
int n)
static void dummy_neigh_update(struct t3cdev *dev, struct neighbour *neigh)
void cxgb3_set_dummy_ops(struct t3cdev *dev)
void *cxgb3_free_atid(struct t3cdev *tdev, int atid)
EXPORT_SYMBOL(cxgb3_free_atid);
void cxgb3_free_stid(struct t3cdev *tdev, int stid)
EXPORT_SYMBOL(cxgb3_free_stid);
void cxgb3_insert_tid(struct t3cdev *tdev, struct cxgb3_client *client,
void *ctx, unsigned int tid)
EXPORT_SYMBOL(cxgb3_insert_tid);
static inline void mk_tid_release(struct sk_buff *skb, unsigned int tid)
static void t3_process_tid_release_list(struct work_struct *work)
void cxgb3_queue_tid_release(struct t3cdev *tdev, unsigned int tid)
EXPORT_SYMBOL(cxgb3_queue_tid_release);
void cxgb3_remove_tid(struct t3cdev *tdev, void *ctx, unsigned int tid)
EXPORT_SYMBOL(cxgb3_remove_tid);
int cxgb3_alloc_atid(struct t3cdev *tdev, struct cxgb3_client *client,
void *ctx)
EXPORT_SYMBOL(cxgb3_alloc_atid);
int cxgb3_alloc_stid(struct t3cdev *tdev, struct cxgb3_client *client,
void *ctx)
EXPORT_SYMBOL(cxgb3_alloc_stid);
struct t3cdev *dev2t3cdev(struct net_device *dev)
EXPORT_SYMBOL(dev2t3cdev);
static int do_smt_write_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_l2t_write_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_rte_write_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_act_open_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_stid_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_hwtid_rpl(struct t3cdev *dev, struct sk_buff *skb)
static int do_cr(struct t3cdev *dev, struct sk_buff *skb)
static struct sk_buff *cxgb3_get_cpl_reply_skb(struct sk_buff *skb, size_t len,
gfp_t gfp)
static int do_abort_req_rss(struct t3cdev *dev, struct sk_buff *skb)
static int do_act_establish(struct t3cdev *dev, struct sk_buff *skb)
static int do_trace(struct t3cdev *dev, struct sk_buff *skb)
static inline u32 get_hwtid(struct sk_buff *skb)
static inline u32 get_opcode(struct sk_buff *skb)
static int do_term(struct t3cdev *dev, struct sk_buff *skb)
static int nb_callback(struct notifier_block *self, unsigned long event,
void *ctx)
static struct notifier_block nb = ;
static int do_bad_cpl(struct t3cdev *dev, struct sk_buff *skb)
static cpl_handler_func cpl_handlers[NUM_CPL_CMDS];
void t3_register_cpl_handler(unsigned int opcode, cpl_handler_func h)
EXPORT_SYMBOL(t3_register_cpl_handler);
static int process_rx(struct t3cdev *dev, struct sk_buff **skbs, int n)
int cxgb3_ofld_send(struct t3cdev *dev, struct sk_buff *skb)
EXPORT_SYMBOL(cxgb3_ofld_send);
static int is_offloading(struct net_device *dev)
static void cxgb_neigh_update(struct neighbour *neigh)
static void set_l2t_ix(struct t3cdev *tdev, u32 tid, struct l2t_entry *e)
static void cxgb_redirect(struct dst_entry *old, struct dst_entry *new)
void *cxgb_alloc_mem(unsigned long size)
void cxgb_free_mem(void *addr)
static int init_tid_tabs(struct tid_info *t, unsigned int ntids,
unsigned int natids, unsigned int nstids,
unsigned int atid_base, unsigned int stid_base)
static void free_tid_maps(struct tid_info *t)
static inline void add_adapter(struct adapter *adap)
static inline void remove_adapter(struct adapter *adap)
int cxgb3_offload_activate(struct adapter *adapter)
static void clean_l2_data(struct rcu_head *head)
void cxgb3_offload_deactivate(struct adapter *adapter)
static inline void register_tdev(struct t3cdev *tdev)
static inline void unregister_tdev(struct t3cdev *tdev)
static inline int adap2type(struct adapter *adapter)
void __devinit cxgb3_adapter_ofld(struct adapter *adapter)
void __devexit cxgb3_adapter_unofld(struct adapter *adapter)
void __init cxgb3_offload_init(void)
