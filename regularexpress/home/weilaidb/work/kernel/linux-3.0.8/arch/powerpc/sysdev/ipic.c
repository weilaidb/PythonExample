static struct ipic * primary_ipic;
static struct irq_chip ipic_level_irq_chip, ipic_edge_irq_chip;
static DEFINE_RAW_SPINLOCK(ipic_lock);
static struct ipic_info ipic_info[] = ;
static inline u32 ipic_read(volatile u32 __iomem *base, unsigned int reg)
static inline void ipic_write(volatile u32 __iomem *base, unsigned int reg, u32 value)
static inline struct ipic * ipic_from_irq(unsigned int virq)
static void ipic_unmask_irq(struct irq_data *d)
static void ipic_mask_irq(struct irq_data *d)
static void ipic_ack_irq(struct irq_data *d)
static void ipic_mask_irq_and_ack(struct irq_data *d)
static int ipic_set_irq_type(struct irq_data *d, unsigned int flow_type)
static struct irq_chip ipic_level_irq_chip = ;
static struct irq_chip ipic_edge_irq_chip = ;
static int ipic_host_match(struct irq_host *h, struct device_node *node)
static int ipic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int ipic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq, unsigned int *out_flags)
static struct irq_host_ops ipic_host_ops = ;
struct ipic * __init ipic_init(struct device_node *node, unsigned int flags)
int ipic_set_priority(unsigned int virq, unsigned int priority)
void ipic_set_highest_priority(unsigned int virq)
void ipic_set_default_priority(void)
void ipic_enable_mcp(enum ipic_mcp_irq mcp_irq)
void ipic_disable_mcp(enum ipic_mcp_irq mcp_irq)
u32 ipic_get_mcp_status(void)
void ipic_clear_mcp_status(u32 mask)
unsigned int ipic_get_irq(void)
static struct  ipic_saved_state;
static int ipic_suspend(void)
static void ipic_resume(void)
#define ipic_suspend NULL
#define ipic_resume NULL
static struct syscore_ops ipic_syscore_ops = ;
static int __init init_ipic_syscore(void)
subsys_initcall(init_ipic_syscore);
