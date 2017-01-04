#define _XT_TCPUDP_H
struct xt_tcp ;
#define XT_TCP_INV_SRCPT	0x01
#define XT_TCP_INV_DSTPT	0x02
#define XT_TCP_INV_FLAGS	0x04
#define XT_TCP_INV_OPTION	0x08
#define XT_TCP_INV_MASK		0x0F
struct xt_udp ;
#define XT_UDP_INV_SRCPT	0x01
#define XT_UDP_INV_DSTPT	0x02
#define XT_UDP_INV_MASK	0x03
