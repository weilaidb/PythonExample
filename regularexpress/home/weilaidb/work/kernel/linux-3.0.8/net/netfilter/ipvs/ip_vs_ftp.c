#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define SERVER_STRING "227 Entering Passive Mode ("
#define CLIENT_STRING "PORT "
static unsigned short ports[IP_VS_APP_MAX_PORTS] = ;
module_param_array(ports, ushort, NULL, 0);
MODULE_PARM_DESC(ports, "Ports to monitor for FTP control commands");
static int ip_vs_ftp_pasv;
static int
ip_vs_ftp_init_conn(struct ip_vs_app *app, struct ip_vs_conn *cp)
static int
ip_vs_ftp_done_conn(struct ip_vs_app *app, struct ip_vs_conn *cp)
static int ip_vs_ftp_get_addrport(char *data, char *data_limit,
const char *pattern, size_t plen, char term,
__be32 *addr, __be16 *port,
char **start, char **end)
static int ip_vs_ftp_out(struct ip_vs_app *app, struct ip_vs_conn *cp,
struct sk_buff *skb, int *diff)
static int ip_vs_ftp_in(struct ip_vs_app *app, struct ip_vs_conn *cp,
struct sk_buff *skb, int *diff)
static struct ip_vs_app ip_vs_ftp = ;
static int __net_init __ip_vs_ftp_init(struct net *net)
static void __ip_vs_ftp_exit(struct net *net)
static struct pernet_operations ip_vs_ftp_ops = ;
int __init ip_vs_ftp_init(void)
static void __exit ip_vs_ftp_exit(void)
module_init(ip_vs_ftp_init);
module_exit(ip_vs_ftp_exit);
MODULE_LICENSE("GPL");
