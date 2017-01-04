#define __LINUX_GENERIC_NETLINK_H
#define GENL_NAMSIZ	16
#define GENL_MIN_ID	NLMSG_MIN_TYPE
#define GENL_MAX_ID	1023
struct genlmsghdr ;
#define GENL_HDRLEN	NLMSG_ALIGN(sizeof(struct genlmsghdr))
#define GENL_ADMIN_PERM		0x01
#define GENL_CMD_CAP_DO		0x02
#define GENL_CMD_CAP_DUMP	0x04
#define GENL_CMD_CAP_HASPOL	0x08
#define GENL_ID_GENERATE	0
#define GENL_ID_CTRL		NLMSG_MIN_TYPE
enum ;
#define CTRL_CMD_MAX (__CTRL_CMD_MAX - 1)
enum ;
#define CTRL_ATTR_MAX (__CTRL_ATTR_MAX - 1)
enum ;
#define CTRL_ATTR_OP_MAX (__CTRL_ATTR_OP_MAX - 1)
enum ;
#define CTRL_ATTR_MCAST_GRP_MAX (__CTRL_ATTR_MCAST_GRP_MAX - 1)
extern void genl_lock(void);
extern void genl_unlock(void);
