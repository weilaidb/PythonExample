static int pvc_shutdown(struct socket *sock, int how)
static int pvc_bind(struct socket *sock, struct sockaddr *sockaddr,
int sockaddr_len)
static int pvc_connect(struct socket *sock, struct sockaddr *sockaddr,
int sockaddr_len, int flags)
static int pvc_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int pvc_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int pvc_getname(struct socket *sock, struct sockaddr *sockaddr,
int *sockaddr_len, int peer)
static const struct proto_ops pvc_proto_ops = ;
static int pvc_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family pvc_family_ops = ;
int __init atmpvc_init(void)
void atmpvc_exit(void)
