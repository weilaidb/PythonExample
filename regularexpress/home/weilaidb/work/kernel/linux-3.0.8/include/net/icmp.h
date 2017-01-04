#define	_ICMP_H
struct icmp_err ;
extern const struct icmp_err icmp_err_convert[];
#define ICMP_INC_STATS(net, field)	SNMP_INC_STATS((net)->mib.icmp_statistics, field)
#define ICMP_INC_STATS_BH(net, field)	SNMP_INC_STATS_BH((net)->mib.icmp_statistics, field)
#define ICMPMSGOUT_INC_STATS(net, field)	SNMP_INC_STATS((net)->mib.icmpmsg_statistics, field+256)
#define ICMPMSGIN_INC_STATS_BH(net, field)	SNMP_INC_STATS_BH((net)->mib.icmpmsg_statistics, field)
struct dst_entry;
struct net_proto_family;
struct sk_buff;
struct net;
extern void	icmp_send(struct sk_buff *skb_in,  int type, int code, __be32 info);
extern int	icmp_rcv(struct sk_buff *skb);
extern int	icmp_ioctl(struct sock *sk, int cmd, unsigned long arg);
extern int	icmp_init(void);
extern void	icmp_out_count(struct net *net, unsigned char type);
