#define _LINUX_LIST_H
#define LIST_HEAD_INIT(name)
#define LIST_HEAD(name) \
struct list_head name = LIST_HEAD_INIT(name)
static inline void INIT_LIST_HEAD(struct list_head *list)
static inline void __list_add(struct list_head *new,
struct list_head *prev,
struct list_head *next)
extern void __list_add(struct list_head *new,
struct list_head *prev,
struct list_head *next);
static inline void list_add(struct list_head *new, struct list_head *head)
static inline void list_add_tail(struct list_head *new, struct list_head *head)
static inline void __list_del(struct list_head * prev, struct list_head * next)
static inline void __list_del_entry(struct list_head *entry)
static inline void list_del(struct list_head *entry)
extern void __list_del_entry(struct list_head *entry);
extern void list_del(struct list_head *entry);
static inline void list_replace(struct list_head *old,
struct list_head *new)
static inline void list_replace_init(struct list_head *old,
struct list_head *new)
static inline void list_del_init(struct list_head *entry)
static inline void list_move(struct list_head *list, struct list_head *head)
static inline void list_move_tail(struct list_head *list,
struct list_head *head)
static inline int list_is_last(const struct list_head *list,
const struct list_head *head)
static inline int list_empty(const struct list_head *head)
static inline int list_empty_careful(const struct list_head *head)
static inline void list_rotate_left(struct list_head *head)
static inline int list_is_singular(const struct list_head *head)
static inline void __list_cut_position(struct list_head *list,
struct list_head *head, struct list_head *entry)
static inline void list_cut_position(struct list_head *list,
struct list_head *head, struct list_head *entry)
static inline void __list_splice(const struct list_head *list,
struct list_head *prev,
struct list_head *next)
static inline void list_splice(const struct list_head *list,
struct list_head *head)
static inline void list_splice_tail(struct list_head *list,
struct list_head *head)
static inline void list_splice_init(struct list_head *list,
struct list_head *head)
static inline void list_splice_tail_init(struct list_head *list,
struct list_head *head)
#define list_entry(ptr, type, member) \
container_of(ptr, type, member)
#define list_first_entry(ptr, type, member) \
list_entry((ptr)->next, type, member)
#define list_for_each(pos, head) \
for (pos = (head)->next; pos != (head); pos = pos->next)
#define __list_for_each(pos, head) \
for (pos = (head)->next; pos != (head); pos = pos->next)
#define list_for_each_prev(pos, head) \
for (pos = (head)->prev; pos != (head); pos = pos->prev)
#define list_for_each_safe(pos, n, head) \
for (pos = (head)->next, n = pos->next; pos != (head); \
pos = n, n = pos->next)
#define list_for_each_prev_safe(pos, n, head) \
for (pos = (head)->prev, n = pos->prev; \
pos != (head); \
pos = n, n = pos->prev)
#define list_for_each_entry(pos, head, member)				\
for (pos = list_entry((head)->next, typeof(*pos), member);	\
&pos->member != (head); 	\
pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_reverse(pos, head, member)			\
for (pos = list_entry((head)->prev, typeof(*pos), member);	\
&pos->member != (head); 	\
pos = list_entry(pos->member.prev, typeof(*pos), member))
#define list_prepare_entry(pos, head, member) \
((pos) ? : list_entry(head, typeof(*pos), member))
#define list_for_each_entry_continue(pos, head, member) 		\
for (pos = list_entry(pos->member.next, typeof(*pos), member);	\
&pos->member != (head);	\
pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_continue_reverse(pos, head, member)		\
for (pos = list_entry(pos->member.prev, typeof(*pos), member);	\
&pos->member != (head);	\
pos = list_entry(pos->member.prev, typeof(*pos), member))
#define list_for_each_entry_from(pos, head, member) 			\
for (; &pos->member != (head);	\
pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_safe(pos, n, head, member)			\
for (pos = list_entry((head)->next, typeof(*pos), member),	\
n = list_entry(pos->member.next, typeof(*pos), member);	\
&pos->member != (head); 					\
pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_continue(pos, n, head, member) 		\
for (pos = list_entry(pos->member.next, typeof(*pos), member), 		\
n = list_entry(pos->member.next, typeof(*pos), member);		\
&pos->member != (head);						\
pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_from(pos, n, head, member) 			\
for (n = list_entry(pos->member.next, typeof(*pos), member);		\
&pos->member != (head);						\
pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_reverse(pos, n, head, member)		\
for (pos = list_entry((head)->prev, typeof(*pos), member),	\
n = list_entry(pos->member.prev, typeof(*pos), member);	\
&pos->member != (head); 					\
pos = n, n = list_entry(n->member.prev, typeof(*n), member))
#define list_safe_reset_next(pos, n, member)				\
n = list_entry(pos->member.next, typeof(*pos), member)
#define HLIST_HEAD_INIT
#define HLIST_HEAD(name) struct hlist_head name =
#define INIT_HLIST_HEAD(ptr) ((ptr)->first = NULL)
static inline void INIT_HLIST_NODE(struct hlist_node *h)
static inline int hlist_unhashed(const struct hlist_node *h)
static inline int hlist_empty(const struct hlist_head *h)
static inline void __hlist_del(struct hlist_node *n)
static inline void hlist_del(struct hlist_node *n)
static inline void hlist_del_init(struct hlist_node *n)
static inline void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
static inline void hlist_add_before(struct hlist_node *n,
struct hlist_node *next)
static inline void hlist_add_after(struct hlist_node *n,
struct hlist_node *next)
static inline void hlist_add_fake(struct hlist_node *n)
static inline void hlist_move_list(struct hlist_head *old,
struct hlist_head *new)
#define hlist_entry(ptr, type, member) container_of(ptr,type,member)
#define hlist_for_each(pos, head) \
for (pos = (head)->first; pos ; pos = pos->next)
#define hlist_for_each_safe(pos, n, head) \
for (pos = (head)->first; pos && (); \
pos = n)
#define hlist_for_each_entry(tpos, pos, head, member)			 \
for (pos = (head)->first;					 \
pos &&							 \
(); \
pos = pos->next)
#define hlist_for_each_entry_continue(tpos, pos, member)		 \
for (pos = (pos)->next;						 \
pos &&							 \
(); \
pos = pos->next)
#define hlist_for_each_entry_from(tpos, pos, member)			 \
for (; pos &&							 \
(); \
pos = pos->next)
#define hlist_for_each_entry_safe(tpos, pos, n, head, member) 		 \
for (pos = (head)->first;					 \
pos && () && 				 \
(); \
pos = n)
