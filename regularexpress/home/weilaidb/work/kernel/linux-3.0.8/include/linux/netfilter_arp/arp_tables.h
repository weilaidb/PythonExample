#define _ARPTABLES_H
#define ARPT_FUNCTION_MAXNAMELEN XT_FUNCTION_MAXNAMELEN
#define ARPT_TABLE_MAXNAMELEN XT_TABLE_MAXNAMELEN
#define arpt_entry_target xt_entry_target
#define arpt_standard_target xt_standard_target
#define arpt_error_target xt_error_target
#define ARPT_CONTINUE XT_CONTINUE
#define ARPT_RETURN XT_RETURN
#define arpt_counters_info xt_counters_info
#define arpt_counters xt_counters
#define ARPT_STANDARD_TARGET XT_STANDARD_TARGET
#define ARPT_ERROR_TARGET XT_ERROR_TARGET
#define ARPT_ENTRY_ITERATE(entries, size, fn, args...) \
XT_ENTRY_ITERATE(struct arpt_entry, entries, size, fn, ## args)
#define ARPT_DEV_ADDR_LEN_MAX 16
struct arpt_devaddr_info ;
struct arpt_arp ;
#define ARPT_F_MASK		0x00
#define ARPT_INV_VIA_IN		0x0001
#define ARPT_INV_VIA_OUT	0x0002
#define ARPT_INV_SRCIP		0x0004
#define ARPT_INV_TGTIP		0x0008
#define ARPT_INV_SRCDEVADDR	0x0010
#define ARPT_INV_TGTDEVADDR	0x0020
#define ARPT_INV_ARPOP		0x0040
#define ARPT_INV_ARPHRD		0x0080
#define ARPT_INV_ARPPRO		0x0100
#define ARPT_INV_ARPHLN		0x0200
#define ARPT_INV_MASK		0x03FF
struct arpt_entry
;
#define ARPT_BASE_CTL		96
#define ARPT_SO_SET_REPLACE		(ARPT_BASE_CTL)
#define ARPT_SO_SET_ADD_COUNTERS	(ARPT_BASE_CTL + 1)
#define ARPT_SO_SET_MAX			ARPT_SO_SET_ADD_COUNTERS
#define ARPT_SO_GET_INFO		(ARPT_BASE_CTL)
#define ARPT_SO_GET_ENTRIES		(ARPT_BASE_CTL + 1)
#define ARPT_SO_GET_REVISION_TARGET	(ARPT_BASE_CTL + 3)
#define ARPT_SO_GET_MAX			(ARPT_SO_GET_REVISION_TARGET)
struct arpt_getinfo ;
struct arpt_replace ;
struct arpt_get_entries ;
static __inline__ struct xt_entry_target *arpt_get_target(struct arpt_entry *e)
struct arpt_standard ;
struct arpt_error ;
#define ARPT_ENTRY_INIT(__size)						       \
#define ARPT_STANDARD_INIT(__verdict)					       \
#define ARPT_ERROR_INIT							       \
extern void *arpt_alloc_initial_table(const struct xt_table *);
extern struct xt_table *arpt_register_table(struct net *net,
const struct xt_table *table,
const struct arpt_replace *repl);
extern void arpt_unregister_table(struct xt_table *table);
extern unsigned int arpt_do_table(struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
struct xt_table *table);
struct compat_arpt_entry ;
static inline struct xt_entry_target *
compat_arpt_get_target(struct compat_arpt_entry *e)
