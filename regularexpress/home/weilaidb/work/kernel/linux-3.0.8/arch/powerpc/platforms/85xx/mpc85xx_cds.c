#define CADMUS_BASE (0xf8004000)
#define CADMUS_SIZE (256)
#define CM_VER	(0)
#define CM_CSR	(1)
#define CM_RST	(2)
static int cds_pci_slot = 2;
static volatile u8 *cadmus;
#define ARCADIA_HOST_BRIDGE_IDSEL	17
#define ARCADIA_2ND_BRIDGE_IDSEL	3
static int mpc85xx_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
static void mpc85xx_cds_restart(char *cmd)
static void __init mpc85xx_cds_pci_irq_fixup(struct pci_dev *dev)
static void __devinit skip_fake_bridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_EARLY(0x1957, 0x3fff, skip_fake_bridge);
DECLARE_PCI_FIXUP_EARLY(0x3fff, 0x1957, skip_fake_bridge);
DECLARE_PCI_FIXUP_EARLY(0xff3f, 0x5719, skip_fake_bridge);
static void mpc85xx_8259_cascade_handler(unsigned int irq,
struct irq_desc *desc)
static irqreturn_t mpc85xx_8259_cascade_action(int irq, void *dev_id)
static struct irqaction mpc85xxcds_8259_irqaction = ;
static void __init mpc85xx_cds_pic_init(void)
#if defined(CONFIG_PPC_I8259) && defined(CONFIG_PCI)
static int mpc85xx_cds_8259_attach(void)
machine_device_initcall(mpc85xx_cds, mpc85xx_cds_8259_attach);
static void __init mpc85xx_cds_setup_arch(void)
static void mpc85xx_cds_show_cpuinfo(struct seq_file *m)
static int __init mpc85xx_cds_probe(void)
static struct of_device_id __initdata of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(mpc85xx_cds, declare_of_platform_devices);
define_machine(mpc85xx_cds) ;
