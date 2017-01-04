#undef DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define tsi_mk_config_addr(bus, devfunc, offset) \
((((bus)<<16) | ((devfunc)<<8) | (offset & 0xfc)) + tsi108_pci_cfg_base)
u32 tsi108_pci_cfg_base;
static u32 tsi108_pci_cfg_phys;
u32 tsi108_csr_vir_base;
static struct irq_host *pci_irq_host;
extern u32 get_vir_csrbase(void);
extern u32 tsi108_read_reg(u32 reg_offset);
extern void tsi108_write_reg(u32 reg_offset, u32 val);
int
tsi108_direct_write_config(struct pci_bus *bus, unsigned int devfunc,
int offset, int len, u32 val)
void tsi108_clear_pci_error(u32 pci_cfg_base)
#define __tsi108_read_pci_config(x, addr, op)		\
__asm__ __volatile__(				\
"	"op" %0,0,%1\n"		\
"1:	eieio\n"			\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li %0,-1\n"			\
"	b 2b\n"				\
".section __ex_table,\"a\"\n"		\
"	.align 2\n"			\
"	.long 1b,3b\n"			\
".text"					\
: "=r"(x) : "r"(addr))
int
tsi108_direct_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 * val)
void tsi108_clear_pci_cfg_error(void)
static struct pci_ops tsi108_direct_pci_ops = ;
int __init tsi108_setup_pci(struct device_node *dev, u32 cfg_phys, int primary)
static void tsi108_pci_int_mask(u_int irq)
static void tsi108_pci_int_unmask(u_int irq)
static void init_pci_source(void)
static inline unsigned int get_pci_source(void)
static void tsi108_pci_irq_unmask(struct irq_data *d)
static void tsi108_pci_irq_mask(struct irq_data *d)
static void tsi108_pci_irq_ack(struct irq_data *d)
static struct irq_chip tsi108_pci_irq = ;
static int pci_irq_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static int pci_irq_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static struct irq_host_ops pci_irq_host_ops = ;
void __init tsi108_pci_int_init(struct device_node *node)
void tsi108_irq_cascade(unsigned int irq, struct irq_desc *desc)
