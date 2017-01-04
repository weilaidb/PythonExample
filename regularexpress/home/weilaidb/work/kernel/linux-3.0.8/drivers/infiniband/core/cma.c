MODULE_AUTHOR("Sean Hefty");
MODULE_DESCRIPTION("Generic RDMA CM Agent");
MODULE_LICENSE("Dual BSD/GPL");
#define CMA_CM_RESPONSE_TIMEOUT 20
#define CMA_MAX_CM_RETRIES 15
#define CMA_CM_MRA_SETTING (IB_CM_MRA_FLAG_DELAY | 24)
#define CMA_IBOE_PACKET_LIFETIME 18
static void cma_add_one(struct ib_device *device);
static void cma_remove_one(struct ib_device *device);
static struct ib_client cma_client = ;
static struct ib_sa_client sa_client;
static struct rdma_addr_client addr_client;
static LIST_HEAD(dev_list);
static LIST_HEAD(listen_any_list);
static DEFINE_MUTEX(lock);
static struct workqueue_struct *cma_wq;
static DEFINE_IDR(sdp_ps);
static DEFINE_IDR(tcp_ps);
static DEFINE_IDR(udp_ps);
static DEFINE_IDR(ipoib_ps);
struct cma_device ;
struct rdma_bind_list ;
struct rdma_id_private ;
struct cma_multicast ;
struct cma_work ;
struct cma_ndev_work ;
struct iboe_mcast_work ;
union cma_ip_addr ;
struct cma_hdr ;
struct sdp_hh ;
struct sdp_hah ;
#define CMA_VERSION 0x00
#define SDP_MAJ_VERSION 0x2
static int cma_comp(struct rdma_id_private *id_priv, enum rdma_cm_state comp)
static int cma_comp_exch(struct rdma_id_private *id_priv,
enum rdma_cm_state comp, enum rdma_cm_state exch)
static enum rdma_cm_state cma_exch(struct rdma_id_private *id_priv,
enum rdma_cm_state exch)
static inline u8 cma_get_ip_ver(struct cma_hdr *hdr)
static inline void cma_set_ip_ver(struct cma_hdr *hdr, u8 ip_ver)
static inline u8 sdp_get_majv(u8 sdp_version)
static inline u8 sdp_get_ip_ver(struct sdp_hh *hh)
static inline void sdp_set_ip_ver(struct sdp_hh *hh, u8 ip_ver)
static void cma_attach_to_dev(struct rdma_id_private *id_priv,
struct cma_device *cma_dev)
static inline void cma_deref_dev(struct cma_device *cma_dev)
static inline void release_mc(struct kref *kref)
static void cma_release_dev(struct rdma_id_private *id_priv)
static int cma_set_qkey(struct rdma_id_private *id_priv)
static int find_gid_port(struct ib_device *device, union ib_gid *gid, u8 port_num)
static int cma_acquire_dev(struct rdma_id_private *id_priv)
static void cma_deref_id(struct rdma_id_private *id_priv)
static int cma_disable_callback(struct rdma_id_private *id_priv,
enum rdma_cm_state state)
static int cma_has_cm_dev(struct rdma_id_private *id_priv)
struct rdma_cm_id *rdma_create_id(rdma_cm_event_handler event_handler,
void *context, enum rdma_port_space ps,
enum ib_qp_type qp_type)
EXPORT_SYMBOL(rdma_create_id);
static int cma_init_ud_qp(struct rdma_id_private *id_priv, struct ib_qp *qp)
static int cma_init_conn_qp(struct rdma_id_private *id_priv, struct ib_qp *qp)
int rdma_create_qp(struct rdma_cm_id *id, struct ib_pd *pd,
struct ib_qp_init_attr *qp_init_attr)
EXPORT_SYMBOL(rdma_create_qp);
void rdma_destroy_qp(struct rdma_cm_id *id)
EXPORT_SYMBOL(rdma_destroy_qp);
static int cma_modify_qp_rtr(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_modify_qp_rts(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_modify_qp_err(struct rdma_id_private *id_priv)
static int cma_ib_init_qp_attr(struct rdma_id_private *id_priv,
struct ib_qp_attr *qp_attr, int *qp_attr_mask)
int rdma_init_qp_attr(struct rdma_cm_id *id, struct ib_qp_attr *qp_attr,
int *qp_attr_mask)
EXPORT_SYMBOL(rdma_init_qp_attr);
static inline int cma_zero_addr(struct sockaddr *addr)
static inline int cma_loopback_addr(struct sockaddr *addr)
static inline int cma_any_addr(struct sockaddr *addr)
static int cma_addr_cmp(struct sockaddr *src, struct sockaddr *dst)
static inline __be16 cma_port(struct sockaddr *addr)
static inline int cma_any_port(struct sockaddr *addr)
static int cma_get_net_info(void *hdr, enum rdma_port_space ps,
u8 *ip_ver, __be16 *port,
union cma_ip_addr **src, union cma_ip_addr **dst)
static void cma_save_net_info(struct rdma_addr *addr,
struct rdma_addr *listen_addr,
u8 ip_ver, __be16 port,
union cma_ip_addr *src, union cma_ip_addr *dst)
static inline int cma_user_data_offset(enum rdma_port_space ps)
static void cma_cancel_route(struct rdma_id_private *id_priv)
static void cma_cancel_listens(struct rdma_id_private *id_priv)
static void cma_cancel_operation(struct rdma_id_private *id_priv,
enum rdma_cm_state state)
static void cma_release_port(struct rdma_id_private *id_priv)
static void cma_leave_mc_groups(struct rdma_id_private *id_priv)
void rdma_destroy_id(struct rdma_cm_id *id)
EXPORT_SYMBOL(rdma_destroy_id);
static int cma_rep_recv(struct rdma_id_private *id_priv)
static int cma_verify_rep(struct rdma_id_private *id_priv, void *data)
static void cma_set_rep_event_data(struct rdma_cm_event *event,
struct ib_cm_rep_event_param *rep_data,
void *private_data)
static int cma_ib_handler(struct ib_cm_id *cm_id, struct ib_cm_event *ib_event)
static struct rdma_id_private *cma_new_conn_id(struct rdma_cm_id *listen_id,
struct ib_cm_event *ib_event)
static struct rdma_id_private *cma_new_udp_id(struct rdma_cm_id *listen_id,
struct ib_cm_event *ib_event)
static void cma_set_req_event_data(struct rdma_cm_event *event,
struct ib_cm_req_event_param *req_data,
void *private_data, int offset)
static int cma_req_handler(struct ib_cm_id *cm_id, struct ib_cm_event *ib_event)
static __be64 cma_get_service_id(enum rdma_port_space ps, struct sockaddr *addr)
static void cma_set_compare_data(enum rdma_port_space ps, struct sockaddr *addr,
struct ib_cm_compare_data *compare)
static int cma_iw_handler(struct iw_cm_id *iw_id, struct iw_cm_event *iw_event)
static int iw_conn_req_handler(struct iw_cm_id *cm_id,
struct iw_cm_event *iw_event)
static int cma_ib_listen(struct rdma_id_private *id_priv)
static int cma_iw_listen(struct rdma_id_private *id_priv, int backlog)
static int cma_listen_handler(struct rdma_cm_id *id,
struct rdma_cm_event *event)
static void cma_listen_on_dev(struct rdma_id_private *id_priv,
struct cma_device *cma_dev)
static void cma_listen_on_all(struct rdma_id_private *id_priv)
void rdma_set_service_type(struct rdma_cm_id *id, int tos)
EXPORT_SYMBOL(rdma_set_service_type);
static void cma_query_handler(int status, struct ib_sa_path_rec *path_rec,
void *context)
static int cma_query_ib_route(struct rdma_id_private *id_priv, int timeout_ms,
struct cma_work *work)
static void cma_work_handler(struct work_struct *_work)
static void cma_ndev_work_handler(struct work_struct *_work)
static int cma_resolve_ib_route(struct rdma_id_private *id_priv, int timeout_ms)
int rdma_set_ib_paths(struct rdma_cm_id *id,
struct ib_sa_path_rec *path_rec, int num_paths)
EXPORT_SYMBOL(rdma_set_ib_paths);
static int cma_resolve_iw_route(struct rdma_id_private *id_priv, int timeout_ms)
static int cma_resolve_iboe_route(struct rdma_id_private *id_priv)
int rdma_resolve_route(struct rdma_cm_id *id, int timeout_ms)
EXPORT_SYMBOL(rdma_resolve_route);
static int cma_bind_loopback(struct rdma_id_private *id_priv)
static void addr_handler(int status, struct sockaddr *src_addr,
struct rdma_dev_addr *dev_addr, void *context)
static int cma_resolve_loopback(struct rdma_id_private *id_priv)
static int cma_bind_addr(struct rdma_cm_id *id, struct sockaddr *src_addr,
struct sockaddr *dst_addr)
int rdma_resolve_addr(struct rdma_cm_id *id, struct sockaddr *src_addr,
struct sockaddr *dst_addr, int timeout_ms)
EXPORT_SYMBOL(rdma_resolve_addr);
int rdma_set_reuseaddr(struct rdma_cm_id *id, int reuse)
EXPORT_SYMBOL(rdma_set_reuseaddr);
static void cma_bind_port(struct rdma_bind_list *bind_list,
struct rdma_id_private *id_priv)
static int cma_alloc_port(struct idr *ps, struct rdma_id_private *id_priv,
unsigned short snum)
static int cma_alloc_any_port(struct idr *ps, struct rdma_id_private *id_priv)
static int cma_check_port(struct rdma_bind_list *bind_list,
struct rdma_id_private *id_priv, uint8_t reuseaddr)
static int cma_use_port(struct idr *ps, struct rdma_id_private *id_priv)
static int cma_bind_listen(struct rdma_id_private *id_priv)
static int cma_get_port(struct rdma_id_private *id_priv)
static int cma_check_linklocal(struct rdma_dev_addr *dev_addr,
struct sockaddr *addr)
int rdma_listen(struct rdma_cm_id *id, int backlog)
EXPORT_SYMBOL(rdma_listen);
int rdma_bind_addr(struct rdma_cm_id *id, struct sockaddr *addr)
EXPORT_SYMBOL(rdma_bind_addr);
static int cma_format_hdr(void *hdr, enum rdma_port_space ps,
struct rdma_route *route)
static int cma_sidr_rep_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *ib_event)
static int cma_resolve_ib_udp(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_connect_ib(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_connect_iw(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
int rdma_connect(struct rdma_cm_id *id, struct rdma_conn_param *conn_param)
EXPORT_SYMBOL(rdma_connect);
static int cma_accept_ib(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_accept_iw(struct rdma_id_private *id_priv,
struct rdma_conn_param *conn_param)
static int cma_send_sidr_rep(struct rdma_id_private *id_priv,
enum ib_cm_sidr_status status,
const void *private_data, int private_data_len)
int rdma_accept(struct rdma_cm_id *id, struct rdma_conn_param *conn_param)
EXPORT_SYMBOL(rdma_accept);
int rdma_notify(struct rdma_cm_id *id, enum ib_event_type event)
EXPORT_SYMBOL(rdma_notify);
int rdma_reject(struct rdma_cm_id *id, const void *private_data,
u8 private_data_len)
EXPORT_SYMBOL(rdma_reject);
int rdma_disconnect(struct rdma_cm_id *id)
EXPORT_SYMBOL(rdma_disconnect);
static int cma_ib_mc_handler(int status, struct ib_sa_multicast *multicast)
static void cma_set_mgid(struct rdma_id_private *id_priv,
struct sockaddr *addr, union ib_gid *mgid)
static int cma_join_ib_multicast(struct rdma_id_private *id_priv,
struct cma_multicast *mc)
static void iboe_mcast_work_handler(struct work_struct *work)
static void cma_iboe_set_mgid(struct sockaddr *addr, union ib_gid *mgid)
static int cma_iboe_join_multicast(struct rdma_id_private *id_priv,
struct cma_multicast *mc)
int rdma_join_multicast(struct rdma_cm_id *id, struct sockaddr *addr,
void *context)
EXPORT_SYMBOL(rdma_join_multicast);
void rdma_leave_multicast(struct rdma_cm_id *id, struct sockaddr *addr)
EXPORT_SYMBOL(rdma_leave_multicast);
static int cma_netdev_change(struct net_device *ndev, struct rdma_id_private *id_priv)
static int cma_netdev_callback(struct notifier_block *self, unsigned long event,
void *ctx)
static struct notifier_block cma_nb = ;
static void cma_add_one(struct ib_device *device)
static int cma_remove_id_dev(struct rdma_id_private *id_priv)
static void cma_process_remove(struct cma_device *cma_dev)
static void cma_remove_one(struct ib_device *device)
static int cma_get_id_stats(struct sk_buff *skb, struct netlink_callback *cb)
static const struct ibnl_client_cbs cma_cb_table[] = ;
static int __init cma_init(void)
static void __exit cma_cleanup(void)
module_init(cma_init);
module_exit(cma_cleanup);
