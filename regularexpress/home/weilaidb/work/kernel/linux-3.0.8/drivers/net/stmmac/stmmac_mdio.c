#define MII_BUSY 0x00000001
#define MII_WRITE 0x00000002
static int stmmac_mdio_read(struct mii_bus *bus, int phyaddr, int phyreg)
static int stmmac_mdio_write(struct mii_bus *bus, int phyaddr, int phyreg,
u16 phydata)
static int stmmac_mdio_reset(struct mii_bus *bus)
int stmmac_mdio_register(struct net_device *ndev)
int stmmac_mdio_unregister(struct net_device *ndev)
