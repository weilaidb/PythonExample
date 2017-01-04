#define TENXPRESS_REQUIRED_DEVS (MDIO_DEVS_PMAPMD	| \
MDIO_DEVS_PCS		| \
MDIO_DEVS_PHYXS	| \
MDIO_DEVS_AN)
#define SFX7101_LOOPBACKS ((1 << LOOPBACK_PHYXS) |	\
(1 << LOOPBACK_PCS) |	\
(1 << LOOPBACK_PMAPMD) |	\
(1 << LOOPBACK_PHYXS_WS))
#define MAX_BAD_LP_TRIES	(5)
#define PMA_PMD_XCONTROL_REG	49152
#define PMA_PMD_EXT_GMII_EN_LBN	1
#define PMA_PMD_EXT_GMII_EN_WIDTH 1
#define PMA_PMD_EXT_CLK_OUT_LBN	2
#define PMA_PMD_EXT_CLK_OUT_WIDTH 1
#define PMA_PMD_LNPGA_POWERDOWN_LBN 8
#define PMA_PMD_LNPGA_POWERDOWN_WIDTH 1
#define PMA_PMD_EXT_CLK312_WIDTH 1
#define PMA_PMD_EXT_LPOWER_LBN  12
#define PMA_PMD_EXT_LPOWER_WIDTH 1
#define PMA_PMD_EXT_ROBUST_LBN	14
#define PMA_PMD_EXT_ROBUST_WIDTH 1
#define PMA_PMD_EXT_SSR_LBN	15
#define PMA_PMD_EXT_SSR_WIDTH	1
#define PMA_PMD_XSTATUS_REG	49153
#define PMA_PMD_XSTAT_MDIX_LBN	14
#define PMA_PMD_XSTAT_FLP_LBN   (12)
#define PMA_PMD_LED_CTRL_REG	49159
#define PMA_PMA_LED_ACTIVITY_LBN	(3)
#define PMA_PMD_LED_OVERR_REG	49161
#define PMA_PMD_LED_LINK_LBN	(0)
#define PMA_PMD_LED_SPEED_LBN	(2)
#define PMA_PMD_LED_TX_LBN	(4)
#define PMA_PMD_LED_RX_LBN	(6)
#define	PMA_PMD_LED_AUTO	(0)
#define	PMA_PMD_LED_ON		(1)
#define	PMA_PMD_LED_OFF		(2)
#define PMA_PMD_LED_FLASH	(3)
#define PMA_PMD_LED_MASK	3
#define SFX7101_PMA_PMD_LED_DEFAULT (PMA_PMD_LED_OFF << PMA_PMD_LED_RX_LBN)
#define PMA_PMD_SPEED_ENABLE_REG 49192
#define PMA_PMD_100TX_ADV_LBN    1
#define PMA_PMD_100TX_ADV_WIDTH  1
#define PMA_PMD_1000T_ADV_LBN    2
#define PMA_PMD_1000T_ADV_WIDTH  1
#define PMA_PMD_10000T_ADV_LBN   3
#define PMA_PMD_10000T_ADV_WIDTH 1
#define PMA_PMD_SPEED_LBN        4
#define PMA_PMD_SPEED_WIDTH      4
#define PCS_CLOCK_CTRL_REG	55297
#define PLL312_RST_N_LBN 2
#define PCS_SOFT_RST2_REG	55302
#define SERDES_RST_N_LBN 13
#define XGXS_RST_N_LBN 12
#define	PCS_TEST_SELECT_REG	55303
#define	CLK312_EN_LBN 3
#define PHYXS_XCONTROL_REG	49152
#define PHYXS_RESET_LBN		15
#define PHYXS_RESET_WIDTH	1
#define PHYXS_TEST1         (49162)
#define LOOPBACK_NEAR_LBN   (8)
#define LOOPBACK_NEAR_WIDTH (1)
#define PCS_BOOT_STATUS_REG		53248
#define PCS_BOOT_FATAL_ERROR_LBN	0
#define PCS_BOOT_PROGRESS_LBN		1
#define PCS_BOOT_PROGRESS_WIDTH		2
#define PCS_BOOT_PROGRESS_INIT		0
#define PCS_BOOT_PROGRESS_WAIT_MDIO	1
#define PCS_BOOT_PROGRESS_CHECKSUM	2
#define PCS_BOOT_PROGRESS_JUMP		3
#define PCS_BOOT_DOWNLOAD_WAIT_LBN	3
#define PCS_BOOT_CODE_STARTED_LBN	4
#define GPHY_XCONTROL_REG	49152
#define GPHY_ISOLATE_LBN	10
#define GPHY_ISOLATE_WIDTH	1
#define GPHY_DUPLEX_LBN	  	8
#define GPHY_DUPLEX_WIDTH	1
#define GPHY_LOOPBACK_NEAR_LBN	14
#define GPHY_LOOPBACK_NEAR_WIDTH 1
#define C22EXT_STATUS_REG       49153
#define C22EXT_STATUS_LINK_LBN  2
#define C22EXT_STATUS_LINK_WIDTH 1
#define C22EXT_MSTSLV_CTRL			49161
#define C22EXT_MSTSLV_CTRL_ADV_1000_HD_LBN	8
#define C22EXT_MSTSLV_CTRL_ADV_1000_FD_LBN	9
#define C22EXT_MSTSLV_STATUS			49162
#define C22EXT_MSTSLV_STATUS_LP_1000_HD_LBN	10
#define C22EXT_MSTSLV_STATUS_LP_1000_FD_LBN	11
#define LNPGA_PDOWN_WAIT	(HZ / 5)
struct tenxpress_phy_data ;
static int tenxpress_init(struct efx_nic *efx)
static int tenxpress_phy_probe(struct efx_nic *efx)
static int tenxpress_phy_init(struct efx_nic *efx)
static int tenxpress_special_reset(struct efx_nic *efx)
static void sfx7101_check_bad_lp(struct efx_nic *efx, bool link_ok)
static bool sfx7101_link_ok(struct efx_nic *efx)
static void tenxpress_ext_loopback(struct efx_nic *efx)
static void tenxpress_low_power(struct efx_nic *efx)
static int tenxpress_phy_reconfigure(struct efx_nic *efx)
static void
tenxpress_get_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd);
static bool tenxpress_phy_poll(struct efx_nic *efx)
static void sfx7101_phy_fini(struct efx_nic *efx)
static void tenxpress_phy_remove(struct efx_nic *efx)
void tenxpress_set_id_led(struct efx_nic *efx, enum efx_led_mode mode)
static const char *const sfx7101_test_names[] = ;
static const char *sfx7101_test_name(struct efx_nic *efx, unsigned int index)
static int
sfx7101_run_tests(struct efx_nic *efx, int *results, unsigned flags)
static void
tenxpress_get_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
static int tenxpress_set_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
static void sfx7101_set_npage_adv(struct efx_nic *efx, u32 advertising)
const struct efx_phy_operations falcon_sfx7101_phy_ops = ;
