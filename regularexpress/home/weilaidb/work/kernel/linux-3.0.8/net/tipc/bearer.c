#define MAX_ADDR_STR 32
static struct media media_list[MAX_MEDIA];
static u32 media_count;
struct tipc_bearer tipc_bearers[MAX_BEARERS];
static void bearer_disable(struct tipc_bearer *b_ptr);
static int media_name_valid(const char *name)
static struct media *media_find(const char *name)
int  tipc_register_media(u32 media_type,
char *name,
int (*enable)(struct tipc_bearer *),
void (*disable)(struct tipc_bearer *),
int (*send_msg)(struct sk_buff *,
struct tipc_bearer *,
struct tipc_media_addr *),
char *(*addr2str)(struct tipc_media_addr *a,
char *str_buf, int str_size),
struct tipc_media_addr *bcast_addr,
const u32 bearer_priority,
const u32 link_tolerance,
const u32 send_window_limit)
void tipc_media_addr_printf(struct print_buf *pb, struct tipc_media_addr *a)
struct sk_buff *tipc_media_get_names(void)
static int bearer_name_validate(const char *name,
struct bearer_name *name_parts)
static struct tipc_bearer *bearer_find(const char *name)
struct tipc_bearer *tipc_bearer_find_interface(const char *if_name)
struct sk_buff *tipc_bearer_get_names(void)
void tipc_bearer_add_dest(struct tipc_bearer *b_ptr, u32 dest)
void tipc_bearer_remove_dest(struct tipc_bearer *b_ptr, u32 dest)
static int bearer_push(struct tipc_bearer *b_ptr)
void tipc_bearer_lock_push(struct tipc_bearer *b_ptr)
void tipc_continue(struct tipc_bearer *b_ptr)
static void tipc_bearer_schedule_unlocked(struct tipc_bearer *b_ptr, struct link *l_ptr)
void tipc_bearer_schedule(struct tipc_bearer *b_ptr, struct link *l_ptr)
int tipc_bearer_resolve_congestion(struct tipc_bearer *b_ptr, struct link *l_ptr)
int tipc_bearer_congested(struct tipc_bearer *b_ptr, struct link *l_ptr)
int tipc_enable_bearer(const char *name, u32 disc_domain, u32 priority)
int tipc_block_bearer(const char *name)
static void bearer_disable(struct tipc_bearer *b_ptr)
int tipc_disable_bearer(const char *name)
void tipc_bearer_stop(void)
