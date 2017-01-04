static const char* version = "Moxa C101 driver version: 1.15";
static const char* devname = "C101";
#undef DEBUG_PKT
#define DEBUG_RINGS
#define C101_PAGE 0x1D00
#define C101_DTR 0x1E00
#define C101_SCA 0x1F00
#define C101_WINDOW_SIZE 0x2000
#define C101_MAPPED_RAM_SIZE 0x4000
#define RAM_SIZE (256 * 1024)
#define TX_RING_BUFFERS 10
#define RX_RING_BUFFERS ((RAM_SIZE - C101_WINDOW_SIZE) /		\
(sizeof(pkt_desc) + HDLC_MAX_MRU) - TX_RING_BUFFERS)
#define CLOCK_BASE 9830400
#define PAGE0_ALWAYS_MAPPED
static char *hw;
typedef struct card_s card_t;
typedef card_t port_t;
static card_t *first_card;
static card_t **new_card = &first_card;
#define sca_in(reg, card)	   readb((card)->win0base + C101_SCA + (reg))
#define sca_out(value, reg, card)  writeb(value, (card)->win0base + C101_SCA + (reg))
#define sca_inw(reg, card)	   readw((card)->win0base + C101_SCA + (reg))
#define sca_outw(value, reg, card) do  while(0)
#define port_to_card(port)	   (port)
#define log_node(port)		   (0)
#define phy_node(port)		   (0)
#define winsize(card)		   (C101_WINDOW_SIZE)
#define win0base(card)		   ((card)->win0base)
#define winbase(card)      	   ((card)->win0base + 0x2000)
#define get_port(card, port)	   (card)
static void sca_msci_intr(port_t *port);
static inline u8 sca_get_page(card_t *card)
static inline void openwin(card_t *card, u8 page)
static inline void set_carrier(port_t *port)
static void sca_msci_intr(port_t *port)
static void c101_set_iface(port_t *port)
static int c101_open(struct net_device *dev)
static int c101_close(struct net_device *dev)
static int c101_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void c101_destroy_card(card_t *card)
static const struct net_device_ops c101_ops = ;
static int __init c101_run(unsigned long irq, unsigned long winbase)
static int __init c101_init(void)
static void __exit c101_cleanup(void)
module_init(c101_init);
module_exit(c101_cleanup);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Moxa C101 serial port driver");
MODULE_LICENSE("GPL v2");
module_param(hw, charp, 0444);
MODULE_PARM_DESC(hw, "irq,ram:irq,...");
