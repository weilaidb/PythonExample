#define SERVER_TYPE  18888
#define SERVER_INST  17
#define BUF_SZ 40
static u32 user_ref = 0;
static void conn_shutdown_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
unsigned char const *data,
unsigned int size,
int reason)
static void conn_msg_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
unsigned char const *data,
unsigned int size)
static void named_msg_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
unsigned char const *data,
unsigned int size,
unsigned int importance,
struct tipc_portid const *orig,
struct tipc_name_seq const *dest)
static int __init tipc_conn_init(void)
static void __exit tipc_conn_exit(void)
module_init(tipc_conn_init);
module_exit(tipc_conn_exit);
MODULE_LICENSE();
MODULE_AUTHOR();
MODULE_DESCRIPTION();
MODULE_VERSION();
