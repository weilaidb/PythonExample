static void node_lost_contact(struct tipc_node *n_ptr);
static void node_established_contact(struct tipc_node *n_ptr);
static DEFINE_SPINLOCK(node_create_lock);
static struct hlist_head node_htable[NODE_HTABLE_SIZE];
LIST_HEAD(tipc_node_list);
static u32 tipc_num_nodes;
static atomic_t tipc_num_links = ATOMIC_INIT(0);
u32 tipc_own_tag;
struct tipc_node *tipc_node_find(u32 addr)
struct tipc_node *tipc_node_create(u32 addr)
void tipc_node_delete(struct tipc_node *n_ptr)
void tipc_node_link_up(struct tipc_node *n_ptr, struct link *l_ptr)
static void node_select_active_links(struct tipc_node *n_ptr)
void tipc_node_link_down(struct tipc_node *n_ptr, struct link *l_ptr)
int tipc_node_active_links(struct tipc_node *n_ptr)
int tipc_node_redundant_links(struct tipc_node *n_ptr)
int tipc_node_is_up(struct tipc_node *n_ptr)
void tipc_node_attach_link(struct tipc_node *n_ptr, struct link *l_ptr)
void tipc_node_detach_link(struct tipc_node *n_ptr, struct link *l_ptr)
static void node_established_contact(struct tipc_node *n_ptr)
static void node_cleanup_finished(unsigned long node_addr)
static void node_lost_contact(struct tipc_node *n_ptr)
struct sk_buff *tipc_node_get_nodes(const void *req_tlv_area, int req_tlv_space)
struct sk_buff *tipc_node_get_links(const void *req_tlv_area, int req_tlv_space)
