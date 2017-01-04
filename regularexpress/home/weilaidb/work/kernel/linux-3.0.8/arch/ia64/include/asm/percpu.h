#define _ASM_IA64_PERCPU_H
#define PERCPU_ENOUGH_ROOM PERCPU_PAGE_SIZE
# define THIS_CPU(var)	(var)
# define PER_CPU_ATTRIBUTES	__attribute__((__model__ (__small__)))
#define __my_cpu_offset	__ia64_per_cpu_var(local_per_cpu_offset)
extern void *per_cpu_init(void);
#define per_cpu_init()				(__phys_per_cpu_start)
#define PER_CPU_BASE_SECTION ".data..percpu"
#define __ia64_per_cpu_var(var) (*())
DECLARE_PER_CPU(unsigned long, local_per_cpu_offset);
