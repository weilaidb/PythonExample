static int __hw_addr_add_ex(struct netdev_hw_addr_list *list,
unsigned char *addr, int addr_len,
unsigned char addr_type, bool global)
static int __hw_addr_add(struct netdev_hw_addr_list *list, unsigned char *addr,
int addr_len, unsigned char addr_type)
static int __hw_addr_del_ex(struct netdev_hw_addr_list *list,
unsigned char *addr, int addr_len,
unsigned char addr_type, bool global)
static int __hw_addr_del(struct netdev_hw_addr_list *list, unsigned char *addr,
int addr_len, unsigned char addr_type)
int __hw_addr_add_multiple(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len, unsigned char addr_type)
EXPORT_SYMBOL(__hw_addr_add_multiple);
void __hw_addr_del_multiple(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len, unsigned char addr_type)
EXPORT_SYMBOL(__hw_addr_del_multiple);
int __hw_addr_sync(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len)
EXPORT_SYMBOL(__hw_addr_sync);
void __hw_addr_unsync(struct netdev_hw_addr_list *to_list,
struct netdev_hw_addr_list *from_list,
int addr_len)
EXPORT_SYMBOL(__hw_addr_unsync);
void __hw_addr_flush(struct netdev_hw_addr_list *list)
EXPORT_SYMBOL(__hw_addr_flush);
void __hw_addr_init(struct netdev_hw_addr_list *list)
EXPORT_SYMBOL(__hw_addr_init);
void dev_addr_flush(struct net_device *dev)
EXPORT_SYMBOL(dev_addr_flush);
int dev_addr_init(struct net_device *dev)
EXPORT_SYMBOL(dev_addr_init);
int dev_addr_add(struct net_device *dev, unsigned char *addr,
unsigned char addr_type)
EXPORT_SYMBOL(dev_addr_add);
int dev_addr_del(struct net_device *dev, unsigned char *addr,
unsigned char addr_type)
EXPORT_SYMBOL(dev_addr_del);
int dev_addr_add_multiple(struct net_device *to_dev,
struct net_device *from_dev,
unsigned char addr_type)
EXPORT_SYMBOL(dev_addr_add_multiple);
int dev_addr_del_multiple(struct net_device *to_dev,
struct net_device *from_dev,
unsigned char addr_type)
EXPORT_SYMBOL(dev_addr_del_multiple);
int dev_uc_add(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_uc_add);
int dev_uc_del(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_uc_del);
int dev_uc_sync(struct net_device *to, struct net_device *from)
EXPORT_SYMBOL(dev_uc_sync);
void dev_uc_unsync(struct net_device *to, struct net_device *from)
EXPORT_SYMBOL(dev_uc_unsync);
void dev_uc_flush(struct net_device *dev)
EXPORT_SYMBOL(dev_uc_flush);
void dev_uc_init(struct net_device *dev)
EXPORT_SYMBOL(dev_uc_init);
static int __dev_mc_add(struct net_device *dev, unsigned char *addr,
bool global)
int dev_mc_add(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_mc_add);
int dev_mc_add_global(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_mc_add_global);
static int __dev_mc_del(struct net_device *dev, unsigned char *addr,
bool global)
int dev_mc_del(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_mc_del);
int dev_mc_del_global(struct net_device *dev, unsigned char *addr)
EXPORT_SYMBOL(dev_mc_del_global);
int dev_mc_sync(struct net_device *to, struct net_device *from)
EXPORT_SYMBOL(dev_mc_sync);
void dev_mc_unsync(struct net_device *to, struct net_device *from)
EXPORT_SYMBOL(dev_mc_unsync);
void dev_mc_flush(struct net_device *dev)
EXPORT_SYMBOL(dev_mc_flush);
void dev_mc_init(struct net_device *dev)
EXPORT_SYMBOL(dev_mc_init);
static int dev_mc_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations dev_mc_seq_ops = ;
static int dev_mc_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dev_mc_seq_fops = ;
static int __net_init dev_mc_net_init(struct net *net)
static void __net_exit dev_mc_net_exit(struct net *net)
static struct pernet_operations __net_initdata dev_mc_net_ops = ;
void __init dev_mcast_init(void)
