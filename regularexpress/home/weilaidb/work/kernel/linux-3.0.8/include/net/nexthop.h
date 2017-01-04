#define __NET_NEXTHOP_H
static inline int rtnh_ok(const struct rtnexthop *rtnh, int remaining)
static inline struct rtnexthop *rtnh_next(const struct rtnexthop *rtnh,
int *remaining)
static inline struct nlattr *rtnh_attrs(const struct rtnexthop *rtnh)
static inline int rtnh_attrlen(const struct rtnexthop *rtnh)
