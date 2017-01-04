#define _LINUX_IN6_H
struct in6_addr ;
extern const struct in6_addr in6addr_any;
#define IN6ADDR_ANY_INIT
extern const struct in6_addr in6addr_loopback;
#define IN6ADDR_LOOPBACK_INIT
extern const struct in6_addr in6addr_linklocal_allnodes;
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT	\
extern const struct in6_addr in6addr_linklocal_allrouters;
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT \
struct sockaddr_in6 ;
struct ipv6_mreq ;
#define ipv6mr_acaddr	ipv6mr_multiaddr
struct in6_flowlabel_req ;
#define IPV6_FL_A_GET	0
#define IPV6_FL_A_PUT	1
#define IPV6_FL_A_RENEW	2
#define IPV6_FL_F_CREATE	1
#define IPV6_FL_F_EXCL		2
#define IPV6_FL_S_NONE		0
#define IPV6_FL_S_EXCL		1
#define IPV6_FL_S_PROCESS	2
#define IPV6_FL_S_USER		3
#define IPV6_FL_S_ANY		255
#define IPV6_FLOWINFO_FLOWLABEL		0x000fffff
#define IPV6_FLOWINFO_PRIORITY		0x0ff00000
#define IPV6_PRIORITY_UNCHARACTERIZED	0x0000
#define IPV6_PRIORITY_FILLER		0x0100
#define IPV6_PRIORITY_UNATTENDED	0x0200
#define IPV6_PRIORITY_RESERVED1		0x0300
#define IPV6_PRIORITY_BULK		0x0400
#define IPV6_PRIORITY_RESERVED2		0x0500
#define IPV6_PRIORITY_INTERACTIVE	0x0600
#define IPV6_PRIORITY_CONTROL		0x0700
#define IPV6_PRIORITY_8			0x0800
#define IPV6_PRIORITY_9			0x0900
#define IPV6_PRIORITY_10		0x0a00
#define IPV6_PRIORITY_11		0x0b00
#define IPV6_PRIORITY_12		0x0c00
#define IPV6_PRIORITY_13		0x0d00
#define IPV6_PRIORITY_14		0x0e00
#define IPV6_PRIORITY_15		0x0f00
#define IPPROTO_HOPOPTS		0
#define IPPROTO_ROUTING		43
#define IPPROTO_FRAGMENT	44
#define IPPROTO_ICMPV6		58
#define IPPROTO_NONE		59
#define IPPROTO_DSTOPTS		60
#define IPPROTO_MH		135
#define IPV6_TLV_PAD0		0
#define IPV6_TLV_PADN		1
#define IPV6_TLV_ROUTERALERT	5
#define IPV6_TLV_JUMBO		194
#define IPV6_TLV_HAO		201
#define IPV6_ADDRFORM		1
#define IPV6_2292PKTINFO	2
#define IPV6_2292HOPOPTS	3
#define IPV6_2292DSTOPTS	4
#define IPV6_2292RTHDR		5
#define IPV6_2292PKTOPTIONS	6
#define IPV6_CHECKSUM		7
#define IPV6_2292HOPLIMIT	8
#define IPV6_NEXTHOP		9
#define IPV6_AUTHHDR		10
#define IPV6_FLOWINFO		11
#define IPV6_UNICAST_HOPS	16
#define IPV6_MULTICAST_IF	17
#define IPV6_MULTICAST_HOPS	18
#define IPV6_MULTICAST_LOOP	19
#define IPV6_ADD_MEMBERSHIP	20
#define IPV6_DROP_MEMBERSHIP	21
#define IPV6_ROUTER_ALERT	22
#define IPV6_MTU_DISCOVER	23
#define IPV6_MTU		24
#define IPV6_RECVERR		25
#define IPV6_V6ONLY		26
#define IPV6_JOIN_ANYCAST	27
#define IPV6_LEAVE_ANYCAST	28
#define IPV6_PMTUDISC_DONT		0
#define IPV6_PMTUDISC_WANT		1
#define IPV6_PMTUDISC_DO		2
#define IPV6_PMTUDISC_PROBE		3
#define IPV6_FLOWLABEL_MGR	32
#define IPV6_FLOWINFO_SEND	33
#define IPV6_IPSEC_POLICY	34
#define IPV6_XFRM_POLICY	35
#define IPV6_RECVPKTINFO	49
#define IPV6_PKTINFO		50
#define IPV6_RECVHOPLIMIT	51
#define IPV6_HOPLIMIT		52
#define IPV6_RECVHOPOPTS	53
#define IPV6_HOPOPTS		54
#define IPV6_RTHDRDSTOPTS	55
#define IPV6_RECVRTHDR		56
#define IPV6_RTHDR		57
#define IPV6_RECVDSTOPTS	58
#define IPV6_DSTOPTS		59
#define IPV6_RECVPATHMTU	60
#define IPV6_PATHMTU		61
#define IPV6_DONTFRAG		62
#define IPV6_RECVTCLASS		66
#define IPV6_TCLASS		67
#define IPV6_ADDR_PREFERENCES	72
#define IPV6_PREFER_SRC_TMP		0x0001
#define IPV6_PREFER_SRC_PUBLIC		0x0002
#define IPV6_PREFER_SRC_PUBTMP_DEFAULT	0x0100
#define IPV6_PREFER_SRC_COA		0x0004
#define IPV6_PREFER_SRC_HOME		0x0400
#define IPV6_PREFER_SRC_CGA		0x0008
#define IPV6_PREFER_SRC_NONCGA		0x0800
#define IPV6_MINHOPCOUNT		73
#define IPV6_ORIGDSTADDR        74
#define IPV6_RECVORIGDSTADDR    IPV6_ORIGDSTADDR
#define IPV6_TRANSPARENT        75