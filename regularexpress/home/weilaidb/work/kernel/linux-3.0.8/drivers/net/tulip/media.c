#define mdio_delay() ioread32(mdio_addr)
#define MDIO_SHIFT_CLK		0x10000
#define MDIO_DATA_WRITE0	0x00000
#define MDIO_DATA_WRITE1	0x20000
#define MDIO_ENB		0x00000
#define MDIO_ENB_IN		0x40000
#define MDIO_DATA_READ		0x80000
static const unsigned char comet_miireg2offset[32] = ;
int tulip_mdio_read(struct net_device *dev, int phy_id, int location)
void tulip_mdio_write(struct net_device *dev, int phy_id, int location, int val)
void tulip_select_media(struct net_device *dev, int startup)
int tulip_check_duplex(struct net_device *dev)
void __devinit tulip_find_mii (struct net_device *dev, int board_idx)
