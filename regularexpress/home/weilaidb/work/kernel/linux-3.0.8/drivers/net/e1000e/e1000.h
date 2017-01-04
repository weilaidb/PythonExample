#define _E1000_H_
struct e1000_info;
#define e_dbg(format, arg...) \
netdev_dbg(hw->adapter->netdev, format, ## arg)
#define e_err(format, arg...) \
netdev_err(adapter->netdev, format, ## arg)
#define e_info(format, arg...) \
netdev_info(adapter->netdev, format, ## arg)
#define e_warn(format, arg...) \
netdev_warn(adapter->netdev, format, ## arg)
#define e_notice(format, arg...) \
netdev_notice(adapter->netdev, format, ## arg)
#define E1000E_INT_MODE_LEGACY		0
#define E1000E_INT_MODE_MSI		1
#define E1000E_INT_MODE_MSIX		2
#define E1000_DEFAULT_TXD		256
#define E1000_MAX_TXD			4096
#define E1000_MIN_TXD			64
#define E1000_DEFAULT_RXD		256
#define E1000_MAX_RXD			4096
#define E1000_MIN_RXD			64
#define E1000_MIN_ITR_USECS		10
#define E1000_MAX_ITR_USECS		10000
#define E1000_ERT_2048			0x100
#define E1000_FC_PAUSE_TIME		0x0680
#define E1000_RX_BUFFER_WRITE		16
#define AUTO_ALL_MODES			0
#define E1000_EEPROM_APME		0x0400
#define E1000_MNG_VLAN_NONE		(-1)
#define PS_PAGE_BUFFERS			(MAX_PS_BUFFERS - 1)
#define DEFAULT_JUMBO			9234
#define BM_PORT_CTRL_PAGE                 769
#define PHY_UPPER_SHIFT                   21
#define BM_PHY_REG(page, reg) \
(((reg) & MAX_PHY_REG_ADDRESS) |\
(((page) & 0xFFFF) << PHY_PAGE_SHIFT) |\
(((reg) & ~MAX_PHY_REG_ADDRESS) << (PHY_UPPER_SHIFT - PHY_PAGE_SHIFT)))
#define BM_RCTL         PHY_REG(BM_WUC_PAGE, 0)
#define BM_WUC          PHY_REG(BM_WUC_PAGE, 1)
#define BM_WUFC         PHY_REG(BM_WUC_PAGE, 2)
#define BM_WUS          PHY_REG(BM_WUC_PAGE, 3)
#define BM_RAR_L(_i)    (BM_PHY_REG(BM_WUC_PAGE, 16 + ((_i) << 2)))
#define BM_RAR_M(_i)    (BM_PHY_REG(BM_WUC_PAGE, 17 + ((_i) << 2)))
#define BM_RAR_H(_i)    (BM_PHY_REG(BM_WUC_PAGE, 18 + ((_i) << 2)))
#define BM_RAR_CTRL(_i) (BM_PHY_REG(BM_WUC_PAGE, 19 + ((_i) << 2)))
#define BM_MTA(_i)      (BM_PHY_REG(BM_WUC_PAGE, 128 + ((_i) << 1)))
#define BM_RCTL_UPE           0x0001
#define BM_RCTL_MPE           0x0002
#define BM_RCTL_MO_SHIFT      3
#define BM_RCTL_MO_MASK       (3 << 3)
#define BM_RCTL_BAM           0x0020
#define BM_RCTL_PMCF          0x0040
#define BM_RCTL_RFCE          0x0080
#define HV_SCC_UPPER		PHY_REG(778, 16)
#define HV_SCC_LOWER		PHY_REG(778, 17)
#define HV_ECOL_UPPER		PHY_REG(778, 18)
#define HV_ECOL_LOWER		PHY_REG(778, 19)
#define HV_MCC_UPPER		PHY_REG(778, 20)
#define HV_MCC_LOWER		PHY_REG(778, 21)
#define HV_LATECOL_UPPER	PHY_REG(778, 23)
#define HV_LATECOL_LOWER	PHY_REG(778, 24)
#define HV_COLC_UPPER		PHY_REG(778, 25)
#define HV_COLC_LOWER		PHY_REG(778, 26)
#define HV_DC_UPPER		PHY_REG(778, 27)
#define HV_DC_LOWER		PHY_REG(778, 28)
#define HV_TNCRS_UPPER		PHY_REG(778, 29)
#define HV_TNCRS_LOWER		PHY_REG(778, 30)
#define E1000_FCRTV_PCH     0x05F40
#define BM_CS_STATUS                      17
#define BM_CS_STATUS_LINK_UP              0x0400
#define BM_CS_STATUS_RESOLVED             0x0800
#define BM_CS_STATUS_SPEED_MASK           0xC000
#define BM_CS_STATUS_SPEED_1000           0x8000
#define HV_M_STATUS                       26
#define HV_M_STATUS_AUTONEG_COMPLETE      0x1000
#define HV_M_STATUS_SPEED_MASK            0x0300
#define HV_M_STATUS_SPEED_1000            0x0200
#define HV_M_STATUS_LINK_UP               0x0040
#define LINK_TIMEOUT		100
#define DEFAULT_RDTR			0
#define DEFAULT_RADV			8
#define BURST_RDTR			0x20
#define BURST_RADV			0x20
#define E1000_TXDCTL_DMA_BURST_ENABLE                          \
(E1000_TXDCTL_GRAN |  \
E1000_TXDCTL_COUNT_DESC |                             \
(5 << 16) |\
(1 << 8)  |                             \
0x1f)
#define E1000_RXDCTL_DMA_BURST_ENABLE                          \
(0x01000000 |         \
(4 << 16)  |         \
(4 << 8)   |         \
0x20)
#define E1000_TIDV_FPD (1 << 31)
#define E1000_RDTR_FPD (1 << 31)
enum e1000_boards ;
struct e1000_queue_stats ;
struct e1000_ps_page ;
struct e1000_buffer ;
struct e1000_ring ;
struct e1000_phy_regs ;
struct e1000_adapter ;
struct e1000_info ;
#define FLAG_HAS_AMT                      (1 << 0)
#define FLAG_HAS_FLASH                    (1 << 1)
#define FLAG_HAS_HW_VLAN_FILTER           (1 << 2)
#define FLAG_HAS_WOL                      (1 << 3)
#define FLAG_HAS_ERT                      (1 << 4)
#define FLAG_HAS_CTRLEXT_ON_LOAD          (1 << 5)
#define FLAG_HAS_SWSM_ON_LOAD             (1 << 6)
#define FLAG_HAS_JUMBO_FRAMES             (1 << 7)
#define FLAG_READ_ONLY_NVM                (1 << 8)
#define FLAG_IS_ICH                       (1 << 9)
#define FLAG_HAS_MSIX                     (1 << 10)
#define FLAG_HAS_SMART_POWER_DOWN         (1 << 11)
#define FLAG_IS_QUAD_PORT_A               (1 << 12)
#define FLAG_IS_QUAD_PORT                 (1 << 13)
#define FLAG_TIPG_MEDIUM_FOR_80003ESLAN   (1 << 14)
#define FLAG_APME_IN_WUC                  (1 << 15)
#define FLAG_APME_IN_CTRL3                (1 << 16)
#define FLAG_APME_CHECK_PORT_B            (1 << 17)
#define FLAG_DISABLE_FC_PAUSE_TIME        (1 << 18)
#define FLAG_NO_WAKE_UCAST                (1 << 19)
#define FLAG_MNG_PT_ENABLED               (1 << 20)
#define FLAG_RESET_OVERWRITES_LAA         (1 << 21)
#define FLAG_TARC_SPEED_MODE_BIT          (1 << 22)
#define FLAG_TARC_SET_BIT_ZERO            (1 << 23)
#define FLAG_RX_NEEDS_RESTART             (1 << 24)
#define FLAG_LSC_GIG_SPEED_DROP           (1 << 25)
#define FLAG_SMART_POWER_DOWN             (1 << 26)
#define FLAG_MSI_ENABLED                  (1 << 27)
#define FLAG_RX_CSUM_ENABLED              (1 << 28)
#define FLAG_TSO_FORCE                    (1 << 29)
#define FLAG_RX_RESTART_NOW               (1 << 30)
#define FLAG_MSI_TEST_FAILED              (1 << 31)
#define FLAG2_CRC_STRIPPING               (1 << 0)
#define FLAG2_HAS_PHY_WAKEUP              (1 << 1)
#define FLAG2_IS_DISCARDING               (1 << 2)
#define FLAG2_DISABLE_ASPM_L1             (1 << 3)
#define FLAG2_HAS_PHY_STATS               (1 << 4)
#define FLAG2_HAS_EEE                     (1 << 5)
#define FLAG2_DMA_BURST                   (1 << 6)
#define FLAG2_DISABLE_ASPM_L0S            (1 << 7)
#define FLAG2_DISABLE_AIM                 (1 << 8)
#define FLAG2_CHECK_PHY_HANG              (1 << 9)
#define E1000_RX_DESC_PS(R, i)	    \
(&(((union e1000_rx_desc_packet_split *)((R).desc))[i]))
#define E1000_GET_DESC(R, i, type)	(&(((struct type *)((R).desc))[i]))
#define E1000_RX_DESC(R, i)		E1000_GET_DESC(R, i, e1000_rx_desc)
#define E1000_TX_DESC(R, i)		E1000_GET_DESC(R, i, e1000_tx_desc)
#define E1000_CONTEXT_DESC(R, i)	E1000_GET_DESC(R, i, e1000_context_desc)
enum e1000_state_t ;
enum latency_range ;
extern char e1000e_driver_name[];
extern const char e1000e_driver_version[];
extern void e1000e_check_options(struct e1000_adapter *adapter);
extern void e1000e_set_ethtool_ops(struct net_device *netdev);
extern int e1000e_up(struct e1000_adapter *adapter);
extern void e1000e_down(struct e1000_adapter *adapter);
extern void e1000e_reinit_locked(struct e1000_adapter *adapter);
extern void e1000e_reset(struct e1000_adapter *adapter);
extern void e1000e_power_up_phy(struct e1000_adapter *adapter);
extern int e1000e_setup_rx_resources(struct e1000_adapter *adapter);
extern int e1000e_setup_tx_resources(struct e1000_adapter *adapter);
extern void e1000e_free_rx_resources(struct e1000_adapter *adapter);
extern void e1000e_free_tx_resources(struct e1000_adapter *adapter);
extern struct rtnl_link_stats64 *e1000e_get_stats64(struct net_device *netdev,
struct rtnl_link_stats64
*stats);
extern void e1000e_set_interrupt_capability(struct e1000_adapter *adapter);
extern void e1000e_reset_interrupt_capability(struct e1000_adapter *adapter);
extern void e1000e_get_hw_control(struct e1000_adapter *adapter);
extern void e1000e_release_hw_control(struct e1000_adapter *adapter);
extern unsigned int copybreak;
extern char *e1000e_get_hw_dev_name(struct e1000_hw *hw);
extern struct e1000_info e1000_82571_info;
extern struct e1000_info e1000_82572_info;
extern struct e1000_info e1000_82573_info;
extern struct e1000_info e1000_82574_info;
extern struct e1000_info e1000_82583_info;
extern struct e1000_info e1000_ich8_info;
extern struct e1000_info e1000_ich9_info;
extern struct e1000_info e1000_ich10_info;
extern struct e1000_info e1000_pch_info;
extern struct e1000_info e1000_pch2_info;
extern struct e1000_info e1000_es2_info;
extern s32 e1000_read_pba_string_generic(struct e1000_hw *hw, u8 *pba_num,
u32 pba_num_size);
extern s32  e1000e_commit_phy(struct e1000_hw *hw);
extern bool e1000e_enable_mng_pass_thru(struct e1000_hw *hw);
extern bool e1000e_get_laa_state_82571(struct e1000_hw *hw);
extern void e1000e_set_laa_state_82571(struct e1000_hw *hw, bool state);
extern void e1000e_write_protect_nvm_ich8lan(struct e1000_hw *hw);
extern void e1000e_set_kmrn_lock_loss_workaround_ich8lan(struct e1000_hw *hw,
bool state);
extern void e1000e_igp3_phy_powerdown_workaround_ich8lan(struct e1000_hw *hw);
extern void e1000e_gig_downshift_workaround_ich8lan(struct e1000_hw *hw);
extern void e1000e_disable_gig_wol_ich8lan(struct e1000_hw *hw);
extern s32 e1000_configure_k1_ich8lan(struct e1000_hw *hw, bool k1_enable);
extern s32 e1000_lv_jumbo_workaround_ich8lan(struct e1000_hw *hw, bool enable);
extern void e1000_copy_rx_addrs_to_phy_ich8lan(struct e1000_hw *hw);
extern s32 e1000e_check_for_copper_link(struct e1000_hw *hw);
extern s32 e1000e_check_for_fiber_link(struct e1000_hw *hw);
extern s32 e1000e_check_for_serdes_link(struct e1000_hw *hw);
extern s32 e1000e_setup_led_generic(struct e1000_hw *hw);
extern s32 e1000e_cleanup_led_generic(struct e1000_hw *hw);
extern s32 e1000e_led_on_generic(struct e1000_hw *hw);
extern s32 e1000e_led_off_generic(struct e1000_hw *hw);
extern s32 e1000e_get_bus_info_pcie(struct e1000_hw *hw);
extern void e1000_set_lan_id_multi_port_pcie(struct e1000_hw *hw);
extern void e1000_set_lan_id_single_port(struct e1000_hw *hw);
extern s32 e1000e_get_speed_and_duplex_copper(struct e1000_hw *hw, u16 *speed, u16 *duplex);
extern s32 e1000e_get_speed_and_duplex_fiber_serdes(struct e1000_hw *hw, u16 *speed, u16 *duplex);
extern s32 e1000e_disable_pcie_master(struct e1000_hw *hw);
extern s32 e1000e_get_auto_rd_done(struct e1000_hw *hw);
extern s32 e1000e_id_led_init(struct e1000_hw *hw);
extern void e1000e_clear_hw_cntrs_base(struct e1000_hw *hw);
extern s32 e1000e_setup_fiber_serdes_link(struct e1000_hw *hw);
extern s32 e1000e_copper_link_setup_m88(struct e1000_hw *hw);
extern s32 e1000e_copper_link_setup_igp(struct e1000_hw *hw);
extern s32 e1000e_setup_link(struct e1000_hw *hw);
extern void e1000_clear_vfta_generic(struct e1000_hw *hw);
extern void e1000e_init_rx_addrs(struct e1000_hw *hw, u16 rar_count);
extern void e1000e_update_mc_addr_list_generic(struct e1000_hw *hw,
u8 *mc_addr_list,
u32 mc_addr_count);
extern void e1000e_rar_set(struct e1000_hw *hw, u8 *addr, u32 index);
extern s32 e1000e_set_fc_watermarks(struct e1000_hw *hw);
extern void e1000e_set_pcie_no_snoop(struct e1000_hw *hw, u32 no_snoop);
extern s32 e1000e_get_hw_semaphore(struct e1000_hw *hw);
extern s32 e1000e_valid_led_default(struct e1000_hw *hw, u16 *data);
extern void e1000e_config_collision_dist(struct e1000_hw *hw);
extern s32 e1000e_config_fc_after_link_up(struct e1000_hw *hw);
extern s32 e1000e_force_mac_fc(struct e1000_hw *hw);
extern s32 e1000e_blink_led_generic(struct e1000_hw *hw);
extern void e1000_write_vfta_generic(struct e1000_hw *hw, u32 offset, u32 value);
extern s32 e1000_check_alt_mac_addr_generic(struct e1000_hw *hw);
extern void e1000e_reset_adaptive(struct e1000_hw *hw);
extern void e1000e_update_adaptive(struct e1000_hw *hw);
extern s32 e1000e_setup_copper_link(struct e1000_hw *hw);
extern s32 e1000e_get_phy_id(struct e1000_hw *hw);
extern void e1000e_put_hw_semaphore(struct e1000_hw *hw);
extern s32 e1000e_check_reset_block_generic(struct e1000_hw *hw);
extern s32 e1000e_phy_force_speed_duplex_igp(struct e1000_hw *hw);
extern s32 e1000e_get_cable_length_igp_2(struct e1000_hw *hw);
extern s32 e1000e_get_phy_info_igp(struct e1000_hw *hw);
extern s32 e1000e_read_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_read_phy_reg_igp_locked(struct e1000_hw *hw, u32 offset,
u16 *data);
extern s32 e1000e_phy_hw_reset_generic(struct e1000_hw *hw);
extern s32 e1000e_set_d3_lplu_state(struct e1000_hw *hw, bool active);
extern s32 e1000e_write_phy_reg_igp(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000e_write_phy_reg_igp_locked(struct e1000_hw *hw, u32 offset,
u16 data);
extern s32 e1000e_phy_sw_reset(struct e1000_hw *hw);
extern s32 e1000e_phy_force_speed_duplex_m88(struct e1000_hw *hw);
extern s32 e1000e_get_cfg_done(struct e1000_hw *hw);
extern s32 e1000e_get_cable_length_m88(struct e1000_hw *hw);
extern s32 e1000e_get_phy_info_m88(struct e1000_hw *hw);
extern s32 e1000e_read_phy_reg_m88(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_write_phy_reg_m88(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000e_phy_init_script_igp3(struct e1000_hw *hw);
extern enum e1000_phy_type e1000e_get_phy_type_from_id(u32 phy_id);
extern s32 e1000e_determine_phy_address(struct e1000_hw *hw);
extern s32 e1000e_write_phy_reg_bm(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000e_read_phy_reg_bm(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_read_phy_reg_bm2(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_write_phy_reg_bm2(struct e1000_hw *hw, u32 offset, u16 data);
extern void e1000e_phy_force_speed_duplex_setup(struct e1000_hw *hw, u16 *phy_ctrl);
extern s32 e1000e_write_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000e_write_kmrn_reg_locked(struct e1000_hw *hw, u32 offset,
u16 data);
extern s32 e1000e_read_kmrn_reg(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_read_kmrn_reg_locked(struct e1000_hw *hw, u32 offset,
u16 *data);
extern s32 e1000e_phy_has_link_generic(struct e1000_hw *hw, u32 iterations,
u32 usec_interval, bool *success);
extern s32 e1000e_phy_reset_dsp(struct e1000_hw *hw);
extern void e1000_power_up_phy_copper(struct e1000_hw *hw);
extern void e1000_power_down_phy_copper(struct e1000_hw *hw);
extern s32 e1000e_read_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000e_write_phy_reg_mdic(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000e_check_downshift(struct e1000_hw *hw);
extern s32 e1000_read_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 *data);
extern s32 e1000_read_phy_reg_hv_locked(struct e1000_hw *hw, u32 offset,
u16 *data);
extern s32 e1000_write_phy_reg_hv(struct e1000_hw *hw, u32 offset, u16 data);
extern s32 e1000_write_phy_reg_hv_locked(struct e1000_hw *hw, u32 offset,
u16 data);
extern s32 e1000_link_stall_workaround_hv(struct e1000_hw *hw);
extern s32 e1000_copper_link_setup_82577(struct e1000_hw *hw);
extern s32 e1000_check_polarity_82577(struct e1000_hw *hw);
extern s32 e1000_get_phy_info_82577(struct e1000_hw *hw);
extern s32 e1000_phy_force_speed_duplex_82577(struct e1000_hw *hw);
extern s32 e1000_get_cable_length_82577(struct e1000_hw *hw);
extern s32 e1000_check_polarity_m88(struct e1000_hw *hw);
extern s32 e1000_get_phy_info_ife(struct e1000_hw *hw);
extern s32 e1000_check_polarity_ife(struct e1000_hw *hw);
extern s32 e1000_phy_force_speed_duplex_ife(struct e1000_hw *hw);
extern s32 e1000_check_polarity_igp(struct e1000_hw *hw);
extern bool e1000_check_phy_82574(struct e1000_hw *hw);
static inline s32 e1000_phy_hw_reset(struct e1000_hw *hw)
static inline s32 e1000_check_reset_block(struct e1000_hw *hw)
static inline s32 e1e_rphy(struct e1000_hw *hw, u32 offset, u16 *data)
static inline s32 e1e_wphy(struct e1000_hw *hw, u32 offset, u16 data)
static inline s32 e1000_get_cable_length(struct e1000_hw *hw)
extern s32 e1000e_acquire_nvm(struct e1000_hw *hw);
extern s32 e1000e_write_nvm_spi(struct e1000_hw *hw, u16 offset, u16 words, u16 *data);
extern s32 e1000e_update_nvm_checksum_generic(struct e1000_hw *hw);
extern s32 e1000e_poll_eerd_eewr_done(struct e1000_hw *hw, int ee_reg);
extern s32 e1000e_read_nvm_eerd(struct e1000_hw *hw, u16 offset, u16 words, u16 *data);
extern s32 e1000e_validate_nvm_checksum_generic(struct e1000_hw *hw);
extern void e1000e_release_nvm(struct e1000_hw *hw);
extern void e1000e_reload_nvm(struct e1000_hw *hw);
extern s32 e1000_read_mac_addr_generic(struct e1000_hw *hw);
static inline s32 e1000e_read_mac_addr(struct e1000_hw *hw)
static inline s32 e1000_validate_nvm_checksum(struct e1000_hw *hw)
static inline s32 e1000e_update_nvm_checksum(struct e1000_hw *hw)
static inline s32 e1000_read_nvm(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
static inline s32 e1000_write_nvm(struct e1000_hw *hw, u16 offset, u16 words, u16 *data)
static inline s32 e1000_get_phy_info(struct e1000_hw *hw)
static inline s32 e1000e_check_mng_mode(struct e1000_hw *hw)
extern bool e1000e_check_mng_mode_generic(struct e1000_hw *hw);
extern bool e1000e_enable_tx_pkt_filtering(struct e1000_hw *hw);
extern s32 e1000e_mng_write_dhcp_info(struct e1000_hw *hw, u8 *buffer, u16 length);
static inline u32 __er32(struct e1000_hw *hw, unsigned long reg)
static inline void __ew32(struct e1000_hw *hw, unsigned long reg, u32 val)
