static void init_8259A(int auto_eoi);
static int i8259A_auto_eoi;
DEFINE_RAW_SPINLOCK(i8259A_lock);
unsigned int cached_irq_mask = 0xffff;
unsigned long io_apic_irqs;
static void mask_8259A_irq(unsigned int irq)
static void disable_8259A_irq(struct irq_data *data)
static void unmask_8259A_irq(unsigned int irq)
static void enable_8259A_irq(struct irq_data *data)
static int i8259A_irq_pending(unsigned int irq)
static void make_8259A_irq(unsigned int irq)
static inline int i8259A_irq_real(unsigned int irq)
static void mask_and_ack_8259A(struct irq_data *data)
struct irq_chip i8259A_chip = ;
static char irq_trigger[2];
static void restore_ELCR(char *trigger)
static void save_ELCR(char *trigger)
static void i8259A_resume(void)
static int i8259A_suspend(void)
static void i8259A_shutdown(void)
static struct syscore_ops i8259_syscore_ops = ;
static void mask_8259A(void)
static void unmask_8259A(void)
static void init_8259A(int auto_eoi)
static void legacy_pic_noop(void) ;
static void legacy_pic_uint_noop(unsigned int unused) ;
static void legacy_pic_int_noop(int unused) ;
static int legacy_pic_irq_pending_noop(unsigned int irq)
struct legacy_pic null_legacy_pic = ;
struct legacy_pic default_legacy_pic = ;
struct legacy_pic *legacy_pic = &default_legacy_pic;
static int __init i8259A_init_ops(void)
device_initcall(i8259A_init_ops);
