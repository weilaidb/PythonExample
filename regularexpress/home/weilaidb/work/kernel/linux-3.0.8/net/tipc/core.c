#define CONFIG_TIPC_PORTS 8191
#define CONFIG_TIPC_LOG 0
int tipc_mode = TIPC_NOT_RUNNING;
int tipc_random;
const char tipc_alphabet[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_.";
u32 tipc_own_addr;
int tipc_max_ports;
int tipc_max_subscriptions;
int tipc_max_publications;
int tipc_net_id;
int tipc_remote_management;
struct sk_buff *tipc_buf_acquire(u32 size)
static void tipc_core_stop_net(void)
int tipc_core_start_net(unsigned long addr)
static void tipc_core_stop(void)
static int tipc_core_start(void)
static int __init tipc_init(void)
static void __exit tipc_exit(void)
module_init(tipc_init);
module_exit(tipc_exit);
MODULE_DESCRIPTION("TIPC: Transparent Inter Process Communication");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(TIPC_MOD_VER);
