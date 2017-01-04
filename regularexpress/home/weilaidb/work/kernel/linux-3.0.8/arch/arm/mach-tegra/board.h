#define __MACH_TEGRA_BOARD_H
void tegra_assert_system_reset(char mode, const char *cmd);
void __init tegra_init_early(void);
void __init tegra_map_common_io(void);
void __init tegra_init_irq(void);
void __init tegra_init_clock(void);
int __init tegra_pcie_init(bool init_port0, bool init_port1);
extern struct sys_timer tegra_timer;
