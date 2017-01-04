#define VERSION "1.3"
static int compress_src = 1;
static int compress_dst = 1;
static LIST_HEAD(bnep_session_list);
static DECLARE_RWSEM(bnep_session_sem);
static struct bnep_session *__bnep_get_session(u8 *dst)
static void __bnep_link_session(struct bnep_session *s)
static void __bnep_unlink_session(struct bnep_session *s)
static int bnep_send(struct bnep_session *s, void *data, size_t len)
static int bnep_send_rsp(struct bnep_session *s, u8 ctrl, u16 resp)
static inline void bnep_set_default_proto_filter(struct bnep_session *s)
static int bnep_ctrl_set_netfilter(struct bnep_session *s, __be16 *data, int len)
static int bnep_ctrl_set_mcfilter(struct bnep_session *s, u8 *data, int len)
static int bnep_rx_control(struct bnep_session *s, void *data, int len)
static int bnep_rx_extension(struct bnep_session *s, struct sk_buff *skb)
static u8 __bnep_rx_hlen[] = ;
static inline int bnep_rx_frame(struct bnep_session *s, struct sk_buff *skb)
static u8 __bnep_tx_types[] = ;
static inline int bnep_tx_frame(struct bnep_session *s, struct sk_buff *skb)
static int bnep_session(void *arg)
static struct device *bnep_get_device(struct bnep_session *session)
static struct device_type bnep_type = ;
int bnep_add_connection(struct bnep_connadd_req *req, struct socket *sock)
int bnep_del_connection(struct bnep_conndel_req *req)
static void __bnep_copy_ci(struct bnep_conninfo *ci, struct bnep_session *s)
int bnep_get_connlist(struct bnep_connlist_req *req)
int bnep_get_conninfo(struct bnep_conninfo *ci)
static int __init bnep_init(void)
static void __exit bnep_exit(void)
module_init(bnep_init);
module_exit(bnep_exit);
module_param(compress_src, bool, 0644);
MODULE_PARM_DESC(compress_src, "Compress sources headers");
module_param(compress_dst, bool, 0644);
MODULE_PARM_DESC(compress_dst, "Compress destination headers");
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth BNEP ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("bt-proto-4");
