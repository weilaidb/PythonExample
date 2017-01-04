static unsigned int ib_ipath_qp_table_size = 251;
module_param_named(qp_table_size, ib_ipath_qp_table_size, uint, S_IRUGO);
MODULE_PARM_DESC(qp_table_size, "QP table size");
unsigned int ib_ipath_lkey_table_size = 12;
module_param_named(lkey_table_size, ib_ipath_lkey_table_size, uint,
S_IRUGO);
MODULE_PARM_DESC(lkey_table_size,
"LKEY table size in bits (2^n, 1 <= n <= 23)");
static unsigned int ib_ipath_max_pds = 0xFFFF;
module_param_named(max_pds, ib_ipath_max_pds, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_pds,
"Maximum number of protection domains to support");
static unsigned int ib_ipath_max_ahs = 0xFFFF;
module_param_named(max_ahs, ib_ipath_max_ahs, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_ahs, "Maximum number of address handles to support");
unsigned int ib_ipath_max_cqes = 0x2FFFF;
module_param_named(max_cqes, ib_ipath_max_cqes, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_cqes,
"Maximum number of completion queue entries to support");
unsigned int ib_ipath_max_cqs = 0x1FFFF;
module_param_named(max_cqs, ib_ipath_max_cqs, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_cqs, "Maximum number of completion queues to support");
unsigned int ib_ipath_max_qp_wrs = 0x3FFF;
module_param_named(max_qp_wrs, ib_ipath_max_qp_wrs, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_qp_wrs, "Maximum number of QP WRs to support");
unsigned int ib_ipath_max_qps = 16384;
module_param_named(max_qps, ib_ipath_max_qps, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_qps, "Maximum number of QPs to support");
unsigned int ib_ipath_max_sges = 0x60;
module_param_named(max_sges, ib_ipath_max_sges, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_sges, "Maximum number of SGEs to support");
unsigned int ib_ipath_max_mcast_grps = 16384;
module_param_named(max_mcast_grps, ib_ipath_max_mcast_grps, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_mcast_grps,
"Maximum number of multicast groups to support");
unsigned int ib_ipath_max_mcast_qp_attached = 16;
module_param_named(max_mcast_qp_attached, ib_ipath_max_mcast_qp_attached,
uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_mcast_qp_attached,
"Maximum number of attached QPs to support");
unsigned int ib_ipath_max_srqs = 1024;
module_param_named(max_srqs, ib_ipath_max_srqs, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_srqs, "Maximum number of SRQs to support");
unsigned int ib_ipath_max_srq_sges = 128;
module_param_named(max_srq_sges, ib_ipath_max_srq_sges,
uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_srq_sges, "Maximum number of SRQ SGEs to support");
unsigned int ib_ipath_max_srq_wrs = 0x1FFFF;
module_param_named(max_srq_wrs, ib_ipath_max_srq_wrs,
uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(max_srq_wrs, "Maximum number of SRQ WRs support");
static unsigned int ib_ipath_disable_sma;
module_param_named(disable_sma, ib_ipath_disable_sma, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(disable_sma, "Disable the SMA");
const int ib_ipath_state_ops[IB_QPS_ERR + 1] = ;
struct ipath_ucontext ;
static inline struct ipath_ucontext *to_iucontext(struct ib_ucontext
*ibucontext)
const enum ib_wc_opcode ib_ipath_wc_opcode[] = ;
static __be64 sys_image_guid;
void ipath_copy_sge(struct ipath_sge_state *ss, void *data, u32 length)
void ipath_skip_sge(struct ipath_sge_state *ss, u32 length)
static u32 ipath_count_sge(struct ipath_sge_state *ss, u32 length)
static void ipath_copy_from_sge(void *data, struct ipath_sge_state *ss,
u32 length)
static int ipath_post_one_send(struct ipath_qp *qp, struct ib_send_wr *wr)
static int ipath_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
static int ipath_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
static void ipath_qp_rcv(struct ipath_ibdev *dev,
struct ipath_ib_header *hdr, int has_grh,
void *data, u32 tlen, struct ipath_qp *qp)
void ipath_ib_rcv(struct ipath_ibdev *dev, void *rhdr, void *data,
u32 tlen)
static void ipath_ib_timer(struct ipath_ibdev *dev)
static void update_sge(struct ipath_sge_state *ss, u32 length)
static inline u32 get_upper_bits(u32 data, u32 shift)
static inline u32 set_upper_bits(u32 data, u32 shift)
static inline u32 clear_upper_bytes(u32 data, u32 n, u32 off)
static inline u32 get_upper_bits(u32 data, u32 shift)
static inline u32 set_upper_bits(u32 data, u32 shift)
static inline u32 clear_upper_bytes(u32 data, u32 n, u32 off)
static void copy_io(u32 __iomem *piobuf, struct ipath_sge_state *ss,
u32 length, unsigned flush_wc)
unsigned ipath_ib_rate_to_mult(enum ib_rate rate)
static enum ib_rate ipath_mult_to_ib_rate(unsigned mult)
static inline struct ipath_verbs_txreq *get_txreq(struct ipath_ibdev *dev)
static inline void put_txreq(struct ipath_ibdev *dev,
struct ipath_verbs_txreq *tx)
static void sdma_complete(void *cookie, int status)
static void decrement_dma_busy(struct ipath_qp *qp)
static inline unsigned ipath_pkt_delay(u32 plen, u8 snd_mult, u8 rcv_mult)
static int ipath_verbs_send_dma(struct ipath_qp *qp,
struct ipath_ib_header *hdr, u32 hdrwords,
struct ipath_sge_state *ss, u32 len,
u32 plen, u32 dwords)
static int ipath_verbs_send_pio(struct ipath_qp *qp,
struct ipath_ib_header *ibhdr, u32 hdrwords,
struct ipath_sge_state *ss, u32 len,
u32 plen, u32 dwords)
int ipath_verbs_send(struct ipath_qp *qp, struct ipath_ib_header *hdr,
u32 hdrwords, struct ipath_sge_state *ss, u32 len)
int ipath_snapshot_counters(struct ipath_devdata *dd, u64 *swords,
u64 *rwords, u64 *spkts, u64 *rpkts,
u64 *xmit_wait)
int ipath_get_counters(struct ipath_devdata *dd,
struct ipath_verbs_counters *cntrs)
int ipath_ib_piobufavail(struct ipath_ibdev *dev)
static int ipath_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
const u8 ipath_cvt_physportstate[32] = ;
u32 ipath_get_cr_errpkey(struct ipath_devdata *dd)
static int ipath_query_port(struct ib_device *ibdev,
u8 port, struct ib_port_attr *props)
static int ipath_modify_device(struct ib_device *device,
int device_modify_mask,
struct ib_device_modify *device_modify)
static int ipath_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
static int ipath_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static struct ib_pd *ipath_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int ipath_dealloc_pd(struct ib_pd *ibpd)
static struct ib_ah *ipath_create_ah(struct ib_pd *pd,
struct ib_ah_attr *ah_attr)
static int ipath_destroy_ah(struct ib_ah *ibah)
static int ipath_query_ah(struct ib_ah *ibah, struct ib_ah_attr *ah_attr)
unsigned ipath_get_npkeys(struct ipath_devdata *dd)
unsigned ipath_get_pkey(struct ipath_devdata *dd, unsigned index)
static int ipath_query_pkey(struct ib_device *ibdev, u8 port, u16 index,
u16 *pkey)
static struct ib_ucontext *ipath_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int ipath_dealloc_ucontext(struct ib_ucontext *context)
static int ipath_verbs_register_sysfs(struct ib_device *dev);
static void __verbs_timer(unsigned long arg)
static int enable_timer(struct ipath_devdata *dd)
static int disable_timer(struct ipath_devdata *dd)
int ipath_register_ib_device(struct ipath_devdata *dd)
void ipath_unregister_ib_device(struct ipath_ibdev *dev)
static ssize_t show_rev(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_stats(struct device *device, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(stats, S_IRUGO, show_stats, NULL);
static struct device_attribute *ipath_class_attributes[] = ;
static int ipath_verbs_register_sysfs(struct ib_device *dev)
