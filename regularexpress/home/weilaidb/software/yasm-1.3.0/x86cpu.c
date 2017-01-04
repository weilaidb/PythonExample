#line 26 "./modules/arch/x86/x86cpu.gperf"
#define PROC_8086	0
#define PROC_186	1
#define PROC_286	2
#define PROC_386	3
#define PROC_486	4
#define PROC_586	5
#define PROC_686	6
#define PROC_p2		7
#define PROC_p3		8
#define PROC_p4		9
#define PROC_prescott	10
#define PROC_conroe	11
#define PROC_penryn	12
#define PROC_nehalem	13
#define PROC_westmere	14
#define PROC_sandybridge	15
#define PROC_ivybridge	16
#define PROC_haswell	17
#define PROC_broadwell	18
#define PROC_skylake	19
static void
x86_cpu_intel(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_cpu_ia64(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
#define PROC_bulldozer	11
#define PROC_k10    10
#define PROC_venice 9
#define PROC_hammer 8
#define PROC_k7     7
#define PROC_k6     6
static void
x86_cpu_amd(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_cpu_set(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_cpu_clear(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_cpu_set_sse4(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_cpu_clear_sse4(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
static void
x86_nop(wordptr cpu, yasm_arch_x86 *arch_x86, unsigned int data)
#line 262 "./modules/arch/x86/x86cpu.gperf"
struct cpu_parse_data ;
static const struct cpu_parse_data *
cpu_find(const char *key, size_t len)
#line 454 "./modules/arch/x86/x86cpu.gperf"
void
yasm_x86__parse_cpu(yasm_arch_x86 *arch_x86, const char *cpuid,
size_t cpuid_len)
