#undef DEBUG
static int dma_offset_set;
#define U64_TO_U32_LOW(val)	((u32)((val) & 0x00000000ffffffffULL))
#define U64_TO_U32_HIGH(val)	((u32)((val) >> 32))
#define RES_TO_U32_LOW(val)	\
((sizeof(resource_size_t) > sizeof(u32)) ? U64_TO_U32_LOW(val) : (val))
#define RES_TO_U32_HIGH(val)	\
((sizeof(resource_size_t) > sizeof(u32)) ? U64_TO_U32_HIGH(val) : (0))
static inline int ppc440spe_revA(void)
static void fixup_ppc4xx_pci_bridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, fixup_ppc4xx_pci_bridge);
static int __init ppc4xx_parse_dma_ranges(struct pci_controller *hose,
void __iomem *reg,
struct resource *res)
static int __init ppc4xx_setup_one_pci_PMM(struct pci_controller	*hose,
void __iomem			*reg,
u64				plb_addr,
u64				pci_addr,
u64				size,
unsigned int			flags,
int				index)
static void __init ppc4xx_configure_pci_PMMs(struct pci_controller *hose,
void __iomem *reg)
static void __init ppc4xx_configure_pci_PTMs(struct pci_controller *hose,
void __iomem *reg,
const struct resource *res)
static void __init ppc4xx_probe_pci_bridge(struct device_node *np)
static int __init ppc4xx_setup_one_pcix_POM(struct pci_controller	*hose,
void __iomem		*reg,
u64				plb_addr,
u64				pci_addr,
u64				size,
unsigned int		flags,
int				index)
static void __init ppc4xx_configure_pcix_POMs(struct pci_controller *hose,
void __iomem *reg)
static void __init ppc4xx_configure_pcix_PIMs(struct pci_controller *hose,
void __iomem *reg,
const struct resource *res,
int big_pim,
int enable_msi_hole)
static void __init ppc4xx_probe_pcix_bridge(struct device_node *np)
#define MAX_PCIE_BUS_MAPPED	0x40
struct ppc4xx_pciex_port
;
static struct ppc4xx_pciex_port *ppc4xx_pciex_ports;
static unsigned int ppc4xx_pciex_port_count;
struct ppc4xx_pciex_hwops
;
static struct ppc4xx_pciex_hwops *ppc4xx_pciex_hwops;
static int __init ppc440spe_pciex_check_reset(struct device_node *np)
static int __init ppc440spe_pciex_core_init(struct device_node *np)
static int ppc440spe_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc440speA_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc440speB_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc440speA_pciex_init_utl(struct ppc4xx_pciex_port *port)
static int ppc440speB_pciex_init_utl(struct ppc4xx_pciex_port *port)
static struct ppc4xx_pciex_hwops ppc440speA_pcie_hwops __initdata =
;
static struct ppc4xx_pciex_hwops ppc440speB_pcie_hwops __initdata =
;
static int __init ppc460ex_pciex_core_init(struct device_node *np)
static int ppc460ex_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc460ex_pciex_init_utl(struct ppc4xx_pciex_port *port)
static struct ppc4xx_pciex_hwops ppc460ex_pcie_hwops __initdata =
;
static int __init ppc460sx_pciex_core_init(struct device_node *np)
static int ppc460sx_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc460sx_pciex_init_utl(struct ppc4xx_pciex_port *port)
static struct ppc4xx_pciex_hwops ppc460sx_pcie_hwops __initdata = ;
static int __init ppc405ex_pciex_core_init(struct device_node *np)
static void ppc405ex_pcie_phy_reset(struct ppc4xx_pciex_port *port)
static int ppc405ex_pciex_init_port_hw(struct ppc4xx_pciex_port *port)
static int ppc405ex_pciex_init_utl(struct ppc4xx_pciex_port *port)
static struct ppc4xx_pciex_hwops ppc405ex_pcie_hwops __initdata =
;
static int __init ppc4xx_pciex_check_core_init(struct device_node *np)
static void __init ppc4xx_pciex_port_init_mapping(struct ppc4xx_pciex_port *port)
static int __init ppc4xx_pciex_wait_on_sdr(struct ppc4xx_pciex_port *port,
unsigned int sdr_offset,
unsigned int mask,
unsigned int value,
int timeout_ms)
static int __init ppc4xx_pciex_port_init(struct ppc4xx_pciex_port *port)
static int ppc4xx_pciex_validate_bdf(struct ppc4xx_pciex_port *port,
struct pci_bus *bus,
unsigned int devfn)
static void __iomem *ppc4xx_pciex_get_config_base(struct ppc4xx_pciex_port *port,
struct pci_bus *bus,
unsigned int devfn)
static int ppc4xx_pciex_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 *val)
static int ppc4xx_pciex_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops ppc4xx_pciex_pci_ops =
;
static int __init ppc4xx_setup_one_pciex_POM(struct ppc4xx_pciex_port	*port,
struct pci_controller	*hose,
void __iomem		*mbase,
u64			plb_addr,
u64			pci_addr,
u64			size,
unsigned int		flags,
int			index)
static void __init ppc4xx_configure_pciex_POMs(struct ppc4xx_pciex_port *port,
struct pci_controller *hose,
void __iomem *mbase)
static void __init ppc4xx_configure_pciex_PIMs(struct ppc4xx_pciex_port *port,
struct pci_controller *hose,
void __iomem *mbase,
struct resource *res)
static void __init ppc4xx_pciex_port_setup_hose(struct ppc4xx_pciex_port *port)
static void __init ppc4xx_probe_pciex_bridge(struct device_node *np)
static int __init ppc4xx_pci_find_bridges(void)
arch_initcall(ppc4xx_pci_find_bridges);
