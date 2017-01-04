#define _MACH_TEGRA_POWERGATE_H_
#define TEGRA_POWERGATE_CPU	0
#define TEGRA_POWERGATE_3D	1
#define TEGRA_POWERGATE_VENC	2
#define TEGRA_POWERGATE_PCIE	3
#define TEGRA_POWERGATE_VDEC	4
#define TEGRA_POWERGATE_L2	5
#define TEGRA_POWERGATE_MPE	6
#define TEGRA_NUM_POWERGATE	7
int tegra_powergate_power_on(int id);
int tegra_powergate_power_off(int id);
bool tegra_powergate_is_powered(int id);
int tegra_powergate_remove_clamping(int id);
int tegra_powergate_sequence_power_up(int id, struct clk *clk);
