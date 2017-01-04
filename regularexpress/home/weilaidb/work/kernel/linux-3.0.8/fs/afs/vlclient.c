static int afs_vl_abort_to_error(u32 abort_code)
static int afs_deliver_vl_get_entry_by_xxx(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXVLGetEntryByName = ;
static const struct afs_call_type afs_RXVLGetEntryById = ;
int afs_vl_get_entry_by_name(struct in_addr *addr,
struct key *key,
const char *volname,
struct afs_cache_vlocation *entry,
const struct afs_wait_mode *wait_mode)
int afs_vl_get_entry_by_id(struct in_addr *addr,
struct key *key,
afs_volid_t volid,
afs_voltype_t voltype,
struct afs_cache_vlocation *entry,
const struct afs_wait_mode *wait_mode)
