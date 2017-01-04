#define _IPOIB_H
enum ipoib_flush_level ;
enum ;
#define	IPOIB_OP_RECV   (1ul << 31)
#define	IPOIB_OP_CM     (1ul << 30)
#define	IPOIB_OP_CM     (0)
struct ipoib_header ;
struct ipoib_pseudoheader ;
struct ipoib_mcast ;
struct ipoib_rx_buf ;
struct ipoib_tx_buf ;
struct ipoib_cm_tx_buf ;
struct ib_cm_id;
struct ipoib_cm_data ;
enum ipoib_cm_state ;
struct ipoib_cm_rx ;
struct ipoib_cm_tx ;
struct ipoib_cm_rx_buf ;
struct ipoib_cm_dev_priv ;
struct ipoib_ethtool_st ;
struct ipoib_dev_priv ;
struct ipoib_ah ;
struct ipoib_path ;
struct ipoib_neigh ;
#define IPOIB_UD_MTU(ib_mtu)		(ib_mtu - IPOIB_ENCAP_LEN)
#define IPOIB_UD_BUF_SIZE(ib_mtu)	(ib_mtu + IB_GRH_BYTES)
static inline int ipoib_ud_need_sg(unsigned int ib_mtu)
static inline struct ipoib_neigh **to_ipoib_neigh(struct neighbour *neigh)
struct ipoib_neigh *ipoib_neigh_alloc(struct neighbour *neigh,
struct net_device *dev);
void ipoib_neigh_free(struct net_device *dev, struct ipoib_neigh *neigh);
extern struct workqueue_struct *ipoib_workqueue;
int ipoib_poll(struct napi_struct *napi, int budget);
void ipoib_ib_completion(struct ib_cq *cq, void *dev_ptr);
void ipoib_send_comp_handler(struct ib_cq *cq, void *dev_ptr);
struct ipoib_ah *ipoib_create_ah(struct net_device *dev,
struct ib_pd *pd, struct ib_ah_attr *attr);
void ipoib_free_ah(struct kref *kref);
static inline void ipoib_put_ah(struct ipoib_ah *ah)
int ipoib_open(struct net_device *dev);
int ipoib_add_pkey_attr(struct net_device *dev);
int ipoib_add_umcast_attr(struct net_device *dev);
void ipoib_send(struct net_device *dev, struct sk_buff *skb,
struct ipoib_ah *address, u32 qpn);
void ipoib_reap_ah(struct work_struct *work);
void ipoib_mark_paths_invalid(struct net_device *dev);
void ipoib_flush_paths(struct net_device *dev);
struct ipoib_dev_priv *ipoib_intf_alloc(const char *format);
int ipoib_ib_dev_init(struct net_device *dev, struct ib_device *ca, int port);
void ipoib_ib_dev_flush_light(struct work_struct *work);
void ipoib_ib_dev_flush_normal(struct work_struct *work);
void ipoib_ib_dev_flush_heavy(struct work_struct *work);
void ipoib_pkey_event(struct work_struct *work);
void ipoib_ib_dev_cleanup(struct net_device *dev);
int ipoib_ib_dev_open(struct net_device *dev);
int ipoib_ib_dev_up(struct net_device *dev);
int ipoib_ib_dev_down(struct net_device *dev, int flush);
int ipoib_ib_dev_stop(struct net_device *dev, int flush);
int ipoib_dev_init(struct net_device *dev, struct ib_device *ca, int port);
void ipoib_dev_cleanup(struct net_device *dev);
void ipoib_mcast_join_task(struct work_struct *work);
void ipoib_mcast_carrier_on_task(struct work_struct *work);
void ipoib_mcast_send(struct net_device *dev, void *mgid, struct sk_buff *skb);
void ipoib_mcast_restart_task(struct work_struct *work);
int ipoib_mcast_start_thread(struct net_device *dev);
int ipoib_mcast_stop_thread(struct net_device *dev, int flush);
void ipoib_mcast_dev_down(struct net_device *dev);
void ipoib_mcast_dev_flush(struct net_device *dev);
struct ipoib_mcast_iter *ipoib_mcast_iter_init(struct net_device *dev);
int ipoib_mcast_iter_next(struct ipoib_mcast_iter *iter);
void ipoib_mcast_iter_read(struct ipoib_mcast_iter *iter,
union ib_gid *gid,
unsigned long *created,
unsigned int *queuelen,
unsigned int *complete,
unsigned int *send_only);
struct ipoib_path_iter *ipoib_path_iter_init(struct net_device *dev);
int ipoib_path_iter_next(struct ipoib_path_iter *iter);
void ipoib_path_iter_read(struct ipoib_path_iter *iter,
struct ipoib_path *path);
int ipoib_mcast_attach(struct net_device *dev, u16 mlid,
union ib_gid *mgid, int set_qkey);
int ipoib_init_qp(struct net_device *dev);
int ipoib_transport_dev_init(struct net_device *dev, struct ib_device *ca);
void ipoib_transport_dev_cleanup(struct net_device *dev);
void ipoib_event(struct ib_event_handler *handler,
struct ib_event *record);
int ipoib_vlan_add(struct net_device *pdev, unsigned short pkey);
int ipoib_vlan_delete(struct net_device *pdev, unsigned short pkey);
void ipoib_pkey_poll(struct work_struct *work);
int ipoib_pkey_dev_delay_open(struct net_device *dev);
void ipoib_drain_cq(struct net_device *dev);
void ipoib_set_ethtool_ops(struct net_device *dev);
int ipoib_set_dev_features(struct ipoib_dev_priv *priv, struct ib_device *hca);
#define IPOIB_FLAGS_RC		0x80
#define IPOIB_FLAGS_UC		0x40
#define IPOIB_CM_SUPPORTED(ha)   (ha[0] & (IPOIB_FLAGS_RC))
extern int ipoib_max_conn_qp;
static inline int ipoib_cm_admin_enabled(struct net_device *dev)
static inline int ipoib_cm_enabled(struct net_device *dev, struct neighbour *n)
static inline int ipoib_cm_up(struct ipoib_neigh *neigh)
static inline struct ipoib_cm_tx *ipoib_cm_get(struct ipoib_neigh *neigh)
static inline void ipoib_cm_set(struct ipoib_neigh *neigh, struct ipoib_cm_tx *tx)
static inline int ipoib_cm_has_srq(struct net_device *dev)
static inline unsigned int ipoib_cm_max_mtu(struct net_device *dev)
void ipoib_cm_send(struct net_device *dev, struct sk_buff *skb, struct ipoib_cm_tx *tx);
int ipoib_cm_dev_open(struct net_device *dev);
void ipoib_cm_dev_stop(struct net_device *dev);
int ipoib_cm_dev_init(struct net_device *dev);
int ipoib_cm_add_mode_attr(struct net_device *dev);
void ipoib_cm_dev_cleanup(struct net_device *dev);
struct ipoib_cm_tx *ipoib_cm_create_tx(struct net_device *dev, struct ipoib_path *path,
struct ipoib_neigh *neigh);
void ipoib_cm_destroy_tx(struct ipoib_cm_tx *tx);
void ipoib_cm_skb_too_long(struct net_device *dev, struct sk_buff *skb,
unsigned int mtu);
void ipoib_cm_handle_rx_wc(struct net_device *dev, struct ib_wc *wc);
void ipoib_cm_handle_tx_wc(struct net_device *dev, struct ib_wc *wc);
struct ipoib_cm_tx;
#define ipoib_max_conn_qp 0
static inline int ipoib_cm_admin_enabled(struct net_device *dev)
static inline int ipoib_cm_enabled(struct net_device *dev, struct neighbour *n)
static inline int ipoib_cm_up(struct ipoib_neigh *neigh)
static inline struct ipoib_cm_tx *ipoib_cm_get(struct ipoib_neigh *neigh)
static inline void ipoib_cm_set(struct ipoib_neigh *neigh, struct ipoib_cm_tx *tx)
static inline int ipoib_cm_has_srq(struct net_device *dev)
static inline unsigned int ipoib_cm_max_mtu(struct net_device *dev)
static inline
void ipoib_cm_send(struct net_device *dev, struct sk_buff *skb, struct ipoib_cm_tx *tx)
static inline
int ipoib_cm_dev_open(struct net_device *dev)
static inline
void ipoib_cm_dev_stop(struct net_device *dev)
static inline
int ipoib_cm_dev_init(struct net_device *dev)
static inline
void ipoib_cm_dev_cleanup(struct net_device *dev)
static inline
struct ipoib_cm_tx *ipoib_cm_create_tx(struct net_device *dev, struct ipoib_path *path,
struct ipoib_neigh *neigh)
static inline
void ipoib_cm_destroy_tx(struct ipoib_cm_tx *tx)
static inline
int ipoib_cm_add_mode_attr(struct net_device *dev)
static inline void ipoib_cm_skb_too_long(struct net_device *dev, struct sk_buff *skb,
unsigned int mtu)
static inline void ipoib_cm_handle_rx_wc(struct net_device *dev, struct ib_wc *wc)
static inline void ipoib_cm_handle_tx_wc(struct net_device *dev, struct ib_wc *wc)
void ipoib_create_debug_files(struct net_device *dev);
void ipoib_delete_debug_files(struct net_device *dev);
int ipoib_register_debugfs(void);
void ipoib_unregister_debugfs(void);
static inline void ipoib_create_debug_files(struct net_device *dev)
static inline void ipoib_delete_debug_files(struct net_device *dev)
static inline int ipoib_register_debugfs(void)
static inline void ipoib_unregister_debugfs(void)
#define ipoib_printk(level, priv, format, arg...)	\
printk(level "%s: " format, ((struct ipoib_dev_priv *) priv)->dev->name , ## arg)
#define ipoib_warn(priv, format, arg...)		\
ipoib_printk(KERN_WARNING, priv, format , ## arg)
extern int ipoib_sendq_size;
extern int ipoib_recvq_size;
extern struct ib_sa_client ipoib_sa_client;
extern int ipoib_debug_level;
#define ipoib_dbg(priv, format, arg...)			\
do  while (0)
#define ipoib_dbg_mcast(priv, format, arg...)		\
do  while (0)
#define ipoib_dbg(priv, format, arg...)			\
do  while (0)
#define ipoib_dbg_mcast(priv, format, arg...)		\
do  while (0)
#define ipoib_dbg_data(priv, format, arg...)		\
do  while (0)
#define ipoib_dbg_data(priv, format, arg...)		\
do  while (0)
#define IPOIB_QPN(ha) (be32_to_cpup((__be32 *) ha) & 0xffffff)
