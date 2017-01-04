void (*cpu_wait)(void);
EXPORT_SYMBOL(cpu_wait);
static void r3081_wait(void)
static void r39xx_wait(void)
extern void r4k_wait(void);
void r4k_wait_irqoff(void)
static void rm7k_wait_irqoff(void)
static void au1k_wait(void)
static int __initdata nowait;
static int __init wait_disable(char *s)
__setup("nowait", wait_disable);
static int __cpuinitdata mips_fpu_disabled;
static int __init fpu_disable(char *s)
__setup("nofpu", fpu_disable);
int __cpuinitdata mips_dsp_disabled;
static int __init dsp_disable(char *s)
__setup("nodsp", dsp_disable);
void __init check_wait(void)
static inline void check_errata(void)
void __init check_bugs32(void)
static inline int cpu_has_confreg(void)
static inline void set_elf_platform(int cpu, const char *plat)
static inline unsigned long cpu_get_fpu_id(void)
static inline int __cpu_has_fpu(void)
static inline void cpu_probe_vmbits(struct cpuinfo_mips *c)
#define R4K_OPTS (MIPS_CPU_TLB | MIPS_CPU_4KEX | MIPS_CPU_4K_CACHE \
| MIPS_CPU_COUNTER)
static inline void cpu_probe_legacy(struct cpuinfo_mips *c, unsigned int cpu)
static char unknown_isa[] __cpuinitdata = KERN_ERR \
"Unsupported ISA type, c0.config0: %d.";
static inline unsigned int decode_config0(struct cpuinfo_mips *c)
static inline unsigned int decode_config1(struct cpuinfo_mips *c)
static inline unsigned int decode_config2(struct cpuinfo_mips *c)
static inline unsigned int decode_config3(struct cpuinfo_mips *c)
static inline unsigned int decode_config4(struct cpuinfo_mips *c)
static void __cpuinit decode_configs(struct cpuinfo_mips *c)
static inline void cpu_probe_mips(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_alchemy(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_sibyte(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_sandcraft(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_nxp(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_broadcom(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_cavium(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_ingenic(struct cpuinfo_mips *c, unsigned int cpu)
static inline void cpu_probe_netlogic(struct cpuinfo_mips *c, int cpu)
u64 __ua_limit;
EXPORT_SYMBOL(__ua_limit);
const char *__cpu_name[NR_CPUS];
const char *__elf_platform;
__cpuinit void cpu_probe(void)
__cpuinit void cpu_report(void)
