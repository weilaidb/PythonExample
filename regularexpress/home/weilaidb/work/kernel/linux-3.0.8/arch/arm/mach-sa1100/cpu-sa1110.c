#undef DEBUG
struct sdram_params ;
struct sdram_info ;
static struct sdram_params sdram_tbl[] __initdata = ;
static struct sdram_params sdram_params;
static inline u_int ns_to_cycles(u_int ns, u_int khz)
static inline void set_mdcas(u_int *mdcas, int delayed, u_int rcd)
static void
sdram_calculate_timing(struct sdram_info *sd, u_int cpu_khz,
struct sdram_params *sdram)
static inline void sdram_set_refresh(u_int dri)
static void
sdram_update_refresh(u_int cpu_khz, struct sdram_params *sdram)
static int sa1110_target(struct cpufreq_policy *policy,
unsigned int target_freq,
unsigned int relation)
static int __init sa1110_cpu_init(struct cpufreq_policy *policy)
static struct cpufreq_driver sa1110_driver __refdata = ;
static struct sdram_params *sa1110_find_sdram(const char *name)
static char sdram_name[16];
static int __init sa1110_clk_init(void)
module_param_string(sdram, sdram_name, sizeof(sdram_name), 0);
arch_initcall(sa1110_clk_init);
