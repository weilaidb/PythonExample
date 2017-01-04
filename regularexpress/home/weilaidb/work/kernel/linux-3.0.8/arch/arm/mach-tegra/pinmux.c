#define HSM_EN(reg)	(((reg) >> 2) & 0x1)
#define SCHMT_EN(reg)	(((reg) >> 3) & 0x1)
#define LPMD(reg)	(((reg) >> 4) & 0x3)
#define DRVDN(reg)	(((reg) >> 12) & 0x1f)
#define DRVUP(reg)	(((reg) >> 20) & 0x1f)
#define SLWR(reg)	(((reg) >> 28) & 0x3)
#define SLWF(reg)	(((reg) >> 30) & 0x3)
static const struct tegra_pingroup_desc *const pingroups = tegra_soc_pingroups;
static const struct tegra_drive_pingroup_desc *const drive_pingroups = tegra_soc_drive_pingroups;
static char *tegra_mux_names[TEGRA_MAX_MUX] = ;
static const char *tegra_drive_names[TEGRA_MAX_DRIVE] = ;
static const char *tegra_slew_names[TEGRA_MAX_SLEW] = ;
static DEFINE_SPINLOCK(mux_lock);
static const char *pingroup_name(enum tegra_pingroup pg)
static const char *func_name(enum tegra_mux_func func)
static const char *tri_name(unsigned long val)
static const char *pupd_name(unsigned long val)
static inline unsigned long pg_readl(unsigned long offset)
static inline void pg_writel(unsigned long value, unsigned long offset)
static int tegra_pinmux_set_func(const struct tegra_pingroup_config *config)
int tegra_pinmux_set_tristate(enum tegra_pingroup pg,
enum tegra_tristate tristate)
int tegra_pinmux_set_pullupdown(enum tegra_pingroup pg,
enum tegra_pullupdown pupd)
static void tegra_pinmux_config_pingroup(const struct tegra_pingroup_config *config)
void tegra_pinmux_config_table(const struct tegra_pingroup_config *config, int len)
static const char *drive_pinmux_name(enum tegra_drive_pingroup pg)
static const char *enable_name(unsigned long val)
static const char *drive_name(unsigned long val)
static const char *slew_name(unsigned long val)
static int tegra_drive_pinmux_set_hsm(enum tegra_drive_pingroup pg,
enum tegra_hsm hsm)
static int tegra_drive_pinmux_set_schmitt(enum tegra_drive_pingroup pg,
enum tegra_schmitt schmitt)
static int tegra_drive_pinmux_set_drive(enum tegra_drive_pingroup pg,
enum tegra_drive drive)
static int tegra_drive_pinmux_set_pull_down(enum tegra_drive_pingroup pg,
enum tegra_pull_strength pull_down)
static int tegra_drive_pinmux_set_pull_up(enum tegra_drive_pingroup pg,
enum tegra_pull_strength pull_up)
static int tegra_drive_pinmux_set_slew_rising(enum tegra_drive_pingroup pg,
enum tegra_slew slew_rising)
static int tegra_drive_pinmux_set_slew_falling(enum tegra_drive_pingroup pg,
enum tegra_slew slew_falling)
static void tegra_drive_pinmux_config_pingroup(enum tegra_drive_pingroup pingroup,
enum tegra_hsm hsm,
enum tegra_schmitt schmitt,
enum tegra_drive drive,
enum tegra_pull_strength pull_down,
enum tegra_pull_strength pull_up,
enum tegra_slew slew_rising,
enum tegra_slew slew_falling)
void tegra_drive_pinmux_config_table(struct tegra_drive_pingroup_config *config,
int len)
void tegra_pinmux_set_safe_pinmux_table(const struct tegra_pingroup_config *config,
int len)
void tegra_pinmux_config_pinmux_table(const struct tegra_pingroup_config *config,
int len)
void tegra_pinmux_config_tristate_table(const struct tegra_pingroup_config *config,
int len, enum tegra_tristate tristate)
void tegra_pinmux_config_pullupdown_table(const struct tegra_pingroup_config *config,
int len, enum tegra_pullupdown pupd)
static void dbg_pad_field(struct seq_file *s, int len)
static int dbg_pinmux_show(struct seq_file *s, void *unused)
static int dbg_pinmux_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
static int dbg_drive_pinmux_show(struct seq_file *s, void *unused)
static int dbg_drive_pinmux_open(struct inode *inode, struct file *file)
static const struct file_operations debug_drive_fops = ;
static int __init tegra_pinmux_debuginit(void)
late_initcall(tegra_pinmux_debuginit);
