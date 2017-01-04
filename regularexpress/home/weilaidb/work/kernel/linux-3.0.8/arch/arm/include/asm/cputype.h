#define __ASM_ARM_CPUTYPE_H
#define CPUID_ID	0
#define CPUID_CACHETYPE	1
#define CPUID_TCM	2
#define CPUID_TLBTYPE	3
#define CPUID_EXT_PFR0	"c1, 0"
#define CPUID_EXT_PFR1	"c1, 1"
#define CPUID_EXT_DFR0	"c1, 2"
#define CPUID_EXT_AFR0	"c1, 3"
#define CPUID_EXT_MMFR0	"c1, 4"
#define CPUID_EXT_MMFR1	"c1, 5"
#define CPUID_EXT_MMFR2	"c1, 6"
#define CPUID_EXT_MMFR3	"c1, 7"
#define CPUID_EXT_ISAR0	"c2, 0"
#define CPUID_EXT_ISAR1	"c2, 1"
#define CPUID_EXT_ISAR2	"c2, 2"
#define CPUID_EXT_ISAR3	"c2, 3"
#define CPUID_EXT_ISAR4	"c2, 4"
#define CPUID_EXT_ISAR5	"c2, 5"
extern unsigned int processor_id;
#define read_cpuid(reg)							\
()
#define read_cpuid_ext(ext_reg)						\
()
#define read_cpuid(reg) (processor_id)
#define read_cpuid_ext(reg) 0
static inline unsigned int __attribute_const__ read_cpuid_id(void)
static inline unsigned int __attribute_const__ read_cpuid_cachetype(void)
static inline unsigned int __attribute_const__ read_cpuid_tcmstatus(void)
#define cpu_is_xsc3()	0
static inline int cpu_is_xsc3(void)
#if !defined(CONFIG_CPU_XSCALE) && !defined(CONFIG_CPU_XSC3)
#define	cpu_is_xscale()	0
#define	cpu_is_xscale()	1
