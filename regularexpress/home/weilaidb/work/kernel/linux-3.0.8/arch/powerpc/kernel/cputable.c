struct cpu_spec* cur_cpu_spec = NULL;
EXPORT_SYMBOL(cur_cpu_spec);
const char *powerpc_base_platform;
extern void __setup_cpu_e200(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_e500v1(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_e500v2(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_e500mc(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440ep(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440epx(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440gx(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440grx(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440spe(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_440x5(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_460ex(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_460gt(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_460sx(unsigned long offset, struct cpu_spec *spec);
extern void __setup_cpu_apm821xx(unsigned long offset, struct cpu_spec *spec);
extern void __setup_cpu_603(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_604(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_750(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_750cx(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_750fx(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_7400(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_7410(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_745x(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_ppc970(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_ppc970MP(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_pa6t(unsigned long offset, struct cpu_spec* spec);
extern void __setup_cpu_a2(unsigned long offset, struct cpu_spec* spec);
extern void __restore_cpu_pa6t(void);
extern void __restore_cpu_ppc970(void);
extern void __setup_cpu_power7(unsigned long offset, struct cpu_spec* spec);
extern void __restore_cpu_power7(void);
extern void __restore_cpu_a2(void);
#if defined(CONFIG_E500)
extern void __setup_cpu_e5500(unsigned long offset, struct cpu_spec* spec);
extern void __restore_cpu_e5500(void);
#define COMMON_USER		(PPC_FEATURE_32 | PPC_FEATURE_HAS_FPU | \
PPC_FEATURE_HAS_MMU)
#define COMMON_USER_PPC64	(COMMON_USER | PPC_FEATURE_64)
#define COMMON_USER_POWER4	(COMMON_USER_PPC64 | PPC_FEATURE_POWER4)
#define COMMON_USER_POWER5	(COMMON_USER_PPC64 | PPC_FEATURE_POWER5 |\
PPC_FEATURE_SMT | PPC_FEATURE_ICACHE_SNOOP)
#define COMMON_USER_POWER5_PLUS	(COMMON_USER_PPC64 | PPC_FEATURE_POWER5_PLUS|\
PPC_FEATURE_SMT | PPC_FEATURE_ICACHE_SNOOP)
#define COMMON_USER_POWER6	(COMMON_USER_PPC64 | PPC_FEATURE_ARCH_2_05 |\
PPC_FEATURE_SMT | PPC_FEATURE_ICACHE_SNOOP | \
PPC_FEATURE_TRUE_LE | \
PPC_FEATURE_PSERIES_PERFMON_COMPAT)
#define COMMON_USER_POWER7	(COMMON_USER_PPC64 | PPC_FEATURE_ARCH_2_06 |\
PPC_FEATURE_SMT | PPC_FEATURE_ICACHE_SNOOP | \
PPC_FEATURE_TRUE_LE | \
PPC_FEATURE_PSERIES_PERFMON_COMPAT)
#define COMMON_USER_PA6T	(COMMON_USER_PPC64 | PPC_FEATURE_PA6T |\
PPC_FEATURE_TRUE_LE | \
PPC_FEATURE_HAS_ALTIVEC_COMP)
#define COMMON_USER_BOOKE	(COMMON_USER_PPC64 | PPC_FEATURE_BOOKE)
#define COMMON_USER_BOOKE	(PPC_FEATURE_32 | PPC_FEATURE_HAS_MMU | \
PPC_FEATURE_BOOKE)
static struct cpu_spec __initdata cpu_specs[] = ;
static struct cpu_spec the_cpu_spec;
static void __init setup_cpu_spec(unsigned long offset, struct cpu_spec *s)
struct cpu_spec * __init identify_cpu(unsigned long offset, unsigned int pvr)
