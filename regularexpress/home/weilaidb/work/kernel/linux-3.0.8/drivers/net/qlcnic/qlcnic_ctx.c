static u32
qlcnic_poll_rsp(struct qlcnic_adapter *adapter)
u32
qlcnic_issue_cmd(struct qlcnic_adapter *adapter,
u32 pci_fn, u32 version, u32 arg1, u32 arg2, u32 arg3, u32 cmd)
static uint32_t qlcnic_temp_checksum(uint32_t *temp_buffer, u16 temp_size)
int qlcnic_fw_cmd_get_minidump_temp(struct qlcnic_adapter *adapter)
int
qlcnic_fw_cmd_set_mtu(struct qlcnic_adapter *adapter, int mtu)
static int
qlcnic_fw_cmd_create_rx_ctx(struct qlcnic_adapter *adapter)
static void
qlcnic_fw_cmd_destroy_rx_ctx(struct qlcnic_adapter *adapter)
static int
qlcnic_fw_cmd_create_tx_ctx(struct qlcnic_adapter *adapter)
static void
qlcnic_fw_cmd_destroy_tx_ctx(struct qlcnic_adapter *adapter)
int
qlcnic_fw_cmd_set_port(struct qlcnic_adapter *adapter, u32 config)
int qlcnic_alloc_hw_resources(struct qlcnic_adapter *adapter)
int qlcnic_fw_create_ctx(struct qlcnic_adapter *adapter)
void qlcnic_fw_destroy_ctx(struct qlcnic_adapter *adapter)
void qlcnic_free_hw_resources(struct qlcnic_adapter *adapter)
int qlcnic_get_mac_address(struct qlcnic_adapter *adapter, u8 *mac)
int qlcnic_get_nic_info(struct qlcnic_adapter *adapter,
struct qlcnic_info *npar_info, u8 func_id)
int qlcnic_set_nic_info(struct qlcnic_adapter *adapter, struct qlcnic_info *nic)
int qlcnic_get_pci_info(struct qlcnic_adapter *adapter,
struct qlcnic_pci_info *pci_info)
int qlcnic_config_port_mirroring(struct qlcnic_adapter *adapter, u8 id,
u8 enable_mirroring, u8 pci_func)
int qlcnic_get_port_stats(struct qlcnic_adapter *adapter, const u8 func,
const u8 rx_tx, struct __qlcnic_esw_statistics *esw_stats)
int qlcnic_get_eswitch_stats(struct qlcnic_adapter *adapter, const u8 eswitch,
const u8 rx_tx, struct __qlcnic_esw_statistics *esw_stats)
int qlcnic_clear_esw_stats(struct qlcnic_adapter *adapter, const u8 func_esw,
const u8 port, const u8 rx_tx)
static int
__qlcnic_get_eswitch_port_config(struct qlcnic_adapter *adapter,
u32 *arg1, u32 *arg2)
int qlcnic_config_switch_port(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg)
int
qlcnic_get_eswitch_port_config(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg)
