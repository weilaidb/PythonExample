#define PFX	"bcm63xx_pcmcia: "
static struct pci_dev *bcm63xx_cb_dev;
static inline u32 pcmcia_readl(struct bcm63xx_pcmcia_socket *skt, u32 off)
static inline void pcmcia_writel(struct bcm63xx_pcmcia_socket *skt,
u32 val, u32 off)
static int bcm63xx_pcmcia_sock_init(struct pcmcia_socket *sock)
static int bcm63xx_pcmcia_suspend(struct pcmcia_socket *sock)
static int bcm63xx_pcmcia_set_socket(struct pcmcia_socket *sock,
socket_state_t *state)
enum ;
static const u8 vscd_to_cardtype[] = ;
static unsigned int __get_socket_status(struct bcm63xx_pcmcia_socket *skt)
static int bcm63xx_pcmcia_get_status(struct pcmcia_socket *sock,
unsigned int *status)
static void bcm63xx_pcmcia_poll(unsigned long data)
static int bcm63xx_pcmcia_set_io_map(struct pcmcia_socket *sock,
struct pccard_io_map *map)
static int bcm63xx_pcmcia_set_mem_map(struct pcmcia_socket *sock,
struct pccard_mem_map *map)
static struct pccard_operations bcm63xx_pcmcia_operations = ;
static int __devinit bcm63xx_drv_pcmcia_probe(struct platform_device *pdev)
static int __devexit bcm63xx_drv_pcmcia_remove(struct platform_device *pdev)
struct platform_driver bcm63xx_pcmcia_driver = ;
static int __devinit bcm63xx_cb_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit bcm63xx_cb_exit(struct pci_dev *dev)
static struct pci_device_id bcm63xx_cb_table[] = ;
MODULE_DEVICE_TABLE(pci, bcm63xx_cb_table);
static struct pci_driver bcm63xx_cardbus_driver = ;
static int __init bcm63xx_pcmcia_init(void)
static void __exit bcm63xx_pcmcia_exit(void)
module_init(bcm63xx_pcmcia_init);
module_exit(bcm63xx_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxime Bizon <mbizon@freebox.fr>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: bcm63xx Socket Controller");
