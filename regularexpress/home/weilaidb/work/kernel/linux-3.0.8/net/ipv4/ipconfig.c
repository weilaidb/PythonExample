#undef IPCONFIG_DEBUG
#define DBG(x) printk x
#define DBG(x) do  while(0)
#if defined(CONFIG_IP_PNP_DHCP)
#define IPCONFIG_DHCP
#if defined(CONFIG_IP_PNP_BOOTP) || defined(CONFIG_IP_PNP_DHCP)
#define IPCONFIG_BOOTP
#if defined(CONFIG_IP_PNP_RARP)
#define IPCONFIG_RARP
#if defined(IPCONFIG_BOOTP) || defined(IPCONFIG_RARP)
#define IPCONFIG_DYNAMIC
#define CONF_POST_OPEN		10
#define CONF_CARRIER_TIMEOUT	120000
#define CONF_OPEN_RETRIES 	2
#define CONF_SEND_RETRIES 	6
#define CONF_INTER_TIMEOUT	(HZ/2)
#define CONF_BASE_TIMEOUT	(HZ*2)
#define CONF_TIMEOUT_RANDOM	(HZ)
#define CONF_TIMEOUT_MULT	*7/4
#define CONF_TIMEOUT_MAX	(HZ*30)
#define CONF_NAMESERVERS_MAX   3
#define NONE cpu_to_be32(INADDR_NONE)
#define ANY cpu_to_be32(INADDR_ANY)
int ic_set_manually __initdata = 0;
static int ic_enable __initdata = 0;
int ic_proto_enabled __initdata = 0
| IC_BOOTP
| IC_USE_DHCP
| IC_RARP
;
static int ic_host_name_set __initdata = 0;
__be32 ic_myaddr = NONE;
static __be32 ic_netmask = NONE;
__be32 ic_gateway = NONE;
__be32 ic_servaddr = NONE;
__be32 root_server_addr = NONE;
u8 root_server_path[256] = ;
u32 ic_dev_xid;
static char vendor_class_identifier[253] __initdata;
static int ic_proto_used;
static __be32 ic_nameservers[CONF_NAMESERVERS_MAX];
static u8 ic_domain[64];
static char user_dev_name[IFNAMSIZ] __initdata = ;
static int ic_proto_have_if __initdata = 0;
static int ic_dev_mtu __initdata = 0;
static DEFINE_SPINLOCK(ic_recv_lock);
static volatile int ic_got_reply __initdata = 0;
static int ic_dhcp_msgtype __initdata = 0;
struct ic_device ;
static struct ic_device *ic_first_dev __initdata = NULL;
static struct net_device *ic_dev __initdata = NULL;
static bool __init ic_is_init_dev(struct net_device *dev)
static int __init ic_open_devs(void)
static void __init ic_close_devs(void)
static inline void
set_sockaddr(struct sockaddr_in *sin, __be32 addr, __be16 port)
static int __init ic_devinet_ioctl(unsigned int cmd, struct ifreq *arg)
static int __init ic_dev_ioctl(unsigned int cmd, struct ifreq *arg)
static int __init ic_route_ioctl(unsigned int cmd, struct rtentry *arg)
static int __init ic_setup_if(void)
static int __init ic_setup_routes(void)
static int __init ic_defaults(void)
static int ic_rarp_recv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev);
static struct packet_type rarp_packet_type __initdata = ;
static inline void __init ic_rarp_init(void)
static inline void __init ic_rarp_cleanup(void)
static int __init
ic_rarp_recv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev)
static void __init ic_rarp_send_if(struct ic_device *d)
struct bootp_pkt ;
#define BOOTP_REQUEST	1
#define BOOTP_REPLY	2
#define DHCPDISCOVER	1
#define DHCPOFFER	2
#define DHCPREQUEST	3
#define DHCPDECLINE	4
#define DHCPACK		5
#define DHCPNAK		6
#define DHCPRELEASE	7
#define DHCPINFORM	8
static int ic_bootp_recv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev);
static struct packet_type bootp_packet_type __initdata = ;
static const u8 ic_bootp_cookie[4] = ;
static void __init
ic_dhcp_init_options(u8 *options)
static void __init ic_bootp_init_ext(u8 *e)
static inline void __init ic_bootp_init(void)
static inline void __init ic_bootp_cleanup(void)
static void __init ic_bootp_send_if(struct ic_device *d, unsigned long jiffies_diff)
static int __init ic_bootp_string(char *dest, char *src, int len, int max)
static void __init ic_do_bootp_ext(u8 *ext)
static int __init ic_bootp_recv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev)
static int __init ic_dynamic(void)
static int pnp_seq_show(struct seq_file *seq, void *v)
static int pnp_seq_open(struct inode *indoe, struct file *file)
static const struct file_operations pnp_seq_fops = ;
__be32 __init root_nfs_parse_addr(char *name)
#define DEVICE_WAIT_MAX		12
static int __init wait_for_devices(void)
static int __init ip_auto_config(void)
late_initcall(ip_auto_config);
static int __init ic_proto_name(char *name)
static int __init ip_auto_config_setup(char *addrs)
static int __init nfsaddrs_config_setup(char *addrs)
static int __init vendor_class_identifier_setup(char *addrs)
__setup("ip=", ip_auto_config_setup);
__setup("nfsaddrs=", nfsaddrs_config_setup);
__setup("dhcpclass=", vendor_class_identifier_setup);
