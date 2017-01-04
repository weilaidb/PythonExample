static int mcast_debug_level;
module_param(mcast_debug_level, int, 0644);
MODULE_PARM_DESC(mcast_debug_level,
"Enable multicast debug tracing if > 0");
static DEFINE_MUTEX(mcast_mutex);
struct ipoib_mcast_iter ;
static void ipoib_mcast_free(struct ipoib_mcast *mcast)
static struct ipoib_mcast *ipoib_mcast_alloc(struct net_device *dev,
int can_sleep)
static struct ipoib_mcast *__ipoib_mcast_find(struct net_device *dev, void *mgid)
static int __ipoib_mcast_add(struct net_device *dev, struct ipoib_mcast *mcast)
static int ipoib_mcast_join_finish(struct ipoib_mcast *mcast,
struct ib_sa_mcmember_rec *mcmember)
static int
ipoib_mcast_sendonly_join_complete(int status,
struct ib_sa_multicast *multicast)
static int ipoib_mcast_sendonly_join(struct ipoib_mcast *mcast)
void ipoib_mcast_carrier_on_task(struct work_struct *work)
static int ipoib_mcast_join_complete(int status,
struct ib_sa_multicast *multicast)
static void ipoib_mcast_join(struct net_device *dev, struct ipoib_mcast *mcast,
int create)
void ipoib_mcast_join_task(struct work_struct *work)
int ipoib_mcast_start_thread(struct net_device *dev)
int ipoib_mcast_stop_thread(struct net_device *dev, int flush)
static int ipoib_mcast_leave(struct net_device *dev, struct ipoib_mcast *mcast)
void ipoib_mcast_send(struct net_device *dev, void *mgid, struct sk_buff *skb)
void ipoib_mcast_dev_flush(struct net_device *dev)
static int ipoib_mcast_addr_is_valid(const u8 *addr, const u8 *broadcast)
void ipoib_mcast_restart_task(struct work_struct *work)
struct ipoib_mcast_iter *ipoib_mcast_iter_init(struct net_device *dev)
int ipoib_mcast_iter_next(struct ipoib_mcast_iter *iter)
void ipoib_mcast_iter_read(struct ipoib_mcast_iter *iter,
union ib_gid *mgid,
unsigned long *created,
unsigned int *queuelen,
unsigned int *complete,
unsigned int *send_only)
