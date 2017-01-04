#define VERSION "arcnet: COM20020 chipset support (by David Woodhouse et al.)\n"
static char *clockrates[] =
;
static void com20020_command(struct net_device *dev, int command);
static int com20020_status(struct net_device *dev);
static void com20020_setmask(struct net_device *dev, int mask);
static int com20020_reset(struct net_device *dev, int really_reset);
static void com20020_copy_to_card(struct net_device *dev, int bufnum,
int offset, void *buf, int count);
static void com20020_copy_from_card(struct net_device *dev, int bufnum,
int offset, void *buf, int count);
static void com20020_set_mc_list(struct net_device *dev);
static void com20020_close(struct net_device *);
static void com20020_copy_from_card(struct net_device *dev, int bufnum,
int offset, void *buf, int count)
static void com20020_copy_to_card(struct net_device *dev, int bufnum,
int offset, void *buf, int count)
int com20020_check(struct net_device *dev)
const struct net_device_ops com20020_netdev_ops = ;
int com20020_found(struct net_device *dev, int shared)
static int com20020_reset(struct net_device *dev, int really_reset)
static void com20020_setmask(struct net_device *dev, int mask)
static void com20020_command(struct net_device *dev, int cmd)
static int com20020_status(struct net_device *dev)
static void com20020_close(struct net_device *dev)
static void com20020_set_mc_list(struct net_device *dev)
#if defined(CONFIG_ARCNET_COM20020_PCI_MODULE) || \
defined(CONFIG_ARCNET_COM20020_ISA_MODULE) || \
defined(CONFIG_ARCNET_COM20020_CS_MODULE)
EXPORT_SYMBOL(com20020_check);
EXPORT_SYMBOL(com20020_found);
EXPORT_SYMBOL(com20020_netdev_ops);
MODULE_LICENSE("GPL");
static int __init com20020_module_init(void)
static void __exit com20020_module_exit(void)
module_init(com20020_module_init);
module_exit(com20020_module_exit);
