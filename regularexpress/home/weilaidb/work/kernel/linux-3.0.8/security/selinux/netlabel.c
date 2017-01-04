static int selinux_netlbl_sidlookup_cached(struct sk_buff *skb,
struct netlbl_lsm_secattr *secattr,
u32 *sid)
static struct netlbl_lsm_secattr *selinux_netlbl_sock_genattr(struct sock *sk)
void selinux_netlbl_cache_invalidate(void)
void selinux_netlbl_err(struct sk_buff *skb, int error, int gateway)
void selinux_netlbl_sk_security_free(struct sk_security_struct *sksec)
void selinux_netlbl_sk_security_reset(struct sk_security_struct *sksec)
int selinux_netlbl_skbuff_getsid(struct sk_buff *skb,
u16 family,
u32 *type,
u32 *sid)
int selinux_netlbl_skbuff_setsid(struct sk_buff *skb,
u16 family,
u32 sid)
int selinux_netlbl_inet_conn_request(struct request_sock *req, u16 family)
void selinux_netlbl_inet_csk_clone(struct sock *sk, u16 family)
int selinux_netlbl_socket_post_create(struct sock *sk, u16 family)
int selinux_netlbl_sock_rcv_skb(struct sk_security_struct *sksec,
struct sk_buff *skb,
u16 family,
struct common_audit_data *ad)
int selinux_netlbl_socket_setsockopt(struct socket *sock,
int level,
int optname)
int selinux_netlbl_socket_connect(struct sock *sk, struct sockaddr *addr)
