#define TIPC_LINK_REQ_INIT	125
#define TIPC_LINK_REQ_FAST	1000
#define TIPC_LINK_REQ_SLOW	60000
#define TIPC_LINK_REQ_INACTIVE	0xffffffff
struct link_req ;
static struct sk_buff *tipc_disc_init_msg(u32 type,
u32 dest_domain,
struct tipc_bearer *b_ptr)
static void disc_dupl_alert(struct tipc_bearer *b_ptr, u32 node_addr,
struct tipc_media_addr *media_addr)
void tipc_disc_recv_msg(struct sk_buff *buf, struct tipc_bearer *b_ptr)
static void disc_update(struct link_req *req)
void tipc_disc_add_dest(struct link_req *req)
void tipc_disc_remove_dest(struct link_req *req)
static void disc_send_msg(struct link_req *req)
static void disc_timeout(struct link_req *req)
int tipc_disc_create(struct tipc_bearer *b_ptr,
struct tipc_media_addr *dest, u32 dest_domain)
void tipc_disc_delete(struct link_req *req)
