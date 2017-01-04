struct daemon_init ;
static void daemon_init(struct net_device *dev, void *data)
static int daemon_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int daemon_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static const struct net_kern_info daemon_kern_info = ;
static int daemon_setup(char *str, char **mac_out, void *data)
static struct transport daemon_transport = ;
static int register_daemon(void)
late_initcall(register_daemon);
