int omap2_pm_debug;
u32 enable_off_mode;
u32 sleep_while_idle;
u32 wakeup_timer_seconds;
u32 wakeup_timer_milliseconds;
#define DUMP_PRM_MOD_REG(mod, reg)    \
regs[reg_count].name = #mod "." #reg; \
regs[reg_count++].val = omap2_prm_read_mod_reg(mod, reg)
#define DUMP_CM_MOD_REG(mod, reg)     \
regs[reg_count].name = #mod "." #reg; \
regs[reg_count++].val = omap2_cm_read_mod_reg(mod, reg)
#define DUMP_PRM_REG(reg) \
regs[reg_count].name = #reg; \
regs[reg_count++].val = __raw_readl(reg)
#define DUMP_CM_REG(reg) \
regs[reg_count].name = #reg; \
regs[reg_count++].val = __raw_readl(reg)
#define DUMP_INTC_REG(reg, off) \
regs[reg_count].name = #reg; \
regs[reg_count++].val = \
__raw_readl(OMAP2_L4_IO_ADDRESS(0x480fe000 + (off)))
void omap2_pm_dump(int mode, int resume, unsigned int us)
void omap2_pm_wakeup_on_timer(u32 seconds, u32 milliseconds)
static void pm_dbg_regset_store(u32 *ptr);
static struct dentry *pm_dbg_dir;
static int pm_dbg_init_done;
static int pm_dbg_init(void);
enum ;
struct pm_module_def ;
#define MOD_CM 0
#define MOD_PRM 1
static const struct pm_module_def *pm_dbg_reg_modules;
static const struct pm_module_def omap3_pm_reg_modules[] = ;
#define PM_DBG_MAX_REG_SETS 4
static void *pm_dbg_reg_set[PM_DBG_MAX_REG_SETS];
static int pm_dbg_get_regset_size(void)
static int pm_dbg_show_regs(struct seq_file *s, void *unused)
static void pm_dbg_regset_store(u32 *ptr)
int pm_dbg_regset_save(int reg_set)
static const char pwrdm_state_names[][PWRDM_MAX_PWRSTS] = ;
void pm_dbg_update_time(struct powerdomain *pwrdm, int prev)
static int clkdm_dbg_show_counter(struct clockdomain *clkdm, void *user)
static int pwrdm_dbg_show_counter(struct powerdomain *pwrdm, void *user)
static int pwrdm_dbg_show_timer(struct powerdomain *pwrdm, void *user)
static int pm_dbg_show_counters(struct seq_file *s, void *unused)
static int pm_dbg_show_timers(struct seq_file *s, void *unused)
static int pm_dbg_open(struct inode *inode, struct file *file)
static int pm_dbg_reg_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
static const struct file_operations debug_reg_fops = ;
int pm_dbg_regset_init(int reg_set)
static int pwrdm_suspend_get(void *data, u64 *val)
static int pwrdm_suspend_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(pwrdm_suspend_fops, pwrdm_suspend_get,
pwrdm_suspend_set, "%llu\n");
static int __init pwrdms_setup(struct powerdomain *pwrdm, void *dir)
static int option_get(void *data, u64 *val)
static int option_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(pm_dbg_option_fops, option_get, option_set, "%llu\n");
static int pm_dbg_init(void)
arch_initcall(pm_dbg_init);
