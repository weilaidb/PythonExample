MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Driver for the Cirrus PD6729 PCI-PCMCIA bridge");
MODULE_AUTHOR("Jun Komuro <komurojun-mbn@nifty.com>");
#define MAX_SOCKETS 2
#define to_cycles(ns)	((ns)/120)
#define NO_IRQ	((unsigned int)(0))
static int irq_mode = 1;
module_param(irq_mode, int, 0444);
MODULE_PARM_DESC(irq_mode,
"interrupt delivery mode. 0 = ISA, 1 = PCI. default is 1");
static DEFINE_SPINLOCK(port_lock);
static unsigned char indirect_read(struct pd6729_socket *socket,
unsigned short reg)
static unsigned short indirect_read16(struct pd6729_socket *socket,
unsigned short reg)
static void indirect_write(struct pd6729_socket *socket, unsigned short reg,
unsigned char value)
static void indirect_setbit(struct pd6729_socket *socket, unsigned short reg,
unsigned char mask)
static void indirect_resetbit(struct pd6729_socket *socket, unsigned short reg,
unsigned char mask)
static void indirect_write16(struct pd6729_socket *socket, unsigned short reg,
unsigned short value)
static irqreturn_t pd6729_interrupt(int irq, void *dev)
static void pd6729_interrupt_wrapper(unsigned long data)
static int pd6729_get_status(struct pcmcia_socket *sock, u_int *value)
static int pd6729_set_socket(struct pcmcia_socket *sock, socket_state_t *state)
static int pd6729_set_io_map(struct pcmcia_socket *sock,
struct pccard_io_map *io)
static int pd6729_set_mem_map(struct pcmcia_socket *sock,
struct pccard_mem_map *mem)
static int pd6729_init(struct pcmcia_socket *sock)
static struct pccard_operations pd6729_operations = ;
static irqreturn_t pd6729_test(int irq, void *dev)
static int pd6729_check_irq(int irq)
static u_int __devinit pd6729_isa_scan(void)
static int __devinit pd6729_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit pd6729_pci_remove(struct pci_dev *dev)
static struct pci_device_id pd6729_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, pd6729_pci_ids);
static struct pci_driver pd6729_pci_driver = ;
static int pd6729_module_init(void)
static void pd6729_module_exit(void)
module_init(pd6729_module_init);
module_exit(pd6729_module_exit);
