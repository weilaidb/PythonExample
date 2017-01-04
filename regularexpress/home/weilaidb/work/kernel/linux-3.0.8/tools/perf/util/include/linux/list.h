#define PERF_LIST_H
static inline void list_del_range(struct list_head *begin,
struct list_head *end)
#define list_for_each_from(pos, head) \
for (; pos != (head); pos = pos->next)
