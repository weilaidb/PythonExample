#define	__LIBCXGBI_H__
enum cxgbi_dbg_flag ;
#define log_debug(level, fmt, ...)	\
do  while (0)
#define CXGBI_MAX_CONN		16384
#define SKB_TX_ISCSI_PDU_HEADER_MAX	\
(sizeof(struct iscsi_hdr) + ISCSI_MAX_AHS_SIZE)
#define	ISCSI_PDU_NONPAYLOAD_LEN	312
#define cxgbi_align_pdu_size(n) do  while (0)
#define ULP2_MODE_ISCSI		2
#define ULP2_MAX_PKT_SIZE	16224
#define ULP2_MAX_PDU_PAYLOAD	\
(ULP2_MAX_PKT_SIZE - ISCSI_PDU_NONPAYLOAD_LEN)
static const unsigned int ulp2_extra_len[] = ;
static inline unsigned int cxgbi_ulp_extra_len(int submode)
#define CPL_RX_DDP_STATUS_DDP_SHIFT	16
#define CPL_RX_DDP_STATUS_PAD_SHIFT	19
#define CPL_RX_DDP_STATUS_HCRC_SHIFT	20
#define CPL_RX_DDP_STATUS_DCRC_SHIFT	21
struct cxgbi_pagepod_hdr ;
#define PPOD_PAGES_MAX			4
struct cxgbi_pagepod ;
struct cxgbi_tag_format ;
struct cxgbi_gather_list ;
struct cxgbi_ddp_info ;
#define DDP_PGIDX_MAX		4
#define DDP_THRESHOLD		2048
#define PPOD_PAGES_SHIFT	2
#define PPOD_SIZE               sizeof(struct cxgbi_pagepod)
#define PPOD_SIZE_SHIFT         6
#define ULPMEM_DSGL_MAX_NPPODS	16
#define ULPMEM_IDATA_MAX_NPPODS	4
#define PCIE_MEMWIN_MAX_NPPODS	16
#define PPOD_COLOR_SHIFT	0
#define PPOD_COLOR(x)		((x) << PPOD_COLOR_SHIFT)
#define PPOD_IDX_SHIFT          6
#define PPOD_IDX_MAX_SIZE       24
#define PPOD_TID_SHIFT		0
#define PPOD_TID(x)		((x) << PPOD_TID_SHIFT)
#define PPOD_TAG_SHIFT		6
#define PPOD_TAG(x)		((x) << PPOD_TAG_SHIFT)
#define PPOD_VALID_SHIFT	24
#define PPOD_VALID(x)		((x) << PPOD_VALID_SHIFT)
#define PPOD_VALID_FLAG		PPOD_VALID(1U)
struct sge_opaque_hdr ;
struct cxgbi_sock ;
enum cxgbi_sock_states;
enum cxgbi_sock_flags ;
struct cxgbi_skb_rx_cb ;
struct cxgbi_skb_tx_cb ;
enum cxgbi_skcb_flags ;
struct cxgbi_skb_cb ;
#define CXGBI_SKB_CB(skb)	((struct cxgbi_skb_cb *)&((skb)->cb[0]))
#define cxgbi_skcb_flags(skb)		(CXGBI_SKB_CB(skb)->flags)
#define cxgbi_skcb_ulp_mode(skb)	(CXGBI_SKB_CB(skb)->ulp_mode)
#define cxgbi_skcb_tcp_seq(skb)		(CXGBI_SKB_CB(skb)->seq)
#define cxgbi_skcb_rx_ddigest(skb)	(CXGBI_SKB_CB(skb)->rx.ddigest)
#define cxgbi_skcb_rx_pdulen(skb)	(CXGBI_SKB_CB(skb)->rx.pdulen)
#define cxgbi_skcb_tx_wr_next(skb)	(CXGBI_SKB_CB(skb)->tx.wr_next)
static inline void cxgbi_skcb_set_flag(struct sk_buff *skb,
enum cxgbi_skcb_flags flag)
static inline void cxgbi_skcb_clear_flag(struct sk_buff *skb,
enum cxgbi_skcb_flags flag)
static inline int cxgbi_skcb_test_flag(struct sk_buff *skb,
enum cxgbi_skcb_flags flag)
static inline void cxgbi_sock_set_flag(struct cxgbi_sock *csk,
enum cxgbi_sock_flags flag)
static inline void cxgbi_sock_clear_flag(struct cxgbi_sock *csk,
enum cxgbi_sock_flags flag)
static inline int cxgbi_sock_flag(struct cxgbi_sock *csk,
enum cxgbi_sock_flags flag)
static inline void cxgbi_sock_set_state(struct cxgbi_sock *csk, int state)
static inline void cxgbi_sock_free(struct kref *kref)
static inline void __cxgbi_sock_put(const char *fn, struct cxgbi_sock *csk)
#define cxgbi_sock_put(csk)	__cxgbi_sock_put(__func__, csk)
static inline void __cxgbi_sock_get(const char *fn, struct cxgbi_sock *csk)
#define cxgbi_sock_get(csk)	__cxgbi_sock_get(__func__, csk)
static inline int cxgbi_sock_is_closing(struct cxgbi_sock *csk)
static inline int cxgbi_sock_is_established(struct cxgbi_sock *csk)
static inline void cxgbi_sock_purge_write_queue(struct cxgbi_sock *csk)
static inline unsigned int cxgbi_sock_compute_wscale(unsigned int win)
static inline struct sk_buff *alloc_wr(int wrlen, int dlen, gfp_t gfp)
#define SKB_WR_LIST_SIZE	 (MAX_SKB_FRAGS + 2)
static inline void cxgbi_sock_reset_wr_list(struct cxgbi_sock *csk)
static inline void cxgbi_sock_enqueue_wr(struct cxgbi_sock *csk,
struct sk_buff *skb)
static inline int cxgbi_sock_count_pending_wrs(const struct cxgbi_sock *csk)
static inline struct sk_buff *cxgbi_sock_peek_wr(const struct cxgbi_sock *csk)
static inline struct sk_buff *cxgbi_sock_dequeue_wr(struct cxgbi_sock *csk)
void cxgbi_sock_check_wr_invariants(const struct cxgbi_sock *);
void cxgbi_sock_purge_wr_queue(struct cxgbi_sock *);
void cxgbi_sock_skb_entail(struct cxgbi_sock *, struct sk_buff *);
void cxgbi_sock_fail_act_open(struct cxgbi_sock *, int);
void cxgbi_sock_act_open_req_arp_failure(void *, struct sk_buff *);
void cxgbi_sock_closed(struct cxgbi_sock *);
void cxgbi_sock_established(struct cxgbi_sock *, unsigned int, unsigned int);
void cxgbi_sock_rcv_abort_rpl(struct cxgbi_sock *);
void cxgbi_sock_rcv_peer_close(struct cxgbi_sock *);
void cxgbi_sock_rcv_close_conn_rpl(struct cxgbi_sock *, u32);
void cxgbi_sock_rcv_wr_ack(struct cxgbi_sock *, unsigned int, unsigned int,
int);
unsigned int cxgbi_sock_select_mss(struct cxgbi_sock *, unsigned int);
void cxgbi_sock_free_cpl_skbs(struct cxgbi_sock *);
struct cxgbi_hba ;
struct cxgbi_ports_map ;
#define CXGBI_FLAG_DEV_T3		0x1
#define CXGBI_FLAG_DEV_T4		0x2
#define CXGBI_FLAG_ADAPTER_RESET	0x4
#define CXGBI_FLAG_IPV4_SET		0x10
struct cxgbi_device ;
#define cxgbi_cdev_priv(cdev)	((cdev)->dd_data)
struct cxgbi_conn ;
struct cxgbi_endpoint ;
#define MAX_PDU_FRAGS	((ULP2_MAX_PDU_PAYLOAD + 512 - 1) / 512)
struct cxgbi_task_data ;
#define iscsi_task_cxgbi_data(task) \
((task)->dd_data + sizeof(struct iscsi_tcp_task))
static inline int cxgbi_is_ddp_tag(struct cxgbi_tag_format *tformat, u32 tag)
static inline int cxgbi_sw_tag_usable(struct cxgbi_tag_format *tformat,
u32 sw_tag)
static inline u32 cxgbi_set_non_ddp_tag(struct cxgbi_tag_format *tformat,
u32 sw_tag)
static inline u32 cxgbi_ddp_tag_base(struct cxgbi_tag_format *tformat,
u32 sw_tag)
static inline u32 cxgbi_tag_rsvd_bits(struct cxgbi_tag_format *tformat,
u32 tag)
static inline u32 cxgbi_tag_nonrsvd_bits(struct cxgbi_tag_format *tformat,
u32 tag)
static inline void *cxgbi_alloc_big_mem(unsigned int size,
gfp_t gfp)
static inline void cxgbi_free_big_mem(void *addr)
static inline void cxgbi_set_iscsi_ipv4(struct cxgbi_hba *chba, __be32 ipaddr)
static inline __be32 cxgbi_get_iscsi_ipv4(struct cxgbi_hba *chba)
struct cxgbi_device *cxgbi_device_register(unsigned int, unsigned int);
void cxgbi_device_unregister(struct cxgbi_device *);
void cxgbi_device_unregister_all(unsigned int flag);
struct cxgbi_device *cxgbi_device_find_by_lldev(void *);
int cxgbi_hbas_add(struct cxgbi_device *, unsigned int, unsigned int,
struct scsi_host_template *,
struct scsi_transport_template *);
void cxgbi_hbas_remove(struct cxgbi_device *);
int cxgbi_device_portmap_create(struct cxgbi_device *cdev, unsigned int base,
unsigned int max_conn);
void cxgbi_device_portmap_cleanup(struct cxgbi_device *cdev);
void cxgbi_conn_tx_open(struct cxgbi_sock *);
void cxgbi_conn_pdu_ready(struct cxgbi_sock *);
int cxgbi_conn_alloc_pdu(struct iscsi_task *, u8);
int cxgbi_conn_init_pdu(struct iscsi_task *, unsigned int , unsigned int);
int cxgbi_conn_xmit_pdu(struct iscsi_task *);
void cxgbi_cleanup_task(struct iscsi_task *task);
void cxgbi_get_conn_stats(struct iscsi_cls_conn *, struct iscsi_stats *);
int cxgbi_set_conn_param(struct iscsi_cls_conn *,
enum iscsi_param, char *, int);
int cxgbi_get_ep_param(struct iscsi_endpoint *ep, enum iscsi_param, char *);
struct iscsi_cls_conn *cxgbi_create_conn(struct iscsi_cls_session *, u32);
int cxgbi_bind_conn(struct iscsi_cls_session *,
struct iscsi_cls_conn *, u64, int);
void cxgbi_destroy_session(struct iscsi_cls_session *);
struct iscsi_cls_session *cxgbi_create_session(struct iscsi_endpoint *,
u16, u16, u32);
int cxgbi_set_host_param(struct Scsi_Host *,
enum iscsi_host_param, char *, int);
int cxgbi_get_host_param(struct Scsi_Host *, enum iscsi_host_param, char *);
struct iscsi_endpoint *cxgbi_ep_connect(struct Scsi_Host *,
struct sockaddr *, int);
int cxgbi_ep_poll(struct iscsi_endpoint *, int);
void cxgbi_ep_disconnect(struct iscsi_endpoint *);
int cxgbi_iscsi_init(struct iscsi_transport *,
struct scsi_transport_template **);
void cxgbi_iscsi_cleanup(struct iscsi_transport *,
struct scsi_transport_template **);
void cxgbi_parse_pdu_itt(struct iscsi_conn *, itt_t, int *, int *);
int cxgbi_ddp_init(struct cxgbi_device *, unsigned int, unsigned int,
unsigned int, unsigned int);
int cxgbi_ddp_cleanup(struct cxgbi_device *);
void cxgbi_ddp_page_size_factor(int *);
void cxgbi_ddp_ppod_clear(struct cxgbi_pagepod *);
void cxgbi_ddp_ppod_set(struct cxgbi_pagepod *, struct cxgbi_pagepod_hdr *,
struct cxgbi_gather_list *, unsigned int);
