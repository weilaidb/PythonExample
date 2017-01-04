#define _UDP4_IMPL_H
extern int  	__udp4_lib_rcv(struct sk_buff *, struct udp_table *, int );
extern void 	__udp4_lib_err(struct sk_buff *, u32, struct udp_table *);
extern int	udp_v4_get_port(struct sock *sk, unsigned short snum);
extern int	udp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
extern int	udp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int	compat_udp_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen);
extern int	compat_udp_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen);
extern int	udp_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len);
extern int	udp_sendpage(struct sock *sk, struct page *page, int offset,
size_t size, int flags);
extern int	udp_queue_rcv_skb(struct sock * sk, struct sk_buff *skb);
extern void	udp_destroy_sock(struct sock *sk);
extern int	udp4_seq_show(struct seq_file *seq, void *v);
