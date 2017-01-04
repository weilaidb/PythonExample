#define pr_fmt(fmt)	KBUILD_MODNAME ":%s: " fmt, __func__
static unsigned int dbg_level;
#define DRV_MODULE_NAME		"libcxgbi"
#define DRV_MODULE_DESC		"Chelsio iSCSI driver library"
#define DRV_MODULE_VERSION	"0.9.0"
#define DRV_MODULE_RELDATE	"Jun. 2010"
MODULE_AUTHOR("Chelsio Communications, Inc.");
MODULE_DESCRIPTION(DRV_MODULE_DESC);
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_LICENSE("GPL");
module_param(dbg_level, uint, 0644);
MODULE_PARM_DESC(dbg_level, "libiscsi debug level (default=0)");
static LIST_HEAD(cdev_list);
static DEFINE_MUTEX(cdev_mutex);
int cxgbi_device_portmap_create(struct cxgbi_device *cdev, unsigned int base,
unsigned int max_conn)
EXPORT_SYMBOL_GPL(cxgbi_device_portmap_create);
void cxgbi_device_portmap_cleanup(struct cxgbi_device *cdev)
EXPORT_SYMBOL_GPL(cxgbi_device_portmap_cleanup);
static inline void cxgbi_device_destroy(struct cxgbi_device *cdev)
struct cxgbi_device *cxgbi_device_register(unsigned int extra,
unsigned int nports)
EXPORT_SYMBOL_GPL(cxgbi_device_register);
void cxgbi_device_unregister(struct cxgbi_device *cdev)
EXPORT_SYMBOL_GPL(cxgbi_device_unregister);
void cxgbi_device_unregister_all(unsigned int flag)
EXPORT_SYMBOL_GPL(cxgbi_device_unregister_all);
struct cxgbi_device *cxgbi_device_find_by_lldev(void *lldev)
EXPORT_SYMBOL_GPL(cxgbi_device_find_by_lldev);
static struct cxgbi_device *cxgbi_device_find_by_netdev(struct net_device *ndev,
int *port)
void cxgbi_hbas_remove(struct cxgbi_device *cdev)
EXPORT_SYMBOL_GPL(cxgbi_hbas_remove);
int cxgbi_hbas_add(struct cxgbi_device *cdev, unsigned int max_lun,
unsigned int max_id, struct scsi_host_template *sht,
struct scsi_transport_template *stt)
EXPORT_SYMBOL_GPL(cxgbi_hbas_add);
static int sock_get_port(struct cxgbi_sock *csk)
static void sock_put_port(struct cxgbi_sock *csk)
void cxgbi_sock_free_cpl_skbs(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_free_cpl_skbs);
static struct cxgbi_sock *cxgbi_sock_create(struct cxgbi_device *cdev)
static struct rtable *find_route_ipv4(struct flowi4 *fl4,
__be32 saddr, __be32 daddr,
__be16 sport, __be16 dport, u8 tos)
static struct cxgbi_sock *cxgbi_check_route(struct sockaddr *dst_addr)
void cxgbi_sock_established(struct cxgbi_sock *csk, unsigned int snd_isn,
unsigned int opt)
EXPORT_SYMBOL_GPL(cxgbi_sock_established);
static void cxgbi_inform_iscsi_conn_closing(struct cxgbi_sock *csk)
void cxgbi_sock_closed(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_closed);
static void need_active_close(struct cxgbi_sock *csk)
void cxgbi_sock_fail_act_open(struct cxgbi_sock *csk, int errno)
EXPORT_SYMBOL_GPL(cxgbi_sock_fail_act_open);
void cxgbi_sock_act_open_req_arp_failure(void *handle, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(cxgbi_sock_act_open_req_arp_failure);
void cxgbi_sock_rcv_abort_rpl(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_rcv_abort_rpl);
void cxgbi_sock_rcv_peer_close(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_rcv_peer_close);
void cxgbi_sock_rcv_close_conn_rpl(struct cxgbi_sock *csk, u32 snd_nxt)
EXPORT_SYMBOL_GPL(cxgbi_sock_rcv_close_conn_rpl);
void cxgbi_sock_rcv_wr_ack(struct cxgbi_sock *csk, unsigned int credits,
unsigned int snd_una, int seq_chk)
EXPORT_SYMBOL_GPL(cxgbi_sock_rcv_wr_ack);
static unsigned int cxgbi_sock_find_best_mtu(struct cxgbi_sock *csk,
unsigned short mtu)
unsigned int cxgbi_sock_select_mss(struct cxgbi_sock *csk, unsigned int pmtu)
EXPORT_SYMBOL_GPL(cxgbi_sock_select_mss);
void cxgbi_sock_skb_entail(struct cxgbi_sock *csk, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(cxgbi_sock_skb_entail);
void cxgbi_sock_purge_wr_queue(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_purge_wr_queue);
void cxgbi_sock_check_wr_invariants(const struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_sock_check_wr_invariants);
static int cxgbi_sock_send_pdus(struct cxgbi_sock *csk, struct sk_buff *skb)
static unsigned char ddp_page_order[DDP_PGIDX_MAX] = ;
static unsigned char ddp_page_shift[DDP_PGIDX_MAX] = ;
static unsigned char page_idx = DDP_PGIDX_MAX;
static unsigned char sw_tag_idx_bits;
static unsigned char sw_tag_age_bits;
static int ddp_adjust_page_table(void)
static int ddp_find_page_index(unsigned long pgsz)
static void ddp_setup_host_page_size(void)
void cxgbi_ddp_page_size_factor(int *pgsz_factor)
EXPORT_SYMBOL_GPL(cxgbi_ddp_page_size_factor);
void cxgbi_ddp_ppod_set(struct cxgbi_pagepod *ppod,
struct cxgbi_pagepod_hdr *hdr,
struct cxgbi_gather_list *gl, unsigned int gidx)
EXPORT_SYMBOL_GPL(cxgbi_ddp_ppod_set);
void cxgbi_ddp_ppod_clear(struct cxgbi_pagepod *ppod)
EXPORT_SYMBOL_GPL(cxgbi_ddp_ppod_clear);
static inline int ddp_find_unused_entries(struct cxgbi_ddp_info *ddp,
unsigned int start, unsigned int max,
unsigned int count,
struct cxgbi_gather_list *gl)
static inline void ddp_unmark_entries(struct cxgbi_ddp_info *ddp,
int start, int count)
static inline void ddp_gl_unmap(struct pci_dev *pdev,
struct cxgbi_gather_list *gl)
static inline int ddp_gl_map(struct pci_dev *pdev,
struct cxgbi_gather_list *gl)
static void ddp_release_gl(struct cxgbi_gather_list *gl,
struct pci_dev *pdev)
static struct cxgbi_gather_list *ddp_make_gl(unsigned int xferlen,
struct scatterlist *sgl,
unsigned int sgcnt,
struct pci_dev *pdev,
gfp_t gfp)
static void ddp_tag_release(struct cxgbi_hba *chba, u32 tag)
static int ddp_tag_reserve(struct cxgbi_sock *csk, unsigned int tid,
u32 sw_tag, u32 *tagp, struct cxgbi_gather_list *gl,
gfp_t gfp)
int cxgbi_ddp_reserve(struct cxgbi_sock *csk, unsigned int *tagp,
unsigned int sw_tag, unsigned int xferlen,
struct scatterlist *sgl, unsigned int sgcnt, gfp_t gfp)
static void ddp_destroy(struct kref *kref)
int cxgbi_ddp_cleanup(struct cxgbi_device *cdev)
EXPORT_SYMBOL_GPL(cxgbi_ddp_cleanup);
int cxgbi_ddp_init(struct cxgbi_device *cdev,
unsigned int llimit, unsigned int ulimit,
unsigned int max_txsz, unsigned int max_rxsz)
EXPORT_SYMBOL_GPL(cxgbi_ddp_init);
static unsigned char padding[4];
static void task_release_itt(struct iscsi_task *task, itt_t hdr_itt)
static int task_reserve_itt(struct iscsi_task *task, itt_t *hdr_itt)
void cxgbi_parse_pdu_itt(struct iscsi_conn *conn, itt_t itt, int *idx, int *age)
EXPORT_SYMBOL_GPL(cxgbi_parse_pdu_itt);
void cxgbi_conn_tx_open(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_conn_tx_open);
static inline int read_pdu_skb(struct iscsi_conn *conn,
struct sk_buff *skb,
unsigned int offset,
int offloaded)
static int skb_read_pdu_bhs(struct iscsi_conn *conn, struct sk_buff *skb)
static int skb_read_pdu_data(struct iscsi_conn *conn, struct sk_buff *lskb,
struct sk_buff *skb, unsigned int offset)
static void csk_return_rx_credits(struct cxgbi_sock *csk, int copied)
void cxgbi_conn_pdu_ready(struct cxgbi_sock *csk)
EXPORT_SYMBOL_GPL(cxgbi_conn_pdu_ready);
static int sgl_seek_offset(struct scatterlist *sgl, unsigned int sgcnt,
unsigned int offset, unsigned int *off,
struct scatterlist **sgp)
static int sgl_read_to_frags(struct scatterlist *sg, unsigned int sgoffset,
unsigned int dlen, skb_frag_t *frags,
int frag_max)
int cxgbi_conn_alloc_pdu(struct iscsi_task *task, u8 opcode)
EXPORT_SYMBOL_GPL(cxgbi_conn_alloc_pdu);
static inline void tx_skb_setmode(struct sk_buff *skb, int hcrc, int dcrc)
int cxgbi_conn_init_pdu(struct iscsi_task *task, unsigned int offset,
unsigned int count)
EXPORT_SYMBOL_GPL(cxgbi_conn_init_pdu);
int cxgbi_conn_xmit_pdu(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(cxgbi_conn_xmit_pdu);
void cxgbi_cleanup_task(struct iscsi_task *task)
EXPORT_SYMBOL_GPL(cxgbi_cleanup_task);
void cxgbi_get_conn_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats)
EXPORT_SYMBOL_GPL(cxgbi_get_conn_stats);
static int cxgbi_conn_max_xmit_dlength(struct iscsi_conn *conn)
static int cxgbi_conn_max_recv_dlength(struct iscsi_conn *conn)
int cxgbi_set_conn_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf, int buflen)
EXPORT_SYMBOL_GPL(cxgbi_set_conn_param);
int cxgbi_get_ep_param(struct iscsi_endpoint *ep, enum iscsi_param param,
char *buf)
EXPORT_SYMBOL_GPL(cxgbi_get_ep_param);
struct iscsi_cls_conn *
cxgbi_create_conn(struct iscsi_cls_session *cls_session, u32 cid)
EXPORT_SYMBOL_GPL(cxgbi_create_conn);
int cxgbi_bind_conn(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn,
u64 transport_eph, int is_leading)
EXPORT_SYMBOL_GPL(cxgbi_bind_conn);
struct iscsi_cls_session *cxgbi_create_session(struct iscsi_endpoint *ep,
u16 cmds_max, u16 qdepth,
u32 initial_cmdsn)
EXPORT_SYMBOL_GPL(cxgbi_create_session);
void cxgbi_destroy_session(struct iscsi_cls_session *cls_session)
EXPORT_SYMBOL_GPL(cxgbi_destroy_session);
int cxgbi_set_host_param(struct Scsi_Host *shost, enum iscsi_host_param param,
char *buf, int buflen)
EXPORT_SYMBOL_GPL(cxgbi_set_host_param);
int cxgbi_get_host_param(struct Scsi_Host *shost, enum iscsi_host_param param,
char *buf)
EXPORT_SYMBOL_GPL(cxgbi_get_host_param);
struct iscsi_endpoint *cxgbi_ep_connect(struct Scsi_Host *shost,
struct sockaddr *dst_addr,
int non_blocking)
EXPORT_SYMBOL_GPL(cxgbi_ep_connect);
int cxgbi_ep_poll(struct iscsi_endpoint *ep, int timeout_ms)
EXPORT_SYMBOL_GPL(cxgbi_ep_poll);
void cxgbi_ep_disconnect(struct iscsi_endpoint *ep)
EXPORT_SYMBOL_GPL(cxgbi_ep_disconnect);
int cxgbi_iscsi_init(struct iscsi_transport *itp,
struct scsi_transport_template **stt)
EXPORT_SYMBOL_GPL(cxgbi_iscsi_init);
void cxgbi_iscsi_cleanup(struct iscsi_transport *itp,
struct scsi_transport_template **stt)
EXPORT_SYMBOL_GPL(cxgbi_iscsi_cleanup);
static int __init libcxgbi_init_module(void)
static void __exit libcxgbi_exit_module(void)
module_init(libcxgbi_init_module);
module_exit(libcxgbi_exit_module);
