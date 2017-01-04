#define DRV_NAME "ne3210"
static void ne3210_reset_8390(struct net_device *dev);
static void ne3210_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page);
static void ne3210_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset);
static void ne3210_block_output(struct net_device *dev, int count, const unsigned char *buf, const int start_page);
#define NE3210_START_PG		0x00
#define NE3210_STOP_PG		0x80
#define NE3210_IO_EXTENT	0x20
#define NE3210_SA_PROM		0x16
#define NE3210_RESET_PORT	0xc84
#define NE3210_NIC_OFFSET	0x00
#define NE3210_ADDR0		0x00
#define NE3210_ADDR1		0x00
#define NE3210_ADDR2		0x1b
#define NE3210_CFG1		0xc84
#define NE3210_CFG2		0xc90
#define NE3210_CFG_EXTENT       (NE3210_CFG2 - NE3210_CFG1 + 1)
#define NE3210_D_PROBE	0x01
#define NE3210_D_RX_PKT	0x02
#define NE3210_D_TX_PKT	0x04
#define NE3210_D_IRQ	0x08
#define NE3210_DEBUG	0x0
static unsigned char irq_map[] __initdata = ;
static unsigned int shmem_map[] __initdata = ;
static const char *ifmap[] __initdata = ;
static int ifmap_val[] __initdata = ;
static int __init ne3210_eisa_probe (struct device *device)
static int __devexit ne3210_eisa_remove (struct device *device)
static void ne3210_reset_8390(struct net_device *dev)
static void
ne3210_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ne3210_block_input(struct net_device *dev, int count, struct sk_buff *skb,
int ring_offset)
static void ne3210_block_output(struct net_device *dev, int count,
const unsigned char *buf, int start_page)
static struct eisa_device_id ne3210_ids[] = ;
MODULE_DEVICE_TABLE(eisa, ne3210_ids);
static struct eisa_driver ne3210_eisa_driver = ;
MODULE_DESCRIPTION("NE3210 EISA Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(eisa, ne3210_ids);
static int ne3210_init(void)
static void ne3210_cleanup(void)
module_init (ne3210_init);
module_exit (ne3210_cleanup);
