static void __rdmsr_on_cpu(void *info)
static void __wrmsr_on_cpu(void *info)
int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h)
EXPORT_SYMBOL(rdmsr_on_cpu);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
EXPORT_SYMBOL(wrmsr_on_cpu);
static void __rwmsr_on_cpus(const struct cpumask *mask, u32 msr_no,
struct msr *msrs,
void (*msr_func) (void *info))
void rdmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs)
EXPORT_SYMBOL(rdmsr_on_cpus);
void wrmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs)
EXPORT_SYMBOL(wrmsr_on_cpus);
static void __rdmsr_safe_on_cpu(void *info)
static void __wrmsr_safe_on_cpu(void *info)
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h)
EXPORT_SYMBOL(rdmsr_safe_on_cpu);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
EXPORT_SYMBOL(wrmsr_safe_on_cpu);
static void __rdmsr_safe_regs_on_cpu(void *info)
static void __wrmsr_safe_regs_on_cpu(void *info)
int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 *regs)
EXPORT_SYMBOL(rdmsr_safe_regs_on_cpu);
int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 *regs)
EXPORT_SYMBOL(wrmsr_safe_regs_on_cpu);
