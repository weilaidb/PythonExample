#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int eql_open(struct net_device *dev);
static int eql_close(struct net_device *dev);
static int eql_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static netdev_tx_t eql_slave_xmit(struct sk_buff *skb, struct net_device *dev);
#define eql_is_slave(dev)	((dev->flags & IFF_SLAVE) == IFF_SLAVE)
#define eql_is_master(dev)	((dev->flags & IFF_MASTER) == IFF_MASTER)
static void eql_kill_one_slave(slave_queue_t *queue, slave_t *slave);
static void eql_timer(unsigned long param)
static const char version[] __initconst =
"Equalizer2002: Simon Janes (simon@ncm.com) and David S. Miller (davem@redhat.com)";
static const struct net_device_ops eql_netdev_ops = ;
static void __init eql_setup(struct net_device *dev)
static int eql_open(struct net_device *dev)
static void eql_kill_one_slave(slave_queue_t *queue, slave_t *slave)
static void eql_kill_slave_queue(slave_queue_t *queue)
static int eql_close(struct net_device *dev)
static int eql_enslave(struct net_device *dev,  slaving_request_t __user *srq);
static int eql_emancipate(struct net_device *dev, slaving_request_t __user *srq);
static int eql_g_slave_cfg(struct net_device *dev, slave_config_t __user *sc);
static int eql_s_slave_cfg(struct net_device *dev, slave_config_t __user *sc);
static int eql_g_master_cfg(struct net_device *dev, master_config_t __user *mc);
static int eql_s_master_cfg(struct net_device *dev, master_config_t __user *mc);
static int eql_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static slave_t *__eql_schedule_slaves(slave_queue_t *queue)
static netdev_tx_t eql_slave_xmit(struct sk_buff *skb, struct net_device *dev)
static slave_t *__eql_find_slave_dev(slave_queue_t *queue, struct net_device *dev)
static inline int eql_is_full(slave_queue_t *queue)
static int __eql_insert_slave(slave_queue_t *queue, slave_t *slave)
static int eql_enslave(struct net_device *master_dev, slaving_request_t __user *srqp)
static int eql_emancipate(struct net_device *master_dev, slaving_request_t __user *srqp)
static int eql_g_slave_cfg(struct net_device *dev, slave_config_t __user *scp)
static int eql_s_slave_cfg(struct net_device *dev, slave_config_t __user *scp)
static int eql_g_master_cfg(struct net_device *dev, master_config_t __user *mcp)
static int eql_s_master_cfg(struct net_device *dev, master_config_t __user *mcp)
static struct net_device *dev_eql;
static int __init eql_init_module(void)
static void __exit eql_cleanup_module(void)
module_init(eql_init_module);
module_exit(eql_cleanup_module);
MODULE_LICENSE("GPL");
