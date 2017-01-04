#undef DEBUG
#undef DEBUG_IPI
#undef DEBUG_IRQ
#undef DEBUG_LOW
#define DBG(fmt...) printk(fmt)
#define DBG(fmt...)
static struct mpic *mpics;
static struct mpic *mpic_primary;
static DEFINE_RAW_SPINLOCK(mpic_lock);
#define distribute_irqs	(1)
#define distribute_irqs	(0)
static u32 mpic_infos[][MPIC_IDX_END] = ;
#define MPIC_INFO(name) mpic->hw_set[MPIC_IDX_##name]
#define MPIC_INFO(name) MPIC_##name
static inline unsigned int mpic_processor_id(struct mpic *mpic)
static inline u32 _mpic_read(enum mpic_reg_type type,
struct mpic_reg_bank *rb,
unsigned int reg)
static inline void _mpic_write(enum mpic_reg_type type,
struct mpic_reg_bank *rb,
unsigned int reg, u32 value)
static inline u32 _mpic_ipi_read(struct mpic *mpic, unsigned int ipi)
static inline void _mpic_ipi_write(struct mpic *mpic, unsigned int ipi, u32 value)
static inline u32 _mpic_tm_read(struct mpic *mpic, unsigned int tm)
static inline void _mpic_tm_write(struct mpic *mpic, unsigned int tm, u32 value)
static inline u32 _mpic_cpu_read(struct mpic *mpic, unsigned int reg)
static inline void _mpic_cpu_write(struct mpic *mpic, unsigned int reg, u32 value)
static inline u32 _mpic_irq_read(struct mpic *mpic, unsigned int src_no, unsigned int reg)
static inline void _mpic_irq_write(struct mpic *mpic, unsigned int src_no,
unsigned int reg, u32 value)
#define mpic_read(b,r)		_mpic_read(mpic->reg_type,&(b),(r))
#define mpic_write(b,r,v)	_mpic_write(mpic->reg_type,&(b),(r),(v))
#define mpic_ipi_read(i)	_mpic_ipi_read(mpic,(i))
#define mpic_ipi_write(i,v)	_mpic_ipi_write(mpic,(i),(v))
#define mpic_tm_read(i)		_mpic_tm_read(mpic,(i))
#define mpic_tm_write(i,v)	_mpic_tm_write(mpic,(i),(v))
#define mpic_cpu_read(i)	_mpic_cpu_read(mpic,(i))
#define mpic_cpu_write(i,v)	_mpic_cpu_write(mpic,(i),(v))
#define mpic_irq_read(s,r)	_mpic_irq_read(mpic,(s),(r))
#define mpic_irq_write(s,r,v)	_mpic_irq_write(mpic,(s),(r),(v))
static void _mpic_map_mmio(struct mpic *mpic, phys_addr_t phys_addr,
struct mpic_reg_bank *rb, unsigned int offset,
unsigned int size)
static void _mpic_map_dcr(struct mpic *mpic, struct device_node *node,
struct mpic_reg_bank *rb,
unsigned int offset, unsigned int size)
static inline void mpic_map(struct mpic *mpic, struct device_node *node,
phys_addr_t phys_addr, struct mpic_reg_bank *rb,
unsigned int offset, unsigned int size)
#define mpic_map(m,n,p,b,o,s)	_mpic_map_mmio(m,p,b,o,s)
static void __init mpic_test_broken_ipi(struct mpic *mpic)
static inline int mpic_is_ht_interrupt(struct mpic *mpic, unsigned int source)
static inline void mpic_ht_end_irq(struct mpic *mpic, unsigned int source)
static void mpic_startup_ht_interrupt(struct mpic *mpic, unsigned int source,
bool level)
static void mpic_shutdown_ht_interrupt(struct mpic *mpic, unsigned int source)
static void __init mpic_scan_ht_msi(struct mpic *mpic, u8 __iomem *devbase,
unsigned int devfn)
static void __init mpic_scan_ht_msi(struct mpic *mpic, u8 __iomem *devbase,
unsigned int devfn)
static void __init mpic_scan_ht_pic(struct mpic *mpic, u8 __iomem *devbase,
unsigned int devfn, u32 vdid)
static void __init mpic_scan_ht_pics(struct mpic *mpic)
static inline int mpic_is_ht_interrupt(struct mpic *mpic, unsigned int source)
static void __init mpic_scan_ht_pics(struct mpic *mpic)
static int irq_choose_cpu(const struct cpumask *mask)
static int irq_choose_cpu(const struct cpumask *mask)
static struct mpic *mpic_find(unsigned int irq)
static unsigned int mpic_is_ipi(struct mpic *mpic, unsigned int irq)
static unsigned int mpic_is_tm(struct mpic *mpic, unsigned int irq)
static inline u32 mpic_physmask(u32 cpumask)
static inline struct mpic * mpic_from_ipi(struct irq_data *d)
static inline struct mpic * mpic_from_irq(unsigned int irq)
static inline struct mpic * mpic_from_irq_data(struct irq_data *d)
static inline void mpic_eoi(struct mpic *mpic)
void mpic_unmask_irq(struct irq_data *d)
void mpic_mask_irq(struct irq_data *d)
void mpic_end_irq(struct irq_data *d)
static void mpic_unmask_ht_irq(struct irq_data *d)
static unsigned int mpic_startup_ht_irq(struct irq_data *d)
static void mpic_shutdown_ht_irq(struct irq_data *d)
static void mpic_end_ht_irq(struct irq_data *d)
static void mpic_unmask_ipi(struct irq_data *d)
static void mpic_mask_ipi(struct irq_data *d)
static void mpic_end_ipi(struct irq_data *d)
static void mpic_unmask_tm(struct irq_data *d)
static void mpic_mask_tm(struct irq_data *d)
int mpic_set_affinity(struct irq_data *d, const struct cpumask *cpumask,
bool force)
static unsigned int mpic_type_to_vecpri(struct mpic *mpic, unsigned int type)
int mpic_set_irq_type(struct irq_data *d, unsigned int flow_type)
void mpic_set_vector(unsigned int virq, unsigned int vector)
void mpic_set_destination(unsigned int virq, unsigned int cpuid)
static struct irq_chip mpic_irq_chip = ;
static struct irq_chip mpic_ipi_chip = ;
static struct irq_chip mpic_tm_chip = ;
static struct irq_chip mpic_irq_ht_chip = ;
static int mpic_host_match(struct irq_host *h, struct device_node *node)
static int mpic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int mpic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops mpic_host_ops = ;
static int mpic_reset_prohibited(struct device_node *node)
struct mpic * __init mpic_alloc(struct device_node *node,
phys_addr_t phys_addr,
unsigned int flags,
unsigned int isu_size,
unsigned int irq_count,
const char *name)
void __init mpic_assign_isu(struct mpic *mpic, unsigned int isu_num,
phys_addr_t paddr)
void __init mpic_set_default_senses(struct mpic *mpic, u8 *senses, int count)
void __init mpic_init(struct mpic *mpic)
void __init mpic_set_clk_ratio(struct mpic *mpic, u32 clock_ratio)
void __init mpic_set_serial_int(struct mpic *mpic, int enable)
void mpic_irq_set_priority(unsigned int irq, unsigned int pri)
void mpic_setup_this_cpu(void)
int mpic_cpu_get_priority(void)
void mpic_cpu_set_priority(int prio)
void mpic_teardown_this_cpu(int secondary)
static unsigned int _mpic_get_one_irq(struct mpic *mpic, int reg)
unsigned int mpic_get_one_irq(struct mpic *mpic)
unsigned int mpic_get_irq(void)
unsigned int mpic_get_coreint_irq(void)
unsigned int mpic_get_mcirq(void)
void mpic_request_ipis(void)
void smp_mpic_message_pass(int cpu, int msg)
int __init smp_mpic_probe(void)
void __devinit smp_mpic_setup_cpu(int cpu)
void mpic_reset_core(int cpu)
static void mpic_suspend_one(struct mpic *mpic)
static int mpic_suspend(void)
static void mpic_resume_one(struct mpic *mpic)
static void mpic_resume(void)
static struct syscore_ops mpic_syscore_ops = ;
static int mpic_init_sys(void)
device_initcall(mpic_init_sys);
