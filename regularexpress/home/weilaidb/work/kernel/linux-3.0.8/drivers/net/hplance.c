#define LANCE_LOG_TX_BUFFERS 1
#define LANCE_LOG_RX_BUFFERS 3
struct hplance_private ;
static int __devinit hplance_init_one(struct dio_dev *d,
const struct dio_device_id *ent);
static void __devinit hplance_init(struct net_device *dev,
struct dio_dev *d);
static void __devexit hplance_remove_one(struct dio_dev *d);
static void hplance_writerap(void *priv, unsigned short value);
static void hplance_writerdp(void *priv, unsigned short value);
static unsigned short hplance_readrdp(void *priv);
static int hplance_open(struct net_device *dev);
static int hplance_close(struct net_device *dev);
static struct dio_device_id hplance_dio_tbl[] = ;
static struct dio_driver hplance_driver = ;
static const struct net_device_ops hplance_netdev_ops = ;
static int __devinit hplance_init_one(struct dio_dev *d,
const struct dio_device_id *ent)
static void __devexit hplance_remove_one(struct dio_dev *d)
static void __devinit hplance_init(struct net_device *dev, struct dio_dev *d)
static void hplance_writerap(void *priv, unsigned short value)
static void hplance_writerdp(void *priv, unsigned short value)
static unsigned short hplance_readrdp(void *priv)
static int hplance_open(struct net_device *dev)
static int hplance_close(struct net_device *dev)
static int __init hplance_init_module(void)
static void __exit hplance_cleanup_module(void)
module_init(hplance_init_module);
module_exit(hplance_cleanup_module);
MODULE_LICENSE("GPL");
