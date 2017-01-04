LIST_HEAD(x25_route_list);
DEFINE_RWLOCK(x25_route_list_lock);
static int x25_add_route(struct x25_address *address, unsigned int sigdigits,
struct net_device *dev)
static void __x25_remove_route(struct x25_route *rt)
static int x25_del_route(struct x25_address *address, unsigned int sigdigits,
struct net_device *dev)
void x25_route_device_down(struct net_device *dev)
struct net_device *x25_dev_get(char *devname)
struct x25_route *x25_get_route(struct x25_address *addr)
int x25_route_ioctl(unsigned int cmd, void __user *arg)
void __exit x25_route_free(void)
