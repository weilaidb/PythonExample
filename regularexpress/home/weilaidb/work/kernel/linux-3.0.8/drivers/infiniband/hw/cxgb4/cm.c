static char *states[] = ;
static int dack_mode = 1;
module_param(dack_mode, int, 0644);
MODULE_PARM_DESC(dack_mode, "Delayed ack mode (default=1)");
int c4iw_max_read_depth = 8;
module_param(c4iw_max_read_depth, int, 0644);
MODULE_PARM_DESC(c4iw_max_read_depth, "Per-connection max ORD/IRD (default=8)");
static int enable_tcp_timestamps;
module_param(enable_tcp_timestamps, int, 0644);
MODULE_PARM_DESC(enable_tcp_timestamps, "Enable tcp timestamps (default=0)");
static int enable_tcp_sack;
module_param(enable_tcp_sack, int, 0644);
MODULE_PARM_DESC(enable_tcp_sack, "Enable tcp SACK (default=0)");
static int enable_tcp_window_scaling = 1;
module_param(enable_tcp_window_scaling, int, 0644);
MODULE_PARM_DESC(enable_tcp_window_scaling,
"Enable tcp window scaling (default=1)");
int c4iw_debug;
module_param(c4iw_debug, int, 0644);
MODULE_PARM_DESC(c4iw_debug, "Enable debug logging (default=0)");
static int peer2peer;
module_param(peer2peer, int, 0644);
MODULE_PARM_DESC(peer2peer, "Support peer2peer ULPs (default=0)");
static int p2p_type = FW_RI_INIT_P2PTYPE_READ_REQ;
module_param(p2p_type, int, 0644);
MODULE_PARM_DESC(p2p_type, "RDMAP opcode to use for the RTR message: "
"1=RDMA_READ 0=RDMA_WRITE (default 1)");
static int ep_timeout_secs = 60;
module_param(ep_timeout_secs, int, 0644);
MODULE_PARM_DESC(ep_timeout_secs, "CM Endpoint operation timeout "
"in seconds (default=60)");
static int mpa_rev = 1;
module_param(mpa_rev, int, 0644);
MODULE_PARM_DESC(mpa_rev, "MPA Revision, 0 supports amso1100, "
"1 is spec compliant. (default=1)");
static int markers_enabled;
module_param(markers_enabled, int, 0644);
MODULE_PARM_DESC(markers_enabled, "Enable MPA MARKERS (default(0)=disabled)");
static int crc_enabled = 1;
module_param(crc_enabled, int, 0644);
MODULE_PARM_DESC(crc_enabled, "Enable MPA CRC (default(1)=enabled)");
static int rcv_win = 256 * 1024;
module_param(rcv_win, int, 0644);
MODULE_PARM_DESC(rcv_win, "TCP receive window in bytes (default=256KB)");
static int snd_win = 128 * 1024;
module_param(snd_win, int, 0644);
MODULE_PARM_DESC(snd_win, "TCP send window in bytes (default=128KB)");
static struct workqueue_struct *workq;
static struct sk_buff_head rxq;
static struct sk_buff *get_skb(struct sk_buff *skb, int len, gfp_t gfp);
static void ep_timeout(unsigned long arg);
static void connect_reply_upcall(struct c4iw_ep *ep, int status);
static LIST_HEAD(timeout_list);
static spinlock_t timeout_lock;
static void start_ep_timer(struct c4iw_ep *ep)
static void stop_ep_timer(struct c4iw_ep *ep)
static int c4iw_l2t_send(struct c4iw_rdev *rdev, struct sk_buff *skb,
struct l2t_entry *l2e)
int c4iw_ofld_send(struct c4iw_rdev *rdev, struct sk_buff *skb)
static void release_tid(struct c4iw_rdev *rdev, u32 hwtid, struct sk_buff *skb)
static void set_emss(struct c4iw_ep *ep, u16 opt)
static enum c4iw_ep_state state_read(struct c4iw_ep_common *epc)
static void __state_set(struct c4iw_ep_common *epc, enum c4iw_ep_state new)
static void state_set(struct c4iw_ep_common *epc, enum c4iw_ep_state new)
static void *alloc_ep(int size, gfp_t gfp)
void _c4iw_free_ep(struct kref *kref)
static void release_ep_resources(struct c4iw_ep *ep)
static int status2errno(int status)
static struct sk_buff *get_skb(struct sk_buff *skb, int len, gfp_t gfp)
static struct rtable *find_route(struct c4iw_dev *dev, __be32 local_ip,
__be32 peer_ip, __be16 local_port,
__be16 peer_port, u8 tos)
static void arp_failure_discard(void *handle, struct sk_buff *skb)
static void act_open_req_arp_failure(void *handle, struct sk_buff *skb)
static void abort_arp_failure(void *handle, struct sk_buff *skb)
static void send_flowc(struct c4iw_ep *ep, struct sk_buff *skb)
static int send_halfclose(struct c4iw_ep *ep, gfp_t gfp)
static int send_abort(struct c4iw_ep *ep, struct sk_buff *skb, gfp_t gfp)
static int send_connect(struct c4iw_ep *ep)
static void send_mpa_req(struct c4iw_ep *ep, struct sk_buff *skb)
static int send_mpa_reject(struct c4iw_ep *ep, const void *pdata, u8 plen)
static int send_mpa_reply(struct c4iw_ep *ep, const void *pdata, u8 plen)
static int act_establish(struct c4iw_dev *dev, struct sk_buff *skb)
static void close_complete_upcall(struct c4iw_ep *ep)
static int abort_connection(struct c4iw_ep *ep, struct sk_buff *skb, gfp_t gfp)
static void peer_close_upcall(struct c4iw_ep *ep)
static void peer_abort_upcall(struct c4iw_ep *ep)
static void connect_reply_upcall(struct c4iw_ep *ep, int status)
static void connect_request_upcall(struct c4iw_ep *ep)
static void established_upcall(struct c4iw_ep *ep)
static int update_rx_credits(struct c4iw_ep *ep, u32 credits)
static void process_mpa_reply(struct c4iw_ep *ep, struct sk_buff *skb)
static void process_mpa_request(struct c4iw_ep *ep, struct sk_buff *skb)
static int rx_data(struct c4iw_dev *dev, struct sk_buff *skb)
static int abort_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static inline int act_open_has_tid(int status)
static int act_open_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static int pass_open_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static int listen_stop(struct c4iw_listen_ep *ep)
static int close_listsrv_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static void accept_cr(struct c4iw_ep *ep, __be32 peer_ip, struct sk_buff *skb,
struct cpl_pass_accept_req *req)
static void reject_cr(struct c4iw_dev *dev, u32 hwtid, __be32 peer_ip,
struct sk_buff *skb)
static void get_4tuple(struct cpl_pass_accept_req *req,
__be32 *local_ip, __be32 *peer_ip,
__be16 *local_port, __be16 *peer_port)
static int pass_accept_req(struct c4iw_dev *dev, struct sk_buff *skb)
static int pass_establish(struct c4iw_dev *dev, struct sk_buff *skb)
static int peer_close(struct c4iw_dev *dev, struct sk_buff *skb)
static int is_neg_adv_abort(unsigned int status)
static int peer_abort(struct c4iw_dev *dev, struct sk_buff *skb)
static int close_con_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static int terminate(struct c4iw_dev *dev, struct sk_buff *skb)
static int fw4_ack(struct c4iw_dev *dev, struct sk_buff *skb)
int c4iw_reject_cr(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len)
int c4iw_accept_cr(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
int c4iw_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
int c4iw_create_listen(struct iw_cm_id *cm_id, int backlog)
int c4iw_destroy_listen(struct iw_cm_id *cm_id)
int c4iw_ep_disconnect(struct c4iw_ep *ep, int abrupt, gfp_t gfp)
static int async_event(struct c4iw_dev *dev, struct sk_buff *skb)
static c4iw_handler_func work_handlers[NUM_CPL_CMDS] = ;
static void process_timeout(struct c4iw_ep *ep)
static void process_timedout_eps(void)
static void process_work(struct work_struct *work)
static DECLARE_WORK(skb_work, process_work);
static void ep_timeout(unsigned long arg)
static int sched(struct c4iw_dev *dev, struct sk_buff *skb)
static int set_tcb_rpl(struct c4iw_dev *dev, struct sk_buff *skb)
static int fw6_msg(struct c4iw_dev *dev, struct sk_buff *skb)
static int peer_abort_intr(struct c4iw_dev *dev, struct sk_buff *skb)
c4iw_handler_func c4iw_handlers[NUM_CPL_CMDS] = ;
int __init c4iw_cm_init(void)
void __exit c4iw_cm_term(void)
