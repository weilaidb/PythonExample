static int temac_mdio_read(struct mii_bus *bus, int phy_id, int reg)
static int temac_mdio_write(struct mii_bus *bus, int phy_id, int reg, u16 val)
int temac_mdio_setup(struct temac_local *lp, struct device_node *np)
void temac_mdio_teardown(struct temac_local *lp)
