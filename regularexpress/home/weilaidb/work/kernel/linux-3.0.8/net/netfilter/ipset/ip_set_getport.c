static bool
get_port(const struct sk_buff *skb, int protocol, unsigned int protooff,
bool src, __be16 *port, u8 *proto)
bool
ip_set_get_ip4_port(const struct sk_buff *skb, bool src,
__be16 *port, u8 *proto)
EXPORT_SYMBOL_GPL(ip_set_get_ip4_port);
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
bool
ip_set_get_ip6_port(const struct sk_buff *skb, bool src,
__be16 *port, u8 *proto)
EXPORT_SYMBOL_GPL(ip_set_get_ip6_port);
bool
ip_set_get_ip_port(const struct sk_buff *skb, u8 pf, bool src, __be16 *port)
EXPORT_SYMBOL_GPL(ip_set_get_ip_port);
