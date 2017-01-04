static int fastreg_support = 1;
module_param(fastreg_support, int, 0644);
MODULE_PARM_DESC(fastreg_support, "Advertise fastreg support (default=1)");
static int c4iw_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
static struct ib_ah *c4iw_ah_create(struct ib_pd *pd,
struct ib_ah_attr *ah_attr)
static int c4iw_ah_destroy(struct ib_ah *ah)
static int c4iw_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int c4iw_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int c4iw_process_mad(struct ib_device *ibdev, int mad_flags,
u8 port_num, struct ib_wc *in_wc,
struct ib_grh *in_grh, struct ib_mad *in_mad,
struct ib_mad *out_mad)
static int c4iw_dealloc_ucontext(struct ib_ucontext *context)
static struct ib_ucontext *c4iw_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int c4iw_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
static int c4iw_deallocate_pd(struct ib_pd *pd)
static struct ib_pd *c4iw_allocate_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int c4iw_query_pkey(struct ib_device *ibdev, u8 port, u16 index,
u16 *pkey)
static int c4iw_query_gid(struct ib_device *ibdev, u8 port, int index,
union ib_gid *gid)
static int c4iw_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static int c4iw_query_port(struct ib_device *ibdev, u8 port,
struct ib_port_attr *props)
static ssize_t show_rev(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *dev, struct device_attribute *attr,
char *buf)
static int c4iw_get_mib(struct ib_device *ibdev,
union rdma_protocol_stats *stats)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(fw_ver, S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board, NULL);
static struct device_attribute *c4iw_class_attributes[] = ;
int c4iw_register_device(struct c4iw_dev *dev)
void c4iw_unregister_device(struct c4iw_dev *dev)
