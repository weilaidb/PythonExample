static void tcp_diag_get_info(struct sock *sk, struct inet_diag_msg *r,
void *_info)
static const struct inet_diag_handler tcp_diag_handler = ;
static int __init tcp_diag_init(void)
static void __exit tcp_diag_exit(void)
module_init(tcp_diag_init);
module_exit(tcp_diag_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_NETLINK, NETLINK_INET_DIAG, TCPDIAG_GETSOCK);
