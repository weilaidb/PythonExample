#define _IP6_TABLES_H
#define IP6T_FUNCTION_MAXNAMELEN XT_FUNCTION_MAXNAMELEN
#define IP6T_TABLE_MAXNAMELEN XT_TABLE_MAXNAMELEN
#define ip6t_match xt_match
#define ip6t_target xt_target
#define ip6t_table xt_table
#define ip6t_get_revision xt_get_revision
#define ip6t_entry_match xt_entry_match
#define ip6t_entry_target xt_entry_target
#define ip6t_standard_target xt_standard_target
#define ip6t_error_target xt_error_target
#define ip6t_counters xt_counters
#define IP6T_CONTINUE XT_CONTINUE
#define IP6T_RETURN XT_RETURN
#define ip6t_tcp xt_tcp
#define ip6t_udp xt_udp
#define IP6T_TCP_INV_SRCPT	XT_TCP_INV_SRCPT
#define IP6T_TCP_INV_DSTPT	XT_TCP_INV_DSTPT
#define IP6T_TCP_INV_FLAGS	XT_TCP_INV_FLAGS
#define IP6T_TCP_INV_OPTION	XT_TCP_INV_OPTION
#define IP6T_TCP_INV_MASK	XT_TCP_INV_MASK
#define IP6T_UDP_INV_SRCPT	XT_UDP_INV_SRCPT
#define IP6T_UDP_INV_DSTPT	XT_UDP_INV_DSTPT
#define IP6T_UDP_INV_MASK	XT_UDP_INV_MASK
#define ip6t_counters_info xt_counters_info
#define IP6T_STANDARD_TARGET XT_STANDARD_TARGET
#define IP6T_ERROR_TARGET XT_ERROR_TARGET
#define IP6T_MATCH_ITERATE(e, fn, args...) \
XT_MATCH_ITERATE(struct ip6t_entry, e, fn, ## args)
#define IP6T_ENTRY_ITERATE(entries, size, fn, args...) \
XT_ENTRY_ITERATE(struct ip6t_entry, entries, size, fn, ## args)
struct ip6t_ip6 ;
#define IP6T_F_PROTO		0x01
#define IP6T_F_TOS		0x02
#define IP6T_F_GOTO		0x04
#define IP6T_F_MASK		0x07
#define IP6T_INV_VIA_IN		0x01
#define IP6T_INV_VIA_OUT		0x02
#define IP6T_INV_TOS		0x04
#define IP6T_INV_SRCIP		0x08
#define IP6T_INV_DSTIP		0x10
#define IP6T_INV_FRAG		0x20
#define IP6T_INV_PROTO		XT_INV_PROTO
#define IP6T_INV_MASK		0x7F
struct ip6t_entry ;
struct ip6t_standard ;
struct ip6t_error ;
#define IP6T_ENTRY_INIT(__size)						       \
#define IP6T_STANDARD_INIT(__verdict)					       \
#define IP6T_ERROR_INIT							       \
#define IP6T_BASE_CTL			64
#define IP6T_SO_SET_REPLACE		(IP6T_BASE_CTL)
#define IP6T_SO_SET_ADD_COUNTERS	(IP6T_BASE_CTL + 1)
#define IP6T_SO_SET_MAX			IP6T_SO_SET_ADD_COUNTERS
#define IP6T_SO_GET_INFO		(IP6T_BASE_CTL)
#define IP6T_SO_GET_ENTRIES		(IP6T_BASE_CTL + 1)
#define IP6T_SO_GET_REVISION_MATCH	(IP6T_BASE_CTL + 4)
#define IP6T_SO_GET_REVISION_TARGET	(IP6T_BASE_CTL + 5)
#define IP6T_SO_GET_MAX			IP6T_SO_GET_REVISION_TARGET
struct ip6t_icmp ;
#define IP6T_ICMP_INV	0x01
struct ip6t_getinfo ;
struct ip6t_replace ;
struct ip6t_get_entries ;
static __inline__ struct xt_entry_target *
ip6t_get_target(struct ip6t_entry *e)
extern void ip6t_init(void) __init;
extern void *ip6t_alloc_initial_table(const struct xt_table *);
extern struct xt_table *ip6t_register_table(struct net *net,
const struct xt_table *table,
const struct ip6t_replace *repl);
extern void ip6t_unregister_table(struct net *net, struct xt_table *table);
extern unsigned int ip6t_do_table(struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
struct xt_table *table);
extern int ip6t_ext_hdr(u8 nexthdr);
extern int ipv6_find_hdr(const struct sk_buff *skb, unsigned int *offset,
int target, unsigned short *fragoff);
struct compat_ip6t_entry ;
static inline struct xt_entry_target *
compat_ip6t_get_target(struct compat_ip6t_entry *e)
