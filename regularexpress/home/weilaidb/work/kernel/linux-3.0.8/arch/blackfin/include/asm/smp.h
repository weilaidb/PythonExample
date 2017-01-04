#define __ASM_BLACKFIN_SMP_H
#define raw_smp_processor_id()  blackfin_core_id()
extern void bfin_relocate_coreb_l1_mem(void);
#if defined(CONFIG_SMP) && defined(CONFIG_ICACHE_FLUSH_L1)
asmlinkage void blackfin_icache_flush_range_l1(unsigned long *ptr);
extern unsigned long blackfin_iflush_l1_entry[NR_CPUS];
struct corelock_slot ;
extern struct corelock_slot corelock;
extern unsigned long icache_invld_count[NR_CPUS];
extern unsigned long dcache_invld_count[NR_CPUS];
void smp_icache_flush_range_others(unsigned long start,
unsigned long end);
void coreb_die(void);
void cpu_die(void);
void platform_cpu_die(void);
int __cpu_disable(void);
int __cpu_die(unsigned int cpu);
