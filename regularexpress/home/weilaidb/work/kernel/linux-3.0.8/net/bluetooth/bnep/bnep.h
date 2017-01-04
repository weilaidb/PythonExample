#define _BNEP_H
#define BNEP_MAX_PROTO_FILTERS		5
#define BNEP_MAX_MULTICAST_FILTERS	20
#define BNEP_BASE_UUID	0x0000000000001000800000805F9B34FB
#define BNEP_UUID16	0x02
#define BNEP_UUID32	0x04
#define BNEP_UUID128	0x16
#define BNEP_SVC_PANU	0x1115
#define BNEP_SVC_NAP	0x1116
#define BNEP_SVC_GN	0x1117
#define BNEP_GENERAL			0x00
#define BNEP_CONTROL			0x01
#define BNEP_COMPRESSED			0x02
#define BNEP_COMPRESSED_SRC_ONLY	0x03
#define BNEP_COMPRESSED_DST_ONLY	0x04
#define BNEP_CMD_NOT_UNDERSTOOD		0x00
#define BNEP_SETUP_CONN_REQ		0x01
#define BNEP_SETUP_CONN_RSP		0x02
#define BNEP_FILTER_NET_TYPE_SET	0x03
#define BNEP_FILTER_NET_TYPE_RSP	0x04
#define BNEP_FILTER_MULTI_ADDR_SET	0x05
#define BNEP_FILTER_MULTI_ADDR_RSP	0x06
#define BNEP_EXT_CONTROL 0x00
#define BNEP_SUCCESS 0x00
#define BNEP_CONN_INVALID_DST 0x01
#define BNEP_CONN_INVALID_SRC 0x02
#define BNEP_CONN_INVALID_SVC 0x03
#define BNEP_CONN_NOT_ALLOWED 0x04
#define BNEP_FILTER_UNSUPPORTED_REQ	0x01
#define BNEP_FILTER_INVALID_RANGE	0x02
#define BNEP_FILTER_INVALID_MCADDR	0x02
#define BNEP_FILTER_LIMIT_REACHED	0x03
#define BNEP_FILTER_DENIED_SECURITY	0x04
#define BNEP_MTU	1691
#define BNEP_PSM	0x0f
#define BNEP_FLUSH_TO	0xffff
#define BNEP_CONNECT_TO	15
#define BNEP_FILTER_TO	15
#define BNEP_TYPE_MASK	0x7f
#define BNEP_EXT_HEADER	0x80
struct bnep_setup_conn_req  __packed;
struct bnep_set_filter_req  __packed;
struct bnep_control_rsp  __packed;
struct bnep_ext_hdr  __packed;
#define BNEPCONNADD	_IOW('B', 200, int)
#define BNEPCONNDEL	_IOW('B', 201, int)
#define BNEPGETCONNLIST	_IOR('B', 210, int)
#define BNEPGETCONNINFO	_IOR('B', 211, int)
struct bnep_connadd_req ;
struct bnep_conndel_req ;
struct bnep_conninfo ;
struct bnep_connlist_req ;
struct bnep_proto_filter ;
int bnep_add_connection(struct bnep_connadd_req *req, struct socket *sock);
int bnep_del_connection(struct bnep_conndel_req *req);
int bnep_get_connlist(struct bnep_connlist_req *req);
int bnep_get_conninfo(struct bnep_conninfo *ci);
struct bnep_session ;
void bnep_net_setup(struct net_device *dev);
int bnep_sock_init(void);
void bnep_sock_cleanup(void);
static inline int bnep_mc_hash(__u8 *addr)
