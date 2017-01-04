#define _IPV6_PROTOCOL_DEFINES_
#define IPV6HDR_TYPE_HOPBYHOP 0x0
#define IPV6HDR_TYPE_ROUTING 0x2B
#define IPV6HDR_TYPE_FRAGMENTATION 0x2C
#define IPV6HDR_TYPE_DESTOPTS 0x3c
#define IPV6HDR_TYPE_AUTHENTICATION 0x33
#define IPV6HDR_TYPE_ENCRYPTEDSECURITYPAYLOAD 0x34
#define MASK_IPV6_CS_SPEC 0x2
#define TCP_HEADER_TYPE 0x6
#define UDP_HEADER_TYPE 0x11
#define IPV6_ICMP_HDR_TYPE 0x2
#define IPV6_FLOWLABEL_BITOFFSET 9
#define IPV6_MAX_CHAINEDHDR_BUFFBYTES 0x64
#define IPV6_DESTOPTS_HDR_OPTIONSIZE 0x8
typedef struct IPV6HeaderFormatTag
IPV6Header;
typedef struct IPV6RoutingHeaderFormatTag
IPV6RoutingHeader;
typedef struct IPV6FragmentHeaderFormatTag
IPV6FragmentHeader;
typedef struct IPV6DestOptionsHeaderFormatTag
IPV6DestOptionsHeader;
typedef struct IPV6HopByHopOptionsHeaderFormatTag
IPV6HopByHopOptionsHeader;
typedef struct IPV6AuthenticationHeaderFormatTag
IPV6AuthenticationHeader;
typedef struct IPV6IcmpHeaderFormatTag
IPV6IcmpHeader;
typedef enum _E_IPADDR_CONTEXT
E_IPADDR_CONTEXT;
USHORT	IpVersion6(PMINI_ADAPTER Adapter,
PVOID pcIpHeader,
S_CLASSIFIER_RULE *pstClassifierRule );
VOID DumpIpv6Address(ULONG *puIpv6Address);
extern BOOLEAN MatchSrcPort(S_CLASSIFIER_RULE *pstClassifierRule,USHORT ushSrcPort);
extern BOOLEAN MatchDestPort(S_CLASSIFIER_RULE *pstClassifierRule,USHORT ushSrcPort);
extern BOOLEAN MatchProtocol(S_CLASSIFIER_RULE *pstClassifierRule,UCHAR ucProtocol);
