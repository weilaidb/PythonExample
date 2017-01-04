#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ETH_HLEN			14
#define ETH_OVREHEAD			(ETH_HLEN + 8 + 8)
#define ETH_MIN_PACKET_SIZE		60
#define ETH_MAX_PACKET_SIZE		1500
#define ETH_MAX_JUMBO_PACKET_SIZE	9600
#define MDIO_ACCESS_TIMEOUT		1000
#define BMAC_CONTROL_RX_ENABLE		2
#define NIG_LATCH_BC_ENABLE_MI_INT 0
#define NIG_STATUS_EMAC0_MI_INT \
NIG_STATUS_INTERRUPT_PORT0_REG_STATUS_EMAC0_MISC_MI_INT
#define NIG_STATUS_XGXS0_LINK10G \
NIG_STATUS_INTERRUPT_PORT0_REG_STATUS_XGXS0_LINK10G
#define NIG_STATUS_XGXS0_LINK_STATUS \
NIG_STATUS_INTERRUPT_PORT0_REG_STATUS_XGXS0_LINK_STATUS
#define NIG_STATUS_XGXS0_LINK_STATUS_SIZE \
NIG_STATUS_INTERRUPT_PORT0_REG_STATUS_XGXS0_LINK_STATUS_SIZE
#define NIG_STATUS_SERDES0_LINK_STATUS \
NIG_STATUS_INTERRUPT_PORT0_REG_STATUS_SERDES0_LINK_STATUS
#define NIG_MASK_MI_INT \
NIG_MASK_INTERRUPT_PORT0_REG_MASK_EMAC0_MISC_MI_INT
#define NIG_MASK_XGXS0_LINK10G \
NIG_MASK_INTERRUPT_PORT0_REG_MASK_XGXS0_LINK10G
#define NIG_MASK_XGXS0_LINK_STATUS \
NIG_MASK_INTERRUPT_PORT0_REG_MASK_XGXS0_LINK_STATUS
#define NIG_MASK_SERDES0_LINK_STATUS \
NIG_MASK_INTERRUPT_PORT0_REG_MASK_SERDES0_LINK_STATUS
#define MDIO_AN_CL73_OR_37_COMPLETE \
(MDIO_GP_STATUS_TOP_AN_STATUS1_CL73_AUTONEG_COMPLETE | \
MDIO_GP_STATUS_TOP_AN_STATUS1_CL37_AUTONEG_COMPLETE)
#define XGXS_RESET_BITS \
(MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_XGXS0_RSTB_HW |   \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_XGXS0_IDDQ |      \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_XGXS0_PWRDWN |    \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_XGXS0_PWRDWN_SD | \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_XGXS0_TXD_FIFO_RSTB)
#define SERDES_RESET_BITS \
(MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_SERDES0_RSTB_HW | \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_SERDES0_IDDQ |    \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_SERDES0_PWRDWN |  \
MISC_REGISTERS_RESET_REG_3_MISC_NIG_MUX_SERDES0_PWRDWN_SD)
#define AUTONEG_CL37		SHARED_HW_CFG_AN_ENABLE_CL37
#define AUTONEG_CL73		SHARED_HW_CFG_AN_ENABLE_CL73
#define AUTONEG_BAM		SHARED_HW_CFG_AN_ENABLE_BAM
#define AUTONEG_PARALLEL \
SHARED_HW_CFG_AN_ENABLE_PARALLEL_DETECTION
#define AUTONEG_SGMII_FIBER_AUTODET \
SHARED_HW_CFG_AN_EN_SGMII_FIBER_AUTO_DETECT
#define AUTONEG_REMOTE_PHY	SHARED_HW_CFG_AN_ENABLE_REMOTE_PHY
#define GP_STATUS_PAUSE_RSOLUTION_TXSIDE \
MDIO_GP_STATUS_TOP_AN_STATUS1_PAUSE_RSOLUTION_TXSIDE
#define GP_STATUS_PAUSE_RSOLUTION_RXSIDE \
MDIO_GP_STATUS_TOP_AN_STATUS1_PAUSE_RSOLUTION_RXSIDE
#define GP_STATUS_SPEED_MASK \
MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_MASK
#define GP_STATUS_10M	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_10M
#define GP_STATUS_100M	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_100M
#define GP_STATUS_1G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_1G
#define GP_STATUS_2_5G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_2_5G
#define GP_STATUS_5G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_5G
#define GP_STATUS_6G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_6G
#define GP_STATUS_10G_HIG \
MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_10G_HIG
#define GP_STATUS_10G_CX4 \
MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_10G_CX4
#define GP_STATUS_12G_HIG \
MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_12G_HIG
#define GP_STATUS_12_5G MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_12_5G
#define GP_STATUS_13G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_13G
#define GP_STATUS_15G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_15G
#define GP_STATUS_16G	MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_16G
#define GP_STATUS_1G_KX MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_1G_KX
#define GP_STATUS_10G_KX4 \
MDIO_GP_STATUS_TOP_AN_STATUS1_ACTUAL_SPEED_10G_KX4
#define LINK_10THD		LINK_STATUS_SPEED_AND_DUPLEX_10THD
#define LINK_10TFD		LINK_STATUS_SPEED_AND_DUPLEX_10TFD
#define LINK_100TXHD		LINK_STATUS_SPEED_AND_DUPLEX_100TXHD
#define LINK_100T4		LINK_STATUS_SPEED_AND_DUPLEX_100T4
#define LINK_100TXFD		LINK_STATUS_SPEED_AND_DUPLEX_100TXFD
#define LINK_1000THD		LINK_STATUS_SPEED_AND_DUPLEX_1000THD
#define LINK_1000TFD		LINK_STATUS_SPEED_AND_DUPLEX_1000TFD
#define LINK_1000XFD		LINK_STATUS_SPEED_AND_DUPLEX_1000XFD
#define LINK_2500THD		LINK_STATUS_SPEED_AND_DUPLEX_2500THD
#define LINK_2500TFD		LINK_STATUS_SPEED_AND_DUPLEX_2500TFD
#define LINK_2500XFD		LINK_STATUS_SPEED_AND_DUPLEX_2500XFD
#define LINK_10GTFD		LINK_STATUS_SPEED_AND_DUPLEX_10GTFD
#define LINK_10GXFD		LINK_STATUS_SPEED_AND_DUPLEX_10GXFD
#define LINK_12GTFD		LINK_STATUS_SPEED_AND_DUPLEX_12GTFD
#define LINK_12GXFD		LINK_STATUS_SPEED_AND_DUPLEX_12GXFD
#define LINK_12_5GTFD		LINK_STATUS_SPEED_AND_DUPLEX_12_5GTFD
#define LINK_12_5GXFD		LINK_STATUS_SPEED_AND_DUPLEX_12_5GXFD
#define LINK_13GTFD		LINK_STATUS_SPEED_AND_DUPLEX_13GTFD
#define LINK_13GXFD		LINK_STATUS_SPEED_AND_DUPLEX_13GXFD
#define LINK_15GTFD		LINK_STATUS_SPEED_AND_DUPLEX_15GTFD
#define LINK_15GXFD		LINK_STATUS_SPEED_AND_DUPLEX_15GXFD
#define LINK_16GTFD		LINK_STATUS_SPEED_AND_DUPLEX_16GTFD
#define LINK_16GXFD		LINK_STATUS_SPEED_AND_DUPLEX_16GXFD
#define PHY_XGXS_FLAG			0x1
#define PHY_SGMII_FLAG			0x2
#define PHY_SERDES_FLAG			0x4
#define SFP_EEPROM_CON_TYPE_ADDR		0x2
#define SFP_EEPROM_CON_TYPE_VAL_LC	0x7
#define SFP_EEPROM_CON_TYPE_VAL_COPPER	0x21
#define SFP_EEPROM_COMP_CODE_ADDR		0x3
#define SFP_EEPROM_COMP_CODE_SR_MASK	(1<<4)
#define SFP_EEPROM_COMP_CODE_LR_MASK	(1<<5)
#define SFP_EEPROM_COMP_CODE_LRM_MASK	(1<<6)
#define SFP_EEPROM_FC_TX_TECH_ADDR		0x8
#define SFP_EEPROM_FC_TX_TECH_BITMASK_COPPER_PASSIVE 0x4
#define SFP_EEPROM_FC_TX_TECH_BITMASK_COPPER_ACTIVE  0x8
#define SFP_EEPROM_OPTIONS_ADDR			0x40
#define SFP_EEPROM_OPTIONS_LINEAR_RX_OUT_MASK 0x1
#define SFP_EEPROM_OPTIONS_SIZE			2
#define EDC_MODE_LINEAR				0x0022
#define EDC_MODE_LIMITING				0x0044
#define EDC_MODE_PASSIVE_DAC			0x0055
#define ETS_BW_LIMIT_CREDIT_UPPER_BOUND		(0x5000)
#define ETS_BW_LIMIT_CREDIT_WEIGHT		(0x5000)
#define CL22_WR_OVER_CL45(_bp, _phy, _bank, _addr, _val) \
bnx2x_cl45_write(_bp, _phy, \
(_phy)->def_md_devad, \
(_bank + (_addr & 0xf)), \
_val)
#define CL22_RD_OVER_CL45(_bp, _phy, _bank, _addr, _val) \
bnx2x_cl45_read(_bp, _phy, \
(_phy)->def_md_devad, \
(_bank + (_addr & 0xf)), \
_val)
static u32 bnx2x_bits_en(struct bnx2x *bp, u32 reg, u32 bits)
static u32 bnx2x_bits_dis(struct bnx2x *bp, u32 reg, u32 bits)
void bnx2x_ets_disabled(struct link_params *params)
static void bnx2x_ets_bw_limit_common(const struct link_params *params)
void bnx2x_ets_bw_limit(const struct link_params *params, const u32 cos0_bw,
const u32 cos1_bw)
u8 bnx2x_ets_strict(const struct link_params *params, const u8 strict_cos)
static void bnx2x_bmac2_get_pfc_stat(struct link_params *params,
u32 pfc_frames_sent[2],
u32 pfc_frames_received[2])
static void bnx2x_emac_get_pfc_stat(struct link_params *params,
u32 pfc_frames_sent[2],
u32 pfc_frames_received[2])
void bnx2x_pfc_statistic(struct link_params *params, struct link_vars *vars,
u32 pfc_frames_sent[2],
u32 pfc_frames_received[2])
static void bnx2x_emac_init(struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_emac_enable(struct link_params *params,
struct link_vars *vars, u8 lb)
static void bnx2x_update_pfc_bmac1(struct link_params *params,
struct link_vars *vars)
static void bnx2x_update_pfc_bmac2(struct link_params *params,
struct link_vars *vars,
u8 is_lb)
static void bnx2x_update_pfc_brb(struct link_params *params,
struct link_vars *vars,
struct bnx2x_nig_brb_pfc_port_params *pfc_params)
static void bnx2x_update_pfc_nig(struct link_params *params,
struct link_vars *vars,
struct bnx2x_nig_brb_pfc_port_params *nig_params)
void bnx2x_update_pfc(struct link_params *params,
struct link_vars *vars,
struct bnx2x_nig_brb_pfc_port_params *pfc_params)
static u8 bnx2x_bmac1_enable(struct link_params *params,
struct link_vars *vars,
u8 is_lb)
static u8 bnx2x_bmac2_enable(struct link_params *params,
struct link_vars *vars,
u8 is_lb)
static u8 bnx2x_bmac_enable(struct link_params *params,
struct link_vars *vars,
u8 is_lb)
static void bnx2x_update_mng(struct link_params *params, u32 link_status)
static void bnx2x_bmac_rx_disable(struct bnx2x *bp, u8 port)
static u8 bnx2x_pbf_update(struct link_params *params, u32 flow_ctrl,
u32 line_speed)
static u32 bnx2x_get_emac_base(struct bnx2x *bp,
u32 mdc_mdio_access, u8 port)
static u8 bnx2x_cl45_write(struct bnx2x *bp, struct bnx2x_phy *phy,
u8 devad, u16 reg, u16 val)
static u8 bnx2x_cl45_read(struct bnx2x *bp, struct bnx2x_phy *phy,
u8 devad, u16 reg, u16 *ret_val)
u8 bnx2x_phy_read(struct link_params *params, u8 phy_addr,
u8 devad, u16 reg, u16 *ret_val)
u8 bnx2x_phy_write(struct link_params *params, u8 phy_addr,
u8 devad, u16 reg, u16 val)
static void bnx2x_set_aer_mmd_xgxs(struct link_params *params,
struct bnx2x_phy *phy)
static void bnx2x_set_aer_mmd_serdes(struct bnx2x *bp,
struct bnx2x_phy *phy)
static void bnx2x_set_serdes_access(struct bnx2x *bp, u8 port)
static void bnx2x_serdes_deassert(struct bnx2x *bp, u8 port)
static void bnx2x_xgxs_deassert(struct link_params *params)
void bnx2x_link_status_update(struct link_params *params,
struct link_vars *vars)
static void bnx2x_set_master_ln(struct link_params *params,
struct bnx2x_phy *phy)
static u8 bnx2x_reset_unicore(struct link_params *params,
struct bnx2x_phy *phy,
u8 set_serdes)
static void bnx2x_set_swap_lanes(struct link_params *params,
struct bnx2x_phy *phy)
static void bnx2x_set_parallel_detection(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_set_autoneg(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars,
u8 enable_cl73)
static void bnx2x_program_serdes(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_set_brcm_cl37_advertisment(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_calc_ieee_aneg_adv(struct bnx2x_phy *phy,
struct link_params *params, u16 *ieee_fc)
static void bnx2x_set_ieee_aneg_advertisment(struct bnx2x_phy *phy,
struct link_params *params,
u16 ieee_fc)
static void bnx2x_restart_autoneg(struct bnx2x_phy *phy,
struct link_params *params,
u8 enable_cl73)
static void bnx2x_initialize_sgmii_process(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_pause_resolve(struct link_vars *vars, u32 pause_result)
static u8 bnx2x_direct_parallel_detect_used(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_flow_ctrl_resolve(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars,
u32 gp_status)
static void bnx2x_check_fallback_to_cl37(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_xgxs_an_resolve(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars,
u32 gp_status)
static u8 bnx2x_link_settings_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_set_gmii_tx_driver(struct link_params *params)
static u8 bnx2x_emac_program(struct link_params *params,
struct link_vars *vars)
static void bnx2x_set_preemphasis(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_init_internal_phy(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_init_serdes(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_init_xgxs(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u16 bnx2x_wait_reset_complete(struct bnx2x *bp,
struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_link_int_enable(struct link_params *params)
static void bnx2x_rearm_latch_signal(struct bnx2x *bp, u8 port,
u8 exp_mi_int)
static void bnx2x_link_int_ack(struct link_params *params,
struct link_vars *vars, u8 is_10g)
static u8 bnx2x_format_ver(u32 num, u8 *str, u16 *len)
static u8 bnx2x_null_format_ver(u32 spirom_ver, u8 *str, u16 *len)
u8 bnx2x_get_ext_phy_fw_version(struct link_params *params, u8 driver_loaded,
u8 *version, u16 len)
static void bnx2x_set_xgxs_loopback(struct bnx2x_phy *phy,
struct link_params *params)
u8 bnx2x_set_led(struct link_params *params,
struct link_vars *vars, u8 mode, u32 speed)
u8 bnx2x_test_link(struct link_params *params, struct link_vars *vars,
u8 is_serdes)
static u8 bnx2x_link_initialize(struct link_params *params,
struct link_vars *vars)
static void bnx2x_int_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_common_ext_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_update_link_down(struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_update_link_up(struct link_params *params,
struct link_vars *vars,
u8 link_10g)
u8 bnx2x_link_update(struct link_params *params, struct link_vars *vars)
void bnx2x_ext_phy_hw_reset(struct bnx2x *bp, u8 port)
static void bnx2x_save_spirom_version(struct bnx2x *bp, u8 port,
u32 spirom_ver, u32 ver_addr)
static void bnx2x_save_bcm_spirom_ver(struct bnx2x *bp,
struct bnx2x_phy *phy,
u8 port)
static void bnx2x_ext_phy_set_pause(struct link_params *params,
struct bnx2x_phy *phy,
struct link_vars *vars)
static u8 bnx2x_ext_phy_resolve_fc(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_ext_phy_10G_an_resolve(struct bnx2x *bp,
struct bnx2x_phy *phy,
struct link_vars *vars)
static void bnx2x_8073_resolve_fc(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8073_8727_external_rom_boot(struct bnx2x *bp,
struct bnx2x_phy *phy,
u8 port)
static u8 bnx2x_8073_is_snr_needed(struct bnx2x *bp, struct bnx2x_phy *phy)
static u8 bnx2x_8073_xaui_wa(struct bnx2x *bp, struct bnx2x_phy *phy)
static void bnx2x_807x_force_10G(struct bnx2x *bp, struct bnx2x_phy *phy)
static void bnx2x_8073_set_pause_cl37(struct link_params *params,
struct bnx2x_phy *phy,
struct link_vars *vars)
static u8 bnx2x_8073_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8073_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_8073_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_8705_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8705_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_get_gpio_port(struct link_params *params)
static void bnx2x_sfp_set_transmitter(struct link_params *params,
struct bnx2x_phy *phy,
u8 tx_en)
static u8 bnx2x_8726_read_sfp_module_eeprom(struct bnx2x_phy *phy,
struct link_params *params,
u16 addr, u8 byte_cnt, u8 *o_buf)
static u8 bnx2x_8727_read_sfp_module_eeprom(struct bnx2x_phy *phy,
struct link_params *params,
u16 addr, u8 byte_cnt, u8 *o_buf)
u8 bnx2x_read_sfp_module_eeprom(struct bnx2x_phy *phy,
struct link_params *params, u16 addr,
u8 byte_cnt, u8 *o_buf)
static u8 bnx2x_get_edc_mode(struct bnx2x_phy *phy,
struct link_params *params,
u16 *edc_mode)
static u8 bnx2x_verify_sfp_module(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_wait_for_sfp_module_initialized(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_8727_power_module(struct bnx2x *bp,
struct bnx2x_phy *phy,
u8 is_power_up)
static u8 bnx2x_8726_set_limiting_mode(struct bnx2x *bp,
struct bnx2x_phy *phy,
u16 edc_mode)
static u8 bnx2x_8727_set_limiting_mode(struct bnx2x *bp,
struct bnx2x_phy *phy,
u16 edc_mode)
static void bnx2x_8727_specific_func(struct bnx2x_phy *phy,
struct link_params *params,
u32 action)
static void bnx2x_set_sfp_module_fault_led(struct link_params *params,
u8 gpio_mode)
static u8 bnx2x_sfp_module_detection(struct bnx2x_phy *phy,
struct link_params *params)
void bnx2x_handle_module_detect_int(struct link_params *params)
static u8 bnx2x_8706_8726_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8706_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8706_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_8726_config_loopback(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_8726_external_rom_boot(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_8726_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8726_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_8726_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_8727_set_link_led(struct bnx2x_phy *phy,
struct link_params *params, u8 mode)
static void bnx2x_8727_hw_reset(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_8727_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_8727_handle_mod_abs(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_8727_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static void bnx2x_8727_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_save_848xx_spirom_version(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_848xx_set_led(struct bnx2x *bp,
struct bnx2x_phy *phy)
static u8 bnx2x_848xx_cmn_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_8481_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_848x3_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_848xx_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_848xx_format_ver(u32 raw_ver, u8 *str, u16 *len)
static void bnx2x_8481_hw_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_8481_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_848x3_link_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_848xx_set_link_led(struct bnx2x_phy *phy,
struct link_params *params, u8 mode)
static void bnx2x_7101_config_loopback(struct bnx2x_phy *phy,
struct link_params *params)
static u8 bnx2x_7101_config_init(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_7101_read_status(struct bnx2x_phy *phy,
struct link_params *params,
struct link_vars *vars)
static u8 bnx2x_7101_format_ver(u32 spirom_ver, u8 *str, u16 *len)
void bnx2x_sfx7101_sp_sw_reset(struct bnx2x *bp, struct bnx2x_phy *phy)
static void bnx2x_7101_hw_reset(struct bnx2x_phy *phy,
struct link_params *params)
static void bnx2x_7101_set_link_led(struct bnx2x_phy *phy,
struct link_params *params, u8 mode)
static struct bnx2x_phy phy_null = ;
static struct bnx2x_phy phy_serdes = ;
static struct bnx2x_phy phy_xgxs = ;
static struct bnx2x_phy phy_7101 = ;
static struct bnx2x_phy phy_8073 = ;
static struct bnx2x_phy phy_8705 = ;
static struct bnx2x_phy phy_8706 = ;
static struct bnx2x_phy phy_8726 = ;
static struct bnx2x_phy phy_8727 = ;
static struct bnx2x_phy phy_8481 = ;
static struct bnx2x_phy phy_84823 = ;
static struct bnx2x_phy phy_84833 = ;
static void bnx2x_populate_preemphasis(struct bnx2x *bp, u32 shmem_base,
struct bnx2x_phy *phy, u8 port,
u8 phy_index)
static u32 bnx2x_get_ext_phy_config(struct bnx2x *bp, u32 shmem_base,
u8 phy_index, u8 port)
static u8 bnx2x_populate_int_phy(struct bnx2x *bp, u32 shmem_base, u8 port,
struct bnx2x_phy *phy)
static u8 bnx2x_populate_ext_phy(struct bnx2x *bp,
u8 phy_index,
u32 shmem_base,
u32 shmem2_base,
u8 port,
struct bnx2x_phy *phy)
static u8 bnx2x_populate_phy(struct bnx2x *bp, u8 phy_index, u32 shmem_base,
u32 shmem2_base, u8 port, struct bnx2x_phy *phy)
static void bnx2x_phy_def_cfg(struct link_params *params,
struct bnx2x_phy *phy,
u8 phy_index)
u32 bnx2x_phy_selection(struct link_params *params)
u8 bnx2x_phy_probe(struct link_params *params)
static void set_phy_vars(struct link_params *params)
u8 bnx2x_phy_init(struct link_params *params, struct link_vars *vars)
u8 bnx2x_link_reset(struct link_params *params, struct link_vars *vars,
u8 reset_ext_phy)
static u8 bnx2x_8073_common_init_phy(struct bnx2x *bp,
u32 shmem_base_path[],
u32 shmem2_base_path[], u8 phy_index,
u32 chip_id)
static u8 bnx2x_8726_common_init_phy(struct bnx2x *bp,
u32 shmem_base_path[],
u32 shmem2_base_path[], u8 phy_index,
u32 chip_id)
static void bnx2x_get_ext_phy_reset_gpio(struct bnx2x *bp, u32 shmem_base,
u8 *io_gpio, u8 *io_port)
static u8 bnx2x_8727_common_init_phy(struct bnx2x *bp,
u32 shmem_base_path[],
u32 shmem2_base_path[], u8 phy_index,
u32 chip_id)
static u8 bnx2x_ext_phy_common_init(struct bnx2x *bp, u32 shmem_base_path[],
u32 shmem2_base_path[], u8 phy_index,
u32 ext_phy_type, u32 chip_id)
u8 bnx2x_common_init_phy(struct bnx2x *bp, u32 shmem_base_path[],
u32 shmem2_base_path[], u32 chip_id)
u8 bnx2x_hw_lock_required(struct bnx2x *bp, u32 shmem_base, u32 shmem2_base)
u8 bnx2x_fan_failure_det_req(struct bnx2x *bp,
u32 shmem_base,
u32 shmem2_base,
u8 port)
void bnx2x_hw_reset_phy(struct link_params *params)
