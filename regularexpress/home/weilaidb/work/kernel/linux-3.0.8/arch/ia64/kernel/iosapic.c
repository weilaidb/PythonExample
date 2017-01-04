#undef DEBUG_INTERRUPT_ROUTING
#define DBG(fmt...)	printk(fmt)
#define DBG(fmt...)
static DEFINE_SPINLOCK(iosapic_lock);
#define NO_REF_RTE	0
static struct iosapic  iosapic_lists[NR_IOSAPICS];
struct iosapic_rte_info  ____cacheline_aligned;
static struct iosapic_intr_info  iosapic_intr_info[NR_IRQS];
static unsigned char pcat_compat __devinitdata;
static inline void
iosapic_write(struct iosapic *iosapic, unsigned int reg, u32 val)
static inline int
find_iosapic (unsigned int gsi)
static inline int __gsi_to_irq(unsigned int gsi)
int
gsi_to_irq (unsigned int gsi)
static struct iosapic_rte_info *find_rte(unsigned int irq, unsigned int gsi)
static void
set_rte (unsigned int gsi, unsigned int irq, unsigned int dest, int mask)
static void
nop (struct irq_data *data)
void
kexec_disable_iosapic(void)
static void
mask_irq (struct irq_data *data)
static void
unmask_irq (struct irq_data *data)
static int
iosapic_set_affinity(struct irq_data *data, const struct cpumask *mask,
bool force)
static unsigned int
iosapic_startup_level_irq (struct irq_data *data)
static void
iosapic_unmask_level_irq (struct irq_data *data)
#define iosapic_shutdown_level_irq	mask_irq
#define iosapic_enable_level_irq	unmask_irq
#define iosapic_disable_level_irq	mask_irq
#define iosapic_ack_level_irq		nop
static struct irq_chip irq_type_iosapic_level = ;
static unsigned int
iosapic_startup_edge_irq (struct irq_data *data)
static void
iosapic_ack_edge_irq (struct irq_data *data)
#define iosapic_enable_edge_irq		unmask_irq
#define iosapic_disable_edge_irq	nop
static struct irq_chip irq_type_iosapic_edge = ;
static unsigned int
iosapic_version (char __iomem *addr)
static int iosapic_find_sharable_irq(unsigned long trigger, unsigned long pol)
static void __init
iosapic_reassign_vector (int irq)
static inline int irq_is_shared (int irq)
struct irq_chip*
ia64_native_iosapic_get_irq_chip(unsigned long trigger)
static int
register_intr (unsigned int gsi, int irq, unsigned char delivery,
unsigned long polarity, unsigned long trigger)
static unsigned int
get_target_cpu (unsigned int gsi, int irq)
static inline unsigned char choose_dmode(void)
int
iosapic_register_intr (unsigned int gsi,
unsigned long polarity, unsigned long trigger)
void
iosapic_unregister_intr (unsigned int gsi)
int __init
iosapic_register_platform_intr (u32 int_type, unsigned int gsi,
int iosapic_vector, u16 eid, u16 id,
unsigned long polarity, unsigned long trigger)
void __devinit
iosapic_override_isa_irq (unsigned int isa_irq, unsigned int gsi,
unsigned long polarity,
unsigned long trigger)
void __init
ia64_native_iosapic_pcat_compat_init(void)
void __init
iosapic_system_init (int system_pcat_compat)
static inline int
iosapic_alloc (void)
static inline void
iosapic_free (int index)
static inline int
iosapic_check_gsi_range (unsigned int gsi_base, unsigned int ver)
int __devinit
iosapic_init (unsigned long phys_addr, unsigned int gsi_base)
int
iosapic_remove (unsigned int gsi_base)
void __devinit
map_iosapic_to_node(unsigned int gsi_base, int node)
