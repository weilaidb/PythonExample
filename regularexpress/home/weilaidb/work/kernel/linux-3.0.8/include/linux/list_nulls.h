#define _LINUX_LIST_NULLS_H
struct hlist_nulls_head ;
struct hlist_nulls_node ;
#define INIT_HLIST_NULLS_HEAD(ptr, nulls) \
((ptr)->first = (struct hlist_nulls_node *) (1UL | (((long)nulls) << 1)))
#define hlist_nulls_entry(ptr, type, member) container_of(ptr,type,member)
static inline int is_a_nulls(const struct hlist_nulls_node *ptr)
static inline unsigned long get_nulls_value(const struct hlist_nulls_node *ptr)
static inline int hlist_nulls_unhashed(const struct hlist_nulls_node *h)
static inline int hlist_nulls_empty(const struct hlist_nulls_head *h)
static inline void hlist_nulls_add_head(struct hlist_nulls_node *n,
struct hlist_nulls_head *h)
static inline void __hlist_nulls_del(struct hlist_nulls_node *n)
static inline void hlist_nulls_del(struct hlist_nulls_node *n)
#define hlist_nulls_for_each_entry(tpos, pos, head, member)		       \
for (pos = (head)->first;					       \
(!is_a_nulls(pos)) &&					       \
(); \
pos = pos->next)
#define hlist_nulls_for_each_entry_from(tpos, pos, member)	\
for (; (!is_a_nulls(pos)) && 				\
(); \
pos = pos->next)
