enum ;
enum ;
static int aq100x_reset(struct cphy *phy, int wait)
static int aq100x_intr_enable(struct cphy *phy)
static int aq100x_intr_disable(struct cphy *phy)
static int aq100x_intr_clear(struct cphy *phy)
static int aq100x_intr_handler(struct cphy *phy)
static int aq100x_power_down(struct cphy *phy, int off)
static int aq100x_autoneg_enable(struct cphy *phy)
static int aq100x_autoneg_restart(struct cphy *phy)
static int aq100x_advertise(struct cphy *phy, unsigned int advertise_map)
static int aq100x_set_loopback(struct cphy *phy, int mmd, int dir, int enable)
static int aq100x_set_speed_duplex(struct cphy *phy, int speed, int duplex)
static int aq100x_get_link_status(struct cphy *phy, int *link_ok,
int *speed, int *duplex, int *fc)
static struct cphy_ops aq100x_ops = ;
int t3_aq100x_phy_prep(struct cphy *phy, struct adapter *adapter, int phy_addr,
const struct mdio_ops *mdio_ops)
