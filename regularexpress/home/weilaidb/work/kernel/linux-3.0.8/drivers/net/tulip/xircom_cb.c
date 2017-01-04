#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("Xircom Cardbus ethernet driver");
MODULE_AUTHOR("Arjan van de Ven <arjanv@redhat.com>");
MODULE_LICENSE("GPL");
#define CSR0	0x00
#define CSR1	0x08
#define CSR2	0x10
#define CSR3	0x18
#define CSR4	0x20
#define CSR5	0x28
#define CSR6	0x30
#define CSR7	0x38
#define CSR8	0x40
#define CSR9	0x48
#define CSR10	0x50
#define CSR11	0x58
#define CSR12	0x60
#define CSR13	0x68
#define CSR14	0x70
#define CSR15	0x78
#define CSR16	0x80
#define PCI_POWERMGMT 	0x40
#define NUMDESCRIPTORS 4
static int bufferoffsets[NUMDESCRIPTORS] = ;
struct xircom_private ;
static int xircom_probe(struct pci_dev *pdev, const struct pci_device_id *id);
static void xircom_remove(struct pci_dev *pdev);
static irqreturn_t xircom_interrupt(int irq, void *dev_instance);
static netdev_tx_t xircom_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static int xircom_open(struct net_device *dev);
static int xircom_close(struct net_device *dev);
static void xircom_up(struct xircom_private *card);
static void xircom_poll_controller(struct net_device *dev);
static void investigate_read_descriptor(struct net_device *dev,struct xircom_private *card, int descnr, unsigned int bufferoffset);
static void investigate_write_descriptor(struct net_device *dev, struct xircom_private *card, int descnr, unsigned int bufferoffset);
static void read_mac_address(struct xircom_private *card);
static void transceiver_voodoo(struct xircom_private *card);
static void initialize_card(struct xircom_private *card);
static void trigger_transmit(struct xircom_private *card);
static void trigger_receive(struct xircom_private *card);
static void setup_descriptors(struct xircom_private *card);
static void remove_descriptors(struct xircom_private *card);
static int link_status_changed(struct xircom_private *card);
static void activate_receiver(struct xircom_private *card);
static void deactivate_receiver(struct xircom_private *card);
static void activate_transmitter(struct xircom_private *card);
static void deactivate_transmitter(struct xircom_private *card);
static void enable_transmit_interrupt(struct xircom_private *card);
static void enable_receive_interrupt(struct xircom_private *card);
static void enable_link_interrupt(struct xircom_private *card);
static void disable_all_interrupts(struct xircom_private *card);
static int link_status(struct xircom_private *card);
static DEFINE_PCI_DEVICE_TABLE(xircom_pci_table) = ;
MODULE_DEVICE_TABLE(pci, xircom_pci_table);
static struct pci_driver xircom_ops = ;
#if defined DEBUG && DEBUG > 1
static void print_binary(unsigned int number)
static const struct net_device_ops netdev_ops = ;
static int __devinit xircom_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit xircom_remove(struct pci_dev *pdev)
static irqreturn_t xircom_interrupt(int irq, void *dev_instance)
static netdev_tx_t xircom_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int xircom_open(struct net_device *dev)
static int xircom_close(struct net_device *dev)
static void xircom_poll_controller(struct net_device *dev)
static void initialize_card(struct xircom_private *card)
static void trigger_transmit(struct xircom_private *card)
static void trigger_receive(struct xircom_private *card)
static void setup_descriptors(struct xircom_private *card)
static void remove_descriptors(struct xircom_private *card)
static int link_status_changed(struct xircom_private *card)
static int transmit_active(struct xircom_private *card)
static int receive_active(struct xircom_private *card)
static void activate_receiver(struct xircom_private *card)
static void deactivate_receiver(struct xircom_private *card)
static void activate_transmitter(struct xircom_private *card)
static void deactivate_transmitter(struct xircom_private *card)
static void enable_transmit_interrupt(struct xircom_private *card)
static void enable_receive_interrupt(struct xircom_private *card)
static void enable_link_interrupt(struct xircom_private *card)
static void disable_all_interrupts(struct xircom_private *card)
static void enable_common_interrupts(struct xircom_private *card)
static int enable_promisc(struct xircom_private *card)
static int link_status(struct xircom_private *card)
static void read_mac_address(struct xircom_private *card)
static void transceiver_voodoo(struct xircom_private *card)
static void xircom_up(struct xircom_private *card)
static void
investigate_read_descriptor(struct net_device *dev, struct xircom_private *card,
int descnr, unsigned int bufferoffset)
static void
investigate_write_descriptor(struct net_device *dev,
struct xircom_private *card,
int descnr, unsigned int bufferoffset)
static int __init xircom_init(void)
static void __exit xircom_exit(void)
module_init(xircom_init)
module_exit(xircom_exit)
