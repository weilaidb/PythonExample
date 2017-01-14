#define TERMINATE 1
#define DEFAULT_LAT_MSGS  80000
#define DEFAULT_THRU_MSGS 640000
#define DEFAULT_BURST     16
#define DEFAULT_MSGLEN    64
static const struct sockaddr_tipc clnt_ctrl_addr = ;
static const struct sockaddr_tipc master_clnt_addr = ;
static int master_clnt_sd;
static int master_srv_sd;
static uint client_id;
static unsigned char *buf = NULL;
static int select_ip(struct srv_info *sinfo, char *name);
static void stream_messages(int peer_sd, int clnt_id,
int msgcnt, int msglen,
int bounce);
#define CLNT_EXEC         3
#define CLNT_TERM         4
struct master_client_cmd ;
static void master_to_client(uint cmd, uint msglen, uint msgcnt, uint bounce)
static void client_from_master(uint *cmd, uint *msglen, uint *msgcnt, uint *bounce)
#define CLNT_READY    1
#define CLNT_FINISHED 2
struct client_master_cmd ;
static void client_to_master(uint cmd)
static void master_from_client(uint *cmd)
static void master_to_srv(uint cmd, uint msglen, uint msgcnt, uint echo)
static void master_from_srv(uint *cmd, struct srv_info *sinfo, __u32 *tipc_addr)
static void usage(char *app)
static unsigned long long elapsedusec(struct timeval *from)
static void print_throughput_header(void)
static void print_latency_header(void)
static const char *impstr[4] = ;
static void client_create(unsigned int clnt_id, ushort tcp_port, int tcp_addr)
static void stream_messages(int peer_sd, int clnt_id, int msgcnt,
int msglen, int bounce)
int main(int argc, char *argv[], char *dummy[])
static int select_ip(struct srv_info *sinfo, char* ifname)
