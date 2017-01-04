static const char* version = "SDL RISCom/N2 driver version: 1.15";
static const char* devname = "RISCom/N2";
#undef DEBUG_PKT
#define DEBUG_RINGS
#define USE_WINDOWSIZE 16384
#define USE_BUS16BITS 1
#define CLOCK_BASE 9830400
#define MAX_PAGES      16
#define MAX_RAM_SIZE 0x80000
#if MAX_RAM_SIZE > MAX_PAGES * USE_WINDOWSIZE
#undef MAX_RAM_SIZE
#define MAX_RAM_SIZE (MAX_PAGES * USE_WINDOWSIZE)
#define N2_IOPORTS 0x10
#define NEED_DETECT_RAM
#define NEED_SCA_MSCI_INTR
#define MAX_TX_BUFFERS 10
static char *hw;
#define N2_PCR 0
#define PCR_RUNSCA 1
#define PCR_VPM    2
#define PCR_ENWIN  4
#define PCR_BUS16  8
#define N2_BAR 2
#define N2_PSR 4
#define WIN16K       0x00
#define WIN32K       0x20
#define WIN64K       0x40
#define PSR_WINBITS  0x60
#define PSR_DMAEN    0x80
#define PSR_PAGEBITS 0x0F
#define N2_MCR 6
#define CLOCK_OUT_PORT1 0x80
#define CLOCK_OUT_PORT0 0x40
#define TX422_PORT1     0x20
#define TX422_PORT0     0x10
#define DSR_PORT1       0x08
#define DSR_PORT0       0x04
#define DTR_PORT1       0x02
#define DTR_PORT0       0x01
typedef struct port_s port_t;
typedef struct card_s card_t;
static card_t *first_card;
static card_t **new_card = &first_card;
#define sca_reg(reg, card) (0x8000 | (card)->io | \
((reg) & 0x0F) | (((reg) & 0xF0) << 6))
#define sca_in(reg, card)		inb(sca_reg(reg, card))
#define sca_out(value, reg, card)	outb(value, sca_reg(reg, card))
#define sca_inw(reg, card)		inw(sca_reg(reg, card))
#define sca_outw(value, reg, card)	outw(value, sca_reg(reg, card))
#define port_to_card(port)		((port)->card)
#define log_node(port)			((port)->log_node)
#define phy_node(port)			((port)->phy_node)
#define winsize(card)			(USE_WINDOWSIZE)
#define winbase(card)      	     	((card)->winbase)
#define get_port(card, port)		((card)->ports[port].valid ? \
&(card)->ports[port] : NULL)
static __inline__ u8 sca_get_page(card_t *card)
static __inline__ void openwin(card_t *card, u8 page)
static void n2_set_iface(port_t *port)
static int n2_open(struct net_device *dev)
static int n2_close(struct net_device *dev)
static int n2_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void n2_destroy_card(card_t *card)
static const struct net_device_ops n2_ops = ;
static int __init n2_run(unsigned long io, unsigned long irq,
unsigned long winbase, long valid0, long valid1)
static int __init n2_init(void)
static void __exit n2_cleanup(void)
module_init(n2_init);
module_exit(n2_cleanup);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("RISCom/N2 serial port driver");
MODULE_LICENSE("GPL v2");
module_param(hw, charp, 0444);
MODULE_PARM_DESC(hw, "io,irq,ram,ports:io,irq,...");
