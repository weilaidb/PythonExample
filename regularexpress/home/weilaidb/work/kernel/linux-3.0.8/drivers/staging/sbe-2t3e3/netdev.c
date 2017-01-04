int t3e3_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static struct net_device_stats* t3e3_get_stats(struct net_device *dev)
int t3e3_open(struct net_device *dev)
int t3e3_close(struct net_device *dev)
static int t3e3_attach(struct net_device *dev, unsigned short foo1,
unsigned short foo2)
static const struct net_device_ops t3e3_ops = ;
int setup_device(struct net_device *dev, struct channel *sc)
