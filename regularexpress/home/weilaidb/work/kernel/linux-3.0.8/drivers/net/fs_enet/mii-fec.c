#define mk_mii_read(REG)	(0x60020000 | ((REG & 0x1f) << 18))
#define mk_mii_write(REG, VAL)	(0x50020000 | ((REG & 0x1f) << 18) | (VAL & 0xffff))
#define mk_mii_end		0
#define FEC_MII_LOOPS	10000
static int fs_enet_fec_mii_read(struct mii_bus *bus , int phy_id, int location)
static int fs_enet_fec_mii_write(struct mii_bus *bus, int phy_id, int location, u16 val)
static int fs_enet_fec_mii_reset(struct mii_bus *bus)
static struct of_device_id fs_enet_mdio_fec_match[];
static int __devinit fs_enet_mdio_probe(struct platform_device *ofdev)
static int fs_enet_mdio_remove(struct platform_device *ofdev)
static struct of_device_id fs_enet_mdio_fec_match[] = ;
MODULE_DEVICE_TABLE(of, fs_enet_mdio_fec_match);
static struct platform_driver fs_enet_fec_mdio_driver = ;
static int fs_enet_mdio_fec_init(void)
static void fs_enet_mdio_fec_exit(void)
module_init(fs_enet_mdio_fec_init);
module_exit(fs_enet_mdio_fec_exit);
