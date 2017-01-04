#define BNX2X_LINK_H
#define DEFAULT_PHY_DEV_ADDR	3
#define E2_DEFAULT_PHY_DEV_ADDR	5
#define BNX2X_FLOW_CTRL_AUTO		PORT_FEATURE_FLOW_CONTROL_AUTO
#define BNX2X_FLOW_CTRL_TX		PORT_FEATURE_FLOW_CONTROL_TX
#define BNX2X_FLOW_CTRL_RX		PORT_FEATURE_FLOW_CONTROL_RX
#define BNX2X_FLOW_CTRL_BOTH		PORT_FEATURE_FLOW_CONTROL_BOTH
#define BNX2X_FLOW_CTRL_NONE		PORT_FEATURE_FLOW_CONTROL_NONE
#define SPEED_AUTO_NEG		0
#define SPEED_12000		12000
#define SPEED_12500		12500
#define SPEED_13000		13000
#define SPEED_15000		15000
#define SPEED_16000		16000
#define SFP_EEPROM_VENDOR_NAME_ADDR		0x14
#define SFP_EEPROM_VENDOR_NAME_SIZE		16
#define SFP_EEPROM_VENDOR_OUI_ADDR		0x25
#define SFP_EEPROM_VENDOR_OUI_SIZE		3
#define SFP_EEPROM_PART_NO_ADDR			0x28
#define SFP_EEPROM_PART_NO_SIZE			16
#define PWR_FLT_ERR_MSG_LEN			250
#define XGXS_EXT_PHY_TYPE(ext_phy_config) \
((ext_phy_config) & PORT_HW_CFG_XGXS_EXT_PHY_TYPE_MASK)
#define XGXS_EXT_PHY_ADDR(ext_phy_config) \
(((ext_phy_config) & PORT_HW_CFG_XGXS_EXT_PHY_ADDR_MASK) >> \
PORT_HW_CFG_XGXS_EXT_PHY_ADDR_SHIFT)
#define SERDES_EXT_PHY_TYPE(ext_phy_config) \
((ext_phy_config) & PORT_HW_CFG_SERDES_EXT_PHY_TYPE_MASK)
#define SINGLE_MEDIA_DIRECT(params)	(params->num_phys == 1)
#define SINGLE_MEDIA(params)		(params->num_phys == 2)
#define DUAL_MEDIA(params)		(params->num_phys == 3)
#define FW_PARAM_MDIO_CTRL_OFFSET		16
#define FW_PARAM_SET(phy_addr, phy_type, mdio_access) \
(phy_addr | phy_type | mdio_access << FW_PARAM_MDIO_CTRL_OFFSET)
#define PFC_BRB_MAC_PAUSE_XOFF_THRESHOLD_PAUSEABLE		170
#define PFC_BRB_MAC_PAUSE_XOFF_THRESHOLD_NON_PAUSEABLE		0
#define PFC_BRB_MAC_PAUSE_XON_THRESHOLD_PAUSEABLE			250
#define PFC_BRB_MAC_PAUSE_XON_THRESHOLD_NON_PAUSEABLE		0
#define PFC_BRB_MAC_FULL_XOFF_THRESHOLD_PAUSEABLE			10
#define PFC_BRB_MAC_FULL_XOFF_THRESHOLD_NON_PAUSEABLE		90
#define PFC_BRB_MAC_FULL_XON_THRESHOLD_PAUSEABLE			50
#define PFC_BRB_MAC_FULL_XON_THRESHOLD_NON_PAUSEABLE		250
#define PFC_BRB_FULL_LB_XOFF_THRESHOLD				170
#define PFC_BRB_FULL_LB_XON_THRESHOLD				250
#define INT_PHY		0
#define EXT_PHY1	1
#define EXT_PHY2	2
#define MAX_PHYS	3
#define LINK_CONFIG_SIZE (MAX_PHYS - 1)
#define LINK_CONFIG_IDX(_phy_idx) ((_phy_idx == INT_PHY) ? \
0 : (_phy_idx - 1))
struct link_vars;
struct link_params;
struct bnx2x_phy;
typedef u8 (*config_init_t)(struct bnx2x_phy *phy, struct link_params *params,
struct link_vars *vars);
typedef u8 (*read_status_t)(struct bnx2x_phy *phy, struct link_params *params,
struct link_vars *vars);
typedef void (*link_reset_t)(struct bnx2x_phy *phy,
struct link_params *params);
typedef void (*config_loopback_t)(struct bnx2x_phy *phy,
struct link_params *params);
typedef u8 (*format_fw_ver_t)(u32 raw, u8 *str, u16 *len);
typedef void (*hw_reset_t)(struct bnx2x_phy *phy, struct link_params *params);
typedef void (*set_link_led_t)(struct bnx2x_phy *phy,
struct link_params *params, u8 mode);
typedef void (*phy_specific_func_t)(struct bnx2x_phy *phy,
struct link_params *params, u32 action);
struct bnx2x_phy ;
struct link_params ;
struct link_vars ;
u8 bnx2x_phy_init(struct link_params *input, struct link_vars *output);
u8 bnx2x_link_reset(struct link_params *params, struct link_vars *vars,
u8 reset_ext_phy);
u8 bnx2x_link_update(struct link_params *input, struct link_vars *output);
u8 bnx2x_phy_read(struct link_params *params, u8 phy_addr,
u8 devad, u16 reg, u16 *ret_val);
u8 bnx2x_phy_write(struct link_params *params, u8 phy_addr,
u8 devad, u16 reg, u16 val);
void bnx2x_link_status_update(struct link_params *input,
struct link_vars *output);
u8 bnx2x_get_ext_phy_fw_version(struct link_params *params, u8 driver_loaded,
u8 *version, u16 len);
u8 bnx2x_set_led(struct link_params *params, struct link_vars *vars,
u8 mode, u32 speed);
#define LED_MODE_OFF			0
#define LED_MODE_ON			1
#define LED_MODE_OPER			2
#define LED_MODE_FRONT_PANEL_OFF	3
void bnx2x_handle_module_detect_int(struct link_params *params);
u8 bnx2x_test_link(struct link_params *input, struct link_vars *vars,
u8 is_serdes);
u8 bnx2x_common_init_phy(struct bnx2x *bp, u32 shmem_base_path[],
u32 shmem2_base_path[], u32 chip_id);
void bnx2x_ext_phy_hw_reset(struct bnx2x *bp, u8 port);
void bnx2x_sfx7101_sp_sw_reset(struct bnx2x *bp, struct bnx2x_phy *phy);
u8 bnx2x_read_sfp_module_eeprom(struct bnx2x_phy *phy,
struct link_params *params, u16 addr,
u8 byte_cnt, u8 *o_buf);
void bnx2x_hw_reset_phy(struct link_params *params);
u8 bnx2x_hw_lock_required(struct bnx2x *bp, u32 shmem_base,
u32 shmem2_base);
u32 bnx2x_phy_selection(struct link_params *params);
u8 bnx2x_phy_probe(struct link_params *params);
u8 bnx2x_fan_failure_det_req(struct bnx2x *bp, u32 shmem_base,
u32 shmem2_base, u8 port);
struct bnx2x_nig_brb_pfc_port_params ;
void bnx2x_update_pfc(struct link_params *params,
struct link_vars *vars,
struct bnx2x_nig_brb_pfc_port_params *pfc_params);
void bnx2x_ets_disabled(struct link_params *params);
void bnx2x_ets_bw_limit(const struct link_params *params, const u32 cos0_bw,
const u32 cos1_bw);
u8 bnx2x_ets_strict(const struct link_params *params, const u8 strict_cos);
void bnx2x_pfc_statistic(struct link_params *params, struct link_vars *vars,
u32 pfc_frames_sent[2],
u32 pfc_frames_received[2]);
