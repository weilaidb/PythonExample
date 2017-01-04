#define _NF_CONNTRACK_TCP_H
enum tcp_conntrack ;
#define IP_CT_TCP_FLAG_WINDOW_SCALE		0x01
#define IP_CT_TCP_FLAG_SACK_PERM		0x02
#define IP_CT_TCP_FLAG_CLOSE_INIT		0x04
#define IP_CT_TCP_FLAG_BE_LIBERAL		0x08
#define IP_CT_TCP_FLAG_DATA_UNACKNOWLEDGED	0x10
#define IP_CT_TCP_FLAG_MAXACK_SET		0x20
struct nf_ct_tcp_flags ;
struct ip_ct_tcp_state ;
struct ip_ct_tcp ;
