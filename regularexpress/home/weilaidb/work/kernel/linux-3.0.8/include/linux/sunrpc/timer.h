#define _LINUX_SUNRPC_TIMER_H
struct rpc_rtt ;
extern void rpc_init_rtt(struct rpc_rtt *rt, unsigned long timeo);
extern void rpc_update_rtt(struct rpc_rtt *rt, unsigned timer, long m);
extern unsigned long rpc_calc_rto(struct rpc_rtt *rt, unsigned timer);
static inline void rpc_set_timeo(struct rpc_rtt *rt, int timer, int ntimeo)
static inline int rpc_ntimeo(struct rpc_rtt *rt, int timer)
