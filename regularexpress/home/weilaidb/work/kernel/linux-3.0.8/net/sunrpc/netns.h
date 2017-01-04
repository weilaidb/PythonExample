#define __SUNRPC_NETNS_H__
struct cache_detail;
struct sunrpc_net ;
extern int sunrpc_net_id;
int ip_map_cache_create(struct net *);
void ip_map_cache_destroy(struct net *);
