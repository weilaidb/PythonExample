#define _TIPC_ADDR_H
#define TIPC_ZONE_MASK		0xff000000u
#define TIPC_CLUSTER_MASK	0xfffff000u
static inline u32 tipc_zone_mask(u32 addr)
static inline u32 tipc_cluster_mask(u32 addr)
static inline int in_own_cluster(u32 addr)
static inline u32 addr_domain(u32 sc)
int tipc_addr_domain_valid(u32);
int tipc_addr_node_valid(u32 addr);
int tipc_in_scope(u32 domain, u32 addr);
int tipc_addr_scope(u32 domain);
char *tipc_addr_string_fill(char *string, u32 addr);
