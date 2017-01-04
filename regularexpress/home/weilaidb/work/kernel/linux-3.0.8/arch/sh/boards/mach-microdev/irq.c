#define NUM_EXTERNAL_IRQS 16
static const struct  fpgaIrqTable[NUM_EXTERNAL_IRQS] = ;
#if (MICRODEV_LINUX_IRQ_KEYBOARD != 1)
#  error Inconsistancy in defining the IRQ# for Keyboard!
#if (MICRODEV_LINUX_IRQ_ETHERNET != 3)
#  error Inconsistancy in defining the IRQ# for Ethernet!
#if (MICRODEV_LINUX_IRQ_USB_HC != 7)
#  error Inconsistancy in defining the IRQ# for USB!
#if (MICRODEV_LINUX_IRQ_MOUSE != 12)
#  error Inconsistancy in defining the IRQ# for PS/2 Mouse!
#if (MICRODEV_LINUX_IRQ_IDE2 != 13)
#  error Inconsistancy in defining the IRQ# for secondary IDE!
#if (MICRODEV_LINUX_IRQ_IDE1 != 14)
#  error Inconsistancy in defining the IRQ# for primary IDE!
static void disable_microdev_irq(struct irq_data *data)
static void enable_microdev_irq(struct irq_data *data)
static struct irq_chip microdev_irq_type = ;
static void __init make_microdev_irq(unsigned int irq)
extern void __init init_microdev_irq(void)
extern void microdev_print_fpga_intc_status(void)
