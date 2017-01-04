#define _LINUX_TIMERQUEUE_H
struct timerqueue_node ;
struct timerqueue_head ;
extern void timerqueue_add(struct timerqueue_head *head,
struct timerqueue_node *node);
extern void timerqueue_del(struct timerqueue_head *head,
struct timerqueue_node *node);
extern struct timerqueue_node *timerqueue_iterate_next(
struct timerqueue_node *node);
static inline
struct timerqueue_node *timerqueue_getnext(struct timerqueue_head *head)
static inline void timerqueue_init(struct timerqueue_node *node)
static inline void timerqueue_init_head(struct timerqueue_head *head)
