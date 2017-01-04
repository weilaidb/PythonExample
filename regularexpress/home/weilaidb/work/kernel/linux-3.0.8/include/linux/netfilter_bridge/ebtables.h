#define __LINUX_BRIDGE_EFF_H
#define EBT_TABLE_MAXNAMELEN 32
#define EBT_CHAIN_MAXNAMELEN EBT_TABLE_MAXNAMELEN
#define EBT_FUNCTION_MAXNAMELEN EBT_TABLE_MAXNAMELEN
#define EBT_ACCEPT   -1
#define EBT_DROP     -2
#define EBT_CONTINUE -3
#define EBT_RETURN   -4
#define NUM_STANDARD_TARGETS   4
#define EBT_VERDICT_BITS 0x0000000F
struct xt_match;
struct xt_target;
struct ebt_counter ;
struct ebt_replace ;
struct ebt_replace_kernel ;
struct ebt_entries ;
#define EBT_ENTRY_OR_ENTRIES 0x01
#define EBT_NOPROTO 0x02
#define EBT_802_3 0x04
#define EBT_SOURCEMAC 0x08
#define EBT_DESTMAC 0x10
#define EBT_F_MASK (EBT_NOPROTO | EBT_802_3 | EBT_SOURCEMAC | EBT_DESTMAC \
| EBT_ENTRY_OR_ENTRIES)
#define EBT_IPROTO 0x01
#define EBT_IIN 0x02
#define EBT_IOUT 0x04
#define EBT_ISOURCE 0x8
#define EBT_IDEST 0x10
#define EBT_ILOGICALIN 0x20
#define EBT_ILOGICALOUT 0x40
#define EBT_INV_MASK (EBT_IPROTO | EBT_IIN | EBT_IOUT | EBT_ILOGICALIN \
| EBT_ILOGICALOUT | EBT_ISOURCE | EBT_IDEST)
struct ebt_entry_match ;
struct ebt_entry_watcher ;
struct ebt_entry_target ;
#define EBT_STANDARD_TARGET "standard"
struct ebt_standard_target ;
struct ebt_entry ;
#define EBT_BASE_CTL            128
#define EBT_SO_SET_ENTRIES      (EBT_BASE_CTL)
#define EBT_SO_SET_COUNTERS     (EBT_SO_SET_ENTRIES+1)
#define EBT_SO_SET_MAX          (EBT_SO_SET_COUNTERS+1)
#define EBT_SO_GET_INFO         (EBT_BASE_CTL)
#define EBT_SO_GET_ENTRIES      (EBT_SO_GET_INFO+1)
#define EBT_SO_GET_INIT_INFO    (EBT_SO_GET_ENTRIES+1)
#define EBT_SO_GET_INIT_ENTRIES (EBT_SO_GET_INIT_INFO+1)
#define EBT_SO_GET_MAX          (EBT_SO_GET_INIT_ENTRIES+1)
#define EBT_MATCH 0
#define EBT_NOMATCH 1
struct ebt_match ;
struct ebt_watcher ;
struct ebt_target ;
struct ebt_chainstack ;
struct ebt_table_info ;
struct ebt_table ;
#define EBT_ALIGN(s) (((s) + (__alignof__(struct ebt_replace)-1)) & \
~(__alignof__(struct ebt_replace)-1))
extern struct ebt_table *ebt_register_table(struct net *net,
const struct ebt_table *table);
extern void ebt_unregister_table(struct net *net, struct ebt_table *table);
extern unsigned int ebt_do_table(unsigned int hook, struct sk_buff *skb,
const struct net_device *in, const struct net_device *out,
struct ebt_table *table);
#define FWINV(bool,invflg) ((bool) ^ !!(info->invflags & invflg))
#define BASE_CHAIN (par->hook_mask & (1 << NF_BR_NUMHOOKS))
#define CLEAR_BASE_CHAIN_BIT (par->hook_mask &= ~(1 << NF_BR_NUMHOOKS))
#define INVALID_TARGET (info->target < -NUM_STANDARD_TARGETS || info->target >= 0)
#define EBT_MATCH_ITERATE(e, fn, args...)                   \
()
#define EBT_WATCHER_ITERATE(e, fn, args...)                 \
()
#define EBT_ENTRY_ITERATE(entries, size, fn, args...)       \
()
