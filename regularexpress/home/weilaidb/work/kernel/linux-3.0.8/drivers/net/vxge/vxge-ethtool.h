#define _VXGE_ETHTOOL_H
static int vxge_ethtool_get_sset_count(struct net_device *dev, int sset);
static char ethtool_driver_stats_keys[][ETH_GSTRING_LEN] = ;
#define VXGE_TITLE_LEN			5
#define VXGE_HW_VPATH_STATS_LEN 	27
#define VXGE_HW_AGGR_STATS_LEN  	13
#define VXGE_HW_PORT_STATS_LEN  	94
#define VXGE_HW_VPATH_TX_STATS_LEN	19
#define VXGE_HW_VPATH_RX_STATS_LEN	42
#define VXGE_SW_STATS_LEN		60
#define VXGE_HW_STATS_LEN	(VXGE_HW_VPATH_STATS_LEN +\
VXGE_HW_AGGR_STATS_LEN +\
VXGE_HW_PORT_STATS_LEN +\
VXGE_HW_VPATH_TX_STATS_LEN +\
VXGE_HW_VPATH_RX_STATS_LEN)
#define DRIVER_STAT_LEN (sizeof(ethtool_driver_stats_keys)/ETH_GSTRING_LEN)
#define STAT_LEN (VXGE_HW_STATS_LEN + DRIVER_STAT_LEN + VXGE_SW_STATS_LEN)
#define VXGE_MAX_FLICKER_TIME (60 * HZ)
#define VXGE_FLICKER_ON		1
#define VXGE_FLICKER_OFF	0
#define vxge_add_string(fmt, size, buf, ...)
