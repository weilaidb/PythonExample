#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static unsigned int dbg_level;
#define	DRV_MODULE_NAME		"cxgb4i"
#define DRV_MODULE_DESC		"Chelsio T4 iSCSI Driver"
#define	DRV_MODULE_VERSION	"0.9.1"
#define	DRV_MODULE_RELDATE	"Aug. 2010"
static char version[] =
DRV_MODULE_DESC " " DRV_MODULE_NAME
" v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Chelsio Communications, Inc.");
MODULE_DESCRIPTION(DRV_MODULE_DESC);
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_LICENSE("GPL");
module_param(dbg_level, uint, 0644);
MODULE_PARM_DESC(dbg_level, "Debug flag (default=0)");
static int cxgb4i_rcv_win = 256 * 1024;
module_param(cxgb4i_rcv_win, int, 0644);
MODULE_PARM_DESC(cxgb4i_rcv_win, "TCP reveive window in bytes");
static int cxgb4i_snd_win = 128 * 1024;
module_param(cxgb4i_snd_win, int, 0644);
MODULE_PARM_DESC(cxgb4i_snd_win, "TCP send window in bytes");
static int cxgb4i_rx_credit_thres = 10 * 1024;
module_param(cxgb4i_rx_credit_thres, int, 0644);
MODULE_PARM_DESC(cxgb4i_rx_credit_thres,
"RX credits return threshold in bytes (default=10KB)");
static unsigned int cxgb4i_max_connect = (8 * 1024);
module_param(cxgb4i_max_connect, uint, 0644);
MODULE_PARM_DESC(cxgb4i_max_connect, "Maximum number of connections");
static unsigned short cxgb4i_sport_base = 20000;
module_param(cxgb4i_sport_base, ushort, 0644);
MODULE_PARM_DESC(cxgb4i_sport_base, "Starting port number (default 20000)");
typedef void (*cxgb4i_cplhandler_func)(struct cxgbi_device *, struct sk_buff *);
static void *t4_uld_add(const struct cxgb4_lld_info *);
static int t4_uld_rx_handler(void *, const __be64 *, const struct pkt_gl *);
static int t4_uld_state_change(void *, enum cxgb4_state state);
static const struct cxgb4_uld_info cxgb4i_uld_info = ;
static struct scsi_host_template cxgb4i_host_template = ;
static struct iscsi_transport cxgb4i_iscsi_transport = ;
static struct scsi_transport_template *cxgb4i_stt;
#define DIV_ROUND_UP(n, d)	(((n) + (d) - 1) / (d))
#define RCV_BUFSIZ_MASK		0x3FFU
#define MAX_IMM_TX_PKT_LEN	128
static inline void set_queue(struct sk_buff *skb, unsigned int queue,
const struct cxgbi_sock *csk)
static int push_tx_frames(struct cxgbi_sock *, int);
static inline int is_ofld_imm(const struct sk_buff *skb)
static void send_act_open_req(struct cxgbi_sock *csk, struct sk_buff *skb,
struct l2t_entry *e)
static void send_close_req(struct cxgbi_sock *csk)
static void abort_arp_failure(void *handle, struct sk_buff *skb)
static void send_abort_req(struct cxgbi_sock *csk)
static void send_abort_rpl(struct cxgbi_sock *csk, int rst_status)
static u32 send_rx_credits(struct cxgbi_sock *csk, u32 credits)
static inline unsigned int sgl_len(unsigned int n)
static inline unsigned int calc_tx_flits_ofld(const struct sk_buff *skb)
static inline void send_tx_flowc_wr(struct cxgbi_sock *csk)
static inline void make_tx_data_wr(struct cxgbi_sock *csk, struct sk_buff *skb,
int dlen, int len, u32 credits, int compl)
static void arp_failure_skb_discard(void *handle, struct sk_buff *skb)
static int push_tx_frames(struct cxgbi_sock *csk, int req_completion)
static inline void free_atid(struct cxgbi_sock *csk)
static void do_act_establish(struct cxgbi_device *cdev, struct sk_buff *skb)
static int act_open_rpl_status_to_errno(int status)
static void csk_act_open_retry_timer(unsigned long data)
static void do_act_open_rpl(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_peer_close(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_close_con_rpl(struct cxgbi_device *cdev, struct sk_buff *skb)
static int abort_status_to_errno(struct cxgbi_sock *csk, int abort_reason,
int *need_rst)
static void do_abort_req_rss(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_abort_rpl_rss(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_rx_iscsi_hdr(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_rx_data_ddp(struct cxgbi_device *cdev,
struct sk_buff *skb)
static void do_fw4_ack(struct cxgbi_device *cdev, struct sk_buff *skb)
static void do_set_tcb_rpl(struct cxgbi_device *cdev, struct sk_buff *skb)
static int alloc_cpls(struct cxgbi_sock *csk)
static inline void l2t_put(struct cxgbi_sock *csk)
static void release_offload_resources(struct cxgbi_sock *csk)
static int init_act_open(struct cxgbi_sock *csk)
cxgb4i_cplhandler_func cxgb4i_cplhandlers[NUM_CPL_CMDS] = ;
int cxgb4i_ofld_init(struct cxgbi_device *cdev)
#define ULPMEM_IDATA_MAX_NPPODS	4
static inline void ulp_mem_io_set_hdr(struct ulp_mem_io *req,
unsigned int wr_len, unsigned int dlen,
unsigned int pm_addr)
static int ddp_ppod_write_idata(struct cxgbi_device *cdev, unsigned int port_id,
struct cxgbi_pagepod_hdr *hdr, unsigned int idx,
unsigned int npods,
struct cxgbi_gather_list *gl,
unsigned int gl_pidx)
static int ddp_set_map(struct cxgbi_sock *csk, struct cxgbi_pagepod_hdr *hdr,
unsigned int idx, unsigned int npods,
struct cxgbi_gather_list *gl)
static void ddp_clear_map(struct cxgbi_hba *chba, unsigned int tag,
unsigned int idx, unsigned int npods)
static int ddp_setup_conn_pgidx(struct cxgbi_sock *csk, unsigned int tid,
int pg_idx, bool reply)
static int ddp_setup_conn_digest(struct cxgbi_sock *csk, unsigned int tid,
int hcrc, int dcrc, int reply)
static int cxgb4i_ddp_init(struct cxgbi_device *cdev)
static void *t4_uld_add(const struct cxgb4_lld_info *lldi)
#define RX_PULL_LEN	128
static int t4_uld_rx_handler(void *handle, const __be64 *rsp,
const struct pkt_gl *pgl)
static int t4_uld_state_change(void *handle, enum cxgb4_state state)
static int __init cxgb4i_init_module(void)
static void __exit cxgb4i_exit_module(void)
module_init(cxgb4i_init_module);
module_exit(cxgb4i_exit_module);
