#define _FCOE_H_
#define FCOE_MAX_QUEUE_DEPTH	256
#define FCOE_MIN_QUEUE_DEPTH	32
#define FCOE_WORD_TO_BYTE	4
#define FCOE_VERSION	"0.1"
#define FCOE_NAME	"fcoe"
#define FCOE_VENDOR	"Open-FCoE.org"
#define FCOE_MAX_LUN		0xFFFF
#define FCOE_MAX_FCP_TARGET	256
#define FCOE_MAX_OUTSTANDING_COMMANDS	1024
#define FCOE_MIN_XID		0x0000
#define FCOE_MAX_XID		0x0FFF
unsigned int fcoe_debug_logging;
module_param_named(debug_logging, fcoe_debug_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug_logging, "a bit mask of logging levels");
#define FCOE_LOGGING	    0x01
#define FCOE_NETDEV_LOGGING 0x02
#define FCOE_CHECK_LOGGING(LEVEL, CMD)					\
do  while (0)
#define FCOE_DBG(fmt, args...)						\
FCOE_CHECK_LOGGING(FCOE_LOGGING,				\
printk(KERN_INFO "fcoe: " fmt, ##args);)
#define FCOE_NETDEV_DBG(netdev, fmt, args...)			\
FCOE_CHECK_LOGGING(FCOE_NETDEV_LOGGING,			\
printk(KERN_INFO "fcoe: %s: " fmt,	\
netdev->name, ##args);)
struct fcoe_interface ;
#define fcoe_from_ctlr(fip) container_of(fip, struct fcoe_interface, ctlr)
static inline struct net_device *fcoe_netdev(const struct fc_lport *lport)
static inline void wwn_to_str(u64 wwn, char *buf, int len)
