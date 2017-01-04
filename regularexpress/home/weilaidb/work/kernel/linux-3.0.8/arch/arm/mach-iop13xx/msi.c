#define IOP13XX_NUM_MSI_IRQS 128
static DECLARE_BITMAP(msi_irq_in_use, IOP13XX_NUM_MSI_IRQS);
static u32 read_imipr_0(void)
static void write_imipr_0(u32 val)
static u32 read_imipr_1(void)
static void write_imipr_1(u32 val)
static u32 read_imipr_2(void)
static void write_imipr_2(u32 val)
static u32 read_imipr_3(void)
static void write_imipr_3(u32 val)
static u32 (*read_imipr[])(void) = ;
static void (*write_imipr[])(u32) = ;
static void iop13xx_msi_handler(unsigned int irq, struct irq_desc *desc)
void __init iop13xx_msi_init(void)
int create_irq(void)
void destroy_irq(unsigned int irq)
void arch_teardown_msi_irq(unsigned int irq)
static void iop13xx_msi_nop(struct irq_data *d)
static struct irq_chip iop13xx_msi_chip = ;
int arch_setup_msi_irq(struct pci_dev *pdev, struct msi_desc *desc)
