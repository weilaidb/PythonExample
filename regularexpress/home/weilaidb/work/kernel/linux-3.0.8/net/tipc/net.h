#define _TIPC_NET_H
extern rwlock_t tipc_net_lock;
void tipc_net_route_msg(struct sk_buff *buf);
int tipc_net_start(u32 addr);
void tipc_net_stop(void);
