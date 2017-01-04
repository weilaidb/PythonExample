unsigned int beiscsi_get_boot_target(struct beiscsi_hba *phba)
unsigned int beiscsi_get_session_info(struct beiscsi_hba *phba,
u32 boot_session_handle,
struct be_dma_mem *nonemb_cmd)
int mgmt_get_fw_config(struct be_ctrl_info *ctrl,
struct beiscsi_hba *phba)
int mgmt_check_supported_fw(struct be_ctrl_info *ctrl,
struct beiscsi_hba *phba)
int mgmt_epfw_cleanup(struct beiscsi_hba *phba, unsigned short chute)
unsigned int  mgmt_invalidate_icds(struct beiscsi_hba *phba,
struct invalidate_command_table *inv_tbl,
unsigned int num_invalidate, unsigned int cid,
struct be_dma_mem *nonemb_cmd)
unsigned int mgmt_invalidate_connection(struct beiscsi_hba *phba,
struct beiscsi_endpoint *beiscsi_ep,
unsigned short cid,
unsigned short issue_reset,
unsigned short savecfg_flag)
unsigned int mgmt_upload_connection(struct beiscsi_hba *phba,
unsigned short cid, unsigned int upload_flag)
int mgmt_open_connection(struct beiscsi_hba *phba,
struct sockaddr *dst_addr,
struct beiscsi_endpoint *beiscsi_ep,
struct be_dma_mem *nonemb_cmd)
unsigned int be_cmd_get_mac_addr(struct beiscsi_hba *phba)
