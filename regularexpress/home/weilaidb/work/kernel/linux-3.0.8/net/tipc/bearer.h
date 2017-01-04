#define _TIPC_BEARER_H
#define MAX_BEARERS 8
#define MAX_MEDIA 4
#define TIPC_MEDIA_TYPE_ETH	1
struct tipc_media_addr ;
struct tipc_bearer;
struct media ;
struct tipc_bearer ;
struct bearer_name ;
struct link;
extern struct tipc_bearer tipc_bearers[];
int tipc_register_media(u32 media_type,
char *media_name, int (*enable)(struct tipc_bearer *),
void (*disable)(struct tipc_bearer *),
int (*send_msg)(struct sk_buff *,
struct tipc_bearer *, struct tipc_media_addr *),
char *(*addr2str)(struct tipc_media_addr *a,
char *str_buf, int str_size),
struct tipc_media_addr *bcast_addr, const u32 bearer_priority,
const u32 link_tolerance,
const u32 send_window_limit);
void tipc_recv_msg(struct sk_buff *buf, struct tipc_bearer *tb_ptr);
int  tipc_block_bearer(const char *name);
void tipc_continue(struct tipc_bearer *tb_ptr);
int tipc_enable_bearer(const char *bearer_name, u32 disc_domain, u32 priority);
int tipc_disable_bearer(const char *name);
int  tipc_eth_media_start(void);
void tipc_eth_media_stop(void);
void tipc_media_addr_printf(struct print_buf *pb, struct tipc_media_addr *a);
struct sk_buff *tipc_media_get_names(void);
struct sk_buff *tipc_bearer_get_names(void);
void tipc_bearer_add_dest(struct tipc_bearer *b_ptr, u32 dest);
void tipc_bearer_remove_dest(struct tipc_bearer *b_ptr, u32 dest);
void tipc_bearer_schedule(struct tipc_bearer *b_ptr, struct link *l_ptr);
struct tipc_bearer *tipc_bearer_find_interface(const char *if_name);
int tipc_bearer_resolve_congestion(struct tipc_bearer *b_ptr, struct link *l_ptr);
int tipc_bearer_congested(struct tipc_bearer *b_ptr, struct link *l_ptr);
void tipc_bearer_stop(void);
void tipc_bearer_lock_push(struct tipc_bearer *b_ptr);
static inline int tipc_bearer_send(struct tipc_bearer *b_ptr,
struct sk_buff *buf,
struct tipc_media_addr *dest)
