DEFINE_RWLOCK(tipc_net_lock);
static void net_route_named_msg(struct sk_buff *buf)
void tipc_net_route_msg(struct sk_buff *buf)
int tipc_net_start(u32 addr)
void tipc_net_stop(void)
