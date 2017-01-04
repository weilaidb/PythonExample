struct ethertap_init ;
static void etap_init(struct net_device *dev, void *data)
static int etap_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int etap_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
const struct net_kern_info ethertap_kern_info = ;
int ethertap_setup(char *str, char **mac_out, void *data)
static struct transport ethertap_transport = ;
static int register_ethertap(void)
late_initcall(register_ethertap);
