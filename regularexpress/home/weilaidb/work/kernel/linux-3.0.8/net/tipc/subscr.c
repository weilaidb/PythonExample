struct subscriber ;
struct top_srv ;
static struct top_srv topsrv;
static u32 htohl(u32 in, int swap)
static void subscr_send_event(struct subscription *sub,
u32 found_lower,
u32 found_upper,
u32 event,
u32 port_ref,
u32 node)
int tipc_subscr_overlap(struct subscription *sub,
u32 found_lower,
u32 found_upper)
void tipc_subscr_report_overlap(struct subscription *sub,
u32 found_lower,
u32 found_upper,
u32 event,
u32 port_ref,
u32 node,
int must)
static void subscr_timeout(struct subscription *sub)
static void subscr_del(struct subscription *sub)
static void subscr_terminate(struct subscriber *subscriber)
static void subscr_cancel(struct tipc_subscr *s,
struct subscriber *subscriber)
static struct subscription *subscr_subscribe(struct tipc_subscr *s,
struct subscriber *subscriber)
static void subscr_conn_shutdown_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
unsigned char const *data,
unsigned int size,
int reason)
static void subscr_conn_msg_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
const unchar *data,
u32 size)
static void subscr_named_msg_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
const unchar *data,
u32 size,
u32 importance,
struct tipc_portid const *orig,
struct tipc_name_seq const *dest)
int tipc_subscr_start(void)
void tipc_subscr_stop(void)
