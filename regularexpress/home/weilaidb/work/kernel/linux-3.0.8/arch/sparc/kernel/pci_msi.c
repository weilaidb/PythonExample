static irqreturn_t sparc64_msiq_interrupt(int irq, void *cookie)
static u32 pick_msiq(struct pci_pbm_info *pbm)
static int alloc_msi(struct pci_pbm_info *pbm)
static void free_msi(struct pci_pbm_info *pbm, int msi_num)
static struct irq_chip msi_irq = ;
static int sparc64_setup_msi_irq(unsigned int *irq_p,
struct pci_dev *pdev,
struct msi_desc *entry)
static void sparc64_teardown_msi_irq(unsigned int irq,
struct pci_dev *pdev)
static int msi_bitmap_alloc(struct pci_pbm_info *pbm)
static void msi_bitmap_free(struct pci_pbm_info *pbm)
static int msi_table_alloc(struct pci_pbm_info *pbm)
static void msi_table_free(struct pci_pbm_info *pbm)
static int bringup_one_msi_queue(struct pci_pbm_info *pbm,
const struct sparc64_msiq_ops *ops,
unsigned long msiqid,
unsigned long devino)
static int sparc64_bringup_msi_queues(struct pci_pbm_info *pbm,
const struct sparc64_msiq_ops *ops)
void sparc64_pbm_msi_init(struct pci_pbm_info *pbm,
const struct sparc64_msiq_ops *ops)
