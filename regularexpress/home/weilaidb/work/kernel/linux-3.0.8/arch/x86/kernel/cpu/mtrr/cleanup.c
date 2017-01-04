struct var_mtrr_range_state ;
struct var_mtrr_state ;
#define RANGE_NUM				256
static struct range __initdata		range[RANGE_NUM];
static int __initdata				nr_range;
static struct var_mtrr_range_state __initdata	range_state[RANGE_NUM];
static int __initdata debug_print;
#define Dprintk(x...) do  while (0)
#define BIOS_BUG_MSG KERN_WARNING \
"WARNING: BIOS bug: VAR MTRR %d contains strange UC entry under 1M, check with your system vendor!\n"
static int __init
x86_get_mtrr_mem_range(struct range *range, int nr_range,
unsigned long extra_remove_base,
unsigned long extra_remove_size)
static unsigned long __init sum_ranges(struct range *range, int nr_range)
static int enable_mtrr_cleanup __initdata =
CONFIG_MTRR_SANITIZER_ENABLE_DEFAULT;
static int __init disable_mtrr_cleanup_setup(char *str)
early_param("disable_mtrr_cleanup", disable_mtrr_cleanup_setup);
static int __init enable_mtrr_cleanup_setup(char *str)
early_param("enable_mtrr_cleanup", enable_mtrr_cleanup_setup);
static int __init mtrr_cleanup_debug_setup(char *str)
early_param("mtrr_cleanup_debug", mtrr_cleanup_debug_setup);
static void __init
set_var_mtrr(unsigned int reg, unsigned long basek, unsigned long sizek,
unsigned char type, unsigned int address_bits)
static void __init
save_var_mtrr(unsigned int reg, unsigned long basek, unsigned long sizek,
unsigned char type)
static void __init set_var_mtrr_all(unsigned int address_bits)
static unsigned long to_size_factor(unsigned long sizek, char *factorp)
static unsigned int __init
range_to_mtrr(unsigned int reg, unsigned long range_startk,
unsigned long range_sizek, unsigned char type)
static unsigned __init
range_to_mtrr_with_hole(struct var_mtrr_state *state, unsigned long basek,
unsigned long sizek)
static void __init
set_var_mtrr_range(struct var_mtrr_state *state, unsigned long base_pfn,
unsigned long size_pfn)
static u64 mtrr_chunk_size __initdata = (256ULL<<20);
static int __init parse_mtrr_chunk_size_opt(char *p)
early_param("mtrr_chunk_size", parse_mtrr_chunk_size_opt);
static u64 mtrr_gran_size __initdata;
static int __init parse_mtrr_gran_size_opt(char *p)
early_param("mtrr_gran_size", parse_mtrr_gran_size_opt);
static unsigned long nr_mtrr_spare_reg __initdata =
CONFIG_MTRR_SANITIZER_SPARE_REG_NR_DEFAULT;
static int __init parse_mtrr_spare_reg(char *arg)
early_param("mtrr_spare_reg_nr", parse_mtrr_spare_reg);
static int __init
x86_setup_var_mtrrs(struct range *range, int nr_range,
u64 chunk_size, u64 gran_size)
struct mtrr_cleanup_result ;
#define NUM_RESULT	136
#define PSHIFT		(PAGE_SHIFT - 10)
static struct mtrr_cleanup_result __initdata result[NUM_RESULT];
static unsigned long __initdata min_loss_pfn[RANGE_NUM];
static void __init print_out_mtrr_range_state(void)
static int __init mtrr_need_cleanup(void)
static unsigned long __initdata range_sums;
static void __init
mtrr_calc_range_state(u64 chunk_size, u64 gran_size,
unsigned long x_remove_base,
unsigned long x_remove_size, int i)
static void __init mtrr_print_out_one_result(int i)
static int __init mtrr_search_optimal_index(void)
int __init mtrr_cleanup(unsigned address_bits)
int __init mtrr_cleanup(unsigned address_bits)
static int disable_mtrr_trim;
static int __init disable_mtrr_trim_setup(char *str)
early_param("disable_mtrr_trim", disable_mtrr_trim_setup);
#define Tom2Enabled		(1U << 21)
#define Tom2ForceMemTypeWB	(1U << 22)
int __init amd_special_default_mtrr(void)
static u64 __init
real_trim_memory(unsigned long start_pfn, unsigned long limit_pfn)
int __init mtrr_trim_uncached_memory(unsigned long end_pfn)
