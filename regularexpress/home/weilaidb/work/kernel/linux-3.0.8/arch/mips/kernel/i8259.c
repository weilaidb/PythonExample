static int i8259A_auto_eoi = -1;
DEFINE_RAW_SPINLOCK(i8259A_lock);
static void disable_8259A_irq(struct irq_data *d);
static void enable_8259A_irq(struct irq_data *d);
static void mask_and_ack_8259A(struct irq_data *d);
static void init_8259A(int auto_eoi);
static struct irq_chip i8259A_chip = ;
static unsigned int cached_irq_mask = 0xffff;
#define cached_master_mask	(cached_irq_mask)
#define cached_slave_mask	(cached_irq_mask >> 8)
static void disable_8259A_irq(struct irq_data *d)
static void enable_8259A_irq(struct irq_data *d)
int i8259A_irq_pending(unsigned int irq)
void make_8259A_irq(unsigned int irq)
static inline int i8259A_irq_real(unsigned int irq)
static void mask_and_ack_8259A(struct irq_data *d)
static void i8259A_resume(void)
static void i8259A_shutdown(void)
static struct syscore_ops i8259_syscore_ops = ;
static int __init i8259A_init_sysfs(void)
device_initcall(i8259A_init_sysfs);
static void init_8259A(int auto_eoi)
static struct irqaction irq2 = ;
static struct resource pic1_io_resource = ;
static struct resource pic2_io_resource = ;
void __init init_i8259_irqs(void)
