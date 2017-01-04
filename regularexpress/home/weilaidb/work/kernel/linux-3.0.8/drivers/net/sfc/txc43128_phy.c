#define TXC_REQUIRED_DEVS (MDIO_DEVS_PCS |	\
MDIO_DEVS_PMAPMD |	\
MDIO_DEVS_PHYXS)
#define TXC_LOOPBACKS ((1 << LOOPBACK_PCS) |	\
(1 << LOOPBACK_PMAPMD) |	\
(1 << LOOPBACK_PHYXS_WS))
#define TXCNAME "TXC43128"
#define TXC_MAX_RESET_TIME	500
#define TXC_RESET_WAIT		10
#define TXC_BIST_DURATION	50
#define TXC_GLRGS_GLCMD		0xc004
#define TXC_GLCMD_L01PD_LBN	5
#define TXC_GLCMD_L23PD_LBN	6
#define TXC_GLCMD_LMTSWRST_LBN	14
#define TXC_GLRGS_GSGQLCTL	0xc01a
#define TXC_GSGQLCT_SGQLEN_LBN	15
#define TXC_GSGQLCT_LNSL_LBN	13
#define TXC_GSGQLCT_LNSL_WIDTH	2
#define TXC_ALRGS_ATXCTL	0xc040
#define TXC_ATXCTL_TXPD3_LBN	15
#define TXC_ATXCTL_TXPD2_LBN	14
#define TXC_ATXCTL_TXPD1_LBN	13
#define TXC_ATXCTL_TXPD0_LBN	12
#define TXC_ALRGS_ATXAMP0	0xc041
#define TXC_ALRGS_ATXAMP1	0xc042
#define TXC_ATXAMP_LANE02_LBN	3
#define TXC_ATXAMP_LANE13_LBN	11
#define TXC_ATXAMP_1280_mV	0
#define TXC_ATXAMP_1200_mV	8
#define TXC_ATXAMP_1120_mV	12
#define TXC_ATXAMP_1060_mV	14
#define TXC_ATXAMP_0820_mV	25
#define TXC_ATXAMP_0720_mV	26
#define TXC_ATXAMP_0580_mV	27
#define TXC_ATXAMP_0440_mV	28
#define TXC_ATXAMP_0820_BOTH					\
((TXC_ATXAMP_0820_mV << TXC_ATXAMP_LANE02_LBN)		\
| (TXC_ATXAMP_0820_mV << TXC_ATXAMP_LANE13_LBN))
#define TXC_ATXAMP_DEFAULT	0x6060
#define TXC_ALRGS_ATXPRE0	0xc043
#define TXC_ALRGS_ATXPRE1	0xc044
#define TXC_ATXPRE_NONE 0
#define TXC_ATXPRE_DEFAULT	0x1010
#define TXC_ALRGS_ARXCTL	0xc045
#define TXC_ARXCTL_RXPD3_LBN	15
#define TXC_ARXCTL_RXPD2_LBN	14
#define TXC_ARXCTL_RXPD1_LBN	13
#define TXC_ARXCTL_RXPD0_LBN	12
#define TXC_MRGS_CTL		0xc340
#define TXC_MCTL_RESET_LBN	15
#define TXC_MCTL_TXLED_LBN	14
#define TXC_MCTL_RXLED_LBN	13
#define TXC_GPIO_OUTPUT		0xc346
#define TXC_GPIO_DIR		0xc348
#define TXC_BIST_CTL		0xc280
#define TXC_BIST_TXFRMCNT	0xc281
#define TXC_BIST_RX0FRMCNT	0xc282
#define TXC_BIST_RX1FRMCNT	0xc283
#define TXC_BIST_RX2FRMCNT	0xc284
#define TXC_BIST_RX3FRMCNT	0xc285
#define TXC_BIST_RX0ERRCNT	0xc286
#define TXC_BIST_RX1ERRCNT	0xc287
#define TXC_BIST_RX2ERRCNT	0xc288
#define TXC_BIST_RX3ERRCNT	0xc289
#define TXC_BIST_CTRL_TYPE_LBN	10
#define TXC_BIST_CTRL_TYPE_TSD	0
#define TXC_BIST_CTRL_TYPE_CRP	1
#define TXC_BIST_CTRL_TYPE_CJP	2
#define TXC_BIST_CTRL_TYPE_TSR	3
#define TXC_BIST_CTRL_B10EN_LBN	12
#define TXC_BIST_CTRL_ENAB_LBN	13
#define TXC_BIST_CTRL_STOP_LBN	14
#define TXC_BIST_CTRL_STRT_LBN	15
#define TXC_MTDIABLO_CTRL	0xc34f
#define TXC_MTDIABLO_CTRL_PMA_LOOP_LBN	10
struct txc43128_data ;
#define BUG10934_RESET_INTERVAL (5 * HZ)
static void txc_reset_logic(struct efx_nic *efx);
void falcon_txc_set_gpio_val(struct efx_nic *efx, int pin, int on)
void falcon_txc_set_gpio_dir(struct efx_nic *efx, int pin, int dir)
static int txc_reset_phy(struct efx_nic *efx)
static int txc_bist_one(struct efx_nic *efx, int mmd, int test)
static int txc_bist(struct efx_nic *efx)
static void txc_apply_defaults(struct efx_nic *efx)
static int txc43128_phy_probe(struct efx_nic *efx)
static int txc43128_phy_init(struct efx_nic *efx)
static void txc_glrgs_lane_power(struct efx_nic *efx, int mmd)
static void txc_analog_lane_power(struct efx_nic *efx, int mmd)
static void txc_set_power(struct efx_nic *efx)
static void txc_reset_logic_mmd(struct efx_nic *efx, int mmd)
static void txc_reset_logic(struct efx_nic *efx)
static bool txc43128_phy_read_link(struct efx_nic *efx)
static int txc43128_phy_reconfigure(struct efx_nic *efx)
static void txc43128_phy_fini(struct efx_nic *efx)
static void txc43128_phy_remove(struct efx_nic *efx)
static bool txc43128_phy_poll(struct efx_nic *efx)
static const char *txc43128_test_names[] = ;
static const char *txc43128_test_name(struct efx_nic *efx, unsigned int index)
static int txc43128_run_tests(struct efx_nic *efx, int *results, unsigned flags)
static void txc43128_get_settings(struct efx_nic *efx, struct ethtool_cmd *ecmd)
const struct efx_phy_operations falcon_txc_phy_ops = ;
