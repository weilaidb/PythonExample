#define AF_PHONET_H
#define MAX_PHONET_HEADER	(8 + MAX_HEADER)
struct pn_sock ;
static inline struct pn_sock *pn_sk(struct sock *sk)
extern const struct proto_ops phonet_dgram_ops;
void pn_sock_init(void);
struct sock *pn_find_sock_by_sa(struct net *net, const struct sockaddr_pn *sa);
void pn_deliver_sock_broadcast(struct net *net, struct sk_buff *skb);
void phonet_get_local_port_range(int *min, int *max);
void pn_sock_hash(struct sock *sk);
void pn_sock_unhash(struct sock *sk);
int pn_sock_get_port(struct sock *sk, unsigned short sport);
struct sock *pn_find_sock_by_res(struct net *net, u8 res);
int pn_sock_bind_res(struct sock *sock, u8 res);
int pn_sock_unbind_res(struct sock *sk, u8 res);
void pn_sock_unbind_all_res(struct sock *sk);
int pn_skb_send(struct sock *sk, struct sk_buff *skb,
const struct sockaddr_pn *target);
static inline struct phonethdr *pn_hdr(struct sk_buff *skb)
static inline struct phonetmsg *pn_msg(struct sk_buff *skb)
static inline
void pn_skb_get_src_sockaddr(struct sk_buff *skb, struct sockaddr_pn *sa)
static inline
void pn_skb_get_dst_sockaddr(struct sk_buff *skb, struct sockaddr_pn *sa)
struct phonet_protocol ;
int phonet_proto_register(unsigned int protocol, struct phonet_protocol *pp);
void phonet_proto_unregister(unsigned int protocol, struct phonet_protocol *pp);
int phonet_sysctl_init(void);
void phonet_sysctl_exit(void);
int isi_register(void);
void isi_unregister(void);
