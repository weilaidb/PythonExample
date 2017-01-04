static int be_get_temp_freq = 32;
static void be_mcc_notify(struct be_adapter *adapter)
static inline bool be_mcc_compl_is_new(struct be_mcc_compl *compl)
static inline void be_mcc_compl_use(struct be_mcc_compl *compl)
static int be_mcc_compl_process(struct be_adapter *adapter,
struct be_mcc_compl *compl)
static void be_async_link_state_process(struct be_adapter *adapter,
struct be_async_event_link_state *evt)
static void be_async_grp5_cos_priority_process(struct be_adapter *adapter,
struct be_async_event_grp5_cos_priority *evt)
static void be_async_grp5_qos_speed_process(struct be_adapter *adapter,
struct be_async_event_grp5_qos_link_speed *evt)
static void be_async_grp5_pvid_state_process(struct be_adapter *adapter,
struct be_async_event_grp5_pvid_state *evt)
static void be_async_grp5_evt_process(struct be_adapter *adapter,
u32 trailer, struct be_mcc_compl *evt)
static inline bool is_link_state_evt(u32 trailer)
static inline bool is_grp5_evt(u32 trailer)
static struct be_mcc_compl *be_mcc_compl_get(struct be_adapter *adapter)
void be_async_mcc_enable(struct be_adapter *adapter)
void be_async_mcc_disable(struct be_adapter *adapter)
int be_process_mcc(struct be_adapter *adapter, int *status)
static int be_mcc_wait_compl(struct be_adapter *adapter)
static int be_mcc_notify_wait(struct be_adapter *adapter)
static int be_mbox_db_ready_wait(struct be_adapter *adapter, void __iomem *db)
static int be_mbox_notify_wait(struct be_adapter *adapter)
static int be_POST_stage_get(struct be_adapter *adapter, u16 *stage)
int be_cmd_POST(struct be_adapter *adapter)
static inline void *embedded_payload(struct be_mcc_wrb *wrb)
static inline struct be_sge *nonembedded_sgl(struct be_mcc_wrb *wrb)
static void be_wrb_hdr_prepare(struct be_mcc_wrb *wrb, int payload_len,
bool embedded, u8 sge_cnt, u32 opcode)
static void be_cmd_hdr_prepare(struct be_cmd_req_hdr *req_hdr,
u8 subsystem, u8 opcode, int cmd_len)
static void be_cmd_page_addrs_prepare(struct phys_addr *pages, u32 max_pages,
struct be_dma_mem *mem)
static u32 eq_delay_to_mult(u32 usec_delay)
static inline struct be_mcc_wrb *wrb_from_mbox(struct be_adapter *adapter)
static struct be_mcc_wrb *wrb_from_mccq(struct be_adapter *adapter)
int be_cmd_fw_init(struct be_adapter *adapter)
int be_cmd_fw_clean(struct be_adapter *adapter)
int be_cmd_eq_create(struct be_adapter *adapter,
struct be_queue_info *eq, int eq_delay)
int be_cmd_mac_addr_query(struct be_adapter *adapter, u8 *mac_addr,
u8 type, bool permanent, u32 if_handle)
int be_cmd_pmac_add(struct be_adapter *adapter, u8 *mac_addr,
u32 if_id, u32 *pmac_id, u32 domain)
int be_cmd_pmac_del(struct be_adapter *adapter, u32 if_id, u32 pmac_id, u32 dom)
int be_cmd_cq_create(struct be_adapter *adapter,
struct be_queue_info *cq, struct be_queue_info *eq,
bool sol_evts, bool no_delay, int coalesce_wm)
static u32 be_encoded_q_len(int q_len)
int be_cmd_mccq_create(struct be_adapter *adapter,
struct be_queue_info *mccq,
struct be_queue_info *cq)
int be_cmd_txq_create(struct be_adapter *adapter,
struct be_queue_info *txq,
struct be_queue_info *cq)
int be_cmd_rxq_create(struct be_adapter *adapter,
struct be_queue_info *rxq, u16 cq_id, u16 frag_size,
u16 max_frame_size, u32 if_id, u32 rss, u8 *rss_id)
int be_cmd_q_destroy(struct be_adapter *adapter, struct be_queue_info *q,
int queue_type)
int be_cmd_if_create(struct be_adapter *adapter, u32 cap_flags, u32 en_flags,
u8 *mac, bool pmac_invalid, u32 *if_handle, u32 *pmac_id,
u32 domain)
int be_cmd_if_destroy(struct be_adapter *adapter, u32 interface_id, u32 domain)
int be_cmd_get_stats(struct be_adapter *adapter, struct be_dma_mem *nonemb_cmd)
int lancer_cmd_get_pport_stats(struct be_adapter *adapter,
struct be_dma_mem *nonemb_cmd)
int be_cmd_link_status_query(struct be_adapter *adapter,
bool *link_up, u8 *mac_speed, u16 *link_speed, u32 dom)
int be_cmd_get_die_temperature(struct be_adapter *adapter)
int be_cmd_get_reg_len(struct be_adapter *adapter, u32 *log_size)
void be_cmd_get_regs(struct be_adapter *adapter, u32 buf_len, void *buf)
int be_cmd_get_fw_ver(struct be_adapter *adapter, char *fw_ver)
int be_cmd_modify_eqd(struct be_adapter *adapter, u32 eq_id, u32 eqd)
int be_cmd_vlan_config(struct be_adapter *adapter, u32 if_id, u16 *vtag_array,
u32 num, bool untagged, bool promiscuous)
int be_cmd_promiscuous_config(struct be_adapter *adapter, bool en)
int be_cmd_multicast_set(struct be_adapter *adapter, u32 if_id,
struct net_device *netdev, struct be_dma_mem *mem)
int be_cmd_set_flow_control(struct be_adapter *adapter, u32 tx_fc, u32 rx_fc)
int be_cmd_get_flow_control(struct be_adapter *adapter, u32 *tx_fc, u32 *rx_fc)
int be_cmd_query_fw_cfg(struct be_adapter *adapter, u32 *port_num,
u32 *mode, u32 *caps)
int be_cmd_reset_function(struct be_adapter *adapter)
int be_cmd_rss_config(struct be_adapter *adapter, u8 *rsstable, u16 table_size)
int be_cmd_set_beacon_state(struct be_adapter *adapter, u8 port_num,
u8 bcn, u8 sts, u8 state)
int be_cmd_get_beacon_state(struct be_adapter *adapter, u8 port_num, u32 *state)
int lancer_cmd_write_object(struct be_adapter *adapter, struct be_dma_mem *cmd,
u32 data_size, u32 data_offset, const char *obj_name,
u32 *data_written, u8 *addn_status)
int be_cmd_write_flashrom(struct be_adapter *adapter, struct be_dma_mem *cmd,
u32 flash_type, u32 flash_opcode, u32 buf_size)
int be_cmd_get_flash_crc(struct be_adapter *adapter, u8 *flashed_crc,
int offset)
int be_cmd_enable_magic_wol(struct be_adapter *adapter, u8 *mac,
struct be_dma_mem *nonemb_cmd)
int be_cmd_set_loopback(struct be_adapter *adapter, u8 port_num,
u8 loopback_type, u8 enable)
int be_cmd_loopback_test(struct be_adapter *adapter, u32 port_num,
u32 loopback_type, u32 pkt_size, u32 num_pkts, u64 pattern)
int be_cmd_ddr_dma_test(struct be_adapter *adapter, u64 pattern,
u32 byte_cnt, struct be_dma_mem *cmd)
int be_cmd_get_seeprom_data(struct be_adapter *adapter,
struct be_dma_mem *nonemb_cmd)
int be_cmd_get_phy_info(struct be_adapter *adapter, struct be_dma_mem *cmd)
int be_cmd_set_qos(struct be_adapter *adapter, u32 bps, u32 domain)
int be_cmd_get_cntl_attributes(struct be_adapter *adapter)
int be_cmd_check_native_mode(struct be_adapter *adapter)
