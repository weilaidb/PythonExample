static void dccp_get_info(struct sock *sk, struct tcp_info *info)
static void dccp_diag_get_info(struct sock *sk, struct inet_diag_msg *r,
void *_info)
static const struct inet_diag_handler dccp_diag_handler = ;
static int __init dccp_diag_init(void)
static void __exit dccp_diag_fini(void)
module_init(dccp_diag_init);
module_exit(dccp_diag_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnaldo Carvalho de Melo <acme@mandriva.com>");
MODULE_DESCRIPTION("DCCP inet_diag handler");
MODULE_ALIAS_NET_PF_PROTO_TYPE(PF_NETLINK, NETLINK_INET_DIAG, DCCPDIAG_GETSOCK);
