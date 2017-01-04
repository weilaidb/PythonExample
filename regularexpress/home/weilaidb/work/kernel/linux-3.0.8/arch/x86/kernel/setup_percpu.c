#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
DEFINE_PER_CPU(int, cpu_number);
EXPORT_PER_CPU_SYMBOL(cpu_number);
#define BOOT_PERCPU_OFFSET ((unsigned long)__per_cpu_load)
#define BOOT_PERCPU_OFFSET 0
DEFINE_PER_CPU(unsigned long, this_cpu_off) = BOOT_PERCPU_OFFSET;
EXPORT_PER_CPU_SYMBOL(this_cpu_off);
unsigned long __per_cpu_offset[NR_CPUS] __read_mostly = ;
EXPORT_SYMBOL(__per_cpu_offset);
#define PERCPU_FIRST_CHUNK_RESERVE	PERCPU_MODULE_RESERVE
#define PERCPU_FIRST_CHUNK_RESERVE	0
static bool __init pcpu_need_numa(void)
static void * __init pcpu_alloc_bootmem(unsigned int cpu, unsigned long size,
unsigned long align)
static void * __init pcpu_fc_alloc(unsigned int cpu, size_t size, size_t align)
static void __init pcpu_fc_free(void *ptr, size_t size)
static int __init pcpu_cpu_distance(unsigned int from, unsigned int to)
static void __init pcpup_populate_pte(unsigned long addr)
static inline void setup_percpu_segment(int cpu)
void __init setup_per_cpu_areas(void)
