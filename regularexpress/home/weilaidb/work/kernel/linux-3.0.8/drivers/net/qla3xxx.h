#define _QLA3XXX_H_
#define OPCODE_OB_MAC_IOCB_FN0          0x01
#define OPCODE_OB_MAC_IOCB_FN2          0x21
#define OPCODE_IB_MAC_IOCB          0xF9
#define OPCODE_IB_3032_MAC_IOCB     0x09
#define OPCODE_IB_IP_IOCB           0xFA
#define OPCODE_IB_3032_IP_IOCB      0x0A
#define OPCODE_FUNC_ID_MASK                 0x30
#define OUTBOUND_MAC_IOCB                   0x01
#define FN0_MA_BITS_MASK    0x00
#define FN1_MA_BITS_MASK    0x80
struct ob_mac_iocb_req ;
#define OB_MAC_IOCB_REQ_E   0x80000000
#define OB_MAC_IOCB_REQ_C   0x40000000
#define OB_MAC_IOCB_REQ_L   0x20000000
#define OB_MAC_IOCB_REQ_R   0x10000000
struct ob_mac_iocb_rsp ;
struct ib_mac_iocb_rsp ;
struct ob_ip_iocb_req ;
#define OB_IP_IOCB_REQ_E    0x80000000
#define OB_IP_IOCB_REQ_C    0x40000000
#define OB_IP_IOCB_REQ_L    0x20000000
#define OB_IP_IOCB_REQ_R    0x10000000
struct ob_ip_iocb_rsp ;
struct ib_ip_iocb_rsp ;
struct net_rsp_iocb ;
#define PORT0_PHY_ADDRESS   0x1e00
#define PORT1_PHY_ADDRESS   0x1f00
#define ETHERNET_CRC_SIZE   4
#define MII_SCAN_REGISTER 0x00000001
#define PHY_ID_0_REG    2
#define PHY_ID_1_REG    3
#define PHY_OUI_1_MASK       0xfc00
#define PHY_MODEL_MASK       0x03f0
#define MII_AGERE_ADDR_1  0x00001000
#define MII_AGERE_ADDR_2  0x00001100
enum ;
enum ;
enum ;
enum ;
struct ql3xxx_common_registers ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct ql3xxx_port_registers ;
struct ql3xxx_host_memory_registers ;
struct ql3xxx_local_ram_registers ;
#define LS_64BITS(x)    (u32)(0xffffffff & ((u64)x))
#define MS_64BITS(x)    (u32)(0xffffffff & (((u64)x)>>16>>16) )
enum ;
enum ;
enum ;
enum ;
struct eeprom_port_cfg ;
struct eeprom_bios_cfg ;
struct eeprom_function_cfg ;
struct eeprom_data ;
#define QL3XXX_VENDOR_ID    0x1077
#define QL3022_DEVICE_ID    0x3022
#define QL3032_DEVICE_ID    0x3032
#define NORMAL_MTU_SIZE 		ETH_DATA_LEN
#define JUMBO_MTU_SIZE 			9000
#define VLAN_ID_LEN			    2
#define NUM_REQ_Q_ENTRIES   256
#define NUM_RSP_Q_ENTRIES   256
#define NUM_LBUFQ_ENTRIES   	128
#define JUMBO_NUM_LBUFQ_ENTRIES 32
#define NUM_SBUFQ_ENTRIES   	64
#define QL_SMALL_BUFFER_SIZE    32
#define QL_ADDR_ELE_PER_BUFQ_ENTRY \
(sizeof(struct lrg_buf_q_entry) / sizeof(struct bufq_addr_element))
#define NUM_SMALL_BUFFERS     	NUM_SBUFQ_ENTRIES * QL_ADDR_ELE_PER_BUFQ_ENTRY
#define QL_HEADER_SPACE 32
struct lrg_buf_q_entry ;
struct bufq_addr_element ;
#define QL_NO_RESET			0
#define QL_DO_RESET			1
enum link_state_t ;
struct ql_rcv_buf_cb ;
#define MAX_OAL_CNT ((MAX_SKB_FRAGS-1)/4 + 1)
struct oal_entry ;
struct oal ;
struct map_list ;
struct ql_tx_buf_cb ;
#define QL_BUF_TYPE_MACIOCB 0x01
#define QL_BUF_TYPE_IPIOCB  0x02
#define QL_BUF_TYPE_TCPIOCB 0x03
enum ;
struct ql3_adapter ;
