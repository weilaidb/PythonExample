#define IPATH_VERBS_H
#define IPATH_MAX_RDMA_ATOMIC	4
#define QPN_MAX                 (1 << 24)
#define QPNMAP_ENTRIES          (QPN_MAX / PAGE_SIZE / BITS_PER_BYTE)
#define IPATH_UVERBS_ABI_VERSION       2
#define IB_CQ_NONE	(IB_CQ_NEXT_COMP + 1)
#define IB_RNR_NAK			0x20
#define IB_NAK_PSN_ERROR		0x60
#define IB_NAK_INVALID_REQUEST		0x61
#define IB_NAK_REMOTE_ACCESS_ERROR	0x62
#define IB_NAK_REMOTE_OPERATIONAL_ERROR 0x63
#define IB_NAK_INVALID_RD_REQUEST	0x64
#define IPATH_POST_SEND_OK		0x01
#define IPATH_POST_RECV_OK		0x02
#define IPATH_PROCESS_RECV_OK		0x04
#define IPATH_PROCESS_SEND_OK		0x08
#define IPATH_PROCESS_NEXT_SEND_OK	0x10
#define IPATH_FLUSH_SEND		0x20
#define IPATH_FLUSH_RECV		0x40
#define IPATH_PROCESS_OR_FLUSH_SEND \
(IPATH_PROCESS_SEND_OK | IPATH_FLUSH_SEND)
#define IB_PMA_SAMPLE_STATUS_DONE	0x00
#define IB_PMA_SAMPLE_STATUS_STARTED	0x01
#define IB_PMA_SAMPLE_STATUS_RUNNING	0x02
#define IB_PMA_PORT_XMIT_DATA	cpu_to_be16(0x0001)
#define IB_PMA_PORT_RCV_DATA	cpu_to_be16(0x0002)
#define IB_PMA_PORT_XMIT_PKTS	cpu_to_be16(0x0003)
#define IB_PMA_PORT_RCV_PKTS	cpu_to_be16(0x0004)
#define IB_PMA_PORT_XMIT_WAIT	cpu_to_be16(0x0005)
struct ib_reth  __attribute__ ((packed));
struct ib_atomic_eth  __attribute__ ((packed));
struct ipath_other_headers  __attribute__ ((packed));
struct ipath_ib_header  __attribute__ ((packed));
struct ipath_pio_header  __attribute__ ((packed));
struct ipath_mcast_qp ;
struct ipath_mcast ;
struct ipath_pd ;
struct ipath_ah ;
struct ipath_mmap_info ;
struct ipath_cq_wc ;
struct ipath_cq ;
struct ipath_seg ;
#define IPATH_SEGSZ     (PAGE_SIZE / sizeof (struct ipath_seg))
struct ipath_segarray ;
struct ipath_mregion ;
struct ipath_sge ;
struct ipath_mr ;
struct ipath_swqe ;
struct ipath_rwqe ;
struct ipath_rwq ;
struct ipath_rq ;
struct ipath_srq ;
struct ipath_sge_state ;
struct ipath_ack_entry ;
struct ipath_qp ;
#define IPATH_R_WRID_VALID	0
#define IPATH_R_REUSE_SGE	0x01
#define IPATH_R_RDMAR_SEQ	0x02
#define IPATH_S_SIGNAL_REQ_WR	0x01
#define IPATH_S_FENCE_PENDING	0x02
#define IPATH_S_RDMAR_PENDING	0x04
#define IPATH_S_ACK_PENDING	0x08
#define IPATH_S_BUSY		0x10
#define IPATH_S_WAITING		0x20
#define IPATH_S_WAIT_SSN_CREDIT	0x40
#define IPATH_S_WAIT_DMA	0x80
#define IPATH_S_ANY_WAIT (IPATH_S_FENCE_PENDING | IPATH_S_RDMAR_PENDING | \
IPATH_S_WAITING | IPATH_S_WAIT_SSN_CREDIT | IPATH_S_WAIT_DMA)
#define IPATH_PSN_CREDIT	512
static inline struct ipath_swqe *get_swqe_ptr(struct ipath_qp *qp,
unsigned n)
static inline struct ipath_rwqe *get_rwqe_ptr(struct ipath_rq *rq,
unsigned n)
struct qpn_map ;
struct ipath_qp_table ;
struct ipath_lkey_table ;
struct ipath_opcode_stats ;
struct ipath_ibdev ;
struct ipath_verbs_counters ;
struct ipath_verbs_txreq ;
static inline struct ipath_mr *to_imr(struct ib_mr *ibmr)
static inline struct ipath_pd *to_ipd(struct ib_pd *ibpd)
static inline struct ipath_ah *to_iah(struct ib_ah *ibah)
static inline struct ipath_cq *to_icq(struct ib_cq *ibcq)
static inline struct ipath_srq *to_isrq(struct ib_srq *ibsrq)
static inline struct ipath_qp *to_iqp(struct ib_qp *ibqp)
static inline struct ipath_ibdev *to_idev(struct ib_device *ibdev)
static inline void ipath_schedule_send(struct ipath_qp *qp)
int ipath_process_mad(struct ib_device *ibdev,
int mad_flags,
u8 port_num,
struct ib_wc *in_wc,
struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad);
static inline int ipath_cmp24(u32 a, u32 b)
struct ipath_mcast *ipath_mcast_find(union ib_gid *mgid);
int ipath_snapshot_counters(struct ipath_devdata *dd, u64 *swords,
u64 *rwords, u64 *spkts, u64 *rpkts,
u64 *xmit_wait);
int ipath_get_counters(struct ipath_devdata *dd,
struct ipath_verbs_counters *cntrs);
int ipath_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int ipath_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int ipath_mcast_tree_empty(void);
__be32 ipath_compute_aeth(struct ipath_qp *qp);
struct ipath_qp *ipath_lookup_qpn(struct ipath_qp_table *qpt, u32 qpn);
struct ib_qp *ipath_create_qp(struct ib_pd *ibpd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata);
int ipath_destroy_qp(struct ib_qp *ibqp);
int ipath_error_qp(struct ipath_qp *qp, enum ib_wc_status err);
int ipath_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata);
int ipath_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_qp_init_attr *init_attr);
unsigned ipath_free_all_qps(struct ipath_qp_table *qpt);
int ipath_init_qp_table(struct ipath_ibdev *idev, int size);
void ipath_get_credit(struct ipath_qp *qp, u32 aeth);
unsigned ipath_ib_rate_to_mult(enum ib_rate rate);
int ipath_verbs_send(struct ipath_qp *qp, struct ipath_ib_header *hdr,
u32 hdrwords, struct ipath_sge_state *ss, u32 len);
void ipath_copy_sge(struct ipath_sge_state *ss, void *data, u32 length);
void ipath_skip_sge(struct ipath_sge_state *ss, u32 length);
void ipath_uc_rcv(struct ipath_ibdev *dev, struct ipath_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct ipath_qp *qp);
void ipath_rc_rcv(struct ipath_ibdev *dev, struct ipath_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct ipath_qp *qp);
void ipath_restart_rc(struct ipath_qp *qp, u32 psn);
void ipath_rc_error(struct ipath_qp *qp, enum ib_wc_status err);
int ipath_post_ud_send(struct ipath_qp *qp, struct ib_send_wr *wr);
void ipath_ud_rcv(struct ipath_ibdev *dev, struct ipath_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct ipath_qp *qp);
int ipath_alloc_lkey(struct ipath_lkey_table *rkt,
struct ipath_mregion *mr);
void ipath_free_lkey(struct ipath_lkey_table *rkt, u32 lkey);
int ipath_lkey_ok(struct ipath_qp *qp, struct ipath_sge *isge,
struct ib_sge *sge, int acc);
int ipath_rkey_ok(struct ipath_qp *qp, struct ipath_sge_state *ss,
u32 len, u64 vaddr, u32 rkey, int acc);
int ipath_post_srq_receive(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
struct ib_srq *ipath_create_srq(struct ib_pd *ibpd,
struct ib_srq_init_attr *srq_init_attr,
struct ib_udata *udata);
int ipath_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask,
struct ib_udata *udata);
int ipath_query_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr);
int ipath_destroy_srq(struct ib_srq *ibsrq);
void ipath_cq_enter(struct ipath_cq *cq, struct ib_wc *entry, int sig);
int ipath_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry);
struct ib_cq *ipath_create_cq(struct ib_device *ibdev, int entries, int comp_vector,
struct ib_ucontext *context,
struct ib_udata *udata);
int ipath_destroy_cq(struct ib_cq *ibcq);
int ipath_req_notify_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags);
int ipath_resize_cq(struct ib_cq *ibcq, int cqe, struct ib_udata *udata);
struct ib_mr *ipath_get_dma_mr(struct ib_pd *pd, int acc);
struct ib_mr *ipath_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 *iova_start);
struct ib_mr *ipath_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int mr_access_flags,
struct ib_udata *udata);
int ipath_dereg_mr(struct ib_mr *ibmr);
struct ib_fmr *ipath_alloc_fmr(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr);
int ipath_map_phys_fmr(struct ib_fmr *ibfmr, u64 * page_list,
int list_len, u64 iova);
int ipath_unmap_fmr(struct list_head *fmr_list);
int ipath_dealloc_fmr(struct ib_fmr *ibfmr);
void ipath_release_mmap_info(struct kref *ref);
struct ipath_mmap_info *ipath_create_mmap_info(struct ipath_ibdev *dev,
u32 size,
struct ib_ucontext *context,
void *obj);
void ipath_update_mmap_info(struct ipath_ibdev *dev,
struct ipath_mmap_info *ip,
u32 size, void *obj);
int ipath_mmap(struct ib_ucontext *context, struct vm_area_struct *vma);
void ipath_insert_rnr_queue(struct ipath_qp *qp);
int ipath_init_sge(struct ipath_qp *qp, struct ipath_rwqe *wqe,
u32 *lengthp, struct ipath_sge_state *ss);
int ipath_get_rwqe(struct ipath_qp *qp, int wr_id_only);
u32 ipath_make_grh(struct ipath_ibdev *dev, struct ib_grh *hdr,
struct ib_global_route *grh, u32 hwords, u32 nwords);
void ipath_make_ruc_header(struct ipath_ibdev *dev, struct ipath_qp *qp,
struct ipath_other_headers *ohdr,
u32 bth0, u32 bth2);
void ipath_do_send(unsigned long data);
void ipath_send_complete(struct ipath_qp *qp, struct ipath_swqe *wqe,
enum ib_wc_status status);
int ipath_make_rc_req(struct ipath_qp *qp);
int ipath_make_uc_req(struct ipath_qp *qp);
int ipath_make_ud_req(struct ipath_qp *qp);
int ipath_register_ib_device(struct ipath_devdata *);
void ipath_unregister_ib_device(struct ipath_ibdev *);
void ipath_ib_rcv(struct ipath_ibdev *, void *, void *, u32);
int ipath_ib_piobufavail(struct ipath_ibdev *);
unsigned ipath_get_npkeys(struct ipath_devdata *);
u32 ipath_get_cr_errpkey(struct ipath_devdata *);
unsigned ipath_get_pkey(struct ipath_devdata *, unsigned);
extern const enum ib_wc_opcode ib_ipath_wc_opcode[];
extern const u8 ipath_cvt_physportstate[];
#define IB_PHYSPORTSTATE_SLEEP 1
#define IB_PHYSPORTSTATE_POLL 2
#define IB_PHYSPORTSTATE_DISABLED 3
#define IB_PHYSPORTSTATE_CFG_TRAIN 4
#define IB_PHYSPORTSTATE_LINKUP 5
#define IB_PHYSPORTSTATE_LINK_ERR_RECOVER 6
extern const int ib_ipath_state_ops[];
extern unsigned int ib_ipath_lkey_table_size;
extern unsigned int ib_ipath_max_cqes;
extern unsigned int ib_ipath_max_cqs;
extern unsigned int ib_ipath_max_qp_wrs;
extern unsigned int ib_ipath_max_qps;
extern unsigned int ib_ipath_max_sges;
extern unsigned int ib_ipath_max_mcast_grps;
extern unsigned int ib_ipath_max_mcast_qp_attached;
extern unsigned int ib_ipath_max_srqs;
extern unsigned int ib_ipath_max_srq_sges;
extern unsigned int ib_ipath_max_srq_wrs;
extern const u32 ib_ipath_rnr_table[];
extern struct ib_dma_mapping_ops ipath_dma_mapping_ops;
