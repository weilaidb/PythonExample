static DEFINE_RAW_SPINLOCK(octeon_irq_ciu0_lock);
static DEFINE_RAW_SPINLOCK(octeon_irq_ciu1_lock);
static DEFINE_PER_CPU(unsigned long, octeon_irq_ciu0_en_mirror);
static DEFINE_PER_CPU(unsigned long, octeon_irq_ciu1_en_mirror);
static __read_mostly u8 octeon_irq_ciu_to_irq[8][64];
union octeon_ciu_chip_data ;
struct octeon_core_chip_data ;
#define MIPS_CORE_IRQ_LINES 8
static struct octeon_core_chip_data octeon_irq_core_chip_data[MIPS_CORE_IRQ_LINES];
static void __init octeon_irq_set_ciu_mapping(int irq, int line, int bit,
struct irq_chip *chip,
irq_flow_handler_t handler)
static int octeon_coreid_for_cpu(int cpu)
static int octeon_cpu_for_coreid(int coreid)
static void octeon_irq_core_ack(struct irq_data *data)
static void octeon_irq_core_eoi(struct irq_data *data)
static void octeon_irq_core_set_enable_local(void *arg)
static void octeon_irq_core_disable(struct irq_data *data)
static void octeon_irq_core_enable(struct irq_data *data)
static void octeon_irq_core_bus_lock(struct irq_data *data)
static void octeon_irq_core_bus_sync_unlock(struct irq_data *data)
static struct irq_chip octeon_irq_chip_core = ;
static void __init octeon_irq_init_core(void)
static int next_cpu_for_irq(struct irq_data *data)
static void octeon_irq_ciu_enable(struct irq_data *data)
static void octeon_irq_ciu_enable_local(struct irq_data *data)
static void octeon_irq_ciu_disable_local(struct irq_data *data)
static void octeon_irq_ciu_disable_all(struct irq_data *data)
static void octeon_irq_ciu_enable_all(struct irq_data *data)
static void octeon_irq_ciu_enable_v2(struct irq_data *data)
static void octeon_irq_ciu_enable_local_v2(struct irq_data *data)
static void octeon_irq_ciu_disable_local_v2(struct irq_data *data)
static void octeon_irq_ciu_ack(struct irq_data *data)
static void octeon_irq_ciu_disable_all_v2(struct irq_data *data)
static void octeon_irq_ciu_enable_all_v2(struct irq_data *data)
static void octeon_irq_cpu_offline_ciu(struct irq_data *data)
static int octeon_irq_ciu_set_affinity(struct irq_data *data,
const struct cpumask *dest, bool force)
static int octeon_irq_ciu_set_affinity_v2(struct irq_data *data,
const struct cpumask *dest,
bool force)
static void octeon_irq_dummy_mask(struct irq_data *data)
static struct irq_chip octeon_irq_chip_ciu_v2 = ;
static struct irq_chip octeon_irq_chip_ciu_edge_v2 = ;
static struct irq_chip octeon_irq_chip_ciu = ;
static struct irq_chip octeon_irq_chip_ciu_edge = ;
static struct irq_chip octeon_irq_chip_ciu_mbox_v2 = ;
static struct irq_chip octeon_irq_chip_ciu_mbox = ;
static void octeon_irq_ciu_wd_enable(struct irq_data *data)
static void octeon_irq_ciu1_wd_enable_v2(struct irq_data *data)
static struct irq_chip octeon_irq_chip_ciu_wd_v2 = ;
static struct irq_chip octeon_irq_chip_ciu_wd = ;
static void octeon_irq_ip2_v1(void)
static void octeon_irq_ip2_v2(void)
static void octeon_irq_ip3_v1(void)
static void octeon_irq_ip3_v2(void)
static void octeon_irq_ip4_mask(void)
static void (*octeon_irq_ip2)(void);
static void (*octeon_irq_ip3)(void);
static void (*octeon_irq_ip4)(void);
void __cpuinitdata (*octeon_irq_setup_secondary)(void);
static void __cpuinit octeon_irq_percpu_enable(void)
static void __cpuinit octeon_irq_init_ciu_percpu(void)
static void __cpuinit octeon_irq_setup_secondary_ciu(void)
static void __init octeon_irq_init_ciu(void)
void __init arch_init_irq(void)
asmlinkage void plat_irq_dispatch(void)
void fixup_irqs(void)
