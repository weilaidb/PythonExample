extern void prom_grab_secondary(void);
#define prom_grab_secondary() do  while (0)
struct callvectors *debug_vectors;
extern unsigned long yosemite_base;
extern unsigned long cpu_clock_freq;
const char *get_system_type(void)
static void prom_cpu0_exit(void *arg)
static void prom_exit(void)
static void prom_halt(void)
extern struct plat_smp_ops yos_smp_ops;
void __init prom_init(void)
void __init prom_free_prom_memory(void)
void __init prom_fixup_mem_map(unsigned long start, unsigned long end)
