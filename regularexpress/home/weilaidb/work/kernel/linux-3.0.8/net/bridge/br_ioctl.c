static int get_bridge_ifindices(struct net *net, int *indices, int num)
static void get_port_ifindices(struct net_bridge *br, int *ifindices, int num)
static int get_fdb_entries(struct net_bridge *br, void __user *userbuf,
unsigned long maxnum, unsigned long offset)
static int add_del_if(struct net_bridge *br, int ifindex, int isadd)
static int old_dev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int old_deviceless(struct net *net, void __user *uarg)
int br_ioctl_deviceless_stub(struct net *net, unsigned int cmd, void __user *uarg)
int br_dev_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
