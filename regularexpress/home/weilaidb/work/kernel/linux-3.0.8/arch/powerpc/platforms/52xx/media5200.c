#undef DEBUG
static struct of_device_id mpc5200_gpio_ids[] __initdata = ;
#define MEDIA5200_IRQ_ENABLE (0x40c)
#define MEDIA5200_IRQ_STATUS (0x410)
#define MEDIA5200_NUM_IRQS   (6)
#define MEDIA5200_IRQ_SHIFT  (32 - MEDIA5200_NUM_IRQS)
struct media5200_irq ;
struct media5200_irq media5200_irq;
static void media5200_irq_unmask(struct irq_data *d)
static void media5200_irq_mask(struct irq_data *d)
static struct irq_chip media5200_irq_chip = ;
void media5200_irq_cascade(unsigned int virq, struct irq_desc *desc)
static int media5200_irq_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int media5200_irq_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static struct irq_host_ops media5200_irq_ops = ;
static void __init media5200_init_irq(void)
static void __init media5200_setup_arch(void)
static const char *board[] __initdata = ;
static int __init media5200_probe(void)
define_machine(media5200_platform) ;
