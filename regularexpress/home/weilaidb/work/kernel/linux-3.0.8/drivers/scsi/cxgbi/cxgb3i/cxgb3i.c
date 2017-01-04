#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static unsigned int dbg_level;
#define DRV_MODULE_NAME         "cxgb3i"
#define DRV_MODULE_DESC         "Chelsio T3 iSCSI Driver"
#define DRV_MODULE_VERSION	"2.0.0"
#define DRV_MODULE_RELDATE	"Jun. 2010"
static char version[] =
DRV_MODULE_DESC " " DRV_MODULE_NAME
" v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Chelsio Communications, Inc.");
MODULE_DESCRIPTION(DRV_MODULE_DESC);
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_LICENSE("GPL");
module_param(dbg_level, uint, 0644);
MODULE_PARM_DESC(dbg_level, "debug flag (default=0)");
static int cxgb3i_rcv_win = 256 * 1024;
module_param(cxgb3i_rcv_win, int, 0644);
MODULE_PARM_DESC(cxgb3i_rcv_win, "TCP receive window in bytes (default=256KB)");
static int cxgb3i_snd_win = 128 * 1024;
module_param(cxgb3i_snd_win, int, 0644);
MODULE_PARM_DESC(cxgb3i_snd_win, "TCP send window in bytes (default=128KB)");
static int cxgb3i_rx_credit_thres = 10 * 1024;
module_param(cxgb3i_rx_credit_thres, int, 0644);
MODULE_PARM_DESC(rx_credit_thres,
"RX credits return threshold in bytes (default=10KB)");
static unsigned int cxgb3i_max_connect = 8 * 1024;
module_param(cxgb3i_max_connect, uint, 0644);
MODULE_PARM_DESC(cxgb3i_max_connect, "Max. # of connections (default=8092)");
static unsigned int cxgb3i_sport_base = 20000;
module_param(cxgb3i_sport_base, uint, 0644);
MODULE_PARM_DESC(cxgb3i_sport_base, "starting port number (default=20000)");
static void cxgb3i_dev_open(struct t3cdev *);
static void cxgb3i_dev_close(struct t3cdev *);
static void cxgb3i_dev_event_handler(struct t3cdev *, u32, u32);
static struct cxgb3_client t3_client = ;
static struct scsi_host_template cxgb3i_host_template = ;
static struct iscsi_transport cxgb3i_iscsi_transport = ;
static struct scsi_transport_template *cxgb3i_stt;
static int push_tx_frames(struct cxgbi_sock *csk, int req_completion);
static void send_act_open_req(struct cxgbi_sock *csk, struct sk_buff *skb,
const struct l2t_entry *e)
static inline void act_open_arp_failure(struct t3cdev *dev, struct sk_buff *skb)
static void send_close_req(struct cxgbi_sock *csk)
static void abort_arp_failure(struct t3cdev *tdev, struct sk_buff *skb)
static void send_abort_req(struct cxgbi_sock *csk)
static void send_abort_rpl(struct cxgbi_sock *csk, int rst_status)
static u32 send_rx_credits(struct cxgbi_sock *csk, u32 credits)
static unsigned int wrlen __read_mostly;
static unsigned int skb_wrs[SKB_WR_LIST_SIZE] __read_mostly;
static void init_wr_tab(unsigned int wr_len)
static inline void make_tx_data_wr(struct cxgbi_sock *csk, struct sk_buff *skb,
int len, int req_completion)
static void arp_failure_skb_discard(struct t3cdev *dev, struct sk_buff *skb)
static int push_tx_frames(struct cxgbi_sock *csk, int req_completion)
static inline void free_atid(struct cxgbi_sock *csk)
static int do_act_establish(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int act_open_rpl_status_to_errno(int status)
static void act_open_retry_timer(unsigned long data)
static int do_act_open_rpl(struct t3cdev *tdev, struct sk_buff *skb, void *ctx)
static int do_peer_close(struct t3cdev *cdev, struct sk_buff *skb, void *ctx)
static int do_close_con_rpl(struct t3cdev *cdev, struct sk_buff *skb,
void *ctx)
static int abort_status_to_errno(struct cxgbi_sock *csk, int abort_reason,
int *need_rst)
static int do_abort_req(struct t3cdev *cdev, struct sk_buff *skb, void *ctx)
static int do_abort_rpl(struct t3cdev *cdev, struct sk_buff *skb, void *ctx)
static int do_iscsi_hdr(struct t3cdev *t3dev, struct sk_buff *skb, void *ctx)
static int do_wr_ack(struct t3cdev *cdev, struct sk_buff *skb, void *ctx)
static int alloc_cpls(struct cxgbi_sock *csk)
static void l2t_put(struct cxgbi_sock *csk)
static void release_offload_resources(struct cxgbi_sock *csk)
static void update_address(struct cxgbi_hba *chba)
static int init_act_open(struct cxgbi_sock *csk)
cxgb3_cpl_handler_func cxgb3i_cpl_handlers[NUM_CPL_CMDS] = ;
int cxgb3i_ofld_init(struct cxgbi_device *cdev)
static inline void ulp_mem_io_set_hdr(struct sk_buff *skb, unsigned int addr)
static int ddp_set_map(struct cxgbi_sock *csk, struct cxgbi_pagepod_hdr *hdr,
unsigned int idx, unsigned int npods,
struct cxgbi_gather_list *gl)
static void ddp_clear_map(struct cxgbi_hba *chba, unsigned int tag,
unsigned int idx, unsigned int npods)
static int ddp_setup_conn_pgidx(struct cxgbi_sock *csk,
unsigned int tid, int pg_idx, bool reply)
static int ddp_setup_conn_digest(struct cxgbi_sock *csk, unsigned int tid,
int hcrc, int dcrc, int reply)
static void t3_ddp_cleanup(struct cxgbi_device *cdev)
static int cxgb3i_ddp_init(struct cxgbi_device *cdev)
static void cxgb3i_dev_close(struct t3cdev *t3dev)
static void cxgb3i_dev_open(struct t3cdev *t3dev)
static void cxgb3i_dev_event_handler(struct t3cdev *t3dev, u32 event, u32 port)
static int __init cxgb3i_init_module(void)
static void __exit cxgb3i_exit_module(void)
module_init(cxgb3i_init_module);
module_exit(cxgb3i_exit_module);
