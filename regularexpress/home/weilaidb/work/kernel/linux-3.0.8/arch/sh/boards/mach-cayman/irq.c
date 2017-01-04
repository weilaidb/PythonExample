#define SMSC_IRQ         IRQ_IRL1
#define PCI2_IRQ         IRQ_IRL3
unsigned long epld_virt;
#define EPLD_BASE        0x04002000
#define EPLD_STATUS_BASE (epld_virt + 0x10)
#define EPLD_MASK_BASE   (epld_virt + 0x20)
static irqreturn_t cayman_interrupt_smsc(int irq, void *dev_id)
static irqreturn_t cayman_interrupt_pci2(int irq, void *dev_id)
static struct irqaction cayman_action_smsc = ;
static struct irqaction cayman_action_pci2 = ;
static void enable_cayman_irq(struct irq_data *data)
static void disable_cayman_irq(struct irq_data *data)
struct irq_chip cayman_irq_type = ;
int cayman_irq_demux(int evt)
void init_cayman_irq(void)
