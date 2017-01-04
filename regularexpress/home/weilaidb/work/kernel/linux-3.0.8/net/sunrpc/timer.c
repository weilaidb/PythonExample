#define RPC_RTO_MAX (60*HZ)
#define RPC_RTO_INIT (HZ/5)
#define RPC_RTO_MIN (HZ/10)
void rpc_init_rtt(struct rpc_rtt *rt, unsigned long timeo)
EXPORT_SYMBOL_GPL(rpc_init_rtt);
void rpc_update_rtt(struct rpc_rtt *rt, unsigned timer, long m)
EXPORT_SYMBOL_GPL(rpc_update_rtt);
unsigned long rpc_calc_rto(struct rpc_rtt *rt, unsigned timer)
EXPORT_SYMBOL_GPL(rpc_calc_rto);
