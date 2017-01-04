#define _SS_MLS_TYPES_H_
struct mls_level ;
struct mls_range ;
static inline int mls_level_eq(struct mls_level *l1, struct mls_level *l2)
static inline int mls_level_dom(struct mls_level *l1, struct mls_level *l2)
#define mls_level_incomp(l1, l2) \
(!mls_level_dom((l1), (l2)) && !mls_level_dom((l2), (l1)))
#define mls_level_between(l1, l2, l3) \
(mls_level_dom((l1), (l2)) && mls_level_dom((l3), (l1)))
#define mls_range_contains(r1, r2) \
(mls_level_dom(&(r2).level[0], &(r1).level[0]) && \
mls_level_dom(&(r1).level[1], &(r2).level[1]))
