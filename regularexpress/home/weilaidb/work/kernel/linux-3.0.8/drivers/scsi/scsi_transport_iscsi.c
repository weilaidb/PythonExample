#define ISCSI_SESSION_ATTRS 23
#define ISCSI_CONN_ATTRS 13
#define ISCSI_HOST_ATTRS 4
#define ISCSI_TRANSPORT_VERSION "2.0-870"
static int dbg_session;
module_param_named(debug_session, dbg_session, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_session,
"Turn on debugging for sessions in scsi_transport_iscsi "
"module. Set to 1 to turn on, and zero to turn off. Default "
"is off.");
static int dbg_conn;
module_param_named(debug_conn, dbg_conn, int,
S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_conn,
"Turn on debugging for connections in scsi_transport_iscsi "
"module. Set to 1 to turn on, and zero to turn off. Default "
"is off.");
#define ISCSI_DBG_TRANS_SESSION(_session, dbg_fmt, arg...)		\
do  while (0);
#define ISCSI_DBG_TRANS_CONN(_conn, dbg_fmt, arg...)			\
do  while (0);
struct iscsi_internal ;
static atomic_t iscsi_session_nr;
static struct workqueue_struct *iscsi_eh_timer_workq;
static LIST_HEAD(iscsi_transports);
static DEFINE_SPINLOCK(iscsi_transport_lock);
#define to_iscsi_internal(tmpl) \
container_of(tmpl, struct iscsi_internal, t)
#define dev_to_iscsi_internal(_dev) \
container_of(_dev, struct iscsi_internal, dev)
static void iscsi_transport_release(struct device *dev)
static struct class iscsi_transport_class = ;
static ssize_t
show_transport_handle(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(handle, S_IRUGO, show_transport_handle, NULL);
#define show_transport_attr(name, format)				\
static ssize_t								\
show_transport_##name(struct device *dev, 				\
struct device_attribute *attr,char *buf)		\
\
static DEVICE_ATTR(name, S_IRUGO, show_transport_##name, NULL);
show_transport_attr(caps, "0x%x");
static struct attribute *iscsi_transport_attrs[] = ;
static struct attribute_group iscsi_transport_group = ;
#define iscsi_dev_to_endpoint(_dev) \
container_of(_dev, struct iscsi_endpoint, dev)
#define ISCSI_ATTR(_prefix,_name,_mode,_show,_store)	\
struct device_attribute dev_attr_##_prefix##_##_name =	\
__ATTR(_name,_mode,_show,_store)
static void iscsi_endpoint_release(struct device *dev)
static struct class iscsi_endpoint_class = ;
static ssize_t
show_ep_handle(struct device *dev, struct device_attribute *attr, char *buf)
static ISCSI_ATTR(ep, handle, S_IRUGO, show_ep_handle, NULL);
static struct attribute *iscsi_endpoint_attrs[] = ;
static struct attribute_group iscsi_endpoint_group = ;
#define ISCSI_MAX_EPID -1
static int iscsi_match_epid(struct device *dev, void *data)
struct iscsi_endpoint *
iscsi_create_endpoint(int dd_size)
EXPORT_SYMBOL_GPL(iscsi_create_endpoint);
void iscsi_destroy_endpoint(struct iscsi_endpoint *ep)
EXPORT_SYMBOL_GPL(iscsi_destroy_endpoint);
struct iscsi_endpoint *iscsi_lookup_endpoint(u64 handle)
EXPORT_SYMBOL_GPL(iscsi_lookup_endpoint);
static int iscsi_setup_host(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(iscsi_host_class,
"iscsi_host",
iscsi_setup_host,
NULL,
NULL);
static DECLARE_TRANSPORT_CLASS(iscsi_session_class,
"iscsi_session",
NULL,
NULL,
NULL);
static DECLARE_TRANSPORT_CLASS(iscsi_connection_class,
"iscsi_connection",
NULL,
NULL,
NULL);
static struct sock *nls;
static DEFINE_MUTEX(rx_queue_mutex);
static LIST_HEAD(sesslist);
static DEFINE_SPINLOCK(sesslock);
static LIST_HEAD(connlist);
static DEFINE_SPINLOCK(connlock);
static uint32_t iscsi_conn_get_sid(struct iscsi_cls_conn *conn)
static struct iscsi_cls_session *iscsi_session_lookup(uint32_t sid)
static struct iscsi_cls_conn *iscsi_conn_lookup(uint32_t sid, uint32_t cid)
static struct  iscsi_session_state_names[] = ;
static const char *iscsi_session_state_name(int state)
int iscsi_session_chkready(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_session_chkready);
static void iscsi_session_release(struct device *dev)
static int iscsi_is_session_dev(const struct device *dev)
static int iscsi_iter_session_fn(struct device *dev, void *data)
void iscsi_host_for_each_session(struct Scsi_Host *shost,
void (*fn)(struct iscsi_cls_session *))
EXPORT_SYMBOL_GPL(iscsi_host_for_each_session);
int iscsi_scan_finished(struct Scsi_Host *shost, unsigned long time)
EXPORT_SYMBOL_GPL(iscsi_scan_finished);
struct iscsi_scan_data ;
static int iscsi_user_scan_session(struct device *dev, void *data)
static int iscsi_user_scan(struct Scsi_Host *shost, uint channel,
uint id, uint lun)
static void iscsi_scan_session(struct work_struct *work)
int iscsi_block_scsi_eh(struct scsi_cmnd *cmd)
EXPORT_SYMBOL_GPL(iscsi_block_scsi_eh);
static void session_recovery_timedout(struct work_struct *work)
static void __iscsi_unblock_session(struct work_struct *work)
void iscsi_unblock_session(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_unblock_session);
static void __iscsi_block_session(struct work_struct *work)
void iscsi_block_session(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_block_session);
static void __iscsi_unbind_session(struct work_struct *work)
struct iscsi_cls_session *
iscsi_alloc_session(struct Scsi_Host *shost, struct iscsi_transport *transport,
int dd_size)
EXPORT_SYMBOL_GPL(iscsi_alloc_session);
static int iscsi_get_next_target_id(struct device *dev, void *data)
int iscsi_add_session(struct iscsi_cls_session *session, unsigned int target_id)
EXPORT_SYMBOL_GPL(iscsi_add_session);
struct iscsi_cls_session *
iscsi_create_session(struct Scsi_Host *shost, struct iscsi_transport *transport,
int dd_size, unsigned int target_id)
EXPORT_SYMBOL_GPL(iscsi_create_session);
static void iscsi_conn_release(struct device *dev)
static int iscsi_is_conn_dev(const struct device *dev)
static int iscsi_iter_destroy_conn_fn(struct device *dev, void *data)
void iscsi_remove_session(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_remove_session);
void iscsi_free_session(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_free_session);
int iscsi_destroy_session(struct iscsi_cls_session *session)
EXPORT_SYMBOL_GPL(iscsi_destroy_session);
struct iscsi_cls_conn *
iscsi_create_conn(struct iscsi_cls_session *session, int dd_size, uint32_t cid)
EXPORT_SYMBOL_GPL(iscsi_create_conn);
int iscsi_destroy_conn(struct iscsi_cls_conn *conn)
EXPORT_SYMBOL_GPL(iscsi_destroy_conn);
static struct iscsi_internal *
iscsi_if_transport_lookup(struct iscsi_transport *tt)
static int
iscsi_multicast_skb(struct sk_buff *skb, uint32_t group, gfp_t gfp)
int iscsi_recv_pdu(struct iscsi_cls_conn *conn, struct iscsi_hdr *hdr,
char *data, uint32_t data_size)
EXPORT_SYMBOL_GPL(iscsi_recv_pdu);
int iscsi_offload_mesg(struct Scsi_Host *shost,
struct iscsi_transport *transport, uint32_t type,
char *data, uint16_t data_size)
EXPORT_SYMBOL_GPL(iscsi_offload_mesg);
void iscsi_conn_error_event(struct iscsi_cls_conn *conn, enum iscsi_err error)
EXPORT_SYMBOL_GPL(iscsi_conn_error_event);
static int
iscsi_if_send_reply(uint32_t group, int seq, int type, int done, int multi,
void *payload, int size)
static int
iscsi_if_get_stats(struct iscsi_transport *transport, struct nlmsghdr *nlh)
int iscsi_session_event(struct iscsi_cls_session *session,
enum iscsi_uevent_e event)
EXPORT_SYMBOL_GPL(iscsi_session_event);
static int
iscsi_if_create_session(struct iscsi_internal *priv, struct iscsi_endpoint *ep,
struct iscsi_uevent *ev, uint32_t initial_cmdsn,
uint16_t cmds_max, uint16_t queue_depth)
static int
iscsi_if_create_conn(struct iscsi_transport *transport, struct iscsi_uevent *ev)
static int
iscsi_if_destroy_conn(struct iscsi_transport *transport, struct iscsi_uevent *ev)
static int
iscsi_set_param(struct iscsi_transport *transport, struct iscsi_uevent *ev)
static int iscsi_if_ep_connect(struct iscsi_transport *transport,
struct iscsi_uevent *ev, int msg_type)
static int iscsi_if_ep_disconnect(struct iscsi_transport *transport,
u64 ep_handle)
static int
iscsi_if_transport_ep(struct iscsi_transport *transport,
struct iscsi_uevent *ev, int msg_type)
static int
iscsi_tgt_dscvr(struct iscsi_transport *transport,
struct iscsi_uevent *ev)
static int
iscsi_set_host_param(struct iscsi_transport *transport,
struct iscsi_uevent *ev)
static int
iscsi_set_path(struct iscsi_transport *transport, struct iscsi_uevent *ev)
static int
iscsi_if_recv_msg(struct sk_buff *skb, struct nlmsghdr *nlh, uint32_t *group)
static void
iscsi_if_rx(struct sk_buff *skb)
#define ISCSI_CLASS_ATTR(_prefix,_name,_mode,_show,_store)		\
struct device_attribute dev_attr_##_prefix##_##_name =	\
__ATTR(_name,_mode,_show,_store)
#define iscsi_conn_attr_show(param)					\
static ssize_t								\
show_conn_param_##param(struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define iscsi_conn_attr(field, param)					\
iscsi_conn_attr_show(param)					\
static ISCSI_CLASS_ATTR(conn, field, S_IRUGO, show_conn_param_##param,	\
NULL);
iscsi_conn_attr(max_recv_dlength, ISCSI_PARAM_MAX_RECV_DLENGTH);
iscsi_conn_attr(max_xmit_dlength, ISCSI_PARAM_MAX_XMIT_DLENGTH);
iscsi_conn_attr(header_digest, ISCSI_PARAM_HDRDGST_EN);
iscsi_conn_attr(data_digest, ISCSI_PARAM_DATADGST_EN);
iscsi_conn_attr(ifmarker, ISCSI_PARAM_IFMARKER_EN);
iscsi_conn_attr(ofmarker, ISCSI_PARAM_OFMARKER_EN);
iscsi_conn_attr(persistent_port, ISCSI_PARAM_PERSISTENT_PORT);
iscsi_conn_attr(exp_statsn, ISCSI_PARAM_EXP_STATSN);
iscsi_conn_attr(persistent_address, ISCSI_PARAM_PERSISTENT_ADDRESS);
iscsi_conn_attr(ping_tmo, ISCSI_PARAM_PING_TMO);
iscsi_conn_attr(recv_tmo, ISCSI_PARAM_RECV_TMO);
#define iscsi_conn_ep_attr_show(param)					\
static ssize_t show_conn_ep_param_##param(struct device *dev,		\
struct device_attribute *attr,\
char *buf)			\
#define iscsi_conn_ep_attr(field, param)				\
iscsi_conn_ep_attr_show(param)					\
static ISCSI_CLASS_ATTR(conn, field, S_IRUGO,				\
show_conn_ep_param_##param, NULL);
iscsi_conn_ep_attr(address, ISCSI_PARAM_CONN_ADDRESS);
iscsi_conn_ep_attr(port, ISCSI_PARAM_CONN_PORT);
#define iscsi_session_attr_show(param, perm)				\
static ssize_t								\
show_session_param_##param(struct device *dev,				\
struct device_attribute *attr, char *buf)	\
#define iscsi_session_attr(field, param, perm)				\
iscsi_session_attr_show(param, perm)				\
static ISCSI_CLASS_ATTR(sess, field, S_IRUGO, show_session_param_##param, \
NULL);
iscsi_session_attr(targetname, ISCSI_PARAM_TARGET_NAME, 0);
iscsi_session_attr(initial_r2t, ISCSI_PARAM_INITIAL_R2T_EN, 0);
iscsi_session_attr(max_outstanding_r2t, ISCSI_PARAM_MAX_R2T, 0);
iscsi_session_attr(immediate_data, ISCSI_PARAM_IMM_DATA_EN, 0);
iscsi_session_attr(first_burst_len, ISCSI_PARAM_FIRST_BURST, 0);
iscsi_session_attr(max_burst_len, ISCSI_PARAM_MAX_BURST, 0);
iscsi_session_attr(data_pdu_in_order, ISCSI_PARAM_PDU_INORDER_EN, 0);
iscsi_session_attr(data_seq_in_order, ISCSI_PARAM_DATASEQ_INORDER_EN, 0);
iscsi_session_attr(erl, ISCSI_PARAM_ERL, 0);
iscsi_session_attr(tpgt, ISCSI_PARAM_TPGT, 0);
iscsi_session_attr(username, ISCSI_PARAM_USERNAME, 1);
iscsi_session_attr(username_in, ISCSI_PARAM_USERNAME_IN, 1);
iscsi_session_attr(password, ISCSI_PARAM_PASSWORD, 1);
iscsi_session_attr(password_in, ISCSI_PARAM_PASSWORD_IN, 1);
iscsi_session_attr(fast_abort, ISCSI_PARAM_FAST_ABORT, 0);
iscsi_session_attr(abort_tmo, ISCSI_PARAM_ABORT_TMO, 0);
iscsi_session_attr(lu_reset_tmo, ISCSI_PARAM_LU_RESET_TMO, 0);
iscsi_session_attr(tgt_reset_tmo, ISCSI_PARAM_TGT_RESET_TMO, 0);
iscsi_session_attr(ifacename, ISCSI_PARAM_IFACE_NAME, 0);
iscsi_session_attr(initiatorname, ISCSI_PARAM_INITIATOR_NAME, 0);
iscsi_session_attr(targetalias, ISCSI_PARAM_TARGET_ALIAS, 0);
static ssize_t
show_priv_session_state(struct device *dev, struct device_attribute *attr,
char *buf)
static ISCSI_CLASS_ATTR(priv_sess, state, S_IRUGO, show_priv_session_state,
NULL);
#define iscsi_priv_session_attr_show(field, format)			\
static ssize_t								\
show_priv_session_##field(struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define iscsi_priv_session_attr_store(field)				\
static ssize_t								\
store_priv_session_##field(struct device *dev,				\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
#define iscsi_priv_session_rw_attr(field, format)			\
iscsi_priv_session_attr_show(field, format)			\
iscsi_priv_session_attr_store(field)				\
static ISCSI_CLASS_ATTR(priv_sess, field, S_IRUGO | S_IWUSR,		\
show_priv_session_##field,			\
store_priv_session_##field)
iscsi_priv_session_rw_attr(recovery_tmo, "%d");
#define iscsi_host_attr_show(param)					\
static ssize_t								\
show_host_param_##param(struct device *dev, 				\
struct device_attribute *attr, char *buf)	\
#define iscsi_host_attr(field, param)					\
iscsi_host_attr_show(param)					\
static ISCSI_CLASS_ATTR(host, field, S_IRUGO, show_host_param_##param,	\
NULL);
iscsi_host_attr(netdev, ISCSI_HOST_PARAM_NETDEV_NAME);
iscsi_host_attr(hwaddress, ISCSI_HOST_PARAM_HWADDRESS);
iscsi_host_attr(ipaddress, ISCSI_HOST_PARAM_IPADDRESS);
iscsi_host_attr(initiatorname, ISCSI_HOST_PARAM_INITIATOR_NAME);
#define SETUP_PRIV_SESSION_RD_ATTR(field)				\
do  while (0)
#define SETUP_PRIV_SESSION_RW_ATTR(field)				\
do  while (0)
#define SETUP_SESSION_RD_ATTR(field, param_flag)			\
do  while (0)
#define SETUP_CONN_RD_ATTR(field, param_flag)				\
do  while (0)
#define SETUP_HOST_RD_ATTR(field, param_flag)				\
do  while (0)
static int iscsi_session_match(struct attribute_container *cont,
struct device *dev)
static int iscsi_conn_match(struct attribute_container *cont,
struct device *dev)
static int iscsi_host_match(struct attribute_container *cont,
struct device *dev)
struct scsi_transport_template *
iscsi_register_transport(struct iscsi_transport *tt)
EXPORT_SYMBOL_GPL(iscsi_register_transport);
int iscsi_unregister_transport(struct iscsi_transport *tt)
EXPORT_SYMBOL_GPL(iscsi_unregister_transport);
static __init int iscsi_transport_init(void)
static void __exit iscsi_transport_exit(void)
module_init(iscsi_transport_init);
module_exit(iscsi_transport_exit);
MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu>, "
"Dmitry Yusupov <dmitry_yus@yahoo.com>, "
"Alex Aizman <itn780@yahoo.com>");
MODULE_DESCRIPTION("iSCSI Transport Interface");
MODULE_LICENSE("GPL");
MODULE_VERSION(ISCSI_TRANSPORT_VERSION);
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_ISCSI);
