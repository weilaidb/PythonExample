extern unsigned long ldt_eoi_space;
int sb1250_irq_owner[SB1250_NR_IRQS];
static DEFINE_RAW_SPINLOCK(sb1250_imr_lock);
void sb1250_mask_irq(int cpu, int irq)
void sb1250_unmask_irq(int cpu, int irq)
static int sb1250_set_affinity(struct irq_data *d, const struct cpumask *mask,
bool force)
static void enable_sb1250_irq(struct irq_data *d)
static void ack_sb1250_irq(struct irq_data *d)
static struct irq_chip sb1250_irq_type = ;
void __init init_sb1250_irqs(void)
#define IMR_IP2_VAL	K_INT_MAP_I0
#define IMR_IP3_VAL	K_INT_MAP_I1
#define IMR_IP4_VAL	K_INT_MAP_I2
#define IMR_IP5_VAL	K_INT_MAP_I3
#define IMR_IP6_VAL	K_INT_MAP_I4
void __init arch_init_irq(void)
extern void sb1250_mailbox_interrupt(void);
static inline void dispatch_ip2(void)
asmlinkage void plat_irq_dispatch(void)
