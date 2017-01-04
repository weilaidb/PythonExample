#define _LINUX_XLIST_H
struct xlist_head ;
static inline void INIT_XLIST_HEAD(struct xlist_head *list)
static inline int xlist_empty(struct xlist_head *head)
static inline void xlist_add(struct xlist_head *new, struct xlist_head *tail,
struct xlist_head *head)
static inline struct xlist_head *xlist_del_head(struct xlist_head *head)
static inline struct xlist_head *xlist_del_head_fast(struct xlist_head *head)
static inline void xlist_splice(struct xlist_head *list,
struct xlist_head *head)
