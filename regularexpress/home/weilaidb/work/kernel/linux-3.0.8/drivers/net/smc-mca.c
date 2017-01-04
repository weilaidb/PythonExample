#define DRV_NAME "smc-mca"
static int ultramca_open(struct net_device *dev);
static void ultramca_reset_8390(struct net_device *dev);
static void ultramca_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page);
static void ultramca_block_input(struct net_device *dev, int count,
struct sk_buff *skb,
int ring_offset);
static void ultramca_block_output(struct net_device *dev, int count,
const unsigned char *buf,
const int start_page);
static int ultramca_close_card(struct net_device *dev);
#define START_PG        0x00
#define ULTRA_CMDREG 0
#define ULTRA_RESET  0x80
#define ULTRA_MEMENB 0x40
#define ULTRA_NIC_OFFSET 16
#define ULTRA_IO_EXTENT 32
#define EN0_ERWCNT      0x08
#define _61c8_SMC_Ethercard_PLUS_Elite_A_BNC_AUI_WD8013EP_A            0
#define _61c9_SMC_Ethercard_PLUS_Elite_A_UTP_AUI_WD8013EP_A            1
#define _6fc0_WD_Ethercard_PLUS_A_WD8003E_A_OR_WD8003ET_A              2
#define _6fc1_WD_Starcard_PLUS_A_WD8003ST_A                            3
#define _6fc2_WD_Ethercard_PLUS_10T_A_WD8003W_A                        4
#define _efd4_IBM_PS2_Adapter_A_for_Ethernet_UTP_AUI_WD8013WP_A        5
#define _efd5_IBM_PS2_Adapter_A_for_Ethernet_BNC_AUI_WD8013WP_A        6
#define _efe5_IBM_PS2_Adapter_A_for_Ethernet                           7
struct smc_mca_adapters_t ;
#define MAX_ULTRAMCA_CARDS 4
static int ultra_io[MAX_ULTRAMCA_CARDS];
static int ultra_irq[MAX_ULTRAMCA_CARDS];
MODULE_LICENSE("GPL");
module_param_array(ultra_io, int, NULL, 0);
module_param_array(ultra_irq, int, NULL, 0);
MODULE_PARM_DESC(ultra_io, "SMC Ultra/EtherEZ MCA I/O base address(es)");
MODULE_PARM_DESC(ultra_irq, "SMC Ultra/EtherEZ MCA IRQ number(s)");
static const struct  addr_table[] = ;
#define MEM_MASK 64
static const struct  mem_table[] = ;
#define IRQ_MASK 243
static const struct  irq_table[] = ;
static short smc_mca_adapter_ids[] __initdata = ;
static char *smc_mca_adapter_names[] __initdata = ;
static int ultra_found = 0;
static const struct net_device_ops ultramca_netdev_ops = ;
static int __init ultramca_probe(struct device *gen_dev)
static int ultramca_open(struct net_device *dev)
static void ultramca_reset_8390(struct net_device *dev)
static void ultramca_get_8390_hdr(struct net_device *dev, struct e8390_pkt_hdr *hdr, int ring_page)
static void ultramca_block_input(struct net_device *dev, int count, struct sk_buff *skb, int ring_offset)
static void ultramca_block_output(struct net_device *dev, int count, const unsigned char *buf,
int start_page)
static int ultramca_close_card(struct net_device *dev)
static int ultramca_remove(struct device *gen_dev)
static struct mca_driver ultra_driver = ;
static int __init ultramca_init_module(void)
static void __exit ultramca_cleanup_module(void)
module_init(ultramca_init_module);
module_exit(ultramca_cleanup_module);
