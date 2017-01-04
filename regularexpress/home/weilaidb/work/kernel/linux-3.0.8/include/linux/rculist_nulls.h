#define _LINUX_RCULIST_NULLS_H
static inline void hlist_nulls_del_init_rcu(struct hlist_nulls_node *n)
#define hlist_nulls_first_rcu(head) \
(*((struct hlist_nulls_node __rcu __force **)&(head)->first))
#define hlist_nulls_next_rcu(node) \
(*((struct hlist_nulls_node __rcu __force **)&(node)->next))
static inline void hlist_nulls_del_rcu(struct hlist_nulls_node *n)
static inline void hlist_nulls_add_head_rcu(struct hlist_nulls_node *n,
struct hlist_nulls_head *h)
#define hlist_nulls_for_each_entry_rcu(tpos, pos, head, member)			\
for (pos = rcu_dereference_raw(hlist_nulls_first_rcu(head));		\
(!is_a_nulls(pos)) &&						\
(); \
pos = rcu_dereference_raw(hlist_nulls_next_rcu(pos)))
