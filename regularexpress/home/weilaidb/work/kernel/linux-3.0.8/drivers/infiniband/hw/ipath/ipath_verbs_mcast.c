static struct rb_root mcast_tree;
static DEFINE_SPINLOCK(mcast_lock);
static struct ipath_mcast_qp *ipath_mcast_qp_alloc(struct ipath_qp *qp)
static void ipath_mcast_qp_free(struct ipath_mcast_qp *mqp)
static struct ipath_mcast *ipath_mcast_alloc(union ib_gid *mgid)
static void ipath_mcast_free(struct ipath_mcast *mcast)
struct ipath_mcast *ipath_mcast_find(union ib_gid *mgid)
static int ipath_mcast_add(struct ipath_ibdev *dev,
struct ipath_mcast *mcast,
struct ipath_mcast_qp *mqp)
int ipath_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
int ipath_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
int ipath_mcast_tree_empty(void)
