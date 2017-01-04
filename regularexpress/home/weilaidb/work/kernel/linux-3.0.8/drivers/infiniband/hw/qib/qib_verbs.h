#define QIB_VERBS_H
struct qib_ctxtdata;
struct qib_pportdata;
struct qib_devdata;
struct qib_verbs_txreq;
#define QIB_MAX_RDMA_ATOMIC     16
#define QIB_GUIDS_PER_PORT	5
#define QPN_MAX                 (1 << 24)
#define QPNMAP_ENTRIES          (QPN_MAX / PAGE_SIZE / BITS_PER_BYTE)
#define QIB_UVERBS_ABI_VERSION       2
#define IB_CQ_NONE      (IB_CQ_NEXT_COMP + 1)
#define IB_SEQ_NAK	(3 << 29)
#define IB_RNR_NAK                      0x20
#define IB_NAK_PSN_ERROR                0x60
#define IB_NAK_INVALID_REQUEST          0x61
#define IB_NAK_REMOTE_ACCESS_ERROR      0x62
#define IB_NAK_REMOTE_OPERATIONAL_ERROR 0x63
#define IB_NAK_INVALID_RD_REQUEST       0x64
#define QIB_POST_SEND_OK                0x01
#define QIB_POST_RECV_OK                0x02
#define QIB_PROCESS_RECV_OK             0x04
#define QIB_PROCESS_SEND_OK             0x08
#define QIB_PROCESS_NEXT_SEND_OK        0x10
#define QIB_FLUSH_SEND			0x20
#define QIB_FLUSH_RECV			0x40
#define QIB_PROCESS_OR_FLUSH_SEND \
(QIB_PROCESS_SEND_OK | QIB_FLUSH_SEND)
#define IB_PMA_SAMPLE_STATUS_DONE       0x00
#define IB_PMA_SAMPLE_STATUS_STARTED    0x01
#define IB_PMA_SAMPLE_STATUS_RUNNING    0x02
#define IB_PMA_PORT_XMIT_DATA   cpu_to_be16(0x0001)
#define IB_PMA_PORT_RCV_DATA    cpu_to_be16(0x0002)
#define IB_PMA_PORT_XMIT_PKTS   cpu_to_be16(0x0003)
#define IB_PMA_PORT_RCV_PKTS    cpu_to_be16(0x0004)
#define IB_PMA_PORT_XMIT_WAIT   cpu_to_be16(0x0005)
#define QIB_VENDOR_IPG		cpu_to_be16(0xFFA0)
#define IB_BTH_REQ_ACK		(1 << 31)
#define IB_BTH_SOLICITED	(1 << 23)
#define IB_BTH_MIG_REQ		(1 << 22)
#define IB_PORT_OTHER_LOCAL_CHANGES_SUP (1 << 26)
#define IB_GRH_VERSION		6
#define IB_GRH_VERSION_MASK	0xF
#define IB_GRH_VERSION_SHIFT	28
#define IB_GRH_TCLASS_MASK	0xFF
#define IB_GRH_TCLASS_SHIFT	20
#define IB_GRH_FLOW_MASK	0xFFFFF
#define IB_GRH_FLOW_SHIFT	0
#define IB_GRH_NEXT_HDR		0x1B
#define IB_DEFAULT_GID_PREFIX	cpu_to_be64(0xfe80000000000000ULL)
#define IB_VL_VL0       1
#define IB_VL_VL0_1     2
#define IB_VL_VL0_3     3
#define IB_VL_VL0_7     4
#define IB_VL_VL0_14    5
static inline int qib_num_vls(int vls)
struct ib_reth  __attribute__ ((packed));
struct ib_atomic_eth  __attribute__ ((packed));
struct qib_other_headers  __attribute__ ((packed));
struct qib_ib_header  __attribute__ ((packed));
struct qib_pio_header  __attribute__ ((packed));
struct qib_mcast_qp ;
struct qib_mcast ;
struct qib_pd ;
struct qib_ah ;
struct qib_mmap_info ;
struct qib_cq_wc ;
struct qib_cq ;
struct qib_seg ;
#define QIB_SEGSZ     (PAGE_SIZE / sizeof(struct qib_seg))
struct qib_segarray ;
struct qib_mregion ;
struct qib_sge ;
struct qib_mr ;
struct qib_swqe ;
struct qib_rwqe ;
struct qib_rwq ;
struct qib_rq ;
struct qib_srq ;
struct qib_sge_state ;
struct qib_ack_entry ;
struct qib_qp ;
#define QIB_R_WRID_VALID        0
#define QIB_R_REWIND_SGE        1
#define QIB_R_REUSE_SGE 0x01
#define QIB_R_RDMAR_SEQ 0x02
#define QIB_R_RSP_NAK   0x04
#define QIB_R_RSP_SEND  0x08
#define QIB_R_COMM_EST  0x10
#define QIB_S_SIGNAL_REQ_WR	0x0001
#define QIB_S_BUSY		0x0002
#define QIB_S_TIMER		0x0004
#define QIB_S_RESP_PENDING	0x0008
#define QIB_S_ACK_PENDING	0x0010
#define QIB_S_WAIT_FENCE	0x0020
#define QIB_S_WAIT_RDMAR	0x0040
#define QIB_S_WAIT_RNR		0x0080
#define QIB_S_WAIT_SSN_CREDIT	0x0100
#define QIB_S_WAIT_DMA		0x0200
#define QIB_S_WAIT_PIO		0x0400
#define QIB_S_WAIT_TX		0x0800
#define QIB_S_WAIT_DMA_DESC	0x1000
#define QIB_S_WAIT_KMEM		0x2000
#define QIB_S_WAIT_PSN		0x4000
#define QIB_S_WAIT_ACK		0x8000
#define QIB_S_SEND_ONE		0x10000
#define QIB_S_UNLIMITED_CREDIT	0x20000
#define QIB_S_ANY_WAIT_IO (QIB_S_WAIT_PIO | QIB_S_WAIT_TX | \
QIB_S_WAIT_DMA_DESC | QIB_S_WAIT_KMEM)
#define QIB_S_ANY_WAIT_SEND (QIB_S_WAIT_FENCE | QIB_S_WAIT_RDMAR | \
QIB_S_WAIT_RNR | QIB_S_WAIT_SSN_CREDIT | QIB_S_WAIT_DMA | \
QIB_S_WAIT_PSN | QIB_S_WAIT_ACK)
#define QIB_S_ANY_WAIT (QIB_S_ANY_WAIT_IO | QIB_S_ANY_WAIT_SEND)
#define QIB_PSN_CREDIT  16
static inline struct qib_swqe *get_swqe_ptr(struct qib_qp *qp,
unsigned n)
static inline struct qib_rwqe *get_rwqe_ptr(struct qib_rq *rq, unsigned n)
struct qpn_map ;
struct qib_qpn_table ;
struct qib_lkey_table ;
struct qib_opcode_stats ;
struct qib_ibport ;
struct qib_ibdev ;
struct qib_verbs_counters ;
static inline struct qib_mr *to_imr(struct ib_mr *ibmr)
static inline struct qib_pd *to_ipd(struct ib_pd *ibpd)
static inline struct qib_ah *to_iah(struct ib_ah *ibah)
static inline struct qib_cq *to_icq(struct ib_cq *ibcq)
static inline struct qib_srq *to_isrq(struct ib_srq *ibsrq)
static inline struct qib_qp *to_iqp(struct ib_qp *ibqp)
static inline struct qib_ibdev *to_idev(struct ib_device *ibdev)
static inline int qib_send_ok(struct qib_qp *qp)
extern struct workqueue_struct *qib_cq_wq;
static inline void qib_schedule_send(struct qib_qp *qp)
static inline int qib_pkey_ok(u16 pkey1, u16 pkey2)
void qib_bad_pqkey(struct qib_ibport *ibp, __be16 trap_num, u32 key, u32 sl,
u32 qp1, u32 qp2, __be16 lid1, __be16 lid2);
void qib_cap_mask_chg(struct qib_ibport *ibp);
void qib_sys_guid_chg(struct qib_ibport *ibp);
void qib_node_desc_chg(struct qib_ibport *ibp);
int qib_process_mad(struct ib_device *ibdev, int mad_flags, u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad);
int qib_create_agents(struct qib_ibdev *dev);
void qib_free_agents(struct qib_ibdev *dev);
static inline int qib_cmp24(u32 a, u32 b)
struct qib_mcast *qib_mcast_find(struct qib_ibport *ibp, union ib_gid *mgid);
int qib_snapshot_counters(struct qib_pportdata *ppd, u64 *swords,
u64 *rwords, u64 *spkts, u64 *rpkts,
u64 *xmit_wait);
int qib_get_counters(struct qib_pportdata *ppd,
struct qib_verbs_counters *cntrs);
int qib_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int qib_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int qib_mcast_tree_empty(struct qib_ibport *ibp);
__be32 qib_compute_aeth(struct qib_qp *qp);
struct qib_qp *qib_lookup_qpn(struct qib_ibport *ibp, u32 qpn);
struct ib_qp *qib_create_qp(struct ib_pd *ibpd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata);
int qib_destroy_qp(struct ib_qp *ibqp);
int qib_error_qp(struct qib_qp *qp, enum ib_wc_status err);
int qib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata);
int qib_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_qp_init_attr *init_attr);
unsigned qib_free_all_qps(struct qib_devdata *dd);
void qib_init_qpn_table(struct qib_devdata *dd, struct qib_qpn_table *qpt);
void qib_free_qpn_table(struct qib_qpn_table *qpt);
void qib_get_credit(struct qib_qp *qp, u32 aeth);
unsigned qib_pkt_delay(u32 plen, u8 snd_mult, u8 rcv_mult);
void qib_verbs_sdma_desc_avail(struct qib_pportdata *ppd, unsigned avail);
void qib_put_txreq(struct qib_verbs_txreq *tx);
int qib_verbs_send(struct qib_qp *qp, struct qib_ib_header *hdr,
u32 hdrwords, struct qib_sge_state *ss, u32 len);
void qib_copy_sge(struct qib_sge_state *ss, void *data, u32 length,
int release);
void qib_skip_sge(struct qib_sge_state *ss, u32 length, int release);
void qib_uc_rcv(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp);
void qib_rc_rcv(struct qib_ctxtdata *rcd, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp);
int qib_check_ah(struct ib_device *ibdev, struct ib_ah_attr *ah_attr);
void qib_rc_rnr_retry(unsigned long arg);
void qib_rc_send_complete(struct qib_qp *qp, struct qib_ib_header *hdr);
void qib_rc_error(struct qib_qp *qp, enum ib_wc_status err);
int qib_post_ud_send(struct qib_qp *qp, struct ib_send_wr *wr);
void qib_ud_rcv(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp);
int qib_alloc_lkey(struct qib_lkey_table *rkt, struct qib_mregion *mr);
int qib_free_lkey(struct qib_ibdev *dev, struct qib_mregion *mr);
int qib_lkey_ok(struct qib_lkey_table *rkt, struct qib_pd *pd,
struct qib_sge *isge, struct ib_sge *sge, int acc);
int qib_rkey_ok(struct qib_qp *qp, struct qib_sge *sge,
u32 len, u64 vaddr, u32 rkey, int acc);
int qib_post_srq_receive(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
struct ib_srq *qib_create_srq(struct ib_pd *ibpd,
struct ib_srq_init_attr *srq_init_attr,
struct ib_udata *udata);
int qib_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask,
struct ib_udata *udata);
int qib_query_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr);
int qib_destroy_srq(struct ib_srq *ibsrq);
void qib_cq_enter(struct qib_cq *cq, struct ib_wc *entry, int sig);
int qib_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry);
struct ib_cq *qib_create_cq(struct ib_device *ibdev, int entries,
int comp_vector, struct ib_ucontext *context,
struct ib_udata *udata);
int qib_destroy_cq(struct ib_cq *ibcq);
int qib_req_notify_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags);
int qib_resize_cq(struct ib_cq *ibcq, int cqe, struct ib_udata *udata);
struct ib_mr *qib_get_dma_mr(struct ib_pd *pd, int acc);
struct ib_mr *qib_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start);
struct ib_mr *qib_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int mr_access_flags,
struct ib_udata *udata);
int qib_dereg_mr(struct ib_mr *ibmr);
struct ib_mr *qib_alloc_fast_reg_mr(struct ib_pd *pd, int max_page_list_len);
struct ib_fast_reg_page_list *qib_alloc_fast_reg_page_list(
struct ib_device *ibdev, int page_list_len);
void qib_free_fast_reg_page_list(struct ib_fast_reg_page_list *pl);
int qib_fast_reg_mr(struct qib_qp *qp, struct ib_send_wr *wr);
struct ib_fmr *qib_alloc_fmr(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr);
int qib_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova);
int qib_unmap_fmr(struct list_head *fmr_list);
int qib_dealloc_fmr(struct ib_fmr *ibfmr);
void qib_release_mmap_info(struct kref *ref);
struct qib_mmap_info *qib_create_mmap_info(struct qib_ibdev *dev, u32 size,
struct ib_ucontext *context,
void *obj);
void qib_update_mmap_info(struct qib_ibdev *dev, struct qib_mmap_info *ip,
u32 size, void *obj);
int qib_mmap(struct ib_ucontext *context, struct vm_area_struct *vma);
int qib_get_rwqe(struct qib_qp *qp, int wr_id_only);
void qib_migrate_qp(struct qib_qp *qp);
int qib_ruc_check_hdr(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, struct qib_qp *qp, u32 bth0);
u32 qib_make_grh(struct qib_ibport *ibp, struct ib_grh *hdr,
struct ib_global_route *grh, u32 hwords, u32 nwords);
void qib_make_ruc_header(struct qib_qp *qp, struct qib_other_headers *ohdr,
u32 bth0, u32 bth2);
void qib_do_send(struct work_struct *work);
void qib_send_complete(struct qib_qp *qp, struct qib_swqe *wqe,
enum ib_wc_status status);
void qib_send_rc_ack(struct qib_qp *qp);
int qib_make_rc_req(struct qib_qp *qp);
int qib_make_uc_req(struct qib_qp *qp);
int qib_make_ud_req(struct qib_qp *qp);
int qib_register_ib_device(struct qib_devdata *);
void qib_unregister_ib_device(struct qib_devdata *);
void qib_ib_rcv(struct qib_ctxtdata *, void *, void *, u32);
void qib_ib_piobufavail(struct qib_devdata *);
unsigned qib_get_npkeys(struct qib_devdata *);
unsigned qib_get_pkey(struct qib_ibport *, unsigned);
extern const enum ib_wc_opcode ib_qib_wc_opcode[];
#define IB_PHYSPORTSTATE_SLEEP 1
#define IB_PHYSPORTSTATE_POLL 2
#define IB_PHYSPORTSTATE_DISABLED 3
#define IB_PHYSPORTSTATE_CFG_TRAIN 4
#define IB_PHYSPORTSTATE_LINKUP 5
#define IB_PHYSPORTSTATE_LINK_ERR_RECOVER 6
#define IB_PHYSPORTSTATE_CFG_DEBOUNCE 8
#define IB_PHYSPORTSTATE_CFG_IDLE 0xB
#define IB_PHYSPORTSTATE_RECOVERY_RETRAIN 0xC
#define IB_PHYSPORTSTATE_RECOVERY_WAITRMT 0xE
#define IB_PHYSPORTSTATE_RECOVERY_IDLE 0xF
#define IB_PHYSPORTSTATE_CFG_ENH 0x10
#define IB_PHYSPORTSTATE_CFG_WAIT_ENH 0x13
extern const int ib_qib_state_ops[];
extern __be64 ib_qib_sys_image_guid;
extern unsigned int ib_qib_lkey_table_size;
extern unsigned int ib_qib_max_cqes;
extern unsigned int ib_qib_max_cqs;
extern unsigned int ib_qib_max_qp_wrs;
extern unsigned int ib_qib_max_qps;
extern unsigned int ib_qib_max_sges;
extern unsigned int ib_qib_max_mcast_grps;
extern unsigned int ib_qib_max_mcast_qp_attached;
extern unsigned int ib_qib_max_srqs;
extern unsigned int ib_qib_max_srq_sges;
extern unsigned int ib_qib_max_srq_wrs;
extern const u32 ib_qib_rnr_table[];
extern struct ib_dma_mapping_ops qib_dma_mapping_ops;
