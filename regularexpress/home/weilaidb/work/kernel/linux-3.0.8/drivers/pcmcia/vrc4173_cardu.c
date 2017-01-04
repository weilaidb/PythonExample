MODULE_DESCRIPTION("NEC VRC4173 CARDU driver for Socket Services");
MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_LICENSE("GPL");
static int vrc4173_cardu_slots;
static vrc4173_socket_t cardu_sockets[CARDU_MAX_SOCKETS];
extern struct socket_info_t *pcmcia_register_socket (int slot,
struct pccard_operations *vtable,
int use_bus_pm);
extern void pcmcia_unregister_socket(struct socket_info_t *s);
static inline uint8_t exca_readb(vrc4173_socket_t *socket, uint16_t offset)
static inline uint16_t exca_readw(vrc4173_socket_t *socket, uint16_t offset)
static inline void exca_writeb(vrc4173_socket_t *socket, uint16_t offset, uint8_t val)
static inline void exca_writew(vrc4173_socket_t *socket, uint8_t offset, uint16_t val)
static inline uint32_t cardbus_socket_readl(vrc4173_socket_t *socket, u16 offset)
static inline void cardbus_socket_writel(vrc4173_socket_t *socket, u16 offset, uint32_t val)
static void cardu_pciregs_init(struct pci_dev *dev)
static int cardu_init(unsigned int slot)
static int cardu_register_callback(unsigned int sock,
void (*handler)(void *, unsigned int),
void * info)
static int cardu_inquire_socket(unsigned int sock, socket_cap_t *cap)
static int cardu_get_status(unsigned int sock, u_int *value)
static inline uint8_t set_Vcc_value(u_char Vcc)
static inline uint8_t set_Vpp_value(u_char Vpp)
static int cardu_set_socket(unsigned int sock, socket_state_t *state)
static int cardu_get_io_map(unsigned int sock, struct pccard_io_map *io)
static int cardu_set_io_map(unsigned int sock, struct pccard_io_map *io)
static int cardu_get_mem_map(unsigned int sock, struct pccard_mem_map *mem)
static int cardu_set_mem_map(unsigned int sock, struct pccard_mem_map *mem)
static void cardu_proc_setup(unsigned int sock, struct proc_dir_entry *base)
static struct pccard_operations cardu_operations = ;
static void cardu_bh(void *data)
static uint16_t get_events(vrc4173_socket_t *socket)
static void cardu_interrupt(int irq, void *dev_id)
static int __devinit vrc4173_cardu_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static int __devinit vrc4173_cardu_setup(char *options)
__setup("vrc4173_cardu=", vrc4173_cardu_setup);
static struct pci_device_id vrc4173_cardu_id_table[] __devinitdata = ;
static struct pci_driver vrc4173_cardu_driver = ;
static int __devinit vrc4173_cardu_init(void)
static void __devexit vrc4173_cardu_exit(void)
module_init(vrc4173_cardu_init);
module_exit(vrc4173_cardu_exit);
MODULE_DEVICE_TABLE(pci, vrc4173_cardu_id_table);
