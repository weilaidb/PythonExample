static const int phy_BCM5400_link_table[8][3] = ;
static inline int __phy_read(struct mii_phy* phy, int id, int reg)
static inline void __phy_write(struct mii_phy* phy, int id, int reg, int val)
static inline int phy_read(struct mii_phy* phy, int reg)
static inline void phy_write(struct mii_phy* phy, int reg, int val)
static int reset_one_mii_phy(struct mii_phy* phy, int phy_id)
static int bcm5201_init(struct mii_phy* phy)
static int bcm5201_suspend(struct mii_phy* phy)
static int bcm5221_init(struct mii_phy* phy)
static int bcm5221_suspend(struct mii_phy* phy)
static int bcm5241_init(struct mii_phy* phy)
static int bcm5241_suspend(struct mii_phy* phy)
static int bcm5400_init(struct mii_phy* phy)
static int bcm5400_suspend(struct mii_phy* phy)
static int bcm5401_init(struct mii_phy* phy)
static int bcm5401_suspend(struct mii_phy* phy)
static int bcm5411_init(struct mii_phy* phy)
static int genmii_setup_aneg(struct mii_phy *phy, u32 advertise)
static int genmii_setup_forced(struct mii_phy *phy, int speed, int fd)
static int genmii_poll_link(struct mii_phy *phy)
static int genmii_read_link(struct mii_phy *phy)
static int generic_suspend(struct mii_phy* phy)
static int bcm5421_init(struct mii_phy* phy)
static int bcm54xx_setup_aneg(struct mii_phy *phy, u32 advertise)
static int bcm54xx_setup_forced(struct mii_phy *phy, int speed, int fd)
static int bcm54xx_read_link(struct mii_phy *phy)
static int marvell88e1111_init(struct mii_phy* phy)
#define BCM5421_MODE_MASK	(1 << 5)
static int bcm5421_poll_link(struct mii_phy* phy)
static int bcm5421_read_link(struct mii_phy* phy)
static int bcm5421_enable_fiber(struct mii_phy* phy, int autoneg)
#define BCM5461_FIBER_LINK	(1 << 2)
#define BCM5461_MODE_MASK	(3 << 1)
static int bcm5461_poll_link(struct mii_phy* phy)
#define BCM5461_FIBER_DUPLEX	(1 << 3)
static int bcm5461_read_link(struct mii_phy* phy)
static int bcm5461_enable_fiber(struct mii_phy* phy, int autoneg)
static int marvell_setup_aneg(struct mii_phy *phy, u32 advertise)
static int marvell_setup_forced(struct mii_phy *phy, int speed, int fd)
static int marvell_read_link(struct mii_phy *phy)
#define MII_BASIC_FEATURES \
(SUPPORTED_10baseT_Half | SUPPORTED_10baseT_Full |	\
SUPPORTED_100baseT_Half | SUPPORTED_100baseT_Full |	\
SUPPORTED_Autoneg | SUPPORTED_TP | SUPPORTED_MII |	\
SUPPORTED_Pause)
#define MII_GBIT_FEATURES \
(MII_BASIC_FEATURES |	\
SUPPORTED_1000baseT_Half | SUPPORTED_1000baseT_Full)
static struct mii_phy_ops bcm5201_phy_ops = ;
static struct mii_phy_def bcm5201_phy_def = ;
static struct mii_phy_ops bcm5221_phy_ops = ;
static struct mii_phy_def bcm5221_phy_def = ;
static struct mii_phy_ops bcm5241_phy_ops = ;
static struct mii_phy_def bcm5241_phy_def = ;
static struct mii_phy_ops bcm5400_phy_ops = ;
static struct mii_phy_def bcm5400_phy_def = ;
static struct mii_phy_ops bcm5401_phy_ops = ;
static struct mii_phy_def bcm5401_phy_def = ;
static struct mii_phy_ops bcm5411_phy_ops = ;
static struct mii_phy_def bcm5411_phy_def = ;
static struct mii_phy_ops bcm5421_phy_ops = ;
static struct mii_phy_def bcm5421_phy_def = ;
static struct mii_phy_ops bcm5421k2_phy_ops = ;
static struct mii_phy_def bcm5421k2_phy_def = ;
static struct mii_phy_ops bcm5461_phy_ops = ;
static struct mii_phy_def bcm5461_phy_def = ;
static struct mii_phy_ops bcm5462V_phy_ops = ;
static struct mii_phy_def bcm5462V_phy_def = ;
static struct mii_phy_ops marvell88e1101_phy_ops = ;
static struct mii_phy_ops marvell88e1111_phy_ops = ;
static struct mii_phy_def marvell88e1101v1_phy_def = ;
static struct mii_phy_def marvell88e1101v2_phy_def = ;
static struct mii_phy_def marvell88e1111_phy_def = ;
static struct mii_phy_ops generic_phy_ops = ;
static struct mii_phy_def genmii_phy_def = ;
static struct mii_phy_def* mii_phy_table[] = ;
int mii_phy_probe(struct mii_phy *phy, int mii_id)
EXPORT_SYMBOL(mii_phy_probe);
MODULE_LICENSE("GPL");
