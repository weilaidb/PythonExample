static DEFINE_SPINLOCK(hwblk_lock);
static void hwblk_area_mod_cnt(struct hwblk_info *info,
int area, int counter, int value, int goal)
static int __hwblk_mod_cnt(struct hwblk_info *info, int hwblk,
int counter, int value, int goal)
static void hwblk_mod_cnt(struct hwblk_info *info, int hwblk,
int counter, int value, int goal)
void hwblk_cnt_inc(struct hwblk_info *info, int hwblk, int counter)
void hwblk_cnt_dec(struct hwblk_info *info, int hwblk, int counter)
void hwblk_enable(struct hwblk_info *info, int hwblk)
void hwblk_disable(struct hwblk_info *info, int hwblk)
struct hwblk_info *hwblk_info;
int __init hwblk_register(struct hwblk_info *info)
int __init __weak arch_hwblk_init(void)
int __weak arch_hwblk_sleep_mode(void)
int __init hwblk_init(void)
static int sh_hwblk_clk_enable(struct clk *clk)
static void sh_hwblk_clk_disable(struct clk *clk)
static struct clk_ops sh_hwblk_clk_ops = ;
int __init sh_hwblk_clk_register(struct clk *clks, int nr)
