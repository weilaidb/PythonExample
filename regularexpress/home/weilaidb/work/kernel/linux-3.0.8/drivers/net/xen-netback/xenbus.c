struct backend_info ;
static int connect_rings(struct backend_info *);
static void connect(struct backend_info *);
static void backend_create_xenvif(struct backend_info *be);
static void unregister_hotplug_status_watch(struct backend_info *be);
static int netback_remove(struct xenbus_device *dev)
static int netback_probe(struct xenbus_device *dev,
const struct xenbus_device_id *id)
static int netback_uevent(struct xenbus_device *xdev,
struct kobj_uevent_env *env)
static void backend_create_xenvif(struct backend_info *be)
static void disconnect_backend(struct xenbus_device *dev)
static void frontend_changed(struct xenbus_device *dev,
enum xenbus_state frontend_state)
static void xen_net_read_rate(struct xenbus_device *dev,
unsigned long *bytes, unsigned long *usec)
static int xen_net_read_mac(struct xenbus_device *dev, u8 mac[])
static void unregister_hotplug_status_watch(struct backend_info *be)
static void hotplug_status_changed(struct xenbus_watch *watch,
const char **vec,
unsigned int vec_size)
static void connect(struct backend_info *be)
static int connect_rings(struct backend_info *be)
static const struct xenbus_device_id netback_ids[] = ;
static struct xenbus_driver netback = ;
int xenvif_xenbus_init(void)
