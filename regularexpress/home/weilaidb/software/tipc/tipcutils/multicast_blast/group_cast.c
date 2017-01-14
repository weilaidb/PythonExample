#define INTV_SZ 2000
#define MAX_PEERS 4096
#define die(fmt, arg...) do			\
while(0)
static struct tipc_addr self = ;
static struct tipc_addr dst = ;
#define BUF_LEN 66000
static char buf[BUF_LEN];
static char self_str[30];
unsigned int member_cnt = 0;
unsigned int snt_bc = 0;
unsigned int snt_mc = 0;
unsigned int snt_ac = 0;
unsigned int snt_uc = 0;
unsigned int rcv_bc = 0;
unsigned int rcv_mc = 0;
unsigned int rcv_ac = 0;
unsigned int rcv_uc = 0;
enum ;
static struct hdr  *hdr = (void*)buf;
static unsigned long long elapsedmsec(struct timeval *from, struct timeval *to)
void discover_member(int sd)
void pr_stats(int rcv_cnt)
int timeout(int mtyp)
void group_transceive(struct pollfd *pfd, int mtyp, bool ucast_reply, int len)
int syntax(char *argv[])
int main(int argc, char *argv[], char *envp[])
