#define QT202X_REQUIRED_DEVS (MDIO_DEVS_PCS |		\
MDIO_DEVS_PMAPMD |	\
MDIO_DEVS_PHYXS)
#define QT202X_LOOPBACKS ((1 << LOOPBACK_PCS) |		\
(1 << LOOPBACK_PMAPMD) |	\
(1 << LOOPBACK_PHYXS_WS))
#define MDIO_QUAKE_LED0_REG	(0xD006)
#define PCS_FW_HEARTBEAT_REG	0xd7ee
#define PCS_FW_HEARTB_LBN	0
#define PCS_FW_HEARTB_WIDTH	8
#define PCS_FW_PRODUCT_CODE_1	0xd7f0
#define PCS_FW_VERSION_1	0xd7f3
#define PCS_FW_BUILD_1		0xd7f6
#define PCS_UC8051_STATUS_REG	0xd7fd
#define PCS_UC_STATUS_LBN	0
#define PCS_UC_STATUS_WIDTH	8
#define PCS_UC_STATUS_FW_SAVE	0x20
#define PMA_PMD_MODE_REG	0xc301
#define PMA_PMD_RXIN_SEL_LBN	6
#define PMA_PMD_FTX_CTRL2_REG	0xc309
#define PMA_PMD_FTX_STATIC_LBN	13
#define PMA_PMD_VEND1_REG	0xc001
#define PMA_PMD_VEND1_LBTXD_LBN	15
#define PCS_VEND1_REG	   	0xc000
#define PCS_VEND1_LBTXD_LBN	5
void falcon_qt202x_set_led(struct efx_nic *p, int led, int mode)
struct qt202x_phy_data ;
#define QT2022C2_MAX_RESET_TIME 500
#define QT2022C2_RESET_WAIT 10
#define QT2025C_MAX_HEARTB_TIME (5 * HZ)
#define QT2025C_HEARTB_WAIT 100
#define QT2025C_MAX_FWSTART_TIME (25 * HZ / 10)
#define QT2025C_FWSTART_WAIT 100
#define BUG17190_INTERVAL (2 * HZ)
static int qt2025c_wait_heartbeat(struct efx_nic *efx)
static int qt2025c_wait_fw_status_good(struct efx_nic *efx)
static void qt2025c_restart_firmware(struct efx_nic *efx)
static int qt2025c_wait_reset(struct efx_nic *efx)
static void qt2025c_firmware_id(struct efx_nic *efx)
static void qt2025c_bug17190_workaround(struct efx_nic *efx)
static int qt2025c_select_phy_mode(struct efx_nic *efx)
static int qt202x_reset_phy(struct efx_nic *efx)
static int qt202x_phy_probe(struct efx_nic *efx)
static int qt202x_phy_init(struct efx_nic *efx)
static int qt202x_link_ok(struct efx_nic *efx)
static bool qt202x_phy_poll(struct efx_nic *efx)
static int qt202x_phy_reconfigure(struct efx_nic *efx)
static void qt202x_phy_get_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
static void qt202x_phy_remove(struct efx_nic *efx)
const struct efx_phy_operations falcon_qt202x_phy_ops = ;
