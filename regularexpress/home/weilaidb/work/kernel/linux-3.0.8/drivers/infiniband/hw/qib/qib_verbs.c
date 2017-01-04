static unsigned int ib_qib_qp_table_size = 251;
module_param_named(qp_table_size, ib_qib_qp_table_size, uint, S_IRUGO);
MODULE_PARM_DESC(qp_table_size, "QP table size");
unsigned int ib_qib_lkey_table_size = 16;
module_param_named(lkey_table_size, ib_qib_lkey_table_size, uint,
S_IRUGO);
MODULE_PARM_DESC(lkey_table_size,
"LKEY table size in bits (2^n, 1 <= n <= 23)");
static unsigned int ib_qib_max_pds = 0xFFFF;
module_param_named(max_pds, ib_qib_max_pds, uint, S_IRUGO);
MODULE_PARM_DESC(max_pds,
"Maximum number of protection domains to support");
static unsigned int ib_qib_max_ahs = 0xFFFF;
module_param_named(max_ahs, ib_qib_max_ahs, uint, S_IRUGO);
MODULE_PARM_DESC(max_ahs, "Maximum number of address handles to support");
unsigned int ib_qib_max_cqes = 0x2FFFF;
module_param_named(max_cqes, ib_qib_max_cqes, uint, S_IRUGO);
MODULE_PARM_DESC(max_cqes,
"Maximum number of completion queue entries to support");
unsigned int ib_qib_max_cqs = 0x1FFFF;
module_param_named(max_cqs, ib_qib_max_cqs, uint, S_IRUGO);
MODULE_PARM_DESC(max_cqs, "Maximum number of completion queues to support");
unsigned int ib_qib_max_qp_wrs = 0x3FFF;
module_param_named(max_qp_wrs, ib_qib_max_qp_wrs, uint, S_IRUGO);
MODULE_PARM_DESC(max_qp_wrs, "Maximum number of QP WRs to support");
unsigned int ib_qib_max_qps = 16384;
module_param_named(max_qps, ib_qib_max_qps, uint, S_IRUGO);
MODULE_PARM_DESC(max_qps, "Maximum number of QPs to support");
unsigned int ib_qib_max_sges = 0x60;
module_param_named(max_sges, ib_qib_max_sges, uint, S_IRUGO);
MODULE_PARM_DESC(max_sges, "Maximum number of SGEs to support");
unsigned int ib_qib_max_mcast_grps = 16384;
module_param_named(max_mcast_grps, ib_qib_max_mcast_grps, uint, S_IRUGO);
MODULE_PARM_DESC(max_mcast_grps,
"Maximum number of multicast groups to support");
unsigned int ib_qib_max_mcast_qp_attached = 16;
module_param_named(max_mcast_qp_attached, ib_qib_max_mcast_qp_attached,
uint, S_IRUGO);
MODULE_PARM_DESC(max_mcast_qp_attached,
"Maximum number of attached QPs to support");
unsigned int ib_qib_max_srqs = 1024;
module_param_named(max_srqs, ib_qib_max_srqs, uint, S_IRUGO);
MODULE_PARM_DESC(max_srqs, "Maximum number of SRQs to support");
unsigned int ib_qib_max_srq_sges = 128;
module_param_named(max_srq_sges, ib_qib_max_srq_sges, uint, S_IRUGO);
MODULE_PARM_DESC(max_srq_sges, "Maximum number of SRQ SGEs to support");
unsigned int ib_qib_max_srq_wrs = 0x1FFFF;
module_param_named(max_srq_wrs, ib_qib_max_srq_wrs, uint, S_IRUGO);
MODULE_PARM_DESC(max_srq_wrs, "Maximum number of SRQ WRs support");
static unsigned int ib_qib_disable_sma;
module_param_named(disable_sma, ib_qib_disable_sma, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(disable_sma, "Disable the SMA");
const int ib_qib_state_ops[IB_QPS_ERR + 1] = ;
struct qib_ucontext ;
static inline struct qib_ucontext *to_iucontext(struct ib_ucontext
*ibucontext)
const enum ib_wc_opcode ib_qib_wc_opcode[] = ;
__be64 ib_qib_sys_image_guid;
void qib_copy_sge(struct qib_sge_state *ss, void *data, u32 length, int release)
void qib_skip_sge(struct qib_sge_state *ss, u32 length, int release)
static u32 qib_count_sge(struct qib_sge_state *ss, u32 length)
static void qib_copy_from_sge(void *data, struct qib_sge_state *ss, u32 length)
static int qib_post_one_send(struct qib_qp *qp, struct ib_send_wr *wr)
static int qib_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
static int qib_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
static void qib_qp_rcv(struct qib_ctxtdata *rcd, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp)
void qib_ib_rcv(struct qib_ctxtdata *rcd, void *rhdr, void *data, u32 tlen)
static void mem_timer(unsigned long data)
static void update_sge(struct qib_sge_state *ss, u32 length)
static inline u32 get_upper_bits(u32 data, u32 shift)
static inline u32 set_upper_bits(u32 data, u32 shift)
static inline u32 clear_upper_bytes(u32 data, u32 n, u32 off)
static inline u32 get_upper_bits(u32 data, u32 shift)
static inline u32 set_upper_bits(u32 data, u32 shift)
static inline u32 clear_upper_bytes(u32 data, u32 n, u32 off)
static void copy_io(u32 __iomem *piobuf, struct qib_sge_state *ss,
u32 length, unsigned flush_wc)
static struct qib_verbs_txreq *get_txreq(struct qib_ibdev *dev,
struct qib_qp *qp, int *retp)
void qib_put_txreq(struct qib_verbs_txreq *tx)
void qib_verbs_sdma_desc_avail(struct qib_pportdata *ppd, unsigned avail)
static void sdma_complete(struct qib_sdma_txreq *cookie, int status)
static int wait_kmem(struct qib_ibdev *dev, struct qib_qp *qp)
static int qib_verbs_send_dma(struct qib_qp *qp, struct qib_ib_header *hdr,
u32 hdrwords, struct qib_sge_state *ss, u32 len,
u32 plen, u32 dwords)
static int no_bufs_available(struct qib_qp *qp)
static int qib_verbs_send_pio(struct qib_qp *qp, struct qib_ib_header *ibhdr,
u32 hdrwords, struct qib_sge_state *ss, u32 len,
u32 plen, u32 dwords)
int qib_verbs_send(struct qib_qp *qp, struct qib_ib_header *hdr,
u32 hdrwords, struct qib_sge_state *ss, u32 len)
int qib_snapshot_counters(struct qib_pportdata *ppd, u64 *swords,
u64 *rwords, u64 *spkts, u64 *rpkts,
u64 *xmit_wait)
int qib_get_counters(struct qib_pportdata *ppd,
struct qib_verbs_counters *cntrs)
void qib_ib_piobufavail(struct qib_devdata *dd)
static int qib_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static int qib_query_port(struct ib_device *ibdev, u8 port,
struct ib_port_attr *props)
static int qib_modify_device(struct ib_device *device,
int device_modify_mask,
struct ib_device_modify *device_modify)
static int qib_modify_port(struct ib_device *ibdev, u8 port,
int port_modify_mask, struct ib_port_modify *props)
static int qib_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static struct ib_pd *qib_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int qib_dealloc_pd(struct ib_pd *ibpd)
int qib_check_ah(struct ib_device *ibdev, struct ib_ah_attr *ah_attr)
static struct ib_ah *qib_create_ah(struct ib_pd *pd,
struct ib_ah_attr *ah_attr)
static int qib_destroy_ah(struct ib_ah *ibah)
static int qib_modify_ah(struct ib_ah *ibah, struct ib_ah_attr *ah_attr)
static int qib_query_ah(struct ib_ah *ibah, struct ib_ah_attr *ah_attr)
unsigned qib_get_npkeys(struct qib_devdata *dd)
unsigned qib_get_pkey(struct qib_ibport *ibp, unsigned index)
static int qib_query_pkey(struct ib_device *ibdev, u8 port, u16 index,
u16 *pkey)
static struct ib_ucontext *qib_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int qib_dealloc_ucontext(struct ib_ucontext *context)
static void init_ibport(struct qib_pportdata *ppd)
int qib_register_ib_device(struct qib_devdata *dd)
void qib_unregister_ib_device(struct qib_devdata *dd)
