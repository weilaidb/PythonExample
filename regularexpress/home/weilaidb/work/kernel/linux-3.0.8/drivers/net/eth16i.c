static char *version =
"eth16i.c: v0.35 01-Jul-1999 Mika Kuoppala (miku@iki.fi)\n";
#define BITSET(ioaddr, bnum)   ((outb(((inb(ioaddr)) | (bnum)), ioaddr)))
#define BITCLR(ioaddr, bnum)   ((outb(((inb(ioaddr)) & (~(bnum))), ioaddr)))
#define ETH16I_IO_EXTENT       32
#define TX_TIMEOUT             (400*HZ/1000)
#define MAX_RX_LOOP            20
#define ETH16I_INTR_ON	       0xef8a
#define ETH16I_INTR_OFF	       0x0000
#define PKT_GOOD               BIT(5)
#define PKT_GOOD_RMT           BIT(4)
#define PKT_SHORT              BIT(3)
#define PKT_ALIGN_ERR          BIT(2)
#define PKT_CRC_ERR            BIT(1)
#define PKT_RX_BUF_OVERFLOW    BIT(0)
#define TX_STATUS_REG          0
#define TX_DONE                BIT(7)
#define NET_BUSY               BIT(6)
#define TX_PKT_RCD             BIT(5)
#define CR_LOST                BIT(4)
#define TX_JABBER_ERR	       BIT(3)
#define COLLISION              BIT(2)
#define COLLISIONS_16          BIT(1)
#define RX_STATUS_REG          1
#define RX_PKT                 BIT(7)
#define BUS_RD_ERR             BIT(6)
#define SHORT_PKT_ERR          BIT(3)
#define ALIGN_ERR              BIT(2)
#define CRC_ERR                BIT(1)
#define RX_BUF_OVERFLOW        BIT(0)
#define TX_INTR_REG            2
#define TX_INTR_DONE           BIT(7)
#define TX_INTR_COL            BIT(2)
#define TX_INTR_16_COL         BIT(1)
#define RX_INTR_REG            3
#define RX_INTR_RECEIVE        BIT(7)
#define RX_INTR_SHORT_PKT      BIT(3)
#define RX_INTR_CRC_ERR        BIT(1)
#define RX_INTR_BUF_OVERFLOW   BIT(0)
#define TRANSMIT_MODE_REG      4
#define LOOPBACK_CONTROL       BIT(1)
#define CONTROL_OUTPUT         BIT(2)
#define RECEIVE_MODE_REG       5
#define RX_BUFFER_EMPTY        BIT(6)
#define ACCEPT_BAD_PACKETS     BIT(5)
#define RECEIVE_SHORT_ADDR     BIT(4)
#define ACCEPT_SHORT_PACKETS   BIT(3)
#define REMOTE_RESET           BIT(2)
#define ADDRESS_FILTER_MODE    BIT(1) | BIT(0)
#define REJECT_ALL             0
#define ACCEPT_ALL             3
#define MODE_1                 1
#define MODE_2                 2
#define CONFIG_REG_0           6
#define DLC_EN                 BIT(7)
#define SRAM_CYCLE_TIME_100NS  BIT(6)
#define SYSTEM_BUS_WIDTH_8     BIT(5)
#define BUFFER_WIDTH_8         BIT(4)
#define TBS1                   BIT(3)
#define TBS0                   BIT(2)
#define SRAM_BS1               BIT(1)
#define SRAM_BS0               BIT(0)
#define ETH16I_TX_BUF_SIZE     3
#define TX_BUF_1x2048          0
#define TX_BUF_2x2048          1
#define TX_BUF_2x4098          2
#define TX_BUF_2x8192          3
#define CONFIG_REG_1           7
#define POWERUP                BIT(5)
#define TRANSMIT_START_REG     10
#define TRANSMIT_START_RB      2
#define TX_START               BIT(7)
#define NODE_ID_0              8
#define NODE_ID_RB             0
#define HASH_TABLE_0           8
#define HASH_TABLE_RB          1
#define BUFFER_MEM_PORT_LB     8
#define DATAPORT               BUFFER_MEM_PORT_LB
#define BUFFER_MEM_PORT_HB     9
#define COL_16_REG             11
#define HALT_ON_16             0x00
#define RETRANS_AND_HALT_ON_16 0x02
#define MAX_COL_16	       10
#define TRANSCEIVER_MODE_REG   13
#define TRANSCEIVER_MODE_RB    2
#define IO_BASE_UNLOCK	       BIT(7)
#define LOWER_SQUELCH_TRESH    BIT(6)
#define LINK_TEST_DISABLE      BIT(5)
#define AUI_SELECT             BIT(4)
#define DIS_AUTO_PORT_SEL      BIT(3)
#define FILTER_SELF_RX_REG     14
#define SKIP_RX_PACKET         BIT(2)
#define FILTER_SELF_RECEIVE    BIT(0)
#define EEPROM_CTRL_REG        16
#define EEPROM_DATA_REG        17
#define CS_0                   0x00
#define CS_1                   0x20
#define SK_0                   0x00
#define SK_1                   0x40
#define DI_0                   0x00
#define DI_1                   0x80
#define EEPROM_READ            0x80
#define E_NODEID_0             0x02
#define E_NODEID_1             0x03
#define E_NODEID_2             0x04
#define E_PORT_SELECT          0x14
#define E_PORT_BNC           0x00
#define E_PORT_DIX           0x01
#define E_PORT_TP            0x02
#define E_PORT_AUTO          0x03
#define E_PORT_FROM_EPROM    0x04
#define E_PRODUCT_CFG          0x30
#define eeprom_slow_io() do while(0)
#define JUMPERLESS_CONFIG      19
#define ID_ROM_0               24
#define ID_ROM_7               31
#define RESET                  ID_ROM_0
static unsigned int eth16i_portlist[] __initdata = ;
static unsigned int eth32i_portlist[] __initdata = ;
static unsigned int eth16i_irqmap[] __initdata = ;
#define NUM_OF_ISA_IRQS    4
static unsigned int eth32i_irqmap[] __initdata = ;
#define EISA_IRQ_REG	0xc89
#define NUM_OF_EISA_IRQS   8
static unsigned int eth16i_tx_buf_map[] = ;
#define ETH16I_DEBUG 0
static unsigned int eth16i_debug = ETH16I_DEBUG;
struct eth16i_local ;
static int     eth16i_probe1(struct net_device *dev, int ioaddr);
static int     eth16i_check_signature(int ioaddr);
static int     eth16i_probe_port(int ioaddr);
static void    eth16i_set_port(int ioaddr, int porttype);
static int     eth16i_send_probe_packet(int ioaddr, unsigned char *b, int l);
static int     eth16i_receive_probe_packet(int ioaddr);
static int     eth16i_get_irq(int ioaddr);
static int     eth16i_read_eeprom(int ioaddr, int offset);
static int     eth16i_read_eeprom_word(int ioaddr);
static void    eth16i_eeprom_cmd(int ioaddr, unsigned char command);
static int     eth16i_open(struct net_device *dev);
static int     eth16i_close(struct net_device *dev);
static netdev_tx_t eth16i_tx(struct sk_buff *skb, struct net_device *dev);
static void    eth16i_rx(struct net_device *dev);
static void    eth16i_timeout(struct net_device *dev);
static irqreturn_t eth16i_interrupt(int irq, void *dev_id);
static void    eth16i_reset(struct net_device *dev);
static void    eth16i_timeout(struct net_device *dev);
static void    eth16i_skip_packet(struct net_device *dev);
static void    eth16i_multicast(struct net_device *dev);
static void    eth16i_select_regbank(unsigned char regbank, int ioaddr);
static void    eth16i_initialize(struct net_device *dev, int boot);
static ushort  eth16i_parse_mediatype(const char* s);
static char cardname[] __initdata = "ICL EtherTeam 16i/32";
static int __init do_eth16i_probe(struct net_device *dev)
struct net_device * __init eth16i_probe(int unit)
static const struct net_device_ops eth16i_netdev_ops = ;
static int __init eth16i_probe1(struct net_device *dev, int ioaddr)
static void eth16i_initialize(struct net_device *dev, int boot)
static int eth16i_probe_port(int ioaddr)
static void eth16i_set_port(int ioaddr, int porttype)
static int eth16i_send_probe_packet(int ioaddr, unsigned char *b, int l)
static int eth16i_receive_probe_packet(int ioaddr)
static int __init eth16i_get_irq(int ioaddr)
static int __init eth16i_check_signature(int ioaddr)
static int eth16i_read_eeprom(int ioaddr, int offset)
static int eth16i_read_eeprom_word(int ioaddr)
static void eth16i_eeprom_cmd(int ioaddr, unsigned char command)
static int eth16i_open(struct net_device *dev)
static int eth16i_close(struct net_device *dev)
static void eth16i_timeout(struct net_device *dev)
static netdev_tx_t eth16i_tx(struct sk_buff *skb, struct net_device *dev)
static void eth16i_rx(struct net_device *dev)
static irqreturn_t eth16i_interrupt(int irq, void *dev_id)
static void eth16i_skip_packet(struct net_device *dev)
static void eth16i_reset(struct net_device *dev)
static void eth16i_multicast(struct net_device *dev)
static void eth16i_select_regbank(unsigned char banknbr, int ioaddr)
static ushort eth16i_parse_mediatype(const char* s)
#define MAX_ETH16I_CARDS 4
static struct net_device *dev_eth16i[MAX_ETH16I_CARDS];
static int io[MAX_ETH16I_CARDS];
static char* mediatype[MAX_ETH16I_CARDS];
static int debug = -1;
MODULE_AUTHOR("Mika Kuoppala <miku@iki.fi>");
MODULE_DESCRIPTION("ICL EtherTeam 16i/32 driver");
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "eth16i I/O base address(es)");
module_param_array(mediatype, charp, NULL, 0);
MODULE_PARM_DESC(mediatype, "eth16i media type of interface(s) (bnc,tp,dix,auto,eprom)");
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "eth16i debug level (0-6)");
int __init init_module(void)
void __exit cleanup_module(void)
