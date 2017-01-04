#define ltq_rcu_w32(x, y)	ltq_w32((x), ltq_rcu_membase + (y))
#define ltq_rcu_r32(x)		ltq_r32(ltq_rcu_membase + (x))
#define LTQ_RCU_RST		0x0010
#define LTQ_RCU_RST_ALL		0x40000000
#define LTQ_RCU_RST_STAT	0x0014
#define LTQ_RCU_STAT_SHIFT	26
static struct resource ltq_rcu_resource = ;
static void __iomem *ltq_rcu_membase;
int ltq_reset_cause(void)
EXPORT_SYMBOL_GPL(ltq_reset_cause);
static void ltq_machine_restart(char *command)
static void ltq_machine_halt(void)
static void ltq_machine_power_off(void)
static int __init mips_reboot_setup(void)
arch_initcall(mips_reboot_setup);
