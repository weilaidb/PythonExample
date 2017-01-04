static int num_counters = 2;
static int counter_width = 32;
#define MSR_PPRO_EVENTSEL_RESERVED	((0xFFFFFFFFULL<<32)|(1ULL<<21))
static u64 *reset_value;
static void ppro_shutdown(struct op_msrs const * const msrs)
static int ppro_fill_in_addresses(struct op_msrs * const msrs)
static void ppro_setup_ctrs(struct op_x86_model_spec const *model,
struct op_msrs const * const msrs)
static int ppro_check_ctrs(struct pt_regs * const regs,
struct op_msrs const * const msrs)
static void ppro_start(struct op_msrs const * const msrs)
static void ppro_stop(struct op_msrs const * const msrs)
struct op_x86_model_spec op_ppro_spec = ;
static void arch_perfmon_setup_counters(void)
static int arch_perfmon_init(struct oprofile_operations *ignore)
struct op_x86_model_spec op_arch_perfmon_spec = ;
