static int cmtp_sock_release(struct socket *sock)
static int cmtp_sock_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int cmtp_sock_compat_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static const struct proto_ops cmtp_sock_ops = ;
static struct proto cmtp_proto = ;
static int cmtp_sock_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family cmtp_sock_family_ops = ;
int cmtp_init_sockets(void)
void cmtp_cleanup_sockets(void)
