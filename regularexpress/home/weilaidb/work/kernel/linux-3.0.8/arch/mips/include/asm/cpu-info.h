#define __ASM_CPU_INFO_H
struct cache_desc ;
#define MIPS_CACHE_NOT_PRESENT	0x00000001
#define MIPS_CACHE_VTAG		0x00000002
#define MIPS_CACHE_ALIASES	0x00000004
#define MIPS_CACHE_IC_F_DC	0x00000008
#define MIPS_IC_SNOOPS_REMOTE	0x00000010
#define MIPS_CACHE_PINDEX	0x00000020
struct cpuinfo_mips  __attribute__((aligned(SMP_CACHE_BYTES)));
extern struct cpuinfo_mips cpu_data[];
#define current_cpu_data cpu_data[smp_processor_id()]
#define raw_current_cpu_data cpu_data[raw_smp_processor_id()]
extern void cpu_probe(void);
extern void cpu_report(void);
extern const char *__cpu_name[];
#define cpu_name_string()	__cpu_name[smp_processor_id()]
