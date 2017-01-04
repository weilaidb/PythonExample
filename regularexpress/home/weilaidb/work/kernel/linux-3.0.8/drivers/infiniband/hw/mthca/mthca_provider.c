static void init_query_mad(struct ib_smp *mad)
static int mthca_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static int mthca_query_port(struct ib_device *ibdev,
u8 port, struct ib_port_attr *props)
static int mthca_modify_device(struct ib_device *ibdev,
int mask,
struct ib_device_modify *props)
static int mthca_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
static int mthca_query_pkey(struct ib_device *ibdev,
u8 port, u16 index, u16 *pkey)
static int mthca_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static struct ib_ucontext *mthca_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int mthca_dealloc_ucontext(struct ib_ucontext *context)
static int mthca_mmap_uar(struct ib_ucontext *context,
struct vm_area_struct *vma)
static struct ib_pd *mthca_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int mthca_dealloc_pd(struct ib_pd *pd)
static struct ib_ah *mthca_ah_create(struct ib_pd *pd,
struct ib_ah_attr *ah_attr)
static int mthca_ah_destroy(struct ib_ah *ah)
static struct ib_srq *mthca_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *init_attr,
struct ib_udata *udata)
static int mthca_destroy_srq(struct ib_srq *srq)
static struct ib_qp *mthca_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata)
static int mthca_destroy_qp(struct ib_qp *qp)
static struct ib_cq *mthca_create_cq(struct ib_device *ibdev, int entries,
int comp_vector,
struct ib_ucontext *context,
struct ib_udata *udata)
static int mthca_alloc_resize_buf(struct mthca_dev *dev, struct mthca_cq *cq,
int entries)
static int mthca_resize_cq(struct ib_cq *ibcq, int entries, struct ib_udata *udata)
static int mthca_destroy_cq(struct ib_cq *cq)
static inline u32 convert_access(int acc)
static struct ib_mr *mthca_get_dma_mr(struct ib_pd *pd, int acc)
static struct ib_mr *mthca_reg_phys_mr(struct ib_pd       *pd,
struct ib_phys_buf *buffer_list,
int                 num_phys_buf,
int                 acc,
u64                *iova_start)
static struct ib_mr *mthca_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int acc, struct ib_udata *udata)
static int mthca_dereg_mr(struct ib_mr *mr)
static struct ib_fmr *mthca_alloc_fmr(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr)
static int mthca_dealloc_fmr(struct ib_fmr *fmr)
static int mthca_unmap_fmr(struct list_head *fmr_list)
static ssize_t show_rev(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *device, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_rev,   S_IRUGO, show_rev,    NULL);
static DEVICE_ATTR(fw_ver,   S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca,    NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board,  NULL);
static struct device_attribute *mthca_dev_attributes[] = ;
static int mthca_init_node_data(struct mthca_dev *dev)
int mthca_register_device(struct mthca_dev *dev)
void mthca_unregister_device(struct mthca_dev *dev)
