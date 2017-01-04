#define DEBUG
struct fixed_range_block ;
static struct fixed_range_block fixed_range_blocks[] = ;
static unsigned long smp_changes_mask;
static int mtrr_state_set;
u64 mtrr_tom2;
struct mtrr_state_type mtrr_state;
EXPORT_SYMBOL_GPL(mtrr_state);
static inline void k8_check_syscfg_dram_mod_en(void)
static u64 get_mtrr_size(u64 mask)
static int check_type_overlap(u8 *prev, u8 *curr)
static u8 __mtrr_type_lookup(u64 start, u64 end, u64 *partial_end, int *repeat)
u8 mtrr_type_lookup(u64 start, u64 end)
static void
get_mtrr_var_range(unsigned int index, struct mtrr_var_range *vr)
void fill_mtrr_var_range(unsigned int index,
u32 base_lo, u32 base_hi, u32 mask_lo, u32 mask_hi)
static void get_fixed_ranges(mtrr_type *frs)
void mtrr_save_fixed_ranges(void *info)
static unsigned __initdata last_fixed_start;
static unsigned __initdata last_fixed_end;
static mtrr_type __initdata last_fixed_type;
static void __init print_fixed_last(void)
static void __init update_fixed_last(unsigned base, unsigned end,
mtrr_type type)
static void __init
print_fixed(unsigned base, unsigned step, const mtrr_type *types)
static void prepare_set(void);
static void post_set(void);
static void __init print_mtrr_state(void)
void __init get_mtrr_state(void)
void __init mtrr_state_warn(void)
void mtrr_wrmsr(unsigned msr, unsigned a, unsigned b)
static void set_fixed_range(int msr, bool *changed, unsigned int *msrwords)
int
generic_get_free_region(unsigned long base, unsigned long size, int replace_reg)
static void generic_get_mtrr(unsigned int reg, unsigned long *base,
unsigned long *size, mtrr_type *type)
static int set_fixed_ranges(mtrr_type *frs)
static bool set_mtrr_var_ranges(unsigned int index, struct mtrr_var_range *vr)
static u32 deftype_lo, deftype_hi;
static unsigned long set_mtrr_state(void)
static unsigned long cr4;
static DEFINE_RAW_SPINLOCK(set_atomicity_lock);
static void prepare_set(void) __acquires(set_atomicity_lock)
static void post_set(void) __releases(set_atomicity_lock)
static void generic_set_all(void)
static void generic_set_mtrr(unsigned int reg, unsigned long base,
unsigned long size, mtrr_type type)
int generic_validate_add_page(unsigned long base, unsigned long size,
unsigned int type)
static int generic_have_wrcomb(void)
int positive_have_wrcomb(void)
const struct mtrr_ops generic_mtrr_ops = ;
