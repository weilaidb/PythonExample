#define VERSION "1.0"
static DECLARE_RWSEM(cmtp_session_sem);
static LIST_HEAD(cmtp_session_list);
static struct cmtp_session *__cmtp_get_session(bdaddr_t *bdaddr)
static void __cmtp_link_session(struct cmtp_session *session)
static void __cmtp_unlink_session(struct cmtp_session *session)
static void __cmtp_copy_session(struct cmtp_session *session, struct cmtp_conninfo *ci)
static inline int cmtp_alloc_block_id(struct cmtp_session *session)
static inline void cmtp_free_block_id(struct cmtp_session *session, int id)
static inline void cmtp_add_msgpart(struct cmtp_session *session, int id, const unsigned char *buf, int count)
static inline int cmtp_recv_frame(struct cmtp_session *session, struct sk_buff *skb)
static int cmtp_send_frame(struct cmtp_session *session, unsigned char *data, int len)
static void cmtp_process_transmit(struct cmtp_session *session)
static int cmtp_session(void *arg)
int cmtp_add_connection(struct cmtp_connadd_req *req, struct socket *sock)
int cmtp_del_connection(struct cmtp_conndel_req *req)
int cmtp_get_connlist(struct cmtp_connlist_req *req)
int cmtp_get_conninfo(struct cmtp_conninfo *ci)
static int __init cmtp_init(void)
static void __exit cmtp_exit(void)
module_init(cmtp_init);
module_exit(cmtp_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth CMTP ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS("bt-proto-5");
