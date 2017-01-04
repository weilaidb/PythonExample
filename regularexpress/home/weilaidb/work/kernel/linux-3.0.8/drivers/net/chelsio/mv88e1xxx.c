#define CROSSOVER_MDI   0
#define CROSSOVER_MDIX  1
#define CROSSOVER_AUTO  3
#define INTR_ENABLE_MASK 0x6CA0
static void mdio_set_bit(struct cphy *cphy, int reg, u32 bitval)
static void mdio_clear_bit(struct cphy *cphy, int reg, u32 bitval)
static int mv88e1xxx_reset(struct cphy *cphy, int wait)
static int mv88e1xxx_interrupt_enable(struct cphy *cphy)
static int mv88e1xxx_interrupt_disable(struct cphy *cphy)
static int mv88e1xxx_interrupt_clear(struct cphy *cphy)
static int mv88e1xxx_set_speed_duplex(struct cphy *phy, int speed, int duplex)
static int mv88e1xxx_crossover_set(struct cphy *cphy, int crossover)
static int mv88e1xxx_autoneg_enable(struct cphy *cphy)
static int mv88e1xxx_autoneg_disable(struct cphy *cphy)
static int mv88e1xxx_autoneg_restart(struct cphy *cphy)
static int mv88e1xxx_advertise(struct cphy *phy, unsigned int advertise_map)
static int mv88e1xxx_set_loopback(struct cphy *cphy, int on)
static int mv88e1xxx_get_link_status(struct cphy *cphy, int *link_ok,
int *speed, int *duplex, int *fc)
static int mv88e1xxx_downshift_set(struct cphy *cphy, int downshift_enable)
static int mv88e1xxx_interrupt_handler(struct cphy *cphy)
static void mv88e1xxx_destroy(struct cphy *cphy)
static struct cphy_ops mv88e1xxx_ops = ;
static struct cphy *mv88e1xxx_phy_create(struct net_device *dev, int phy_addr,
const struct mdio_ops *mdio_ops)
static int mv88e1xxx_phy_reset(adapter_t* adapter)
const struct gphy t1_mv88e1xxx_ops = ;
