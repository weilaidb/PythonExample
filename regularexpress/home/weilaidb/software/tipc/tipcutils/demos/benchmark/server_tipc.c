#define SRV_TIMEOUT 30
static unsigned char *buf = NULL;
static int wait_for_connection(int listener_sd);
static void echo_messages(int peer_sd, int master_sd, int srv_id);
static __u32 own_node_addr;
static void srv_to_master(uint cmd, struct srv_info *sinfo)
static void srv_from_master(uint *cmd, uint* msglen, uint *msgcnt, uint *echo)
int main(int argc, char *argv[], char *dummy[])
static int wait_for_connection(int lstn_sd)
static void echo_messages(int peer_sd, int master_sd, int srv_id)
