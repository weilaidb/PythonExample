#define DRV_NAME	"mlx4_ib"
#define DRV_VERSION	"1.0"
#define DRV_RELDATE	"April 4, 2008"
MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("Mellanox ConnectX HCA InfiniBand driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
static const char mlx4_ib_version[] =
DRV_NAME ": Mellanox ConnectX InfiniBand driver v"
DRV_VERSION " (" DRV_RELDATE ")\n";
struct update_gid_work ;
static struct workqueue_struct *wq;
static void init_query_mad(struct ib_smp *mad)
static union ib_gid zgid;
static int mlx4_ib_query_device(struct ib_device *ibdev,
struct ib_device_attr *props)
static enum rdma_link_layer
mlx4_ib_port_link_layer(struct ib_device *device, u8 port_num)
static int ib_link_query_port(struct ib_device *ibdev, u8 port,
struct ib_port_attr *props,
struct ib_smp *out_mad)
static u8 state_to_phys_state(enum ib_port_state state)
static int eth_link_query_port(struct ib_device *ibdev, u8 port,
struct ib_port_attr *props,
struct ib_smp *out_mad)
static int mlx4_ib_query_port(struct ib_device *ibdev, u8 port,
struct ib_port_attr *props)
static int __mlx4_ib_query_gid(struct ib_device *ibdev, u8 port, int index,
union ib_gid *gid)
static int iboe_query_gid(struct ib_device *ibdev, u8 port, int index,
union ib_gid *gid)
static int mlx4_ib_query_gid(struct ib_device *ibdev, u8 port, int index,
union ib_gid *gid)
static int mlx4_ib_query_pkey(struct ib_device *ibdev, u8 port, u16 index,
u16 *pkey)
static int mlx4_ib_modify_device(struct ib_device *ibdev, int mask,
struct ib_device_modify *props)
static int mlx4_SET_PORT(struct mlx4_ib_dev *dev, u8 port, int reset_qkey_viols,
u32 cap_mask)
static int mlx4_ib_modify_port(struct ib_device *ibdev, u8 port, int mask,
struct ib_port_modify *props)
static struct ib_ucontext *mlx4_ib_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int mlx4_ib_dealloc_ucontext(struct ib_ucontext *ibcontext)
static int mlx4_ib_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
static struct ib_pd *mlx4_ib_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context,
struct ib_udata *udata)
static int mlx4_ib_dealloc_pd(struct ib_pd *pd)
static int add_gid_entry(struct ib_qp *ibqp, union ib_gid *gid)
int mlx4_ib_add_mc(struct mlx4_ib_dev *mdev, struct mlx4_ib_qp *mqp,
union ib_gid *gid)
static int mlx4_ib_mcg_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static struct mlx4_ib_gid_entry *find_gid_entry(struct mlx4_ib_qp *qp, u8 *raw)
static int mlx4_ib_mcg_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int init_node_data(struct mlx4_ib_dev *dev)
static ssize_t show_hca(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_rev(struct device *device, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *device, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_rev,   S_IRUGO, show_rev,    NULL);
static DEVICE_ATTR(fw_ver,   S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca,    NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board,  NULL);
static struct device_attribute *mlx4_class_attributes[] = ;
static void mlx4_addrconf_ifid_eui48(u8 *eui, u16 vlan_id, struct net_device *dev)
static void update_gids_task(struct work_struct *work)
static int update_ipv6_gids(struct mlx4_ib_dev *dev, int port, int clear)
static void handle_en_event(struct mlx4_ib_dev *dev, int port, unsigned long event)
static void netdev_added(struct mlx4_ib_dev *dev, int port)
static void netdev_removed(struct mlx4_ib_dev *dev, int port)
static int mlx4_ib_netdev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static void *mlx4_ib_add(struct mlx4_dev *dev)
static void mlx4_ib_remove(struct mlx4_dev *dev, void *ibdev_ptr)
static void mlx4_ib_event(struct mlx4_dev *dev, void *ibdev_ptr,
enum mlx4_dev_event event, int port)
static struct mlx4_interface mlx4_ib_interface = ;
static int __init mlx4_ib_init(void)
static void __exit mlx4_ib_cleanup(void)
module_init(mlx4_ib_init);
module_exit(mlx4_ib_cleanup);
