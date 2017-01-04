#define DRIVE_PINGROUP(pg_name, r)				\
[TEGRA_DRIVE_PINGROUP_ ## pg_name] =
const struct tegra_drive_pingroup_desc tegra_soc_drive_pingroups[TEGRA_MAX_DRIVE_PINGROUP] = ;
#define PINGROUP(pg_name, vdd, f0, f1, f2, f3, f_safe,		\
tri_r, tri_b, mux_r, mux_b, pupd_r, pupd_b)	\
[TEGRA_PINGROUP_ ## pg_name] =
const struct tegra_pingroup_desc tegra_soc_pingroups[TEGRA_MAX_PINGROUP] = ;
#define TRISTATE_REG_A         0x14
#define TRISTATE_REG_NUM       4
#define PIN_MUX_CTL_REG_A      0x80
#define PIN_MUX_CTL_REG_NUM    8
#define PULLUPDOWN_REG_A       0xa0
#define PULLUPDOWN_REG_NUM     5
static u32 pinmux_reg[TRISTATE_REG_NUM + PIN_MUX_CTL_REG_NUM +
PULLUPDOWN_REG_NUM +
ARRAY_SIZE(tegra_soc_drive_pingroups)];
static inline unsigned long pg_readl(unsigned long offset)
static inline void pg_writel(unsigned long value, unsigned long offset)
void tegra_pinmux_suspend(void)
void tegra_pinmux_resume(void)
