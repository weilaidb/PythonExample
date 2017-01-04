static u32 net_secret[MD5_MESSAGE_BYTES / 4] ____cacheline_aligned;
static int __init net_secret_init(void)
late_initcall(net_secret_init);
static u32 seq_scale(u32 seq)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
__u32 secure_tcpv6_sequence_number(__be32 *saddr, __be32 *daddr,
__be16 sport, __be16 dport)
EXPORT_SYMBOL(secure_tcpv6_sequence_number);
u32 secure_ipv6_port_ephemeral(const __be32 *saddr, const __be32 *daddr,
__be16 dport)
__u32 secure_ip_id(__be32 daddr)
__u32 secure_ipv6_id(const __be32 daddr[4])
__u32 secure_tcp_sequence_number(__be32 saddr, __be32 daddr,
__be16 sport, __be16 dport)
u32 secure_ipv4_port_ephemeral(__be32 saddr, __be32 daddr, __be16 dport)
EXPORT_SYMBOL_GPL(secure_ipv4_port_ephemeral);
#if defined(CONFIG_IP_DCCP) || defined(CONFIG_IP_DCCP_MODULE)
u64 secure_dccp_sequence_number(__be32 saddr, __be32 daddr,
__be16 sport, __be16 dport)
EXPORT_SYMBOL(secure_dccp_sequence_number);
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
u64 secure_dccpv6_sequence_number(__be32 *saddr, __be32 *daddr,
__be16 sport, __be16 dport)
EXPORT_SYMBOL(secure_dccpv6_sequence_number);
