#define _TIPC_NODE_SUBSCR_H
typedef void (*net_ev_handler) (void *usr_handle);
struct tipc_node_subscr ;
void tipc_nodesub_subscribe(struct tipc_node_subscr *node_sub, u32 addr,
void *usr_handle, net_ev_handler handle_down);
void tipc_nodesub_unsubscribe(struct tipc_node_subscr *node_sub);
void tipc_nodesub_notify(struct tipc_node *node);
