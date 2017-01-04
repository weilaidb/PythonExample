#define _XT_RATEEST_H
struct xt_rateest ;
extern struct xt_rateest *xt_rateest_lookup(const char *name);
extern void xt_rateest_put(struct xt_rateest *est);
