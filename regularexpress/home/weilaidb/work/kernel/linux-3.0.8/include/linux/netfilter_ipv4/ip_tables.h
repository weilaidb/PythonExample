#define _IPTABLES_H
#define IPT_FUNCTION_MAXNAMELEN XT_FUNCTION_MAXNAMELEN
#define IPT_TABLE_MAXNAMELEN XT_TABLE_MAXNAMELEN
#define ipt_match xt_match
#define ipt_target xt_target
#define ipt_table xt_table
#define ipt_get_revision xt_get_revision
#define ipt_entry_match xt_entry_match
#define ipt_entry_target xt_entry_target
#define ipt_standard_target xt_standard_target
#define ipt_error_target xt_error_target
#define ipt_counters xt_counters
#define IPT_CONTINUE XT_CONTINUE
#define IPT_RETURN XT_RETURN
#define ipt_udp xt_udp
#define ipt_tcp xt_tcp
#define IPT_TCP_INV_SRCPT	XT_TCP_INV_SRCPT
#define IPT_TCP_INV_DSTPT	XT_TCP_INV_DSTPT
#define IPT_TCP_INV_FLAGS	XT_TCP_INV_FLAGS
#define IPT_TCP_INV_OPTION	XT_TCP_INV_OPTION
#define IPT_TCP_INV_MASK	XT_TCP_INV_MASK
#define IPT_UDP_INV_SRCPT	XT_UDP_INV_SRCPT
#define IPT_UDP_INV_DSTPT	XT_UDP_INV_DSTPT
#define IPT_UDP_INV_MASK	XT_UDP_INV_MASK
#define ipt_counters_info xt_counters_info
#define IPT_STANDARD_TARGET XT_STANDARD_TARGET
#define IPT_ERROR_TARGET XT_ERROR_TARGET
#define IPT_MATCH_ITERATE(e, fn, args...) \
XT_MATCH_ITERATE(struct ipt_entry, e, fn, ## args)
#define IPT_ENTRY_ITERATE(entries, size, fn, args...) \
XT_ENTRY_ITERATE(struct ipt_entry, entries, size, fn, ## args)
struct ipt_ip ;
#define IPT_F_FRAG		0x01
#define IPT_F_GOTO		0x02
#define IPT_F_MASK		0x03
#define IPT_INV_VIA_IN		0x01
#define IPT_INV_VIA_OUT		0x02
#define IPT_INV_TOS		0x04
#define IPT_INV_SRCIP		0x08
#define IPT_INV_DSTIP		0x10
#define IPT_INV_FRAG		0x20
#define IPT_INV_PROTO		XT_INV_PROTO
#define IPT_INV_MASK		0x7F
struct ipt_entry ;
#define IPT_BASE_CTL		64
#define IPT_SO_SET_REPLACE	(IPT_BASE_CTL)
#define IPT_SO_SET_ADD_COUNTERS	(IPT_BASE_CTL + 1)
#define IPT_SO_SET_MAX		IPT_SO_SET_ADD_COUNTERS
#define IPT_SO_GET_INFO			(IPT_BASE_CTL)
#define IPT_SO_GET_ENTRIES		(IPT_BASE_CTL + 1)
#define IPT_SO_GET_REVISION_MATCH	(IPT_BASE_CTL + 2)
#define IPT_SO_GET_REVISION_TARGET	(IPT_BASE_CTL + 3)
#define IPT_SO_GET_MAX			IPT_SO_GET_REVISION_TARGET
struct ipt_icmp ;
#define IPT_ICMP_INV	0x01
struct ipt_getinfo ;
struct ipt_replace ;
struct ipt_get_entries ;
static __inline__ struct xt_entry_target *
ipt_get_target(struct ipt_entry *e)
extern void ipt_init(void) __init;
extern struct xt_table *ipt_register_table(struct net *net,
const struct xt_table *table,
const struct ipt_replace *repl);
extern void ipt_unregister_table(struct net *net, struct xt_table *table);
struct ipt_standard ;
struct ipt_error ;
#define IPT_ENTRY_INIT(__size)						       \
#define IPT_STANDARD_INIT(__verdict)					       \
#define IPT_ERROR_INIT							       \
extern void *ipt_alloc_initial_table(const struct xt_table *);
extern unsigned int ipt_do_table(struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
struct xt_table *table);
struct compat_ipt_entry ;
static inline struct xt_entry_target *
compat_ipt_get_target(struct compat_ipt_entry *e)
