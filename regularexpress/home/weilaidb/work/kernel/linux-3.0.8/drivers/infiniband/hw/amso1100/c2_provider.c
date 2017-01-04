static int c2_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static int c2_query_port(struct ib_device *ibdev,
u8 port, struct ib_port_attr *props)
static int c2_modify_port(struct ib_device *ibdev,
u8 port, int port_modify_mask,
struct ib_port_modify *props)
static int c2_query_pkey(struct ib_device *ibdev,
u8 port, u16 index, u16 * pkey)
static int c2_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static struct ib_ucontext *c2_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int c2_dealloc_ucontext(struct ib_ucontext *context)
static int c2_mmap_uar(struct ib_ucontext *context, struct vm_area_struct *vma)
static struct ib_pd *c2_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int c2_dealloc_pd(struct ib_pd *pd)
static struct ib_ah *c2_ah_create(struct ib_pd *pd, struct ib_ah_attr *ah_attr)
static int c2_ah_destroy(struct ib_ah *ah)
static void c2_add_ref(struct ib_qp *ibqp)
static void c2_rem_ref(struct ib_qp *ibqp)
struct ib_qp *c2_get_qp(struct ib_device *device, int qpn)
static struct ib_qp *c2_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata)
static int c2_destroy_qp(struct ib_qp *ib_qp)
static struct ib_cq *c2_create_cq(struct ib_device *ibdev, int entries, int vector,
struct ib_ucontext *context,
struct ib_udata *udata)
static int c2_destroy_cq(struct ib_cq *ib_cq)
static inline u32 c2_convert_access(int acc)
static struct ib_mr *c2_reg_phys_mr(struct ib_pd *ib_pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf, int acc, u64 * iova_start)
static struct ib_mr *c2_get_dma_mr(struct ib_pd *pd, int acc)
static struct ib_mr *c2_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int acc, struct ib_udata *udata)
static int c2_dereg_mr(struct ib_mr *ib_mr)
static ssize_t show_rev(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(fw_ver, S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board, NULL);
static struct device_attribute *c2_dev_attributes[] = ;
static int c2_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
static int c2_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int c2_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int c2_process_mad(struct ib_device *ibdev,
int mad_flags,
u8 port_num,
struct ib_wc *in_wc,
struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
static int c2_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param)
static int c2_accept(struct iw_cm_id *cm_id, struct iw_cm_conn_param *iw_param)
static int c2_reject(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len)
static int c2_service_create(struct iw_cm_id *cm_id, int backlog)
static int c2_service_destroy(struct iw_cm_id *cm_id)
static int c2_pseudo_up(struct net_device *netdev)
static int c2_pseudo_down(struct net_device *netdev)
static int c2_pseudo_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static int c2_pseudo_change_mtu(struct net_device *netdev, int new_mtu)
static const struct net_device_ops c2_pseudo_netdev_ops = ;
static void setup(struct net_device *netdev)
static struct net_device *c2_pseudo_netdev_init(struct c2_dev *c2dev)
int c2_register_device(struct c2_dev *dev)
void c2_unregister_device(struct c2_dev *dev)
