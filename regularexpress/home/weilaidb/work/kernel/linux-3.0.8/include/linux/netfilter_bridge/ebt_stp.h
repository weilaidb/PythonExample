#define __LINUX_BRIDGE_EBT_STP_H
#define EBT_STP_TYPE		0x0001
#define EBT_STP_FLAGS		0x0002
#define EBT_STP_ROOTPRIO	0x0004
#define EBT_STP_ROOTADDR	0x0008
#define EBT_STP_ROOTCOST	0x0010
#define EBT_STP_SENDERPRIO	0x0020
#define EBT_STP_SENDERADDR	0x0040
#define EBT_STP_PORT		0x0080
#define EBT_STP_MSGAGE		0x0100
#define EBT_STP_MAXAGE		0x0200
#define EBT_STP_HELLOTIME	0x0400
#define EBT_STP_FWDD		0x0800
#define EBT_STP_MASK		0x0fff
#define EBT_STP_CONFIG_MASK	0x0ffe
#define EBT_STP_MATCH "stp"
struct ebt_stp_config_info ;
struct ebt_stp_info ;
