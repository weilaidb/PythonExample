extern unsigned long ht_eoi_space;
int bcm1480_irq_owner[BCM1480_NR_IRQS];
static DEFINE_RAW_SPINLOCK(bcm1480_imr_lock);
void bcm1480_mask_irq(int cpu, int irq)
void bcm1480_unmask_irq(int cpu, int irq)
static int bcm1480_set_affinity(struct irq_data *d, const struct cpumask *mask,
bool force)
static void disable_bcm1480_irq(struct irq_data *d)
static void enable_bcm1480_irq(struct irq_data *d)
static void ack_bcm1480_irq(struct irq_data *d)
static struct irq_chip bcm1480_irq_type = ;
void __init init_bcm1480_irqs(void)
#define IMR_IP2_VAL	K_BCM1480_INT_MAP_I0
#define IMR_IP3_VAL	K_BCM1480_INT_MAP_I1
#define IMR_IP4_VAL	K_BCM1480_INT_MAP_I2
#define IMR_IP5_VAL	K_BCM1480_INT_MAP_I3
#define IMR_IP6_VAL	K_BCM1480_INT_MAP_I4
void __init arch_init_irq(void)
extern void bcm1480_mailbox_interrupt(void);
static inline void dispatch_ip2(void)
asmlinkage void plat_irq_dispatch(void)
