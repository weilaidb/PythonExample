#define __EHEA_H__
#define DRV_NAME	"ehea"
#define DRV_VERSION	"EHEA_0107"
#define DLPAR_PORT_ADD_REM 1
#define DLPAR_MEM_ADD      2
#define DLPAR_MEM_REM      4
#define EHEA_CAPABILITIES  (DLPAR_PORT_ADD_REM | DLPAR_MEM_ADD | DLPAR_MEM_REM)
#define EHEA_MSG_DEFAULT (NETIF_MSG_LINK | NETIF_MSG_TIMER \
| NETIF_MSG_RX_ERR | NETIF_MSG_TX_ERR)
#define EHEA_MAX_ENTRIES_RQ1 32767
#define EHEA_MAX_ENTRIES_RQ2 16383
#define EHEA_MAX_ENTRIES_RQ3 16383
#define EHEA_MAX_ENTRIES_SQ  32767
#define EHEA_MIN_ENTRIES_QP  127
#define EHEA_SMALL_QUEUES
#define EHEA_NUM_TX_QP 1
#define EHEA_LRO_MAX_AGGR 64
#define EHEA_MAX_CQE_COUNT      1023
#define EHEA_DEF_ENTRIES_SQ     1023
#define EHEA_DEF_ENTRIES_RQ1    4095
#define EHEA_DEF_ENTRIES_RQ2    1023
#define EHEA_DEF_ENTRIES_RQ3    1023
#define EHEA_MAX_CQE_COUNT      4080
#define EHEA_DEF_ENTRIES_SQ     4080
#define EHEA_DEF_ENTRIES_RQ1    8160
#define EHEA_DEF_ENTRIES_RQ2    2040
#define EHEA_DEF_ENTRIES_RQ3    2040
#define EHEA_MAX_ENTRIES_EQ 20
#define EHEA_SG_SQ  2
#define EHEA_SG_RQ1 1
#define EHEA_SG_RQ2 0
#define EHEA_SG_RQ3 0
#define EHEA_MAX_PACKET_SIZE    9022
#define EHEA_RQ2_PKT_SIZE       1522
#define EHEA_L_PKT_SIZE         256
#define MAX_LRO_DESCRIPTORS 8
#define EHEA_PD_ID        0xaabcdeff
#define EHEA_RQ2_THRESHOLD 	   1
#define EHEA_RQ3_THRESHOLD 	   9
#define EHEA_SPEED_10G         10000
#define EHEA_SPEED_1G           1000
#define EHEA_SPEED_100M          100
#define EHEA_SPEED_10M            10
#define EHEA_SPEED_AUTONEG         0
#define EHEA_BCMC_SCOPE_ALL	0x08
#define EHEA_BCMC_SCOPE_SINGLE	0x00
#define EHEA_BCMC_MULTICAST	0x04
#define EHEA_BCMC_BROADCAST	0x00
#define EHEA_BCMC_UNTAGGED	0x02
#define EHEA_BCMC_TAGGED	0x00
#define EHEA_BCMC_VLANID_ALL	0x01
#define EHEA_BCMC_VLANID_SINGLE	0x00
#define EHEA_CACHE_LINE          128
#define EHEA_MR_ACC_CTRL       0x00800000
#define EHEA_BUSMAP_START      0x8000000000000000ULL
#define EHEA_INVAL_ADDR        0xFFFFFFFFFFFFFFFFULL
#define EHEA_DIR_INDEX_SHIFT 13
#define EHEA_TOP_INDEX_SHIFT (EHEA_DIR_INDEX_SHIFT * 2)
#define EHEA_MAP_ENTRIES (1 << EHEA_DIR_INDEX_SHIFT)
#define EHEA_MAP_SIZE (0x10000)
#define EHEA_INDEX_MASK (EHEA_MAP_ENTRIES - 1)
#define EHEA_WATCH_DOG_TIMEOUT 10*HZ
void ehea_dump(void *adr, int len, char *msg);
#define EHEA_BMASK(pos, length) (((pos) << 16) + (length))
#define EHEA_BMASK_IBM(from, to) (((63 - to) << 16) + ((to) - (from) + 1))
#define EHEA_BMASK_SHIFTPOS(mask) (((mask) >> 16) & 0xffff)
#define EHEA_BMASK_MASK(mask) \
(0xffffffffffffffffULL >> ((64 - (mask)) & 0xffff))
#define EHEA_BMASK_SET(mask, value) \
((EHEA_BMASK_MASK(mask) & ((u64)(value))) << EHEA_BMASK_SHIFTPOS(mask))
#define EHEA_BMASK_GET(mask, value) \
(EHEA_BMASK_MASK(mask) & (((u64)(value)) >> EHEA_BMASK_SHIFTPOS(mask)))
struct ehea_page ;
struct hw_queue ;
struct h_epa ;
struct h_epa_user ;
struct h_epas ;
struct ehea_dir_bmap
;
struct ehea_top_bmap
;
struct ehea_bmap
;
struct ehea_qp;
struct ehea_cq;
struct ehea_eq;
struct ehea_port;
struct ehea_av;
struct ehea_qp_init_attr ;
struct ehea_eq_attr ;
struct ehea_eq ;
struct ehea_qp ;
struct ehea_cq_attr ;
struct ehea_cq ;
struct ehea_mr ;
struct port_stats ;
#define EHEA_IRQ_NAME_SIZE 20
struct ehea_q_skb_arr ;
struct ehea_port_res ;
#define EHEA_MAX_PORTS 16
#define EHEA_NUM_PORTRES_FW_HANDLES    6
#define EHEA_NUM_PORT_FW_HANDLES       1
#define EHEA_NUM_ADAPTER_FW_HANDLES    2
struct ehea_adapter ;
struct ehea_mc_list ;
struct ehea_fw_handle_entry ;
struct ehea_fw_handle_array ;
struct ehea_bcmc_reg_entry ;
struct ehea_bcmc_reg_array ;
#define EHEA_PORT_UP 1
#define EHEA_PORT_DOWN 0
#define EHEA_PHY_LINK_UP 1
#define EHEA_PHY_LINK_DOWN 0
#define EHEA_MAX_PORT_RES 16
struct ehea_port ;
struct port_res_cfg ;
enum ehea_flag_bits ;
void ehea_set_ethtool_ops(struct net_device *netdev);
int ehea_sense_port_attr(struct ehea_port *port);
int ehea_set_portspeed(struct ehea_port *port, u32 port_speed);
