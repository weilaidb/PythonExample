#define _SNMP_H
struct snmp_mib ;
#define SNMP_MIB_ITEM(_name,_entry)
#define SNMP_MIB_SENTINEL
#define IPSTATS_MIB_MAX	__IPSTATS_MIB_MAX
struct ipstats_mib ;
#define ICMP_MIB_MAX	__ICMP_MIB_MAX
struct icmp_mib ;
#define ICMPMSG_MIB_MAX	__ICMPMSG_MIB_MAX
struct icmpmsg_mib ;
#define ICMP6_MIB_MAX	__ICMP6_MIB_MAX
struct icmpv6_mib ;
struct icmpv6_mib_device ;
#define ICMP6MSG_MIB_MAX  __ICMP6MSG_MIB_MAX
struct icmpv6msg_mib ;
struct icmpv6msg_mib_device ;
#define TCP_MIB_MAX	__TCP_MIB_MAX
struct tcp_mib ;
#define UDP_MIB_MAX	__UDP_MIB_MAX
struct udp_mib ;
#define LINUX_MIB_MAX	__LINUX_MIB_MAX
struct linux_mib ;
#define LINUX_MIB_XFRMMAX	__LINUX_MIB_XFRMMAX
struct linux_xfrm_mib ;
#define DEFINE_SNMP_STAT(type, name)	\
__typeof__(type) __percpu *name[2]
#define DEFINE_SNMP_STAT_ATOMIC(type, name)	\
__typeof__(type) *name
#define DECLARE_SNMP_STAT(type, name)	\
extern __typeof__(type) __percpu *name[2]
#define SNMP_STAT_BHPTR(name)	(name[0])
#define SNMP_STAT_USRPTR(name)	(name[1])
#define SNMP_INC_STATS_BH(mib, field)	\
__this_cpu_inc(mib[0]->mibs[field])
#define SNMP_INC_STATS_USER(mib, field)	\
this_cpu_inc(mib[1]->mibs[field])
#define SNMP_INC_STATS_ATOMIC_LONG(mib, field)	\
atomic_long_inc(&mib->mibs[field])
#define SNMP_INC_STATS(mib, field)	\
this_cpu_inc(mib[!in_softirq()]->mibs[field])
#define SNMP_DEC_STATS(mib, field)	\
this_cpu_dec(mib[!in_softirq()]->mibs[field])
#define SNMP_ADD_STATS_BH(mib, field, addend)	\
__this_cpu_add(mib[0]->mibs[field], addend)
#define SNMP_ADD_STATS_USER(mib, field, addend)	\
this_cpu_add(mib[1]->mibs[field], addend)
#define SNMP_ADD_STATS(mib, field, addend)	\
this_cpu_add(mib[!in_softirq()]->mibs[field], addend)
#define SNMP_UPD_PO_STATS(mib, basefield, addend)	\
do  while (0)
#define SNMP_UPD_PO_STATS_BH(mib, basefield, addend)	\
do  while (0)
#if BITS_PER_LONG==32
#define SNMP_ADD_STATS64_BH(mib, field, addend) 			\
do  while (0)
#define SNMP_ADD_STATS64_USER(mib, field, addend) 			\
do  while (0)
#define SNMP_ADD_STATS64(mib, field, addend)				\
do  while (0)
#define SNMP_INC_STATS64_BH(mib, field) SNMP_ADD_STATS64_BH(mib, field, 1)
#define SNMP_INC_STATS64_USER(mib, field) SNMP_ADD_STATS64_USER(mib, field, 1)
#define SNMP_INC_STATS64(mib, field) SNMP_ADD_STATS64(mib, field, 1)
#define SNMP_UPD_PO_STATS64(mib, basefield, addend)			\
do  while (0)
#define SNMP_UPD_PO_STATS64_BH(mib, basefield, addend)			\
do  while (0)
#define SNMP_INC_STATS64_BH(mib, field)		SNMP_INC_STATS_BH(mib, field)
#define SNMP_INC_STATS64_USER(mib, field)	SNMP_INC_STATS_USER(mib, field)
#define SNMP_INC_STATS64(mib, field)		SNMP_INC_STATS(mib, field)
#define SNMP_DEC_STATS64(mib, field)		SNMP_DEC_STATS(mib, field)
#define SNMP_ADD_STATS64_BH(mib, field, addend) SNMP_ADD_STATS_BH(mib, field, addend)
#define SNMP_ADD_STATS64_USER(mib, field, addend) SNMP_ADD_STATS_USER(mib, field, addend)
#define SNMP_ADD_STATS64(mib, field, addend)	SNMP_ADD_STATS(mib, field, addend)
#define SNMP_UPD_PO_STATS64(mib, basefield, addend) SNMP_UPD_PO_STATS(mib, basefield, addend)
#define SNMP_UPD_PO_STATS64_BH(mib, basefield, addend) SNMP_UPD_PO_STATS_BH(mib, basefield, addend)
