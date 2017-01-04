MODULE_LICENSE("GPL");
static struct pci_device_id i82092aa_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, i82092aa_pci_ids);
static struct pci_driver i82092aa_pci_driver = ;
static struct pccard_operations i82092aa_operations = ;
struct socket_info ;
#define MAX_SOCKETS 4
static struct socket_info sockets[MAX_SOCKETS];
static int socket_count;
static int __devinit i82092aa_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit i82092aa_pci_remove(struct pci_dev *dev)
static DEFINE_SPINLOCK(port_lock);
static unsigned char indirect_read(int socket, unsigned short reg)
static void indirect_write(int socket, unsigned short reg, unsigned char value)
static void indirect_setbit(int socket, unsigned short reg, unsigned char mask)
static void indirect_resetbit(int socket, unsigned short reg, unsigned char mask)
static void indirect_write16(int socket, unsigned short reg, unsigned short value)
static int cycle_time = 120;
static int to_cycles(int ns)
static irqreturn_t i82092aa_interrupt(int irq, void *dev)
static int card_present(int socketno)
static void set_bridge_state(int sock)
static int i82092aa_init(struct pcmcia_socket *sock)
static int i82092aa_get_status(struct pcmcia_socket *socket, u_int *value)
static int i82092aa_set_socket(struct pcmcia_socket *socket, socket_state_t *state)
static int i82092aa_set_io_map(struct pcmcia_socket *socket, struct pccard_io_map *io)
static int i82092aa_set_mem_map(struct pcmcia_socket *socket, struct pccard_mem_map *mem)
static int i82092aa_module_init(void)
static void i82092aa_module_exit(void)
module_init(i82092aa_module_init);
module_exit(i82092aa_module_exit);
