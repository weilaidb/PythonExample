MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk>");
MODULE_DESCRIPTION("Maple bus driver for Dreamcast");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
static void maple_dma_handler(struct work_struct *work);
static void maple_vblank_handler(struct work_struct *work);
static DECLARE_WORK(maple_dma_process, maple_dma_handler);
static DECLARE_WORK(maple_vblank_process, maple_vblank_handler);
static LIST_HEAD(maple_waitq);
static LIST_HEAD(maple_sentq);
static DEFINE_MUTEX(maple_wlist_lock);
static struct maple_driver maple_unsupported_device;
static struct device maple_bus;
static int subdevice_map[MAPLE_PORTS];
static unsigned long *maple_sendbuf, *maple_sendptr, *maple_lastptr;
static unsigned long maple_pnp_time;
static int started, scanning, fullscan;
static struct kmem_cache *maple_queue_cache;
struct maple_device_specify ;
static bool checked[MAPLE_PORTS];
static bool empty[MAPLE_PORTS];
static struct maple_device *baseunits[MAPLE_PORTS];
int maple_driver_register(struct maple_driver *drv)
EXPORT_SYMBOL_GPL(maple_driver_register);
void maple_driver_unregister(struct maple_driver *drv)
EXPORT_SYMBOL_GPL(maple_driver_unregister);
static void maple_dma_reset(void)
void maple_getcond_callback(struct maple_device *dev,
void (*callback) (struct mapleq *mq),
unsigned long interval, unsigned long function)
EXPORT_SYMBOL_GPL(maple_getcond_callback);
static int maple_dma_done(void)
static void maple_release_device(struct device *dev)
int maple_add_packet(struct maple_device *mdev, u32 function, u32 command,
size_t length, void *data)
EXPORT_SYMBOL_GPL(maple_add_packet);
static struct mapleq *maple_allocq(struct maple_device *mdev)
static struct maple_device *maple_alloc_dev(int port, int unit)
static void maple_free_dev(struct maple_device *mdev)
static void maple_build_block(struct mapleq *mq)
static void maple_send(void)
static int maple_check_matching_driver(struct device_driver *driver,
void *devptr)
static void maple_detach_driver(struct maple_device *mdev)
static void maple_attach_driver(struct maple_device *mdev)
static int check_maple_device(struct device *device, void *portptr)
static int setup_maple_commands(struct device *device, void *ignored)
static void maple_vblank_handler(struct work_struct *work)
static void maple_map_subunits(struct maple_device *mdev, int submask)
static void maple_clean_submap(struct maple_device *mdev)
static void maple_response_none(struct maple_device *mdev)
static void maple_response_devinfo(struct maple_device *mdev,
char *recvbuf)
static void maple_response_fileerr(struct maple_device *mdev, void *recvbuf)
static void maple_port_rescan(void)
static void maple_dma_handler(struct work_struct *work)
static irqreturn_t maple_dma_interrupt(int irq, void *dev_id)
static irqreturn_t maple_vblank_interrupt(int irq, void *dev_id)
static int maple_set_dma_interrupt_handler(void)
static int maple_set_vblank_interrupt_handler(void)
static int maple_get_dma_buffer(void)
static int maple_match_bus_driver(struct device *devptr,
struct device_driver *drvptr)
static int maple_bus_uevent(struct device *dev,
struct kobj_uevent_env *env)
static void maple_bus_release(struct device *dev)
static struct maple_driver maple_unsupported_device = ;
struct bus_type maple_bus_type = ;
EXPORT_SYMBOL_GPL(maple_bus_type);
static struct device maple_bus = ;
static int __init maple_bus_init(void)
fs_initcall(maple_bus_init);
