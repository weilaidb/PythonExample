#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define IP_VS_SYNC_GROUP 0xe0000051
#define IP_VS_SYNC_PORT  8848
#define SYNC_PROTO_VER  1
struct ip_vs_sync_conn_v0 ;
struct ip_vs_sync_conn_options ;
struct ip_vs_sync_v4 ;
struct ip_vs_sync_v6 ;
union ip_vs_sync_conn ;
#define STYPE_INET6		0
#define STYPE_F_INET6		(1 << STYPE_INET6)
#define SVER_SHIFT		12
#define SVER_MASK		0x0fff
#define IPVS_OPT_SEQ_DATA	1
#define IPVS_OPT_PE_DATA	2
#define IPVS_OPT_PE_NAME	3
#define IPVS_OPT_PARAM		7
#define IPVS_OPT_F_SEQ_DATA	(1 << (IPVS_OPT_SEQ_DATA-1))
#define IPVS_OPT_F_PE_DATA	(1 << (IPVS_OPT_PE_DATA-1))
#define IPVS_OPT_F_PE_NAME	(1 << (IPVS_OPT_PE_NAME-1))
#define IPVS_OPT_F_PARAM	(1 << (IPVS_OPT_PARAM-1))
struct ip_vs_sync_thread_data ;
#define SIMPLE_CONN_SIZE  (sizeof(struct ip_vs_sync_conn_v0))
#define FULL_CONN_SIZE  \
(sizeof(struct ip_vs_sync_conn_v0) + sizeof(struct ip_vs_sync_conn_options))
#define SYNC_MESG_HEADER_LEN	4
#define MAX_CONNS_PER_SYNCBUFF	255
struct ip_vs_sync_mesg_v0 ;
struct ip_vs_sync_mesg ;
struct ip_vs_sync_buff ;
static struct sockaddr_in mcast_addr = ;
static void ntoh_seq(struct ip_vs_seq *no, struct ip_vs_seq *ho)
static void hton_seq(struct ip_vs_seq *ho, struct ip_vs_seq *no)
static inline struct ip_vs_sync_buff *sb_dequeue(struct netns_ipvs *ipvs)
static inline struct ip_vs_sync_buff *
ip_vs_sync_buff_create(struct netns_ipvs *ipvs)
static inline void ip_vs_sync_buff_release(struct ip_vs_sync_buff *sb)
static inline void sb_queue_tail(struct netns_ipvs *ipvs)
static inline struct ip_vs_sync_buff *
get_curr_sync_buff(struct netns_ipvs *ipvs, unsigned long time)
void ip_vs_sync_switch_mode(struct net *net, int mode)
static inline struct ip_vs_sync_buff *
ip_vs_sync_buff_create_v0(struct netns_ipvs *ipvs)
void ip_vs_sync_conn_v0(struct net *net, struct ip_vs_conn *cp)
void ip_vs_sync_conn(struct net *net, struct ip_vs_conn *cp)
static inline int
ip_vs_conn_fill_param_sync(struct net *net, int af, union ip_vs_sync_conn *sc,
struct ip_vs_conn_param *p,
__u8 *pe_data, unsigned int pe_data_len,
__u8 *pe_name, unsigned int pe_name_len)
static void ip_vs_proc_conn(struct net *net, struct ip_vs_conn_param *param,
unsigned int flags, unsigned int state,
unsigned int protocol, unsigned int type,
const union nf_inet_addr *daddr, __be16 dport,
unsigned long timeout, __u32 fwmark,
struct ip_vs_sync_conn_options *opt)
static void ip_vs_process_message_v0(struct net *net, const char *buffer,
const size_t buflen)
static inline int ip_vs_proc_seqopt(__u8 *p, unsigned int plen,
__u32 *opt_flags,
struct ip_vs_sync_conn_options *opt)
static int ip_vs_proc_str(__u8 *p, unsigned int plen, unsigned int *data_len,
__u8 **data, unsigned int maxlen,
__u32 *opt_flags, __u32 flag)
static inline int ip_vs_proc_sync_conn(struct net *net, __u8 *p, __u8 *msg_end)
static void ip_vs_process_message(struct net *net, __u8 *buffer,
const size_t buflen)
static void set_mcast_loop(struct sock *sk, u_char loop)
static void set_mcast_ttl(struct sock *sk, u_char ttl)
static int set_mcast_if(struct sock *sk, char *ifname)
static int set_sync_mesg_maxlen(struct net *net, int sync_state)
static int
join_mcast_group(struct sock *sk, struct in_addr *addr, char *ifname)
static int bind_mcastif_addr(struct socket *sock, char *ifname)
static struct socket *make_send_sock(struct net *net)
static struct socket *make_receive_sock(struct net *net)
static int
ip_vs_send_async(struct socket *sock, const char *buffer, const size_t length)
static void
ip_vs_send_sync_msg(struct socket *sock, struct ip_vs_sync_mesg *msg)
static int
ip_vs_receive(struct socket *sock, char *buffer, const size_t buflen)
static int sync_thread_master(void *data)
static int sync_thread_backup(void *data)
int start_sync_thread(struct net *net, int state, char *mcast_ifn, __u8 syncid)
int stop_sync_thread(struct net *net, int state)
int __net_init __ip_vs_sync_init(struct net *net)
void __ip_vs_sync_cleanup(struct net *net)
int __init ip_vs_sync_init(void)
void ip_vs_sync_cleanup(void)
