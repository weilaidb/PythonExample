#define __MACH_TEGRA_SYSTEM_H
extern void (*arch_reset)(char mode, const char *cmd);
static inline void arch_idle(void)
