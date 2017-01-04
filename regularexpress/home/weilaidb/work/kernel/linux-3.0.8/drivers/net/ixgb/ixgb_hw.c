#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u32 ixgb_hash_mc_addr(struct ixgb_hw *hw, u8 * mc_addr);
static void ixgb_mta_set(struct ixgb_hw *hw, u32 hash_value);
static void ixgb_get_bus_info(struct ixgb_hw *hw);
static bool ixgb_link_reset(struct ixgb_hw *hw);
static void ixgb_optics_reset(struct ixgb_hw *hw);
static void ixgb_optics_reset_bcm(struct ixgb_hw *hw);
static ixgb_phy_type ixgb_identify_phy(struct ixgb_hw *hw);
static void ixgb_clear_hw_cntrs(struct ixgb_hw *hw);
static void ixgb_clear_vfta(struct ixgb_hw *hw);
static void ixgb_init_rx_addrs(struct ixgb_hw *hw);
static u16 ixgb_read_phy_reg(struct ixgb_hw *hw,
u32 reg_address,
u32 phy_address,
u32 device_type);
static bool ixgb_setup_fc(struct ixgb_hw *hw);
static bool mac_addr_valid(u8 *mac_addr);
static u32 ixgb_mac_reset(struct ixgb_hw *hw)
bool
ixgb_adapter_stop(struct ixgb_hw *hw)
static ixgb_xpak_vendor
ixgb_identify_xpak_vendor(struct ixgb_hw *hw)
static ixgb_phy_type
ixgb_identify_phy(struct ixgb_hw *hw)
bool
ixgb_init_hw(struct ixgb_hw *hw)
static void
ixgb_init_rx_addrs(struct ixgb_hw *hw)
void
ixgb_mc_addr_list_update(struct ixgb_hw *hw,
u8 *mc_addr_list,
u32 mc_addr_count,
u32 pad)
static u32
ixgb_hash_mc_addr(struct ixgb_hw *hw,
u8 *mc_addr)
static void
ixgb_mta_set(struct ixgb_hw *hw,
u32 hash_value)
void
ixgb_rar_set(struct ixgb_hw *hw,
u8 *addr,
u32 index)
void
ixgb_write_vfta(struct ixgb_hw *hw,
u32 offset,
u32 value)
static void
ixgb_clear_vfta(struct ixgb_hw *hw)
static bool
ixgb_setup_fc(struct ixgb_hw *hw)
static u16
ixgb_read_phy_reg(struct ixgb_hw *hw,
u32 reg_address,
u32 phy_address,
u32 device_type)
static void
ixgb_write_phy_reg(struct ixgb_hw *hw,
u32 reg_address,
u32 phy_address,
u32 device_type,
u16 data)
void
ixgb_check_for_link(struct ixgb_hw *hw)
bool ixgb_check_for_bad_link(struct ixgb_hw *hw)
static void
ixgb_clear_hw_cntrs(struct ixgb_hw *hw)
void
ixgb_led_on(struct ixgb_hw *hw)
void
ixgb_led_off(struct ixgb_hw *hw)
static void
ixgb_get_bus_info(struct ixgb_hw *hw)
static bool
mac_addr_valid(u8 *mac_addr)
static bool
ixgb_link_reset(struct ixgb_hw *hw)
static void
ixgb_optics_reset(struct ixgb_hw *hw)
#define   IXGB_BCM8704_USER_PMD_TX_CTRL_REG         0xC803
#define   IXGB_BCM8704_USER_PMD_TX_CTRL_REG_VAL     0x0164
#define   IXGB_BCM8704_USER_CTRL_REG                0xC800
#define   IXGB_BCM8704_USER_CTRL_REG_VAL            0x7FBF
#define   IXGB_BCM8704_USER_DEV3_ADDR               0x0003
#define   IXGB_SUN_PHY_ADDRESS                      0x0000
#define   IXGB_SUN_PHY_RESET_DELAY                     305
static void
ixgb_optics_reset_bcm(struct ixgb_hw *hw)
