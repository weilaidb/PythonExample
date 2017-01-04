#define __LINUX_IF_PPPOX_H
#define AF_PPPOX	24
#define PF_PPPOX	AF_PPPOX
typedef __be16 sid_t;
struct pppoe_addr ;
struct pptp_addr ;
#define PX_PROTO_OE    0
#define PX_PROTO_OL2TP 1
#define PX_PROTO_PPTP  2
#define PX_MAX_PROTO   3
struct sockaddr_pppox  __attribute__((packed));
struct sockaddr_pppol2tp  __attribute__((packed));
struct sockaddr_pppol2tpv3  __attribute__((packed));
#define PPPOEIOCSFWD	_IOW(0xB1 ,0, size_t)
#define PPPOEIOCDFWD	_IO(0xB1 ,1)
#define PADI_CODE	0x09
#define PADO_CODE	0x07
#define PADR_CODE	0x19
#define PADS_CODE	0x65
#define PADT_CODE	0xa7
struct pppoe_tag  __attribute__ ((packed));
#define PTT_EOL		__cpu_to_be16(0x0000)
#define PTT_SRV_NAME	__cpu_to_be16(0x0101)
#define PTT_AC_NAME	__cpu_to_be16(0x0102)
#define PTT_HOST_UNIQ	__cpu_to_be16(0x0103)
#define PTT_AC_COOKIE	__cpu_to_be16(0x0104)
#define PTT_VENDOR 	__cpu_to_be16(0x0105)
#define PTT_RELAY_SID	__cpu_to_be16(0x0110)
#define PTT_SRV_ERR     __cpu_to_be16(0x0201)
#define PTT_SYS_ERR  	__cpu_to_be16(0x0202)
#define PTT_GEN_ERR  	__cpu_to_be16(0x0203)
struct pppoe_hdr  __attribute__((packed));
#define PPPOE_SES_HLEN	8
static inline struct pppoe_hdr *pppoe_hdr(const struct sk_buff *skb)
struct pppoe_opt ;
struct pptp_opt ;
struct pppox_sock ;
#define pppoe_dev	proto.pppoe.dev
#define pppoe_ifindex	proto.pppoe.ifindex
#define pppoe_pa	proto.pppoe.pa
#define pppoe_relay	proto.pppoe.relay
static inline struct pppox_sock *pppox_sk(struct sock *sk)
static inline struct sock *sk_pppox(struct pppox_sock *po)
struct module;
struct pppox_proto ;
extern int register_pppox_proto(int proto_num, const struct pppox_proto *pp);
extern void unregister_pppox_proto(int proto_num);
extern void pppox_unbind_sock(struct sock *sk);
extern int pppox_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg);
enum ;
