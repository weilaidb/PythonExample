#define _LINUX_RCULIST_H
#define list_next_rcu(list)	(*((struct list_head __rcu **)(&(list)->next)))
static inline void __list_add_rcu(struct list_head *new,
struct list_head *prev, struct list_head *next)
static inline void list_add_rcu(struct list_head *new, struct list_head *head)
static inline void list_add_tail_rcu(struct list_head *new,
struct list_head *head)
static inline void list_del_rcu(struct list_head *entry)
static inline void hlist_del_init_rcu(struct hlist_node *n)
static inline void list_replace_rcu(struct list_head *old,
struct list_head *new)
static inline void list_splice_init_rcu(struct list_head *list,
struct list_head *head,
void (*sync)(void))
#define list_entry_rcu(ptr, type, member) \
()
#define list_first_entry_rcu(ptr, type, member) \
list_entry_rcu((ptr)->next, type, member)
#define list_for_each_entry_rcu(pos, head, member) \
for (pos = list_entry_rcu((head)->next, typeof(*pos), member); \
&pos->member != (head); \
pos = list_entry_rcu(pos->member.next, typeof(*pos), member))
#define list_for_each_continue_rcu(pos, head) \
for ((pos) = rcu_dereference_raw(list_next_rcu(pos)); \
(pos) != (head); \
(pos) = rcu_dereference_raw(list_next_rcu(pos)))
#define list_for_each_entry_continue_rcu(pos, head, member) 		\
for (pos = list_entry_rcu(pos->member.next, typeof(*pos), member); \
&pos->member != (head);	\
pos = list_entry_rcu(pos->member.next, typeof(*pos), member))
static inline void hlist_del_rcu(struct hlist_node *n)
static inline void hlist_replace_rcu(struct hlist_node *old,
struct hlist_node *new)
#define hlist_first_rcu(head)	(*((struct hlist_node __rcu **)(&(head)->first)))
#define hlist_next_rcu(node)	(*((struct hlist_node __rcu **)(&(node)->next)))
#define hlist_pprev_rcu(node)	(*((struct hlist_node __rcu **)((node)->pprev)))
static inline void hlist_add_head_rcu(struct hlist_node *n,
struct hlist_head *h)
static inline void hlist_add_before_rcu(struct hlist_node *n,
struct hlist_node *next)
static inline void hlist_add_after_rcu(struct hlist_node *prev,
struct hlist_node *n)
#define __hlist_for_each_rcu(pos, head)				\
for (pos = rcu_dereference(hlist_first_rcu(head));	\
pos;						\
pos = rcu_dereference(hlist_next_rcu(pos)))
#define hlist_for_each_entry_rcu(tpos, pos, head, member)		\
for (pos = rcu_dereference_raw(hlist_first_rcu(head));		\
pos &&							 \
(); \
pos = rcu_dereference_raw(hlist_next_rcu(pos)))
#define hlist_for_each_entry_rcu_bh(tpos, pos, head, member)		 \
for (pos = rcu_dereference_bh((head)->first);			 \
pos &&							 \
(); \
pos = rcu_dereference_bh(pos->next))
#define hlist_for_each_entry_continue_rcu(tpos, pos, member)		\
for (pos = rcu_dereference((pos)->next);			\
pos &&							\
();  \
pos = rcu_dereference(pos->next))
#define hlist_for_each_entry_continue_rcu_bh(tpos, pos, member)		\
for (pos = rcu_dereference_bh((pos)->next);			\
pos &&							\
();  \
pos = rcu_dereference_bh(pos->next))
