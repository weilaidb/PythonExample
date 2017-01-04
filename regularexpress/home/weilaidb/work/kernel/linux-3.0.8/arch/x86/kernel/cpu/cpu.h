#define ARCH_X86_CPU_H
struct cpu_model_info ;
struct cpu_dev ;
#define cpu_dev_register(cpu_devX) \
static const struct cpu_dev *const __cpu_dev_##cpu_devX __used \
__attribute__((__section__(".x86_cpu_dev.init"))) = \
&cpu_devX;
extern const struct cpu_dev *const __x86_cpu_dev_start[],
*const __x86_cpu_dev_end[];
extern void get_cpu_cap(struct cpuinfo_x86 *c);
extern void cpu_detect_cache_sizes(struct cpuinfo_x86 *c);
extern void get_cpu_cap(struct cpuinfo_x86 *c);
