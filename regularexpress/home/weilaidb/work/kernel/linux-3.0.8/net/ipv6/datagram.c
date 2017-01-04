int ip6_datagram_connect(struct sock *sk, struct sockaddr *uaddr, int addr_len)
void ipv6_icmp_error(struct sock *sk, struct sk_buff *skb, int err,
__be16 port, u32 info, u8 *payload)
void ipv6_local_error(struct sock *sk, int err, struct flowi6 *fl6, u32 info)
void ipv6_local_rxpmtu(struct sock *sk, struct flowi6 *fl6, u32 mtu)
int ipv6_recv_error(struct sock *sk, struct msghdr *msg, int len)
int ipv6_recv_rxpmtu(struct sock *sk, struct msghdr *msg, int len)
int datagram_recv_ctl(struct sock *sk, struct msghdr *msg, struct sk_buff *skb)
int datagram_send_ctl(struct net *net,
struct msghdr *msg, struct flowi6 *fl6,
struct ipv6_txoptions *opt,
int *hlimit, int *tclass, int *dontfrag)
