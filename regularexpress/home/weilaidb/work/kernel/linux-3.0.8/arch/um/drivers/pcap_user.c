#define PCAP_FD(p) (*(int *)(p))
static int pcap_user_init(void *data, void *dev)
static int pcap_open(void *data)
static void pcap_remove(void *data)
struct pcap_handler_data ;
static void handler(u_char *data, const struct pcap_pkthdr *header,
const u_char *packet)
int pcap_user_read(int fd, void *buffer, int len, struct pcap_data *pri)
const struct net_user_info pcap_user_info = ;
