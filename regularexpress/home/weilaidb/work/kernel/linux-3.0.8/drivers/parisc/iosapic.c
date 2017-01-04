#define MODULE_NAME "iosapic"
#undef PCI_BRIDGE_FUNCS
#undef DEBUG_IOSAPIC
#undef DEBUG_IOSAPIC_IRT
#define DBG(x...) printk(x)
#define DBG(x...)
#define DBG_IRT(x...) printk(x)
#define DBG_IRT(x...)
#define COMPARE_IRTE_ADDR(irte, hpa)	((irte)->dest_iosapic_addr == (hpa))
#define COMPARE_IRTE_ADDR(irte, hpa)	\
((irte)->dest_iosapic_addr == ((hpa) | 0xffffffff00000000ULL))
#define IOSAPIC_REG_SELECT              0x00
#define IOSAPIC_REG_WINDOW              0x10
#define IOSAPIC_REG_EOI                 0x40
#define IOSAPIC_REG_VERSION		0x1
#define IOSAPIC_IRDT_ENTRY(idx)		(0x10+(idx)*2)
#define IOSAPIC_IRDT_ENTRY_HI(idx)	(0x11+(idx)*2)
static inline unsigned int iosapic_read(void __iomem *iosapic, unsigned int reg)
static inline void iosapic_write(void __iomem *iosapic, unsigned int reg, u32 val)
#define IOSAPIC_VERSION_MASK	0x000000ff
#define	IOSAPIC_VERSION(ver)	((int) (ver & IOSAPIC_VERSION_MASK))
#define IOSAPIC_MAX_ENTRY_MASK          0x00ff0000
#define IOSAPIC_MAX_ENTRY_SHIFT         0x10
#define	IOSAPIC_IRDT_MAX_ENTRY(ver)	\
(int) (((ver) & IOSAPIC_MAX_ENTRY_MASK) >> IOSAPIC_MAX_ENTRY_SHIFT)
#define IOSAPIC_IRDT_ENABLE       0x10000
#define IOSAPIC_IRDT_PO_LOW       0x02000
#define IOSAPIC_IRDT_LEVEL_TRIG   0x08000
#define IOSAPIC_IRDT_MODE_LPRI    0x00100
#define IOSAPIC_IRDT_ID_EID_SHIFT              0x10
static DEFINE_SPINLOCK(iosapic_lock);
static inline void iosapic_eoi(void __iomem *addr, unsigned int data)
static struct irt_entry *irt_cell;
static size_t irt_num_entry;
static struct irt_entry *iosapic_alloc_irt(int num_entries)
static int __init
iosapic_load_irt(unsigned long cell_num, struct irt_entry **irt)
void __init iosapic_init(void)
static struct irt_entry *
irt_find_irqline(struct iosapic_info *isi, u8 slot, u8 intr_pin)
static struct irt_entry *
iosapic_xlate_pin(struct iosapic_info *isi, struct pci_dev *pcidev)
static void iosapic_rd_irt_entry(struct vector_info *vi , u32 *dp0, u32 *dp1)
static void iosapic_wr_irt_entry(struct vector_info *vi, u32 dp0, u32 dp1)
static void
iosapic_set_irt_data( struct vector_info *vi, u32 *dp0, u32 *dp1)
static void iosapic_mask_irq(struct irq_data *d)
static void iosapic_unmask_irq(struct irq_data *d)
static void iosapic_eoi_irq(struct irq_data *d)
static int iosapic_set_affinity_irq(struct irq_data *d,
const struct cpumask *dest, bool force)
static struct irq_chip iosapic_interrupt_type = ;
int iosapic_fixup_irq(void *isi_obj, struct pci_dev *pcidev)
static unsigned int
iosapic_rd_version(struct iosapic_info *isi)
void *iosapic_register(unsigned long hpa)
static void
iosapic_prt_irt(void *irt, long num_entry)
static void
iosapic_prt_vi(struct vector_info *vi)
static void
iosapic_prt_isi(struct iosapic_info *isi)
