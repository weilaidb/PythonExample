#define MAX_DELAY 300000
#define MCLIENT_NAME 16666
#define SERVER_NAME  17777
#define CLIENT_NAME  18888
#define TERMINATE 1
#define DEFAULT_CLIENTS 8
#define DEBUG 0
#define dprintf(fmt, arg...)  do  while(0)
unsigned char buf[TIPC_MAX_USER_MSG_SIZE] = ;
struct client_cmd ;
__u32 wait_for_server(__u32 name_type, __u32 name_instance, int wait)
int wait_for_msg(int sd)
static unsigned long long elapsedmillis(struct timeval *from)
void clientmain(unsigned int client_id)
static void sig_alarm(int signo)
static uint own_node(int sd)
static void usage(char *app)
int main(int argc, char *argv[], char *dummy[])
