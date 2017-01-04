enum ;
enum ;
enum ;
enum ;
#define AEL2005_MODDET_IRQ 4
struct reg_val ;
static int set_phy_regs(struct cphy *phy, const struct reg_val *rv)
static void ael100x_txon(struct cphy *phy)
static int ael_i2c_rd(struct cphy *phy, int dev_addr, int word_addr)
static int ael1002_power_down(struct cphy *phy, int enable)
static int ael1002_reset(struct cphy *phy, int wait)
static int ael1002_intr_noop(struct cphy *phy)
static int get_link_status_r(struct cphy *phy, int *link_ok, int *speed,
int *duplex, int *fc)
static struct cphy_ops ael1002_ops = ;
int t3_ael1002_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
static int ael1006_reset(struct cphy *phy, int wait)
static struct cphy_ops ael1006_ops = ;
int t3_ael1006_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
static int ael2xxx_get_module_type(struct cphy *phy, int delay_ms)
static int ael2005_setup_sr_edc(struct cphy *phy)
static int ael2005_setup_twinax_edc(struct cphy *phy, int modtype)
static int ael2005_get_module_type(struct cphy *phy, int delay_ms)
static int ael2005_intr_enable(struct cphy *phy)
static int ael2005_intr_disable(struct cphy *phy)
static int ael2005_intr_clear(struct cphy *phy)
static int ael2005_reset(struct cphy *phy, int wait)
static int ael2005_intr_handler(struct cphy *phy)
static struct cphy_ops ael2005_ops = ;
int t3_ael2005_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
static int ael2020_setup_sr_edc(struct cphy *phy)
static int ael2020_setup_twinax_edc(struct cphy *phy, int modtype)
static int ael2020_get_module_type(struct cphy *phy, int delay_ms)
static int ael2020_intr_enable(struct cphy *phy)
static int ael2020_intr_disable(struct cphy *phy)
static int ael2020_intr_clear(struct cphy *phy)
static const struct reg_val ael2020_reset_regs[] = ;
static int ael2020_reset(struct cphy *phy, int wait)
static int ael2020_intr_handler(struct cphy *phy)
static struct cphy_ops ael2020_ops = ;
int t3_ael2020_phy_prep(struct cphy *phy, struct adapter *adapter, int phy_addr,
const struct mdio_ops *mdio_ops)
static int get_link_status_x(struct cphy *phy, int *link_ok, int *speed,
int *duplex, int *fc)
static struct cphy_ops qt2045_ops = ;
int t3_qt2045_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
static int xaui_direct_reset(struct cphy *phy, int wait)
static int xaui_direct_get_link_status(struct cphy *phy, int *link_ok,
int *speed, int *duplex, int *fc)
static int xaui_direct_power_down(struct cphy *phy, int enable)
static struct cphy_ops xaui_direct_ops = ;
int t3_xaui_direct_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops)
