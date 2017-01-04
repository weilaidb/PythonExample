#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static int svc_create(struct net *net, struct socket *sock, int protocol,
int kern);
static int svc_shutdown(struct socket *sock, int how)
static void svc_disconnect(struct atm_vcc *vcc)
static int svc_release(struct socket *sock)
static int svc_bind(struct socket *sock, struct sockaddr *sockaddr,
int sockaddr_len)
static int svc_connect(struct socket *sock, struct sockaddr *sockaddr,
int sockaddr_len, int flags)
static int svc_listen(struct socket *sock, int backlog)
static int svc_accept(struct socket *sock, struct socket *newsock, int flags)
static int svc_getname(struct socket *sock, struct sockaddr *sockaddr,
int *sockaddr_len, int peer)
int svc_change_qos(struct atm_vcc *vcc, struct atm_qos *qos)
static int svc_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
static int svc_getsockopt(struct socket *sock, int level, int optname,
char __user *optval, int __user *optlen)
static int svc_addparty(struct socket *sock, struct sockaddr *sockaddr,
int sockaddr_len, int flags)
static int svc_dropparty(struct socket *sock, int ep_ref)
static int svc_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static int svc_compat_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static const struct proto_ops svc_proto_ops = ;
static int svc_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family svc_family_ops = ;
int __init atmsvc_init(void)
void atmsvc_exit(void)
