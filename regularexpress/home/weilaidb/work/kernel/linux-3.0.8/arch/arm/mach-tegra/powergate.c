#define PWRGATE_TOGGLE		0x30
#define  PWRGATE_TOGGLE_START	(1 << 8)
#define REMOVE_CLAMPING		0x34
#define PWRGATE_STATUS		0x38
static DEFINE_SPINLOCK(tegra_powergate_lock);
static void __iomem *pmc = IO_ADDRESS(TEGRA_PMC_BASE);
static u32 pmc_read(unsigned long reg)
static void pmc_write(u32 val, unsigned long reg)
static int tegra_powergate_set(int id, bool new_state)
int tegra_powergate_power_on(int id)
int tegra_powergate_power_off(int id)
bool tegra_powergate_is_powered(int id)
int tegra_powergate_remove_clamping(int id)
int tegra_powergate_sequence_power_up(int id, struct clk *clk)
static const char * const powergate_name[] = ;
static int powergate_show(struct seq_file *s, void *data)
static int powergate_open(struct inode *inode, struct file *file)
static const struct file_operations powergate_fops = ;
static int __init powergate_debugfs_init(void)
late_initcall(powergate_debugfs_init);
