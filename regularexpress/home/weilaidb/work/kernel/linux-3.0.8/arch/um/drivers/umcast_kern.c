struct umcast_init ;
static void umcast_init(struct net_device *dev, void *data)
static int umcast_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int umcast_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static const struct net_kern_info umcast_kern_info = ;
static int mcast_setup(char *str, char **mac_out, void *data)
static int ucast_setup(char *str, char **mac_out, void *data)
static struct transport mcast_transport = ;
static struct transport ucast_transport = ;
static int register_umcast(void)
late_initcall(register_umcast);
