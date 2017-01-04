#define DRIVER_NAME "xilinx_emaclite"
#define XEL_TXBUFF_OFFSET 	0x0
#define XEL_MDIOADDR_OFFSET	0x07E4
#define XEL_MDIOWR_OFFSET	0x07E8
#define XEL_MDIORD_OFFSET	0x07EC
#define XEL_MDIOCTRL_OFFSET	0x07F0
#define XEL_GIER_OFFSET		0x07F8
#define XEL_TSR_OFFSET		0x07FC
#define XEL_TPLR_OFFSET		0x07F4
#define XEL_RXBUFF_OFFSET	0x1000
#define XEL_RPLR_OFFSET		0x100C
#define XEL_RSR_OFFSET		0x17FC
#define XEL_BUFFER_OFFSET	0x0800
#define XEL_MDIOADDR_REGADR_MASK  0x0000001F
#define XEL_MDIOADDR_PHYADR_MASK  0x000003E0
#define XEL_MDIOADDR_PHYADR_SHIFT 5
#define XEL_MDIOADDR_OP_MASK	  0x00000400
#define XEL_MDIOWR_WRDATA_MASK	  0x0000FFFF
#define XEL_MDIORD_RDDATA_MASK	  0x0000FFFF
#define XEL_MDIOCTRL_MDIOSTS_MASK 0x00000001
#define XEL_MDIOCTRL_MDIOEN_MASK  0x00000008
#define XEL_GIER_GIE_MASK	0x80000000
#define XEL_TSR_XMIT_BUSY_MASK	 0x00000001
#define XEL_TSR_PROGRAM_MASK	 0x00000002
#define XEL_TSR_XMIT_IE_MASK	 0x00000008
#define XEL_TSR_XMIT_ACTIVE_MASK 0x80000000
#define XEL_TSR_PROG_MAC_ADDR	(XEL_TSR_XMIT_BUSY_MASK | XEL_TSR_PROGRAM_MASK)
#define XEL_RSR_RECV_DONE_MASK	0x00000001
#define XEL_RSR_RECV_IE_MASK	0x00000008
#define XEL_TPLR_LENGTH_MASK	0x0000FFFF
#define XEL_RPLR_LENGTH_MASK	0x0000FFFF
#define XEL_HEADER_OFFSET	12
#define XEL_HEADER_SHIFT	16
#define XEL_ARP_PACKET_SIZE		28
#define XEL_HEADER_IP_LENGTH_OFFSET	16
#define TX_TIMEOUT		(60*HZ)
#define ALIGNMENT		4
#define BUFFER_ALIGN(adr) ((ALIGNMENT - ((u32) adr)) % ALIGNMENT)
struct net_local ;
static void xemaclite_enable_interrupts(struct net_local *drvdata)
static void xemaclite_disable_interrupts(struct net_local *drvdata)
static void xemaclite_aligned_write(void *src_ptr, u32 *dest_ptr,
unsigned length)
static void xemaclite_aligned_read(u32 *src_ptr, u8 *dest_ptr,
unsigned length)
static int xemaclite_send_data(struct net_local *drvdata, u8 *data,
unsigned int byte_count)
static u16 xemaclite_recv_data(struct net_local *drvdata, u8 *data)
static void xemaclite_update_address(struct net_local *drvdata,
u8 *address_ptr)
static int xemaclite_set_mac_address(struct net_device *dev, void *address)
static void xemaclite_tx_timeout(struct net_device *dev)
static void xemaclite_tx_handler(struct net_device *dev)
static void xemaclite_rx_handler(struct net_device *dev)
static irqreturn_t xemaclite_interrupt(int irq, void *dev_id)
static int xemaclite_mdio_wait(struct net_local *lp)
static int xemaclite_mdio_read(struct mii_bus *bus, int phy_id, int reg)
static int xemaclite_mdio_write(struct mii_bus *bus, int phy_id, int reg,
u16 val)
static int xemaclite_mdio_reset(struct mii_bus *bus)
static int xemaclite_mdio_setup(struct net_local *lp, struct device *dev)
void xemaclite_adjust_link(struct net_device *ndev)
static int xemaclite_open(struct net_device *dev)
static int xemaclite_close(struct net_device *dev)
static int xemaclite_send(struct sk_buff *orig_skb, struct net_device *dev)
static void xemaclite_remove_ndev(struct net_device *ndev)
static bool get_bool(struct platform_device *ofdev, const char *s)
static struct net_device_ops xemaclite_netdev_ops;
static int __devinit xemaclite_of_probe(struct platform_device *ofdev)
static int __devexit xemaclite_of_remove(struct platform_device *of_dev)
static void
xemaclite_poll_controller(struct net_device *ndev)
static struct net_device_ops xemaclite_netdev_ops = ;
static struct of_device_id xemaclite_of_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, xemaclite_of_match);
static struct platform_driver xemaclite_of_driver = ;
static int __init xemaclite_init(void)
static void __exit xemaclite_cleanup(void)
module_init(xemaclite_init);
module_exit(xemaclite_cleanup);
MODULE_AUTHOR("Xilinx, Inc.");
MODULE_DESCRIPTION("Xilinx Ethernet MAC Lite driver");
MODULE_LICENSE("GPL");
