static char *states[] = ;
int peer2peer = 0;
module_param(peer2peer, int, 0644);
MODULE_PARM_DESC(peer2peer, "Support peer2peer ULPs (default=0)");
static int ep_timeout_secs = 60;
module_param(ep_timeout_secs, int, 0644);
MODULE_PARM_DESC(ep_timeout_secs, "CM Endpoint operation timeout "
"in seconds (default=60)");
static int mpa_rev = 1;
module_param(mpa_rev, int, 0644);
MODULE_PARM_DESC(mpa_rev, "MPA Revision, 0 supports amso1100, "
"1 is spec compliant. (default=1)");
static int markers_enabled = 0;
module_param(markers_enabled, int, 0644);
MODULE_PARM_DESC(markers_enabled, "Enable MPA MARKERS (default(0)=disabled)");
static int crc_enabled = 1;
module_param(crc_enabled, int, 0644);
MODULE_PARM_DESC(crc_enabled, "Enable MPA CRC (default(1)=enabled)");
static int rcv_win = 256 * 1024;
module_param(rcv_win, int, 0644);
MODULE_PARM_DESC(rcv_win, "TCP receive window in bytes (default=256)");
static int snd_win = 32 * 1024;
module_param(snd_win, int, 0644);
MODULE_PARM_DESC(snd_win, "TCP send window in bytes (default=32KB)");
static unsigned int nocong = 0;
module_param(nocong, uint, 0644);
MODULE_PARM_DESC(nocong, "Turn off congestion control (default=0)");
static unsigned int cong_flavor = 1;
module_param(cong_flavor, uint, 0644);
MODULE_PARM_DESC(cong_flavor, "TCP Congestion control flavor (default=1)");
static struct workqueue_struct *workq;
static struct sk_buff_head rxq;
static struct sk_buff *get_skb(struct sk_buff *skb, int len, gfp_t gfp);
static void ep_timeout(unsigned long arg);
static void connect_reply_upcall(struct iwch_ep *ep, int status);
static void start_ep_timer(struct iwch_ep *ep)
static void stop_ep_timer(struct iwch_ep *ep)
static int iwch_l2t_send(struct t3cdev *tdev, struct sk_buff *skb, struct l2t_entry *l2e)
int iwch_cxgb3_ofld_send(struct t3cdev *tdev, struct sk_buff *skb)
static void release_tid(struct t3cdev *tdev, u32 hwtid, struct sk_buff *skb)
int iwch_quiesce_tid(struct iwch_ep *ep)
int iwch_resume_tid(struct iwch_ep *ep)
static void set_emss(struct iwch_ep *ep, u16 opt)
static enum iwch_ep_state state_read(struct iwch_ep_common *epc)
static void __state_set(struct iwch_ep_common *epc, enum iwch_ep_state new)
static void state_set(struct iwch_ep_common *epc, enum iwch_ep_state new)
static void *alloc_ep(int size, gfp_t gfp)
void __free_ep(struct kref *kref)
static void release_ep_resources(struct iwch_ep *ep)
static int status2errno(int status)
static struct sk_buff *get_skb(struct sk_buff *skb, int len, gfp_t gfp)
static struct rtable *find_route(struct t3cdev *dev, __be32 local_ip,
__be32 peer_ip, __be16 local_port,
__be16 peer_port, u8 tos)
static unsigned int find_best_mtu(const struct t3c_data *d, unsigned short mtu)
static void arp_failure_discard(struct t3cdev *dev, struct sk_buff *skb)
static void act_open_req_arp_failure(struct t3cdev *dev, struct sk_buff *skb)
static void abort_arp_failure(struct t3cdev *dev, struct sk_buff *skb)
static int send_halfclose(struct iwch_ep *ep, gfp_t gfp)
static int send_abort(struct iwch_ep *ep, struct sk_buff *skb, gfp_t gfp)
static int send_connect(struct iwch_ep *ep)
static void send_mpa_req(struct iwch_ep *ep, struct sk_buff *skb)
static int send_mpa_reject(struct iwch_ep *ep, const void *pdata, u8 plen)
static int send_mpa_reply(struct iwch_ep *ep, const void *pdata, u8 plen)
static int act_establish(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static void abort_connection(struct iwch_ep *ep, struct sk_buff *skb, gfp_t gfp)
static void close_complete_upcall(struct iwch_ep *ep)
static void peer_close_upcall(struct iwch_ep *ep)
static void peer_abort_upcall(struct iwch_ep *ep)
static void connect_reply_upcall(struct iwch_ep *ep, int status)
static void connect_request_upcall(struct iwch_ep *ep)
static void established_upcall(struct iwch_ep *ep)
static int update_rx_credits(struct iwch_ep *ep, u32 credits)
static void process_mpa_reply(struct iwch_ep *ep, struct sk_buff *skb)
static void process_mpa_request(struct iwch_ep *ep, struct sk_buff *skb)
static int rx_data(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int tx_ack(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int abort_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static inline int act_open_has_tid(int status)
static int act_open_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int listen_start(struct iwch_listen_ep *ep)
static int pass_open_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int listen_stop(struct iwch_listen_ep *ep)
static int close_listsrv_rpl(struct t3cdev *tdev, struct sk_buff *skb,
void *ctx)
static void accept_cr(struct iwch_ep *ep, __be32 peer_ip, struct sk_buff *skb)
static void reject_cr(struct t3cdev *tdev, u32 hwtid, __be32 peer_ip,
struct sk_buff *skb)
static int pass_accept_req(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int pass_establish(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int peer_close(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int is_neg_adv_abort(unsigned int status)
static int peer_abort(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int close_con_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int terminate(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int ec_status(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static void ep_timeout(unsigned long arg)
int iwch_reject_cr(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len)
int iwch_accept_cr(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
static int is_loopback_dst(struct iw_cm_id *cm_id)
int iwch_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param)
int iwch_create_listen(struct iw_cm_id *cm_id, int backlog)
int iwch_destroy_listen(struct iw_cm_id *cm_id)
int iwch_ep_disconnect(struct iwch_ep *ep, int abrupt, gfp_t gfp)
int iwch_ep_redirect(void *ctx, struct dst_entry *old, struct dst_entry *new,
struct l2t_entry *l2t)
static const cxgb3_cpl_handler_func work_handlers[NUM_CPL_CMDS] = ;
static void process_work(struct work_struct *work)
static DECLARE_WORK(skb_work, process_work);
static int sched(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int set_tcb_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
cxgb3_cpl_handler_func t3c_handlers[NUM_CPL_CMDS] = ;
int __init iwch_cm_init(void)
void __exit iwch_cm_term(void)
