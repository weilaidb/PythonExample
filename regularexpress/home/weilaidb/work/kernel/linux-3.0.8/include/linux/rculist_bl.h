#define _LINUX_RCULIST_BL_H
static inline void hlist_bl_set_first_rcu(struct hlist_bl_head *h,
struct hlist_bl_node *n)
static inline struct hlist_bl_node *hlist_bl_first_rcu(struct hlist_bl_head *h)
static inline void hlist_bl_del_init_rcu(struct hlist_bl_node *n)
static inline void hlist_bl_del_rcu(struct hlist_bl_node *n)
static inline void hlist_bl_add_head_rcu(struct hlist_bl_node *n,
struct hlist_bl_head *h)
#define hlist_bl_for_each_entry_rcu(tpos, pos, head, member)		\
for (pos = hlist_bl_first_rcu(head);				\
pos &&							\
(); \
pos = rcu_dereference_raw(pos->next))
