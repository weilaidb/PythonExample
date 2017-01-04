#define _BEISCSI_MGMT_
struct amap_mcc_sge  __packed;
struct amap_mcc_wrb_payload  __packed;
struct amap_mcc_wrb ;
struct mcc_sge  __packed;
struct mcc_wrb_payload  __packed;
#define MCC_WRB_EMBEDDED_MASK                0x00000001
struct mcc_wrb ;
int mgmt_epfw_cleanup(struct beiscsi_hba *phba, unsigned short chute);
int mgmt_open_connection(struct beiscsi_hba *phba,
struct sockaddr *dst_addr,
struct beiscsi_endpoint *beiscsi_ep,
struct be_dma_mem *nonemb_cmd);
unsigned int mgmt_upload_connection(struct beiscsi_hba *phba,
unsigned short cid,
unsigned int upload_flag);
unsigned int mgmt_invalidate_icds(struct beiscsi_hba *phba,
struct invalidate_command_table *inv_tbl,
unsigned int num_invalidate, unsigned int cid,
struct be_dma_mem *nonemb_cmd);
struct iscsi_invalidate_connection_params_in  __packed;
struct iscsi_invalidate_connection_params_out  __packed;
union iscsi_invalidate_connection_params  __packed;
struct invalidate_commands_params_in  __packed;
struct invalidate_commands_params_out  __packed;
union invalidate_commands_params  __packed;
struct mgmt_hba_attributes  __packed;
struct mgmt_controller_attributes  __packed;
struct be_mgmt_controller_attributes  __packed;
struct be_mgmt_controller_attributes_resp  __packed;
#define GET_MGMT_CONTROLLER_WS(phba)    (phba->pmgmt_ws)
#define MGMT_CMDH_FREE                (1<<0)
#define MGMT_STATUS_SUCCESS 0
#define MGMT_STATUS_FAILED 1
#define ISCSI_GET_PDU_TEMPLATE_ADDRESS(pc, pa)
struct beiscsi_endpoint ;
int mgmt_get_fw_config(struct be_ctrl_info *ctrl,
struct beiscsi_hba *phba);
unsigned int mgmt_invalidate_connection(struct beiscsi_hba *phba,
struct beiscsi_endpoint *beiscsi_ep,
unsigned short cid,
unsigned short issue_reset,
unsigned short savecfg_flag);
