static inline int phy_read(struct mii_phy *phy, int reg)
static inline void phy_write(struct mii_phy *phy, int reg, int val)
static inline int gpcs_phy_read(struct mii_phy *phy, int reg)
static inline void gpcs_phy_write(struct mii_phy *phy, int reg, int val)
int emac_mii_reset_phy(struct mii_phy *phy)
int emac_mii_reset_gpcs(struct mii_phy *phy)
static int genmii_setup_aneg(struct mii_phy *phy, u32 advertise)
static int genmii_setup_forced(struct mii_phy *phy, int speed, int fd)
static int genmii_poll_link(struct mii_phy *phy)
static int genmii_read_link(struct mii_phy *phy)
static struct mii_phy_ops generic_phy_ops = ;
static struct mii_phy_def genmii_phy_def = ;
#define MII_CIS8201_10BTCSR	0x16
#define  TENBTCSR_ECHO_DISABLE	0x2000
#define MII_CIS8201_EPCR	0x17
#define  EPCR_MODE_MASK		0x3000
#define  EPCR_GMII_MODE		0x0000
#define  EPCR_RGMII_MODE	0x1000
#define  EPCR_TBI_MODE		0x2000
#define  EPCR_RTBI_MODE		0x3000
#define MII_CIS8201_ACSR	0x1c
#define  ACSR_PIN_PRIO_SELECT	0x0004
static int cis8201_init(struct mii_phy *phy)
static struct mii_phy_ops cis8201_phy_ops = ;
static struct mii_phy_def cis8201_phy_def = ;
static struct mii_phy_def bcm5248_phy_def = ;
static int m88e1111_init(struct mii_phy *phy)
static int m88e1112_init(struct mii_phy *phy)
static int et1011c_init(struct mii_phy *phy)
static struct mii_phy_ops et1011c_phy_ops = ;
static struct mii_phy_def et1011c_phy_def = ;
static struct mii_phy_ops m88e1111_phy_ops = ;
static struct mii_phy_def m88e1111_phy_def = ;
static struct mii_phy_ops m88e1112_phy_ops = ;
static struct mii_phy_def m88e1112_phy_def = ;
static struct mii_phy_def *mii_phy_table[] = ;
int emac_mii_phy_probe(struct mii_phy *phy, int address)
MODULE_LICENSE("GPL");
