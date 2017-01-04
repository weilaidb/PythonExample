#define DEV_TO_SLAVE(dev)	(*((struct net_device **)netdev_priv(dev)))
static DEFINE_MUTEX(wanrouter_mutex);
static int wanrouter_device_setup(struct wan_device *wandev,
wandev_conf_t __user *u_conf);
static int wanrouter_device_stat(struct wan_device *wandev,
wandev_stat_t __user *u_stat);
static int wanrouter_device_shutdown(struct wan_device *wandev);
static int wanrouter_device_new_if(struct wan_device *wandev,
wanif_conf_t __user *u_conf);
static int wanrouter_device_del_if(struct wan_device *wandev,
char __user *u_name);
static struct wan_device *wanrouter_find_device(char *name);
static int wanrouter_delete_interface(struct wan_device *wandev, char *name);
static void lock_adapter_irq(spinlock_t *lock, unsigned long *smp_flags)
__acquires(lock);
static void unlock_adapter_irq(spinlock_t *lock, unsigned long *smp_flags)
__releases(lock);
static char wanrouter_fullname[]  = "Sangoma WANPIPE Router";
static char wanrouter_copyright[] = "(c) 1995-2000 Sangoma Technologies Inc.";
static char wanrouter_modname[] = ROUTER_NAME;
struct wan_device* wanrouter_router_devlist;
static int __init wanrouter_init(void)
static void __exit wanrouter_cleanup (void)
subsys_initcall(wanrouter_init);
module_exit(wanrouter_cleanup);
int register_wan_device(struct wan_device *wandev)
int unregister_wan_device(char *name)
long wanrouter_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int wanrouter_device_setup(struct wan_device *wandev,
wandev_conf_t __user *u_conf)
static int wanrouter_device_shutdown(struct wan_device *wandev)
static int wanrouter_device_stat(struct wan_device *wandev,
wandev_stat_t __user *u_stat)
static int wanrouter_device_new_if(struct wan_device *wandev,
wanif_conf_t __user *u_conf)
static int wanrouter_device_del_if(struct wan_device *wandev, char __user *u_name)
static struct wan_device *wanrouter_find_device(char *name)
static int wanrouter_delete_interface(struct wan_device *wandev, char *name)
static void lock_adapter_irq(spinlock_t *lock, unsigned long *smp_flags)
__acquires(lock)
static void unlock_adapter_irq(spinlock_t *lock, unsigned long *smp_flags)
__releases(lock)
EXPORT_SYMBOL(register_wan_device);
EXPORT_SYMBOL(unregister_wan_device);
MODULE_LICENSE("GPL");
