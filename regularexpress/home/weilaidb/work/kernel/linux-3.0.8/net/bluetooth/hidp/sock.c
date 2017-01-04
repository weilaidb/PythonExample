static int hidp_sock_release(struct socket *sock)
static int hidp_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
struct compat_hidp_connadd_req ;
static int hidp_sock_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct proto_ops hidp_sock_ops = ;
static struct proto hidp_proto = ;
static int hidp_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family hidp_sock_family_ops = ;
int __init hidp_init_sockets(void)
void __exit hidp_cleanup_sockets(void)
