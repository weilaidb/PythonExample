#define _NET_IF_INET6_H
#define IF_RA_OTHERCONF	0x80
#define IF_RA_MANAGED	0x40
#define IF_RA_RCVD	0x20
#define IF_RS_SENT	0x10
#define IF_READY	0x80000000
#define IF_PREFIX_ONLINK	0x01
#define IF_PREFIX_AUTOCONF	0x02
enum ;
struct inet6_ifaddr ;
struct ip6_sf_socklist ;
#define IP6_SFLSIZE(count)	(sizeof(struct ip6_sf_socklist) + \
(count) * sizeof(struct in6_addr))
#define IP6_SFBLOCK	10
struct ipv6_mc_socklist ;
struct ip6_sf_list ;
#define MAF_TIMER_RUNNING	0x01
#define MAF_LAST_REPORTER	0x02
#define MAF_LOADED		0x04
#define MAF_NOREPORT		0x08
#define MAF_GSQUERY		0x10
struct ifmcaddr6 ;
struct ipv6_ac_socklist ;
struct ifacaddr6 ;
#define	IFA_HOST	IPV6_ADDR_LOOPBACK
#define	IFA_LINK	IPV6_ADDR_LINKLOCAL
#define	IFA_SITE	IPV6_ADDR_SITELOCAL
struct ipv6_devstat ;
struct inet6_dev ;
static inline void ipv6_eth_mc_map(const struct in6_addr *addr, char *buf)
static inline void ipv6_tr_mc_map(const struct in6_addr *addr, char *buf)
static inline void ipv6_arcnet_mc_map(const struct in6_addr *addr, char *buf)
static inline void ipv6_ib_mc_map(const struct in6_addr *addr,
const unsigned char *broadcast, char *buf)
static inline int ipv6_ipgre_mc_map(const struct in6_addr *addr,
const unsigned char *broadcast, char *buf)
