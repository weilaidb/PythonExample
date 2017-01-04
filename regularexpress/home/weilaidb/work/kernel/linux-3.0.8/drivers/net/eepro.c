static const char version[] =
"eepro.c: v0.13b 09/13/2004 aris@cathedrallabs.org\n";
#define DRV_NAME "eepro"
#define DRV_VERSION "0.13c"
#define compat_dev_kfree_skb( skb, mode ) dev_kfree_skb( (skb) )
#define SLOW_DOWN inb(0x80)
#define compat_init_data     __initdata
enum iftype ;
static unsigned int eepro_portlist[] compat_init_data =
;
#define NET_DEBUG 0
static unsigned int net_debug = NET_DEBUG;
#define EEPRO_IO_EXTENT	16
#define	LAN595		0
#define	LAN595TX	1
#define	LAN595FX	2
#define	LAN595FX_10ISA	3
struct eepro_local ;
#define SA_ADDR0 0x00
#define SA_ADDR1 0xaa
#define SA_ADDR2 0x00
#define GetBit(x,y) ((x & (1<<y))>>y)
#define ee_PnP       0
#define ee_Word1     1
#define ee_BusWidth  2
#define ee_FlashAddr 3
#define ee_FlashMask 0x7
#define ee_AutoIO    6
#define ee_reserved0 7
#define ee_Flash     8
#define ee_AutoNeg   9
#define ee_IO0       10
#define ee_IO0Mask   0x
#define ee_IO1       15
#define ee_IntSel    0
#define ee_IntMask   0x7
#define ee_LI        3
#define ee_PC        4
#define ee_TPE_AUI   5
#define ee_Jabber    6
#define ee_AutoPort  7
#define ee_SMOUT     8
#define ee_PROM      9
#define ee_reserved1 10
#define ee_AltReady  13
#define ee_reserved2 14
#define ee_Duplex    15
#define ee_IA5       0
#define ee_IA4       8
#define ee_IA3       0
#define ee_IA2       8
#define ee_IA1       0
#define ee_IA0       8
#define ee_BNC_TPE   0
#define ee_BootType  1
#define ee_BootTypeMask 0x3
#define ee_NumConn   3
#define ee_FlashSock 4
#define ee_PortTPE   5
#define ee_PortBNC   6
#define ee_PortAUI   7
#define ee_PowerMgt  10
#define ee_CP        13
#define ee_CPMask    0x7
#define ee_Stepping  0
#define ee_StepMask  0x0F
#define ee_BoardID   4
#define ee_BoardMask 0x0FFF
#define ee_INT_TO_IRQ 0
#define ee_FX_INT2IRQ 0x1EB8
#define ee_SIZE 0x40
#define ee_Checksum 0xBABA
#define ee_addr_vendor 0x10
#define ee_addr_id 0x11
#define ee_addr_SN 0x12
#define ee_addr_CRC_8 0x14
#define ee_vendor_intel0 0x25
#define ee_vendor_intel1 0xD4
#define ee_id_eepro10p0 0x10
#define ee_id_eepro10p1 0x31
#define TX_TIMEOUT ((4*HZ)/10)
static int	eepro_probe1(struct net_device *dev, int autoprobe);
static int	eepro_open(struct net_device *dev);
static netdev_tx_t eepro_send_packet(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t eepro_interrupt(int irq, void *dev_id);
static void 	eepro_rx(struct net_device *dev);
static void 	eepro_transmit_interrupt(struct net_device *dev);
static int	eepro_close(struct net_device *dev);
static void     set_multicast_list(struct net_device *dev);
static void     eepro_tx_timeout (struct net_device *dev);
static int read_eeprom(int ioaddr, int location, struct net_device *dev);
static int	hardware_send_packet(struct net_device *dev, void *buf, short length);
static int	eepro_grab_irq(struct net_device *dev);
#define RAM_SIZE        0x8000
#define RCV_HEADER      8
#define RCV_DEFAULT_RAM 0x6000
#define XMT_HEADER      8
#define XMT_DEFAULT_RAM	(RAM_SIZE - RCV_DEFAULT_RAM)
#define XMT_START_PRO	RCV_DEFAULT_RAM
#define XMT_START_10	0x0000
#define RCV_START_PRO	0x0000
#define RCV_START_10	XMT_DEFAULT_RAM
#define	RCV_DONE	0x0008
#define	RX_OK		0x2000
#define	RX_ERROR	0x0d81
#define	TX_DONE_BIT	0x0080
#define	TX_OK		0x2000
#define	CHAIN_BIT	0x8000
#define	XMT_STATUS	0x02
#define	XMT_CHAIN	0x04
#define	XMT_COUNT	0x06
#define	BANK0_SELECT	0x00
#define	BANK1_SELECT	0x40
#define	BANK2_SELECT	0x80
#define	COMMAND_REG	0x00
#define	MC_SETUP	0x03
#define	XMT_CMD		0x04
#define	DIAGNOSE_CMD	0x07
#define	RCV_ENABLE_CMD	0x08
#define	RCV_DISABLE_CMD	0x0a
#define	STOP_RCV_CMD	0x0b
#define	RESET_CMD	0x0e
#define	POWER_DOWN_CMD	0x18
#define	RESUME_XMT_CMD	0x1c
#define	SEL_RESET_CMD	0x1e
#define	STATUS_REG	0x01
#define	RX_INT		0x02
#define	TX_INT		0x04
#define	EXEC_STATUS	0x30
#define	ID_REG		0x02
#define	R_ROBIN_BITS	0xc0
#define	ID_REG_MASK	0x2c
#define	ID_REG_SIG	0x24
#define	AUTO_ENABLE	0x10
#define	INT_MASK_REG	0x03
#define	RX_STOP_MASK	0x01
#define	RX_MASK		0x02
#define	TX_MASK		0x04
#define	EXEC_MASK	0x08
#define	ALL_MASK	0x0f
#define	IO_32_BIT	0x10
#define	RCV_BAR		0x04
#define	RCV_STOP	0x06
#define	XMT_BAR_PRO	0x0a
#define	XMT_BAR_10	0x0b
#define	HOST_ADDRESS_REG	0x0c
#define	IO_PORT		0x0e
#define	IO_PORT_32_BIT	0x0c
#define	REG1	0x01
#define	WORD_WIDTH	0x02
#define	INT_ENABLE	0x80
#define INT_NO_REG	0x02
#define	RCV_LOWER_LIMIT_REG	0x08
#define	RCV_UPPER_LIMIT_REG	0x09
#define	XMT_LOWER_LIMIT_REG_PRO 0x0a
#define	XMT_UPPER_LIMIT_REG_PRO 0x0b
#define	XMT_LOWER_LIMIT_REG_10  0x0b
#define	XMT_UPPER_LIMIT_REG_10  0x0a
#define	XMT_Chain_Int	0x20
#define	XMT_Chain_ErrStop	0x40
#define	RCV_Discard_BadFrame	0x80
#define	REG2		0x02
#define	PRMSC_Mode	0x01
#define	Multi_IA	0x20
#define	REG3		0x03
#define	TPE_BIT		0x04
#define	BNC_BIT		0x20
#define	REG13		0x0d
#define	FDX		0x00
#define	A_N_ENABLE	0x02
#define	I_ADD_REG0	0x04
#define	I_ADD_REG1	0x05
#define	I_ADD_REG2	0x06
#define	I_ADD_REG3	0x07
#define	I_ADD_REG4	0x08
#define	I_ADD_REG5	0x09
#define	EEPROM_REG_PRO 0x0a
#define	EEPROM_REG_10  0x0b
#define EESK 0x01
#define EECS 0x02
#define EEDI 0x04
#define EEDO 0x08
#define eepro_reset(ioaddr) outb(RESET_CMD, ioaddr)
#define eepro_sel_reset(ioaddr)
#define eepro_dis_int(ioaddr) outb(ALL_MASK, ioaddr + INT_MASK_REG)
#define eepro_clear_int(ioaddr) outb(ALL_MASK, ioaddr + STATUS_REG)
#define eepro_en_int(ioaddr) outb(ALL_MASK & ~(RX_MASK | TX_MASK), \
ioaddr + INT_MASK_REG)
#define eepro_en_intexec(ioaddr) outb(ALL_MASK & ~(EXEC_MASK), ioaddr + INT_MASK_REG)
#define eepro_en_rx(ioaddr) outb(RCV_ENABLE_CMD, ioaddr)
#define eepro_dis_rx(ioaddr) outb(RCV_DISABLE_CMD, ioaddr)
#define eepro_sw2bank0(ioaddr) outb(BANK0_SELECT, ioaddr)
#define eepro_sw2bank1(ioaddr) outb(BANK1_SELECT, ioaddr)
#define eepro_sw2bank2(ioaddr) outb(BANK2_SELECT, ioaddr)
#define eepro_en_intline(ioaddr) outb(inb(ioaddr + REG1) | INT_ENABLE,\
ioaddr + REG1)
#define eepro_dis_intline(ioaddr) outb(inb(ioaddr + REG1) & 0x7f, \
ioaddr + REG1);
#define eepro_diag(ioaddr) outb(DIAGNOSE_CMD, ioaddr)
#define eepro_ack_rx(ioaddr) outb (RX_INT, ioaddr + STATUS_REG)
#define eepro_ack_tx(ioaddr) outb (TX_INT, ioaddr + STATUS_REG)
#define eepro_complete_selreset(ioaddr)
static int __init do_eepro_probe(struct net_device *dev)
struct net_device * __init eepro_probe(int unit)
static void __init printEEPROMInfo(struct net_device *dev)
static void eepro_recalc (struct net_device *dev)
static void __init eepro_print_info (struct net_device *dev)
static const struct ethtool_ops eepro_ethtool_ops;
static const struct net_device_ops eepro_netdev_ops = ;
static int __init eepro_probe1(struct net_device *dev, int autoprobe)
static const char irqrmap[] = ;
static const char irqrmap2[] = ;
static int	eepro_grab_irq(struct net_device *dev)
static int eepro_open(struct net_device *dev)
static void eepro_tx_timeout (struct net_device *dev)
static netdev_tx_t eepro_send_packet(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t
eepro_interrupt(int irq, void *dev_id)
static int eepro_close(struct net_device *dev)
static void
set_multicast_list(struct net_device *dev)
#define eeprom_delay()
#define EE_READ_CMD (6 << 6)
static int
read_eeprom(int ioaddr, int location, struct net_device *dev)
static int
hardware_send_packet(struct net_device *dev, void *buf, short length)
static void
eepro_rx(struct net_device *dev)
static void
eepro_transmit_interrupt(struct net_device *dev)
static int eepro_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void eepro_ethtool_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *drvinfo)
static const struct ethtool_ops eepro_ethtool_ops = ;
#define MAX_EEPRO 8
static struct net_device *dev_eepro[MAX_EEPRO];
static int io[MAX_EEPRO] = ;
static int irq[MAX_EEPRO];
static int mem[MAX_EEPRO] = ;
static int autodetect;
static int n_eepro;
MODULE_AUTHOR("Pascal Dupuis and others");
MODULE_DESCRIPTION("Intel i82595 ISA EtherExpressPro10/10+ driver");
MODULE_LICENSE("GPL");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
module_param(autodetect, int, 0);
MODULE_PARM_DESC(io, "EtherExpress Pro/10 I/O base address(es)");
MODULE_PARM_DESC(irq, "EtherExpress Pro/10 IRQ number(s)");
MODULE_PARM_DESC(mem, "EtherExpress Pro/10 Rx buffer size(es) in kB (3-29)");
MODULE_PARM_DESC(autodetect, "EtherExpress Pro/10 force board(s) detection (0-1)");
int __init init_module(void)
void __exit
cleanup_module(void)
