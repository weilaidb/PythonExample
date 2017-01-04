MODULE_AUTHOR("Sean Hefty");
MODULE_DESCRIPTION("IB Address Translation");
MODULE_LICENSE("Dual BSD/GPL");
struct addr_req ;
static void process_req(struct work_struct *work);
static DEFINE_MUTEX(lock);
static LIST_HEAD(req_list);
static DECLARE_DELAYED_WORK(work, process_req);
static struct workqueue_struct *addr_wq;
void rdma_addr_register_client(struct rdma_addr_client *client)
EXPORT_SYMBOL(rdma_addr_register_client);
static inline void put_client(struct rdma_addr_client *client)
void rdma_addr_unregister_client(struct rdma_addr_client *client)
EXPORT_SYMBOL(rdma_addr_unregister_client);
int rdma_copy_addr(struct rdma_dev_addr *dev_addr, struct net_device *dev,
const unsigned char *dst_dev_addr)
EXPORT_SYMBOL(rdma_copy_addr);
int rdma_translate_ip(struct sockaddr *addr, struct rdma_dev_addr *dev_addr)
EXPORT_SYMBOL(rdma_translate_ip);
static void set_timeout(unsigned long time)
static void queue_req(struct addr_req *req)
static int addr4_resolve(struct sockaddr_in *src_in,
struct sockaddr_in *dst_in,
struct rdma_dev_addr *addr)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int addr6_resolve(struct sockaddr_in6 *src_in,
struct sockaddr_in6 *dst_in,
struct rdma_dev_addr *addr)
static int addr6_resolve(struct sockaddr_in6 *src_in,
struct sockaddr_in6 *dst_in,
struct rdma_dev_addr *addr)
static int addr_resolve(struct sockaddr *src_in,
struct sockaddr *dst_in,
struct rdma_dev_addr *addr)
static void process_req(struct work_struct *work)
int rdma_resolve_ip(struct rdma_addr_client *client,
struct sockaddr *src_addr, struct sockaddr *dst_addr,
struct rdma_dev_addr *addr, int timeout_ms,
void (*callback)(int status, struct sockaddr *src_addr,
struct rdma_dev_addr *addr, void *context),
void *context)
EXPORT_SYMBOL(rdma_resolve_ip);
void rdma_addr_cancel(struct rdma_dev_addr *addr)
EXPORT_SYMBOL(rdma_addr_cancel);
static int netevent_callback(struct notifier_block *self, unsigned long event,
void *ctx)
static struct notifier_block nb = ;
static int __init addr_init(void)
static void __exit addr_cleanup(void)
module_init(addr_init);
module_exit(addr_cleanup);
