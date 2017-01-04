struct be_sge ;
#define MCC_WRB_EMBEDDED_MASK	1
#define MCC_WRB_SGE_CNT_SHIFT	3
#define MCC_WRB_SGE_CNT_MASK	0x1F
struct be_mcc_wrb ;
#define CQE_FLAGS_VALID_MASK 		(1 << 31)
#define CQE_FLAGS_ASYNC_MASK 		(1 << 30)
#define CQE_FLAGS_COMPLETED_MASK 	(1 << 28)
#define CQE_FLAGS_CONSUMED_MASK 	(1 << 27)
enum ;
#define CQE_STATUS_COMPL_MASK		0xFFFF
#define CQE_STATUS_COMPL_SHIFT		0
#define CQE_STATUS_EXTD_MASK		0xFFFF
#define CQE_STATUS_EXTD_SHIFT		16
struct be_mcc_compl ;
#define ASYNC_TRAILER_EVENT_CODE_SHIFT	8
#define ASYNC_TRAILER_EVENT_CODE_MASK	0xFF
#define ASYNC_TRAILER_EVENT_TYPE_SHIFT	16
#define ASYNC_TRAILER_EVENT_TYPE_MASK	0xFF
#define ASYNC_EVENT_CODE_LINK_STATE	0x1
#define ASYNC_EVENT_CODE_GRP_5		0x5
#define ASYNC_EVENT_QOS_SPEED		0x1
#define ASYNC_EVENT_COS_PRIORITY	0x2
#define ASYNC_EVENT_PVID_STATE		0x3
struct be_async_event_trailer ;
enum ;
struct be_async_event_link_state  __packed;
struct be_async_event_grp5_qos_link_speed  __packed;
struct be_async_event_grp5_cos_priority  __packed;
struct be_async_event_grp5_pvid_state  __packed;
struct be_mcc_mailbox ;
#define CMD_SUBSYSTEM_COMMON	0x1
#define CMD_SUBSYSTEM_ETH 	0x3
#define CMD_SUBSYSTEM_LOWLEVEL  0xb
#define OPCODE_COMMON_NTWK_MAC_QUERY			1
#define OPCODE_COMMON_NTWK_MAC_SET			2
#define OPCODE_COMMON_NTWK_MULTICAST_SET		3
#define OPCODE_COMMON_NTWK_VLAN_CONFIG  		4
#define OPCODE_COMMON_NTWK_LINK_STATUS_QUERY		5
#define OPCODE_COMMON_READ_FLASHROM			6
#define OPCODE_COMMON_WRITE_FLASHROM			7
#define OPCODE_COMMON_CQ_CREATE				12
#define OPCODE_COMMON_EQ_CREATE				13
#define OPCODE_COMMON_MCC_CREATE			21
#define OPCODE_COMMON_SET_QOS				28
#define OPCODE_COMMON_MCC_CREATE_EXT			90
#define OPCODE_COMMON_SEEPROM_READ			30
#define OPCODE_COMMON_GET_CNTL_ATTRIBUTES               32
#define OPCODE_COMMON_NTWK_RX_FILTER    		34
#define OPCODE_COMMON_GET_FW_VERSION			35
#define OPCODE_COMMON_SET_FLOW_CONTROL			36
#define OPCODE_COMMON_GET_FLOW_CONTROL			37
#define OPCODE_COMMON_SET_FRAME_SIZE			39
#define OPCODE_COMMON_MODIFY_EQ_DELAY			41
#define OPCODE_COMMON_FIRMWARE_CONFIG			42
#define OPCODE_COMMON_NTWK_INTERFACE_CREATE 		50
#define OPCODE_COMMON_NTWK_INTERFACE_DESTROY 		51
#define OPCODE_COMMON_MCC_DESTROY        		53
#define OPCODE_COMMON_CQ_DESTROY        		54
#define OPCODE_COMMON_EQ_DESTROY        		55
#define OPCODE_COMMON_QUERY_FIRMWARE_CONFIG		58
#define OPCODE_COMMON_NTWK_PMAC_ADD			59
#define OPCODE_COMMON_NTWK_PMAC_DEL			60
#define OPCODE_COMMON_FUNCTION_RESET			61
#define OPCODE_COMMON_MANAGE_FAT			68
#define OPCODE_COMMON_ENABLE_DISABLE_BEACON		69
#define OPCODE_COMMON_GET_BEACON_STATE			70
#define OPCODE_COMMON_READ_TRANSRECV_DATA		73
#define OPCODE_COMMON_GET_PHY_DETAILS			102
#define OPCODE_COMMON_SET_DRIVER_FUNCTION_CAP		103
#define OPCODE_COMMON_GET_CNTL_ADDITIONAL_ATTRIBUTES	121
#define OPCODE_COMMON_WRITE_OBJECT			172
#define OPCODE_ETH_RSS_CONFIG				1
#define OPCODE_ETH_ACPI_CONFIG				2
#define OPCODE_ETH_PROMISCUOUS				3
#define OPCODE_ETH_GET_STATISTICS			4
#define OPCODE_ETH_TX_CREATE				7
#define OPCODE_ETH_RX_CREATE            		8
#define OPCODE_ETH_TX_DESTROY           		9
#define OPCODE_ETH_RX_DESTROY           		10
#define OPCODE_ETH_ACPI_WOL_MAGIC_CONFIG		12
#define OPCODE_ETH_GET_PPORT_STATS			18
#define OPCODE_LOWLEVEL_HOST_DDR_DMA                    17
#define OPCODE_LOWLEVEL_LOOPBACK_TEST                   18
#define OPCODE_LOWLEVEL_SET_LOOPBACK_MODE		19
struct be_cmd_req_hdr ;
#define RESP_HDR_INFO_OPCODE_SHIFT	0
#define RESP_HDR_INFO_SUBSYS_SHIFT	8
struct be_cmd_resp_hdr ;
struct phys_addr ;
struct amap_eq_context  __packed;
struct be_cmd_req_eq_create  __packed;
struct be_cmd_resp_eq_create  __packed;
enum ;
struct mac_addr  __packed;
struct be_cmd_req_mac_query  __packed;
struct be_cmd_resp_mac_query ;
struct be_cmd_req_pmac_add  __packed;
struct be_cmd_resp_pmac_add ;
struct be_cmd_req_pmac_del ;
struct amap_cq_context_be  __packed;
struct amap_cq_context_lancer  __packed;
struct be_cmd_req_cq_create  __packed;
struct be_cmd_resp_cq_create  __packed;
struct be_cmd_req_get_fat  __packed;
struct be_cmd_resp_get_fat  __packed;
struct amap_mcc_context_be  __packed;
struct amap_mcc_context_lancer  __packed;
struct be_cmd_req_mcc_create  __packed;
struct be_cmd_resp_mcc_create  __packed;
#define BE_ETH_TX_RING_TYPE_STANDARD    	2
#define BE_ULP1_NUM				1
struct amap_tx_context  __packed;
struct be_cmd_req_eth_tx_create  __packed;
struct be_cmd_resp_eth_tx_create  __packed;
struct be_cmd_req_eth_rx_create  __packed;
struct be_cmd_resp_eth_rx_create  __packed;
enum ;
struct be_cmd_req_q_destroy  __packed;
enum be_if_flags ;
struct be_cmd_req_if_create  __packed;
struct be_cmd_resp_if_create ;
struct be_cmd_req_if_destroy ;
struct be_port_rxf_stats_v0 ;
struct be_rxf_stats_v0 ;
struct be_erx_stats_v0 ;
struct be_pmem_stats ;
struct be_hw_stats_v0 ;
struct be_cmd_req_get_stats_v0 ;
struct be_cmd_resp_get_stats_v0 ;
#define make_64bit_val(hi_32, lo_32)	(((u64)hi_32<<32) | lo_32)
struct lancer_cmd_pport_stats ;
struct pport_stats_params ;
struct lancer_cmd_req_pport_stats ;
struct lancer_cmd_resp_pport_stats ;
static inline  struct lancer_cmd_pport_stats*
pport_stats_from_cmd(struct be_adapter *adapter)
struct be_cmd_req_get_cntl_addnl_attribs ;
struct be_cmd_resp_get_cntl_addnl_attribs ;
struct be_cmd_req_vlan_config  __packed;
#define BE_MAX_MC		64
struct macaddr ;
struct be_cmd_req_mcast_mac_config  __packed;
struct be_cmd_req_rx_filter ;
struct be_cmd_req_link_status ;
enum ;
enum ;
struct be_cmd_resp_link_status  __packed;
struct be_cmd_req_port_type ;
enum ;
struct be_cmd_resp_port_type ;
struct be_cmd_req_get_fw_version  __packed;
struct be_cmd_resp_get_fw_version  __packed;
struct be_cmd_req_set_flow_control  __packed;
struct be_cmd_req_get_flow_control ;
struct be_cmd_resp_get_flow_control  __packed;
struct be_cmd_req_modify_eq_delay  __packed;
struct be_cmd_resp_modify_eq_delay  __packed;
#define BE_FUNCTION_CAPS_RSS			0x2
struct be_cmd_req_query_fw_cfg ;
struct be_cmd_resp_query_fw_cfg ;
#define RSS_ENABLE_NONE				0x0
#define RSS_ENABLE_IPV4				0x1
#define RSS_ENABLE_TCP_IPV4			0x2
#define RSS_ENABLE_IPV6				0x4
#define RSS_ENABLE_TCP_IPV6			0x8
struct be_cmd_req_rss_config ;
#define BEACON_STATE_ENABLED		0x1
#define BEACON_STATE_DISABLED		0x0
struct be_cmd_req_enable_disable_beacon  __packed;
struct be_cmd_resp_enable_disable_beacon  __packed;
struct be_cmd_req_get_beacon_state  __packed;
struct be_cmd_resp_get_beacon_state  __packed;
struct flashrom_params ;
struct be_cmd_write_flashrom ;
struct amap_lancer_write_obj_context  __packed;
struct lancer_cmd_req_write_object ;
struct lancer_cmd_resp_write_object ;
struct be_cmd_req_acpi_wol_magic_config __packed;
struct be_cmd_req_loopback_test ;
struct be_cmd_resp_loopback_test ;
struct be_cmd_req_set_lmode ;
struct be_cmd_resp_set_lmode ;
struct be_cmd_req_ddrdma_test ;
struct be_cmd_resp_ddrdma_test ;
#define BE_READ_SEEPROM_LEN 1024
struct be_cmd_req_seeprom_read ;
struct be_cmd_resp_seeprom_read ;
enum ;
struct be_cmd_req_get_phy_info ;
struct be_cmd_resp_get_phy_info ;
#define BE_QOS_BITS_NIC				1
struct be_cmd_req_set_qos ;
struct be_cmd_resp_set_qos ;
struct be_cmd_req_cntl_attribs ;
struct be_cmd_resp_cntl_attribs ;
#define CAPABILITY_SW_TIMESTAMPS	2
#define CAPABILITY_BE3_NATIVE_ERX_API	4
struct be_cmd_req_set_func_cap ;
struct be_cmd_resp_set_func_cap ;
#define BE_TXP_SW_SZ			48
struct be_port_rxf_stats_v1 ;
struct be_rxf_stats_v1 ;
struct be_erx_stats_v1 ;
struct be_hw_stats_v1 ;
struct be_cmd_req_get_stats_v1 ;
struct be_cmd_resp_get_stats_v1 ;
static inline void *
hw_stats_from_cmd(struct be_adapter *adapter)
static inline void *be_port_rxf_stats_from_cmd(struct be_adapter *adapter)
static inline void *be_rxf_stats_from_cmd(struct be_adapter *adapter)
static inline void *be_erx_stats_from_cmd(struct be_adapter *adapter)
static inline void *be_pmem_stats_from_cmd(struct be_adapter *adapter)
extern int be_pci_fnum_get(struct be_adapter *adapter);
extern int be_cmd_POST(struct be_adapter *adapter);
extern int be_cmd_mac_addr_query(struct be_adapter *adapter, u8 *mac_addr,
u8 type, bool permanent, u32 if_handle);
extern int be_cmd_pmac_add(struct be_adapter *adapter, u8 *mac_addr,
u32 if_id, u32 *pmac_id, u32 domain);
extern int be_cmd_pmac_del(struct be_adapter *adapter, u32 if_id,
u32 pmac_id, u32 domain);
extern int be_cmd_if_create(struct be_adapter *adapter, u32 cap_flags,
u32 en_flags, u8 *mac, bool pmac_invalid,
u32 *if_handle, u32 *pmac_id, u32 domain);
extern int be_cmd_if_destroy(struct be_adapter *adapter, u32 if_handle,
u32 domain);
extern int be_cmd_eq_create(struct be_adapter *adapter,
struct be_queue_info *eq, int eq_delay);
extern int be_cmd_cq_create(struct be_adapter *adapter,
struct be_queue_info *cq, struct be_queue_info *eq,
bool sol_evts, bool no_delay,
int num_cqe_dma_coalesce);
extern int be_cmd_mccq_create(struct be_adapter *adapter,
struct be_queue_info *mccq,
struct be_queue_info *cq);
extern int be_cmd_txq_create(struct be_adapter *adapter,
struct be_queue_info *txq,
struct be_queue_info *cq);
extern int be_cmd_rxq_create(struct be_adapter *adapter,
struct be_queue_info *rxq, u16 cq_id,
u16 frag_size, u16 max_frame_size, u32 if_id,
u32 rss, u8 *rss_id);
extern int be_cmd_q_destroy(struct be_adapter *adapter, struct be_queue_info *q,
int type);
extern int be_cmd_link_status_query(struct be_adapter *adapter,
bool *link_up, u8 *mac_speed, u16 *link_speed, u32 dom);
extern int be_cmd_reset(struct be_adapter *adapter);
extern int be_cmd_get_stats(struct be_adapter *adapter,
struct be_dma_mem *nonemb_cmd);
extern int lancer_cmd_get_pport_stats(struct be_adapter *adapter,
struct be_dma_mem *nonemb_cmd);
extern int be_cmd_get_fw_ver(struct be_adapter *adapter, char *fw_ver);
extern int be_cmd_modify_eqd(struct be_adapter *adapter, u32 eq_id, u32 eqd);
extern int be_cmd_vlan_config(struct be_adapter *adapter, u32 if_id,
u16 *vtag_array, u32 num, bool untagged,
bool promiscuous);
extern int be_cmd_promiscuous_config(struct be_adapter *adapter, bool en);
extern int be_cmd_multicast_set(struct be_adapter *adapter, u32 if_id,
struct net_device *netdev, struct be_dma_mem *mem);
extern int be_cmd_set_flow_control(struct be_adapter *adapter,
u32 tx_fc, u32 rx_fc);
extern int be_cmd_get_flow_control(struct be_adapter *adapter,
u32 *tx_fc, u32 *rx_fc);
extern int be_cmd_query_fw_cfg(struct be_adapter *adapter,
u32 *port_num, u32 *function_mode, u32 *function_caps);
extern int be_cmd_reset_function(struct be_adapter *adapter);
extern int be_cmd_rss_config(struct be_adapter *adapter, u8 *rsstable,
u16 table_size);
extern int be_process_mcc(struct be_adapter *adapter, int *status);
extern int be_cmd_set_beacon_state(struct be_adapter *adapter,
u8 port_num, u8 beacon, u8 status, u8 state);
extern int be_cmd_get_beacon_state(struct be_adapter *adapter,
u8 port_num, u32 *state);
extern int be_cmd_write_flashrom(struct be_adapter *adapter,
struct be_dma_mem *cmd, u32 flash_oper,
u32 flash_opcode, u32 buf_size);
extern int lancer_cmd_write_object(struct be_adapter *adapter,
struct be_dma_mem *cmd,
u32 data_size, u32 data_offset,
const char *obj_name,
u32 *data_written, u8 *addn_status);
int be_cmd_get_flash_crc(struct be_adapter *adapter, u8 *flashed_crc,
int offset);
extern int be_cmd_enable_magic_wol(struct be_adapter *adapter, u8 *mac,
struct be_dma_mem *nonemb_cmd);
extern int be_cmd_fw_init(struct be_adapter *adapter);
extern int be_cmd_fw_clean(struct be_adapter *adapter);
extern void be_async_mcc_enable(struct be_adapter *adapter);
extern void be_async_mcc_disable(struct be_adapter *adapter);
extern int be_cmd_loopback_test(struct be_adapter *adapter, u32 port_num,
u32 loopback_type, u32 pkt_size,
u32 num_pkts, u64 pattern);
extern int be_cmd_ddr_dma_test(struct be_adapter *adapter, u64 pattern,
u32 byte_cnt, struct be_dma_mem *cmd);
extern int be_cmd_get_seeprom_data(struct be_adapter *adapter,
struct be_dma_mem *nonemb_cmd);
extern int be_cmd_set_loopback(struct be_adapter *adapter, u8 port_num,
u8 loopback_type, u8 enable);
extern int be_cmd_get_phy_info(struct be_adapter *adapter,
struct be_dma_mem *cmd);
extern int be_cmd_set_qos(struct be_adapter *adapter, u32 bps, u32 domain);
extern void be_detect_dump_ue(struct be_adapter *adapter);
extern int be_cmd_get_die_temperature(struct be_adapter *adapter);
extern int be_cmd_get_cntl_attributes(struct be_adapter *adapter);
extern int be_cmd_check_native_mode(struct be_adapter *adapter);
extern int be_cmd_get_reg_len(struct be_adapter *adapter, u32 *log_size);
extern void be_cmd_get_regs(struct be_adapter *adapter, u32 buf_len, void *buf);
