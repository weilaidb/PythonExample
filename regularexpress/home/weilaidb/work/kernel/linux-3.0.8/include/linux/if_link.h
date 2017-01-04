#define _LINUX_IF_LINK_H
struct rtnl_link_stats ;
struct rtnl_link_stats64 ;
struct rtnl_link_ifmap ;
enum ;
#define IFLA_MAX (__IFLA_MAX - 1)
#define IFLA_RTA(r)  ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct ifinfomsg))))
#define IFLA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct ifinfomsg))
enum ;
#define IFLA_INET_MAX (__IFLA_INET_MAX - 1)
enum ;
#define IFLA_INET6_MAX	(__IFLA_INET6_MAX - 1)
struct ifla_cacheinfo ;
enum ;
#define IFLA_INFO_MAX	(__IFLA_INFO_MAX - 1)
enum ;
#define IFLA_VLAN_MAX	(__IFLA_VLAN_MAX - 1)
struct ifla_vlan_flags ;
enum ;
#define IFLA_VLAN_QOS_MAX	(__IFLA_VLAN_QOS_MAX - 1)
struct ifla_vlan_qos_mapping ;
enum ;
#define IFLA_MACVLAN_MAX (__IFLA_MACVLAN_MAX - 1)
enum macvlan_mode ;
enum ;
#define IFLA_VF_INFO_MAX (__IFLA_VF_INFO_MAX - 1)
enum ;
#define IFLA_VF_MAX (__IFLA_VF_MAX - 1)
struct ifla_vf_mac ;
struct ifla_vf_vlan ;
struct ifla_vf_tx_rate ;
struct ifla_vf_info ;
enum ;
#define IFLA_VF_PORT_MAX (__IFLA_VF_PORT_MAX - 1)
enum ;
#define IFLA_PORT_MAX (__IFLA_PORT_MAX - 1)
#define PORT_PROFILE_MAX	40
#define PORT_UUID_MAX		16
#define PORT_SELF_VF		-1
enum ;
enum ;
struct ifla_port_vsi ;
