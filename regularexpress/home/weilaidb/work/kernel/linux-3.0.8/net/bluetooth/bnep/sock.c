static int bnep_sock_release(struct socket *sock)
static int bnep_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int bnep_sock_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct proto_ops bnep_sock_ops = ;
static struct proto bnep_proto = ;
static int bnep_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family bnep_sock_family_ops = ;
int __init bnep_sock_init(void)
void __exit bnep_sock_cleanup(void)
