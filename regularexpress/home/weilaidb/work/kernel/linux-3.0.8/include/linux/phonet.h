#define LINUX_PHONET_H
#define PN_PROTO_TRANSPORT	0
#define PN_PROTO_PHONET		1
#define PN_PROTO_PIPE		2
#define PHONET_NPROTO		3
#define PNPIPE_ENCAP		1
#define PNPIPE_IFINDEX		2
#define PNPIPE_HANDLE		3
#define PNADDR_ANY		0
#define PNADDR_BROADCAST	0xFC
#define PNPORT_RESOURCE_ROUTING	0
#define PNPIPE_ENCAP_NONE	0
#define PNPIPE_ENCAP_IP		1
#define SIOCPNGETOBJECT		(SIOCPROTOPRIVATE + 0)
#define SIOCPNADDRESOURCE	(SIOCPROTOPRIVATE + 14)
#define SIOCPNDELRESOURCE	(SIOCPROTOPRIVATE + 15)
struct phonethdr  __attribute__((packed));
struct phonetmsg ;
#define PN_COMMON_MESSAGE	0xF0
#define PN_COMMGR		0x10
#define PN_PREFIX		0xE0
#define pn_submsg_id		pn_msg_u.base.pn_submsg_id
#define pn_e_submsg_id		pn_msg_u.ext.pn_e_submsg_id
#define pn_e_res_id		pn_msg_u.ext.pn_e_res_id
#define pn_data			pn_msg_u.base.pn_data
#define pn_e_data		pn_msg_u.ext.pn_e_data
#define PN_COMM_SERVICE_NOT_IDENTIFIED_RESP	0x01
#define PN_COMM_ISA_ENTITY_NOT_REACHABLE_RESP	0x14
#define pn_orig_msg_id		pn_data[0]
#define pn_status		pn_data[1]
#define pn_e_orig_msg_id	pn_e_data[0]
#define pn_e_status		pn_e_data[1]
struct sockaddr_pn  __attribute__((packed));
#define PN_DEV_PC	0x10
static inline __u16 pn_object(__u8 addr, __u16 port)
static inline __u8 pn_obj(__u16 handle)
static inline __u8 pn_dev(__u16 handle)
static inline __u16 pn_port(__u16 handle)
static inline __u8 pn_addr(__u16 handle)
static inline void pn_sockaddr_set_addr(struct sockaddr_pn *spn, __u8 addr)
static inline void pn_sockaddr_set_port(struct sockaddr_pn *spn, __u16 port)
static inline void pn_sockaddr_set_object(struct sockaddr_pn *spn,
__u16 handle)
static inline void pn_sockaddr_set_resource(struct sockaddr_pn *spn,
__u8 resource)
static inline __u8 pn_sockaddr_get_addr(const struct sockaddr_pn *spn)
static inline __u16 pn_sockaddr_get_port(const struct sockaddr_pn *spn)
static inline __u16 pn_sockaddr_get_object(const struct sockaddr_pn *spn)
static inline __u8 pn_sockaddr_get_resource(const struct sockaddr_pn *spn)
#define SIOCPNGAUTOCONF		(SIOCDEVPRIVATE + 0)
struct if_phonet_autoconf ;
struct if_phonet_req ;
#define ifr_phonet_autoconf ifr_ifru.ifru_phonet_autoconf
