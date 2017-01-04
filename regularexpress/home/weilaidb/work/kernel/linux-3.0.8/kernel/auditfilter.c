struct list_head audit_filter_list[AUDIT_NR_FILTERS] = ;
static struct list_head audit_rules_list[AUDIT_NR_FILTERS] = ;
DEFINE_MUTEX(audit_filter_mutex);
static inline void audit_free_rule(struct audit_entry *e)
void audit_free_rule_rcu(struct rcu_head *head)
static inline struct audit_entry *audit_init_entry(u32 field_count)
char *audit_unpack_string(void **bufp, size_t *remain, size_t len)
static inline int audit_to_inode(struct audit_krule *krule,
struct audit_field *f)
static __u32 *classes[AUDIT_SYSCALL_CLASSES];
int __init audit_register_class(int class, unsigned *list)
int audit_match_class(int class, unsigned syscall)
static inline int audit_match_class_bits(int class, u32 *mask)
static int audit_match_signal(struct audit_entry *entry)
static inline struct audit_entry *audit_to_entry_common(struct audit_rule *rule)
static u32 audit_ops[] =
;
static u32 audit_to_op(u32 op)
static struct audit_entry *audit_rule_to_entry(struct audit_rule *rule)
static struct audit_entry *audit_data_to_entry(struct audit_rule_data *data,
size_t datasz)
static inline size_t audit_pack_string(void **bufp, const char *str)
static struct audit_rule *audit_krule_to_rule(struct audit_krule *krule)
static struct audit_rule_data *audit_krule_to_data(struct audit_krule *krule)
static int audit_compare_rule(struct audit_krule *a, struct audit_krule *b)
static inline int audit_dupe_lsm_field(struct audit_field *df,
struct audit_field *sf)
struct audit_entry *audit_dupe_rule(struct audit_krule *old)
static struct audit_entry *audit_find_rule(struct audit_entry *entry,
struct list_head **p)
static u64 prio_low = ~0ULL/2;
static u64 prio_high = ~0ULL/2 - 1;
static inline int audit_add_rule(struct audit_entry *entry)
static inline int audit_del_rule(struct audit_entry *entry)
static void audit_list(int pid, int seq, struct sk_buff_head *q)
static void audit_list_rules(int pid, int seq, struct sk_buff_head *q)
static void audit_log_rule_change(uid_t loginuid, u32 sessionid, u32 sid,
char *action, struct audit_krule *rule,
int res)
int audit_receive_filter(int type, int pid, int uid, int seq, void *data,
size_t datasz, uid_t loginuid, u32 sessionid, u32 sid)
int audit_comparator(u32 left, u32 op, u32 right)
int audit_compare_dname_path(const char *dname, const char *path,
int *dirlen)
static int audit_filter_user_rules(struct netlink_skb_parms *cb,
struct audit_krule *rule,
enum audit_state *state)
int audit_filter_user(struct netlink_skb_parms *cb)
int audit_filter_type(int type)
static int update_lsm_rule(struct audit_krule *r)
int audit_update_lsm_rules(void)
