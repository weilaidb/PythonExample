#define __MACH_TEGRA_PINMUX_H
#if defined(CONFIG_ARCH_TEGRA_2x_SOC)
#error "Undefined Tegra architecture"
enum tegra_mux_func ;
enum tegra_pullupdown ;
enum tegra_tristate ;
enum tegra_vddio ;
struct tegra_pingroup_config ;
enum tegra_slew ;
enum tegra_pull_strength ;
enum tegra_drive ;
enum tegra_hsm ;
enum tegra_schmitt ;
struct tegra_drive_pingroup_config ;
struct tegra_drive_pingroup_desc ;
struct tegra_pingroup_desc ;
extern const struct tegra_pingroup_desc tegra_soc_pingroups[];
extern const struct tegra_drive_pingroup_desc tegra_soc_drive_pingroups[];
int tegra_pinmux_set_tristate(enum tegra_pingroup pg,
enum tegra_tristate tristate);
int tegra_pinmux_set_pullupdown(enum tegra_pingroup pg,
enum tegra_pullupdown pupd);
void tegra_pinmux_config_table(const struct tegra_pingroup_config *config,
int len);
void tegra_drive_pinmux_config_table(struct tegra_drive_pingroup_config *config,
int len);
void tegra_pinmux_set_safe_pinmux_table(const struct tegra_pingroup_config *config,
int len);
void tegra_pinmux_config_pinmux_table(const struct tegra_pingroup_config *config,
int len);
void tegra_pinmux_config_tristate_table(const struct tegra_pingroup_config *config,
int len, enum tegra_tristate tristate);
void tegra_pinmux_config_pullupdown_table(const struct tegra_pingroup_config *config,
int len, enum tegra_pullupdown pupd);
