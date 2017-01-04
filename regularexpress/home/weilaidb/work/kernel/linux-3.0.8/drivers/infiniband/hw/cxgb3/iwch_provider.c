static int iwch_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
static struct ib_ah *iwch_ah_create(struct ib_pd *pd,
struct ib_ah_attr *ah_attr)
static int iwch_ah_destroy(struct ib_ah *ah)
static int iwch_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int iwch_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int iwch_process_mad(struct ib_device *ibdev,
int mad_flags,
u8 port_num,
struct ib_wc *in_wc,
struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
static int iwch_dealloc_ucontext(struct ib_ucontext *context)
static struct ib_ucontext *iwch_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int iwch_destroy_cq(struct ib_cq *ib_cq)
static struct ib_cq *iwch_create_cq(struct ib_device *ibdev, int entries, int vector,
struct ib_ucontext *ib_context,
struct ib_udata *udata)
static int iwch_resize_cq(struct ib_cq *cq, int cqe, struct ib_udata *udata)
static int iwch_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags)
static int iwch_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
static int iwch_deallocate_pd(struct ib_pd *pd)
static struct ib_pd *iwch_allocate_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int iwch_dereg_mr(struct ib_mr *ib_mr)
static struct ib_mr *iwch_register_phys_mem(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf,
int acc,
u64 *iova_start)
static int iwch_reregister_phys_mem(struct ib_mr *mr,
int mr_rereg_mask,
struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf,
int acc, u64 * iova_start)
static struct ib_mr *iwch_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int acc, struct ib_udata *udata)
static struct ib_mr *iwch_get_dma_mr(struct ib_pd *pd, int acc)
static struct ib_mw *iwch_alloc_mw(struct ib_pd *pd)
static int iwch_dealloc_mw(struct ib_mw *mw)
static struct ib_mr *iwch_alloc_fast_reg_mr(struct ib_pd *pd, int pbl_depth)
static struct ib_fast_reg_page_list *iwch_alloc_fastreg_pbl(
struct ib_device *device,
int page_list_len)
static void iwch_free_fastreg_pbl(struct ib_fast_reg_page_list *page_list)
static int iwch_destroy_qp(struct ib_qp *ib_qp)
static struct ib_qp *iwch_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *attrs,
struct ib_udata *udata)
static int iwch_ib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
void iwch_qp_add_ref(struct ib_qp *qp)
void iwch_qp_rem_ref(struct ib_qp *qp)
static struct ib_qp *iwch_get_qp(struct ib_device *dev, int qpn)
static int iwch_query_pkey(struct ib_device *ibdev,
u8 port, u16 index, u16 * pkey)
static int iwch_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static u64 fw_vers_string_to_u64(struct iwch_dev *iwch_dev)
static int iwch_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static int iwch_query_port(struct ib_device *ibdev,
u8 port, struct ib_port_attr *props)
static ssize_t show_rev(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_hca(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *dev, struct device_attribute *attr,
char *buf)
static int iwch_get_mib(struct ib_device *ibdev,
union rdma_protocol_stats *stats)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(fw_ver, S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board, NULL);
static struct device_attribute *iwch_class_attributes[] = ;
int iwch_register_device(struct iwch_dev *dev)
void iwch_unregister_device(struct iwch_dev *dev)
