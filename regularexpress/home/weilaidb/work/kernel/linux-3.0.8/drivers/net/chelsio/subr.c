static int t1_wait_op_done(adapter_t *adapter, int reg, u32 mask, int polarity,
int attempts, int delay)
#define TPI_ATTEMPTS 50
int __t1_tpi_write(adapter_t *adapter, u32 addr, u32 value)
int t1_tpi_write(adapter_t *adapter, u32 addr, u32 value)
int __t1_tpi_read(adapter_t *adapter, u32 addr, u32 *valp)
int t1_tpi_read(adapter_t *adapter, u32 addr, u32 *valp)
static void t1_tpi_par(adapter_t *adapter, u32 value)
void t1_link_changed(adapter_t *adapter, int port_id)
static int t1_pci_intr_handler(adapter_t *adapter)
static int fpga_phy_intr_handler(adapter_t *adapter)
static int fpga_slow_intr(adapter_t *adapter)
static int mi1_wait_until_ready(adapter_t *adapter, int mi1_reg)
static void mi1_mdio_init(adapter_t *adapter, const struct board_info *bi)
#if defined(CONFIG_CHELSIO_T1_1G)
static int mi1_mdio_read(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr)
static int mi1_mdio_write(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr, u16 val)
static const struct mdio_ops mi1_mdio_ops = ;
static int mi1_mdio_ext_read(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr)
static int mi1_mdio_ext_write(struct net_device *dev, int phy_addr,
int mmd_addr, u16 reg_addr, u16 val)
static const struct mdio_ops mi1_mdio_ext_ops = ;
enum ;
static const struct board_info t1_board[] = ;
DEFINE_PCI_DEVICE_TABLE(t1_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, t1_pci_tbl);
const struct board_info *t1_get_board_info(unsigned int board_id)
struct chelsio_vpd_t ;
#define EEPROMSIZE        (8 * 1024)
#define EEPROM_MAX_POLL   4
int t1_seeprom_read(adapter_t *adapter, u32 addr, __le32 *data)
static int t1_eeprom_vpd_get(adapter_t *adapter, struct chelsio_vpd_t *vpd)
static int vpd_macaddress_get(adapter_t *adapter, int index, u8 mac_addr[])
int t1_link_start(struct cphy *phy, struct cmac *mac, struct link_config *lc)
int t1_elmer0_ext_intr_handler(adapter_t *adapter)
void t1_interrupts_enable(adapter_t *adapter)
void t1_interrupts_disable(adapter_t* adapter)
void t1_interrupts_clear(adapter_t* adapter)
static int asic_slow_intr(adapter_t *adapter)
int t1_slow_intr_handler(adapter_t *adapter)
static void power_sequence_xpak(adapter_t* adapter)
int __devinit t1_get_board_rev(adapter_t *adapter, const struct board_info *bi,
struct adapter_params *p)
static int board_init(adapter_t *adapter, const struct board_info *bi)
int t1_init_hw_modules(adapter_t *adapter)
static void __devinit get_pci_mode(adapter_t *adapter, struct chelsio_pci_params *p)
void t1_free_sw_modules(adapter_t *adapter)
static void __devinit init_link_config(struct link_config *lc,
const struct board_info *bi)
int __devinit t1_init_sw_modules(adapter_t *adapter,
const struct board_info *bi)
