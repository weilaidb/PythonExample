#define SERVER_TYPE  18888
#define SERVER_INST  17
static u32 user_ref = 0;
static void named_msg_event(void *usr_handle,
u32 port_ref,
struct sk_buff **buf,
unsigned char const *data,
unsigned int size,
unsigned int importance,
struct tipc_portid const *orig,
struct tipc_name_seq const *dest)
static int __init tipc_hello_init(void)
static void __exit tipc_hello_exit(void)
module_init(tipc_hello_init);
module_exit(tipc_hello_exit);
MODULE_LICENSE();
MODULE_AUTHOR();
MODULE_DESCRIPTION();
MODULE_VERSION();
