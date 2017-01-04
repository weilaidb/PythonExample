#define _TIPC_DISCOVER_H
struct link_req;
int tipc_disc_create(struct tipc_bearer *b_ptr, struct tipc_media_addr *dest,
u32 dest_domain);
void tipc_disc_delete(struct link_req *req);
void tipc_disc_add_dest(struct link_req *req);
void tipc_disc_remove_dest(struct link_req *req);
void tipc_disc_recv_msg(struct sk_buff *buf, struct tipc_bearer *b_ptr);
