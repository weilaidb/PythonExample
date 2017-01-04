#define _LINUX_LIST_BL_H
#if defined(CONFIG_SMP) || defined(CONFIG_DEBUG_SPINLOCK)
#define LIST_BL_LOCKMASK	1UL
#define LIST_BL_LOCKMASK	0UL
#define LIST_BL_BUG_ON(x) BUG_ON(x)
#define LIST_BL_BUG_ON(x)
struct hlist_bl_head ;
struct hlist_bl_node ;
#define INIT_HLIST_BL_HEAD(ptr) \
((ptr)->first = NULL)
static inline void INIT_HLIST_BL_NODE(struct hlist_bl_node *h)
#define hlist_bl_entry(ptr, type, member) container_of(ptr,type,member)
static inline int hlist_bl_unhashed(const struct hlist_bl_node *h)
static inline struct hlist_bl_node *hlist_bl_first(struct hlist_bl_head *h)
static inline void hlist_bl_set_first(struct hlist_bl_head *h,
struct hlist_bl_node *n)
static inline int hlist_bl_empty(const struct hlist_bl_head *h)
static inline void hlist_bl_add_head(struct hlist_bl_node *n,
struct hlist_bl_head *h)
static inline void __hlist_bl_del(struct hlist_bl_node *n)
static inline void hlist_bl_del(struct hlist_bl_node *n)
static inline void hlist_bl_del_init(struct hlist_bl_node *n)
static inline void hlist_bl_lock(struct hlist_bl_head *b)
static inline void hlist_bl_unlock(struct hlist_bl_head *b)
#define hlist_bl_for_each_entry(tpos, pos, head, member)		\
for (pos = hlist_bl_first(head);				\
pos &&							\
(); \
pos = pos->next)
#define hlist_bl_for_each_entry_safe(tpos, pos, n, head, member)	 \
for (pos = hlist_bl_first(head);				 \
pos && () && 				 \
(); \
pos = n)
