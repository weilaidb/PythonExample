MODULE_DESCRIPTION("ICPlus IP175C/IC1001 PHY drivers");
MODULE_AUTHOR("Michael Barkowski");
MODULE_LICENSE("GPL");
static int ip175c_config_init(struct phy_device *phydev)
static int ip1001_config_init(struct phy_device *phydev)
static int ip175c_read_status(struct phy_device *phydev)
static int ip175c_config_aneg(struct phy_device *phydev)
static struct phy_driver ip175c_driver = ;
static struct phy_driver ip1001_driver = ;
static int __init icplus_init(void)
static void __exit icplus_exit(void)
module_init(icplus_init);
module_exit(icplus_exit);
static struct mdio_device_id __maybe_unused icplus_tbl[] = ;
MODULE_DEVICE_TABLE(mdio, icplus_tbl);
