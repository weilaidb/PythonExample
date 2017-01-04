#define _TIPC_NODE_H
struct tipc_node ;
#define NODE_HTABLE_SIZE 512
extern struct list_head tipc_node_list;
static inline unsigned int tipc_hashfn(u32 addr)
extern u32 tipc_own_tag;
struct tipc_node *tipc_node_find(u32 addr);
struct tipc_node *tipc_node_create(u32 addr);
void tipc_node_delete(struct tipc_node *n_ptr);
void tipc_node_attach_link(struct tipc_node *n_ptr, struct link *l_ptr);
void tipc_node_detach_link(struct tipc_node *n_ptr, struct link *l_ptr);
void tipc_node_link_down(struct tipc_node *n_ptr, struct link *l_ptr);
void tipc_node_link_up(struct tipc_node *n_ptr, struct link *l_ptr);
int tipc_node_active_links(struct tipc_node *n_ptr);
int tipc_node_redundant_links(struct tipc_node *n_ptr);
int tipc_node_is_up(struct tipc_node *n_ptr);
struct sk_buff *tipc_node_get_links(const void *req_tlv_area, int req_tlv_space);
struct sk_buff *tipc_node_get_nodes(const void *req_tlv_area, int req_tlv_space);
static inline void tipc_node_lock(struct tipc_node *n_ptr)
static inline void tipc_node_unlock(struct tipc_node *n_ptr)
