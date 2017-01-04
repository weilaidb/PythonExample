static u32 mii_get_an(struct mii_if_info *mii, u16 addr)
int mii_ethtool_gset(struct mii_if_info *mii, struct ethtool_cmd *ecmd)
int mii_ethtool_sset(struct mii_if_info *mii, struct ethtool_cmd *ecmd)
int mii_check_gmii_support(struct mii_if_info *mii)
int mii_link_ok (struct mii_if_info *mii)
int mii_nway_restart (struct mii_if_info *mii)
void mii_check_link (struct mii_if_info *mii)
unsigned int mii_check_media (struct mii_if_info *mii,
unsigned int ok_to_print,
unsigned int init_media)
int generic_mii_ioctl(struct mii_if_info *mii_if,
struct mii_ioctl_data *mii_data, int cmd,
unsigned int *duplex_chg_out)
MODULE_AUTHOR ("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION ("MII hardware support library");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(mii_link_ok);
EXPORT_SYMBOL(mii_nway_restart);
EXPORT_SYMBOL(mii_ethtool_gset);
EXPORT_SYMBOL(mii_ethtool_sset);
EXPORT_SYMBOL(mii_check_link);
EXPORT_SYMBOL(mii_check_media);
EXPORT_SYMBOL(mii_check_gmii_support);
EXPORT_SYMBOL(generic_mii_ioctl);
