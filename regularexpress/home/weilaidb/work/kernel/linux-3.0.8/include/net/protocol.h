#define _PROTOCOL_H
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
#define MAX_INET_PROTOS	256
struct net_protocol ;
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
struct inet6_protocol ;
#define INET6_PROTO_NOPOLICY	0x1
#define INET6_PROTO_FINAL	0x2
#define INET6_PROTO_GSO_EXTHDR	0x4
struct inet_protosw ;
#define INET_PROTOSW_REUSE 0x01
#define INET_PROTOSW_PERMANENT 0x02
#define INET_PROTOSW_ICSK      0x04
extern const struct net_protocol __rcu *inet_protos[MAX_INET_PROTOS];
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
extern const struct inet6_protocol __rcu *inet6_protos[MAX_INET_PROTOS];
extern int	inet_add_protocol(const struct net_protocol *prot, unsigned char num);
extern int	inet_del_protocol(const struct net_protocol *prot, unsigned char num);
extern void	inet_register_protosw(struct inet_protosw *p);
extern void	inet_unregister_protosw(struct inet_protosw *p);
#if defined(CONFIG_IPV6) || defined (CONFIG_IPV6_MODULE)
extern int	inet6_add_protocol(const struct inet6_protocol *prot, unsigned char num);
extern int	inet6_del_protocol(const struct inet6_protocol *prot, unsigned char num);
extern int	inet6_register_protosw(struct inet_protosw *p);
extern void	inet6_unregister_protosw(struct inet_protosw *p);
