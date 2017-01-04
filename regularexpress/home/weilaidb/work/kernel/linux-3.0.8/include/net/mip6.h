#define _NET_MIP6_H
struct ip6_mh  __packed;
#define IP6_MH_TYPE_BRR		0
#define IP6_MH_TYPE_HOTI	1
#define IP6_MH_TYPE_COTI	2
#define IP6_MH_TYPE_HOT		3
#define IP6_MH_TYPE_COT		4
#define IP6_MH_TYPE_BU		5
#define IP6_MH_TYPE_BACK	6
#define IP6_MH_TYPE_BERROR	7
#define IP6_MH_TYPE_MAX		IP6_MH_TYPE_BERROR
