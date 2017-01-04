struct icp_ipl ;
static struct icp_ipl __iomem *icp_native_regs[NR_CPUS];
static inline unsigned int icp_native_get_xirr(void)
static inline void icp_native_set_xirr(unsigned int value)
static inline void icp_native_set_cppr(u8 value)
static inline void icp_native_set_qirr(int n_cpu, u8 value)
static void icp_native_set_cpu_priority(unsigned char cppr)
static void icp_native_eoi(struct irq_data *d)
static void icp_native_teardown_cpu(void)
static void icp_native_flush_ipi(void)
static unsigned int icp_native_get_irq(void)
static void icp_native_cause_ipi(int cpu, unsigned long data)
static irqreturn_t icp_native_ipi_action(int irq, void *dev_id)
static int __init icp_native_map_one_cpu(int hw_id, unsigned long addr,
unsigned long size)
static int __init icp_native_init_one_node(struct device_node *np,
unsigned int *indx)
static const struct icp_ops icp_native_ops = ;
int icp_native_init(void)
