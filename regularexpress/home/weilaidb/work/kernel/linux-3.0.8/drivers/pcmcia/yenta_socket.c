static int disable_clkrun;
module_param(disable_clkrun, bool, 0444);
MODULE_PARM_DESC(disable_clkrun, "If PC card doesn't function properly, please try this option");
static int isa_probe = 1;
module_param(isa_probe, bool, 0444);
MODULE_PARM_DESC(isa_probe, "If set ISA interrupts are probed (default). Set to N to disable probing");
static int pwr_irqs_off;
module_param(pwr_irqs_off, bool, 0644);
MODULE_PARM_DESC(pwr_irqs_off, "Force IRQs off during power-on of slot. Use only when seeing IRQ storms!");
static char o2_speedup[] = "default";
module_param_string(o2_speedup, o2_speedup, sizeof(o2_speedup), 0444);
MODULE_PARM_DESC(o2_speedup, "Use prefetch/burst for O2-bridges: 'on', 'off' "
"or 'default' (uses recommended behaviour for the detected bridge)");
static u32 isa_interrupts = 0x0ef8;
#define debug(x, s, args...) dev_dbg(&s->dev->dev, x, ##args)
#define to_cycles(ns)	((ns)/120)
#define to_ns(cycles)	((cycles)*120)
static int yenta_probe_cb_irq(struct yenta_socket *socket);
static unsigned int yenta_probe_irq(struct yenta_socket *socket,
u32 isa_irq_mask);
static unsigned int override_bios;
module_param(override_bios, uint, 0000);
MODULE_PARM_DESC(override_bios, "yenta ignore bios resource allocation");
static inline u32 cb_readl(struct yenta_socket *socket, unsigned reg)
static inline void cb_writel(struct yenta_socket *socket, unsigned reg, u32 val)
static inline u8 config_readb(struct yenta_socket *socket, unsigned offset)
static inline u16 config_readw(struct yenta_socket *socket, unsigned offset)
static inline u32 config_readl(struct yenta_socket *socket, unsigned offset)
static inline void config_writeb(struct yenta_socket *socket, unsigned offset, u8 val)
static inline void config_writew(struct yenta_socket *socket, unsigned offset, u16 val)
static inline void config_writel(struct yenta_socket *socket, unsigned offset, u32 val)
static inline u8 exca_readb(struct yenta_socket *socket, unsigned reg)
static inline u8 exca_readw(struct yenta_socket *socket, unsigned reg)
static inline void exca_writeb(struct yenta_socket *socket, unsigned reg, u8 val)
static void exca_writew(struct yenta_socket *socket, unsigned reg, u16 val)
static ssize_t show_yenta_registers(struct device *yentadev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(yenta_registers, S_IRUSR, show_yenta_registers, NULL);
static int yenta_get_status(struct pcmcia_socket *sock, unsigned int *value)
static void yenta_set_power(struct yenta_socket *socket, socket_state_t *state)
static int yenta_set_socket(struct pcmcia_socket *sock, socket_state_t *state)
static int yenta_set_io_map(struct pcmcia_socket *sock, struct pccard_io_map *io)
static int yenta_set_mem_map(struct pcmcia_socket *sock, struct pccard_mem_map *mem)
static irqreturn_t yenta_interrupt(int irq, void *dev_id)
static void yenta_interrupt_wrapper(unsigned long data)
static void yenta_clear_maps(struct yenta_socket *socket)
static void yenta_interrogate(struct yenta_socket *socket)
static int yenta_sock_init(struct pcmcia_socket *sock)
static int yenta_sock_suspend(struct pcmcia_socket *sock)
#define BRIDGE_MEM_MAX (4*1024*1024)
#define BRIDGE_MEM_ACC (128*1024)
#define BRIDGE_MEM_MIN (16*1024)
#define BRIDGE_IO_MAX 512
#define BRIDGE_IO_ACC 256
#define BRIDGE_IO_MIN 32
#define PCIBIOS_MIN_CARDBUS_IO PCIBIOS_MIN_IO
static int yenta_search_one_res(struct resource *root, struct resource *res,
u32 min)
static int yenta_search_res(struct yenta_socket *socket, struct resource *res,
u32 min)
static int yenta_allocate_res(struct yenta_socket *socket, int nr, unsigned type, int addr_start, int addr_end)
static void yenta_allocate_resources(struct yenta_socket *socket)
static void yenta_free_resources(struct yenta_socket *socket)
static void __devexit yenta_close(struct pci_dev *dev)
static struct pccard_operations yenta_socket_operations = ;
enum ;
static struct cardbus_type cardbus_type[] = ;
static unsigned int yenta_probe_irq(struct yenta_socket *socket, u32 isa_irq_mask)
static irqreturn_t yenta_probe_handler(int irq, void *dev_id)
static int yenta_probe_cb_irq(struct yenta_socket *socket)
static void yenta_get_socket_capabilities(struct yenta_socket *socket, u32 isa_irq_mask)
static void yenta_config_init(struct yenta_socket *socket)
static void yenta_fixup_parent_bridge(struct pci_bus *cardbus_bridge)
static int __devinit yenta_probe(struct pci_dev *dev, const struct pci_device_id *id)
static int yenta_dev_suspend_noirq(struct device *dev)
static int yenta_dev_resume_noirq(struct device *dev)
static const struct dev_pm_ops yenta_pm_ops = ;
#define YENTA_PM_OPS	(&yenta_pm_ops)
#define YENTA_PM_OPS	NULL
#define CB_ID(vend, dev, type)				\
static struct pci_device_id yenta_table[] = ;
MODULE_DEVICE_TABLE(pci, yenta_table);
static struct pci_driver yenta_cardbus_driver = ;
static int __init yenta_socket_init(void)
static void __exit yenta_socket_exit(void)
module_init(yenta_socket_init);
module_exit(yenta_socket_exit);
MODULE_LICENSE("GPL");
