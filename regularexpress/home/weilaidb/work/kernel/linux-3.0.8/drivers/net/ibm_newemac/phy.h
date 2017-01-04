#define __IBM_NEWEMAC_PHY_H
struct mii_phy;
struct mii_phy_ops ;
struct mii_phy_def ;
struct mii_phy ;
int emac_mii_phy_probe(struct mii_phy *phy, int address);
int emac_mii_reset_phy(struct mii_phy *phy);
int emac_mii_reset_gpcs(struct mii_phy *phy);
