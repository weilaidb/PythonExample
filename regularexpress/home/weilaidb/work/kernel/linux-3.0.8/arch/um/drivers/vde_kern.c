static void vde_init(struct net_device *dev, void *data)
static int vde_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int vde_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static const struct net_kern_info vde_kern_info = ;
static int vde_setup(char *str, char **mac_out, void *data)
static struct transport vde_transport = ;
static int register_vde(void)
late_initcall(register_vde);
