#define _LINUX_PLIST_H_
struct plist_head ;
struct plist_node ;
# define PLIST_HEAD_LOCK_INIT(_lock)		.spinlock = _lock
# define PLIST_HEAD_LOCK_INIT_RAW(_lock)	.rawlock = _lock
# define PLIST_HEAD_LOCK_INIT(_lock)
# define PLIST_HEAD_LOCK_INIT_RAW(_lock)
#define _PLIST_HEAD_INIT(head)				\
.node_list = LIST_HEAD_INIT((head).node_list)
#define PLIST_HEAD_INIT(head, _lock)			\
#define PLIST_HEAD_INIT_RAW(head, _lock)		\
#define PLIST_NODE_INIT(node, __prio)			\
static inline void
plist_head_init(struct plist_head *head, spinlock_t *lock)
static inline void
plist_head_init_raw(struct plist_head *head, raw_spinlock_t *lock)
static inline void plist_node_init(struct plist_node *node, int prio)
extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
#define plist_for_each(pos, head)	\
list_for_each_entry(pos, &(head)->node_list, node_list)
#define plist_for_each_safe(pos, n, head)	\
list_for_each_entry_safe(pos, n, &(head)->node_list, node_list)
#define plist_for_each_entry(pos, head, mem)	\
list_for_each_entry(pos, &(head)->node_list, mem.node_list)
#define plist_for_each_entry_safe(pos, n, head, m)	\
list_for_each_entry_safe(pos, n, &(head)->node_list, m.node_list)
static inline int plist_head_empty(const struct plist_head *head)
static inline int plist_node_empty(const struct plist_node *node)
# define plist_first_entry(head, type, member)	\
()
# define plist_first_entry(head, type, member)	\
container_of(plist_first(head), type, member)
# define plist_last_entry(head, type, member)	\
()
# define plist_last_entry(head, type, member)	\
container_of(plist_last(head), type, member)
static inline struct plist_node *plist_first(const struct plist_head *head)
static inline struct plist_node *plist_last(const struct plist_head *head)
