struct tuntap_init ;
static void tuntap_init(struct net_device *dev, void *data)
static int tuntap_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int tuntap_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
const struct net_kern_info tuntap_kern_info = ;
int tuntap_setup(char *str, char **mac_out, void *data)
static struct transport tuntap_transport = ;
static int register_tuntap(void)
late_initcall(register_tuntap);
