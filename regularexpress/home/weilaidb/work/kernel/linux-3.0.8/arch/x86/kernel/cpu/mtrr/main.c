#define DEBUG
u32 num_var_ranges;
unsigned int mtrr_usage_table[MTRR_MAX_VAR_RANGES];
static DEFINE_MUTEX(mtrr_mutex);
u64 size_or_mask, size_and_mask;
static bool mtrr_aps_delayed_init;
static const struct mtrr_ops *mtrr_ops[X86_VENDOR_NUM];
const struct mtrr_ops *mtrr_if;
static void set_mtrr(unsigned int reg, unsigned long base,
unsigned long size, mtrr_type type);
void set_mtrr_ops(const struct mtrr_ops *ops)
static int have_wrcomb(void)
static void __init set_num_var_ranges(void)
static void __init init_table(void)
struct set_mtrr_data ;
static DEFINE_PER_CPU(struct cpu_stop_work, mtrr_work);
static int mtrr_work_handler(void *info)
static inline int types_compatible(mtrr_type type1, mtrr_type type2)
static void
set_mtrr(unsigned int reg, unsigned long base, unsigned long size, mtrr_type type)
int mtrr_add_page(unsigned long base, unsigned long size,
unsigned int type, bool increment)
static int mtrr_check(unsigned long base, unsigned long size)
int mtrr_add(unsigned long base, unsigned long size, unsigned int type,
bool increment)
EXPORT_SYMBOL(mtrr_add);
int mtrr_del_page(int reg, unsigned long base, unsigned long size)
int mtrr_del(int reg, unsigned long base, unsigned long size)
EXPORT_SYMBOL(mtrr_del);
static void __init init_ifs(void)
struct mtrr_value ;
static struct mtrr_value mtrr_value[MTRR_MAX_VAR_RANGES];
static int mtrr_save(void)
static void mtrr_restore(void)
static struct syscore_ops mtrr_syscore_ops = ;
int __initdata changed_by_mtrr_cleanup;
void __init mtrr_bp_init(void)
void mtrr_ap_init(void)
void mtrr_save_state(void)
void set_mtrr_aps_delayed_init(void)
void mtrr_aps_init(void)
void mtrr_bp_restore(void)
static int __init mtrr_init_finialize(void)
subsys_initcall(mtrr_init_finialize);
