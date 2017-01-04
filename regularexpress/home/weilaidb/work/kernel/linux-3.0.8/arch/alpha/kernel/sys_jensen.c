#define __EXTERN_INLINE inline
#undef  __EXTERN_INLINE
static void
jensen_local_enable(struct irq_data *d)
static void
jensen_local_disable(struct irq_data *d)
static void
jensen_local_mask_ack(struct irq_data *d)
static struct irq_chip jensen_local_irq_type = ;
static void
jensen_device_interrupt(unsigned long vector)
static void __init
jensen_init_irq(void)
static void __init
jensen_init_arch(void)
static void
jensen_machine_check(unsigned long vector, unsigned long la)
struct alpha_machine_vector jensen_mv __initmv = ;
ALIAS_MV(jensen)
