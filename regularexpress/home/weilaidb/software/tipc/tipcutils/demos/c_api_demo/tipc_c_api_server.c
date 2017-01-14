#define RDM_SRV_TYPE     18888
#define STREAM_SRV_TYPE  17777
#define SEQPKT_SRV_TYPE  16666
#define BUF_SZ 40
#define die(fmt, arg...) do             \
while(0)
static int bind_service(int type, tipc_domain_t scope, int sktype, char *sk_str)
static void recv_rdm_msg(int sd)
static int recv_stream_setup(int sd)
static int recv_seqpacket_setup(int sd)
int main(int argc, char *argv[], char *dummy[])
