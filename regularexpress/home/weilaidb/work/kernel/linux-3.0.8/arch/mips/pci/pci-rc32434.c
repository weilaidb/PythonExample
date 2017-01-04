#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
static unsigned int korina_cnfg_regs[25] = ;
static struct resource rc32434_res_pci_mem1;
static struct resource rc32434_res_pci_mem2;
static struct resource rc32434_res_pci_mem1 = ;
static struct resource rc32434_res_pci_mem2 = ;
static struct resource rc32434_res_pci_io1 = ;
extern struct pci_ops rc32434_pci_ops;
#define PCI_MEM1_START	PCI_ADDR_START
#define PCI_MEM1_END	(PCI_ADDR_START + CPUTOPCI_MEM_WIN - 1)
#define PCI_MEM2_START	(PCI_ADDR_START + CPUTOPCI_MEM_WIN)
#define PCI_MEM2_END	(PCI_ADDR_START + (2 * CPUTOPCI_MEM_WIN)  - 1)
#define PCI_IO1_START	(PCI_ADDR_START + (2 * CPUTOPCI_MEM_WIN))
#define PCI_IO1_END 							\
(PCI_ADDR_START + (2 * CPUTOPCI_MEM_WIN) + CPUTOPCI_IO_WIN - 1)
#define PCI_IO2_START							\
(PCI_ADDR_START + (2 * CPUTOPCI_MEM_WIN) + CPUTOPCI_IO_WIN)
#define PCI_IO2_END 							\
(PCI_ADDR_START + (2 * CPUTOPCI_MEM_WIN) + (2 * CPUTOPCI_IO_WIN) - 1)
struct pci_controller rc32434_controller2;
struct pci_controller rc32434_controller = ;
#define PCI_ENDIAN_FLAG PCILBAC_sb_m
#define PCI_ENDIAN_FLAG 0
static int __init rc32434_pcibridge_init(void)
static int __init rc32434_pci_init(void)
arch_initcall(rc32434_pci_init);
