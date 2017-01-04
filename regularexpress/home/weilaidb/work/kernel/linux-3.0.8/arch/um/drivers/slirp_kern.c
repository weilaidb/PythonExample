struct slirp_init ;
void slirp_init(struct net_device *dev, void *data)
static unsigned short slirp_protocol(struct sk_buff *skbuff)
static int slirp_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int slirp_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
const struct net_kern_info slirp_kern_info = ;
static int slirp_setup(char *str, char **mac_out, void *data)
static struct transport slirp_transport = ;
static int register_slirp(void)
late_initcall(register_slirp);
