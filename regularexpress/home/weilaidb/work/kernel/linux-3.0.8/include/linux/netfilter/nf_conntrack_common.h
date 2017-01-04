#define _NF_CONNTRACK_COMMON_H
enum ip_conntrack_info ;
enum ip_conntrack_status ;
enum ip_conntrack_events ;
enum ip_conntrack_expect_events ;
#define NF_CT_EXPECT_PERMANENT		0x1
#define NF_CT_EXPECT_INACTIVE		0x2
#define NF_CT_EXPECT_USERSPACE		0x4
struct ip_conntrack_stat ;
extern void need_conntrack(void);
