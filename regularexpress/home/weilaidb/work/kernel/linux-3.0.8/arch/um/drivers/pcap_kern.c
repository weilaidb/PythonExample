struct pcap_init ;
void pcap_init(struct net_device *dev, void *data)
static int pcap_read(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static int pcap_write(int fd, struct sk_buff *skb, struct uml_net_private *lp)
static const struct net_kern_info pcap_kern_info = ;
int pcap_setup(char *str, char **mac_out, void *data)
static struct transport pcap_transport = ;
static int register_pcap(void)
late_initcall(register_pcap);
