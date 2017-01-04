#define MV88x2010_LINK_STATUS_BUGS    1
static int led_init(struct cphy *cphy)
static int led_link(struct cphy *cphy, u32 do_enable)
static int mv88x201x_reset(struct cphy *cphy, int wait)
static int mv88x201x_interrupt_enable(struct cphy *cphy)
static int mv88x201x_interrupt_disable(struct cphy *cphy)
static int mv88x201x_interrupt_clear(struct cphy *cphy)
static int mv88x201x_interrupt_handler(struct cphy *cphy)
static int mv88x201x_set_loopback(struct cphy *cphy, int on)
static int mv88x201x_get_link_status(struct cphy *cphy, int *link_ok,
int *speed, int *duplex, int *fc)
static void mv88x201x_destroy(struct cphy *cphy)
static struct cphy_ops mv88x201x_ops = ;
static struct cphy *mv88x201x_phy_create(struct net_device *dev, int phy_addr,
const struct mdio_ops *mdio_ops)
static int mv88x201x_phy_reset(adapter_t *adapter)
const struct gphy t1_mv88x201x_ops = ;
