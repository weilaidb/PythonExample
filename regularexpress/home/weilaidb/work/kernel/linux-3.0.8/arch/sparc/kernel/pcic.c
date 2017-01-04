struct pcic_ca2irq ;
struct pcic_sn2list ;
static struct pcic_ca2irq pcic_i_je1a[] = ;
static struct pcic_ca2irq pcic_i_jse[] = ;
static struct pcic_ca2irq pcic_i_se6[] = ;
static struct pcic_ca2irq pcic_i_jk[] = ;
#define SN2L_INIT(name, map)	\
static struct pcic_sn2list pcic_known_sysnames[] = ;
static int pcic0_up;
static struct linux_pcic pcic0;
void __iomem *pcic_regs;
volatile int pcic_speculative;
volatile int pcic_trapped;
unsigned int pcic_build_device_irq(struct platform_device *op,
unsigned int real_irq);
#define CONFIG_CMD(bus, device_fn, where) (0x80000000 | (((unsigned int)bus) << 16) | (((unsigned int)device_fn) << 8) | (where & ~3))
static int pcic_read_config_dword(unsigned int busno, unsigned int devfn,
int where, u32 *value)
static int pcic_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int pcic_write_config_dword(unsigned int busno, unsigned int devfn,
int where, u32 value)
static int pcic_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops pcic_ops = ;
int __init pcic_probe(void)
static void __init pcic_pbm_scan_bus(struct linux_pcic *pcic)
static int __init pcic_init(void)
int pcic_present(void)
static int __devinit pdev_to_pnode(struct linux_pbm_info *pbm,
struct pci_dev *pdev)
static inline struct pcidev_cookie *pci_devcookie_alloc(void)
static void pcic_map_pci_device(struct linux_pcic *pcic,
struct pci_dev *dev, int node)
static void
pcic_fill_irq(struct linux_pcic *pcic, struct pci_dev *dev, int node)
void __devinit pcibios_fixup_bus(struct pci_bus *bus)
unsigned int
pcic_pin_to_irq(unsigned int pin, const char *name)
static volatile int pcic_timer_dummy;
static void pcic_clear_clock_irq(void)
static irqreturn_t pcic_timer_handler (int irq, void *h)
#define USECS_PER_JIFFY  10000
#define TICK_TIMER_LIMIT ((100*1000000/4)/100)
u32 pci_gettimeoffset(void)
void __init pci_time_init(void)
char * __devinit pcibios_setup(char *str)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
int pcibios_enable_device(struct pci_dev *pdev, int mask)
void pcic_nmi(unsigned int pend, struct pt_regs *regs)
static inline unsigned long get_irqmask(int irq_nr)
static void pcic_mask_irq(struct irq_data *data)
static void pcic_unmask_irq(struct irq_data *data)
static unsigned int pcic_startup_irq(struct irq_data *data)
static struct irq_chip pcic_irq = ;
unsigned int pcic_build_device_irq(struct platform_device *op,
unsigned int real_irq)
static void pcic_load_profile_irq(int cpu, unsigned int limit)
void __init sun4m_pci_init_IRQ(void)
int pcibios_assign_resource(struct pci_dev *pdev, int resource)
struct device_node *pci_device_to_OF_node(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_device_to_OF_node);
void outsb(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsb);
void outsw(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsw);
void outsl(unsigned long addr, const void *src, unsigned long count)
EXPORT_SYMBOL(outsl);
void insb(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insb);
void insw(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insw);
void insl(unsigned long addr, void *dst, unsigned long count)
EXPORT_SYMBOL(insl);
subsys_initcall(pcic_init);
