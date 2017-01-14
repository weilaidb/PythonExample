#define __COMMON_TIPC
#define MAX_DELAY       300000
#define MASTER_NAME     16666
#define SRV_CTRL_NAME   17777
#define SRV_LSTN_NAME   18888
#define CLNT_CTRL_NAME  19999
#define TERMINATE 1
#define DEFAULT_CLIENTS 1
#define DEBUG 0
#define dprintf(fmt, arg...)  do  while(0)
#define die(fmt, arg...)  \
do  while(0)
static int wait_for_msg(int sd);
struct srv_cmd ;
static const struct sockaddr_tipc master_srv_addr = ;
static const struct sockaddr_tipc srv_ctrl_addr = ;
static const struct sockaddr_tipc srv_lstn_addr = ;
static int master_sd;
struct srv_info ;
#define SRV_INFO         0
#define SRV_MSGLEN_ACK   1
#define SRV_FINISHED     2
struct srv_to_master_cmd ;
#define TIPC_CONN         0
#define TCP_CONN          1
#define RCV_MSG_LEN       2
#define RESTART           3
struct master_srv_cmd ;
static void sig_alarm(int signo)
__u32 wait_for_name(__u32 name_type, __u32 name_instance, int wait)
static int wait_for_msg(int sd)
static void get_ip_list(struct srv_info *sinfo, char *ifname)
static uint own_node(void)
#if DEBUG
static void print_peer_name(int s)
static void print_sock_name(int s)
