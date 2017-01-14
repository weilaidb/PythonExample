#define RDM_SRV_TYPE     18888
#define STREAM_SRV_TYPE  17777
#define SEQPKT_SRV_TYPE  16666
#define SRV_INST  17
#define BUF_SZ 40
#define die(fmt, arg...) do                     \
while(0)
static void rdm_service_demo(int sd, bool up, tipc_domain_t *srv_node)
static void rdm_reject_demo(int sd, bool up, tipc_domain_t srv_node)
static void stream_service_demo(int sd, bool up)
static void seqpacket_service_demo(int sd, bool up)
int main(int argc, char *argv[], char *dummy[])
