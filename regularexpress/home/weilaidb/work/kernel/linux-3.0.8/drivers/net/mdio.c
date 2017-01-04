MODULE_DESCRIPTION("Generic support for MDIO-compatible transceivers");
MODULE_AUTHOR("Copyright 2006-2009 Solarflare Communications Inc.");
MODULE_LICENSE("GPL");
int mdio45_probe(struct mdio_if_info *mdio, int prtad)
EXPORT_SYMBOL(mdio45_probe);
int mdio_set_flag(const struct mdio_if_info *mdio,
int prtad, int devad, u16 addr, int mask,
bool sense)
EXPORT_SYMBOL(mdio_set_flag);
int mdio45_links_ok(const struct mdio_if_info *mdio, u32 mmd_mask)
EXPORT_SYMBOL(mdio45_links_ok);
int mdio45_nway_restart(const struct mdio_if_info *mdio)
EXPORT_SYMBOL(mdio45_nway_restart);
static u32 mdio45_get_an(const struct mdio_if_info *mdio, u16 addr)
void mdio45_ethtool_gset_npage(const struct mdio_if_info *mdio,
struct ethtool_cmd *ecmd,
u32 npage_adv, u32 npage_lpa)
EXPORT_SYMBOL(mdio45_ethtool_gset_npage);
void mdio45_ethtool_spauseparam_an(const struct mdio_if_info *mdio,
const struct ethtool_pauseparam *ecmd)
EXPORT_SYMBOL(mdio45_ethtool_spauseparam_an);
int mdio_mii_ioctl(const struct mdio_if_info *mdio,
struct mii_ioctl_data *mii_data, int cmd)
EXPORT_SYMBOL(mdio_mii_ioctl);
