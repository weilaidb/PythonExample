struct slip_init ;
static void slip_init(struct net_device *dev, void *data)
static unsigned short slip_protocol(struct sk_buff *skbuff)
static int slip_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int slip_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static const struct net_kern_info slip_kern_info = ;
static int slip_setup(char *str, char **mac_out, void *data)
static struct transport slip_transport = ;
static int register_slip(void)
late_initcall(register_slip);
