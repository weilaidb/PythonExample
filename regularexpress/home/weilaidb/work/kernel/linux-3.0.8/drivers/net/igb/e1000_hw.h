#define _E1000_HW_H_
struct e1000_hw;
#define E1000_DEV_ID_82576                    0x10C9
#define E1000_DEV_ID_82576_FIBER              0x10E6
#define E1000_DEV_ID_82576_SERDES             0x10E7
#define E1000_DEV_ID_82576_QUAD_COPPER        0x10E8
#define E1000_DEV_ID_82576_QUAD_COPPER_ET2    0x1526
#define E1000_DEV_ID_82576_NS                 0x150A
#define E1000_DEV_ID_82576_NS_SERDES          0x1518
#define E1000_DEV_ID_82576_SERDES_QUAD        0x150D
#define E1000_DEV_ID_82575EB_COPPER           0x10A7
#define E1000_DEV_ID_82575EB_FIBER_SERDES     0x10A9
#define E1000_DEV_ID_82575GB_QUAD_COPPER      0x10D6
#define E1000_DEV_ID_82580_COPPER             0x150E
#define E1000_DEV_ID_82580_FIBER              0x150F
#define E1000_DEV_ID_82580_SERDES             0x1510
#define E1000_DEV_ID_82580_SGMII              0x1511
#define E1000_DEV_ID_82580_COPPER_DUAL        0x1516
#define E1000_DEV_ID_82580_QUAD_FIBER         0x1527
#define E1000_DEV_ID_DH89XXCC_SGMII           0x0438
#define E1000_DEV_ID_DH89XXCC_SERDES          0x043A
#define E1000_DEV_ID_DH89XXCC_BACKPLANE       0x043C
#define E1000_DEV_ID_DH89XXCC_SFP             0x0440
#define E1000_DEV_ID_I350_COPPER              0x1521
#define E1000_DEV_ID_I350_FIBER               0x1522
#define E1000_DEV_ID_I350_SERDES              0x1523
#define E1000_DEV_ID_I350_SGMII               0x1524
#define E1000_REVISION_2 2
#define E1000_REVISION_4 4
#define E1000_FUNC_0     0
#define E1000_FUNC_1     1
#define E1000_FUNC_2     2
#define E1000_FUNC_3     3
#define E1000_ALT_MAC_ADDRESS_OFFSET_LAN0   0
#define E1000_ALT_MAC_ADDRESS_OFFSET_LAN1   3
#define E1000_ALT_MAC_ADDRESS_OFFSET_LAN2   6
#define E1000_ALT_MAC_ADDRESS_OFFSET_LAN3   9
enum e1000_mac_type ;
enum e1000_media_type ;
enum e1000_nvm_type ;
enum e1000_nvm_override ;
enum e1000_phy_type ;
enum e1000_bus_type ;
enum e1000_bus_speed ;
enum e1000_bus_width ;
enum e1000_1000t_rx_status ;
enum e1000_rev_polarity ;
enum e1000_fc_mode ;
struct e1000_hw_stats ;
struct e1000_phy_stats ;
struct e1000_host_mng_dhcp_cookie ;
struct e1000_host_command_header ;
#define E1000_HI_MAX_DATA_LENGTH     252
struct e1000_host_command_info ;
struct e1000_host_mng_command_header ;
#define E1000_HI_MAX_MNG_DATA_LENGTH 0x6F8
struct e1000_host_mng_command_info ;
struct e1000_mac_operations ;
struct e1000_phy_operations ;
struct e1000_nvm_operations ;
struct e1000_info ;
extern const struct e1000_info e1000_82575_info;
struct e1000_mac_info ;
struct e1000_phy_info ;
struct e1000_nvm_info ;
struct e1000_bus_info ;
struct e1000_fc_info ;
struct e1000_mbx_operations ;
struct e1000_mbx_stats ;
struct e1000_mbx_info ;
struct e1000_dev_spec_82575 ;
struct e1000_hw ;
extern struct net_device *igb_get_hw_dev(struct e1000_hw *hw);
#define hw_dbg(format, arg...) \
netdev_dbg(igb_get_hw_dev(hw), format, ##arg)
s32  igb_read_pcie_cap_reg(struct e1000_hw *hw, u32 reg, u16 *value);
s32  igb_write_pcie_cap_reg(struct e1000_hw *hw, u32 reg, u16 *value);
