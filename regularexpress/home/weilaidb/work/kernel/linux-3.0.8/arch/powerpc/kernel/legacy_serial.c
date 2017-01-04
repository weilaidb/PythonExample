#undef DEBUG
#define DBG(fmt...) do  while(0)
#define DBG(fmt...) do  while(0)
#define MAX_LEGACY_SERIAL_PORTS	8
static struct plat_serial8250_port
legacy_serial_ports[MAX_LEGACY_SERIAL_PORTS+1];
static struct legacy_serial_info  legacy_serial_infos[MAX_LEGACY_SERIAL_PORTS];
static struct __initdata of_device_id legacy_serial_parents[] = ;
static unsigned int legacy_serial_count;
static int legacy_serial_console = -1;
static int __init add_legacy_port(struct device_node *np, int want_index,
int iotype, phys_addr_t base,
phys_addr_t taddr, unsigned long irq,
upf_t flags, int irq_check_parent)
static int __init add_legacy_soc_port(struct device_node *np,
struct device_node *soc_dev)
static int __init add_legacy_isa_port(struct device_node *np,
struct device_node *isa_brg)
static int __init add_legacy_pci_port(struct device_node *np,
struct device_node *pci_dev)
static void __init setup_legacy_serial_console(int console)
void __init find_legacy_serial_ports(void)
static struct platform_device serial_device = ;
static void __init fixup_port_irq(int index,
struct device_node *np,
struct plat_serial8250_port *port)
static void __init fixup_port_pio(int index,
struct device_node *np,
struct plat_serial8250_port *port)
static void __init fixup_port_mmio(int index,
struct device_node *np,
struct plat_serial8250_port *port)
static int __init serial_dev_init(void)
device_initcall(serial_dev_init);
static int __init check_legacy_serial_console(void)
console_initcall(check_legacy_serial_console);
