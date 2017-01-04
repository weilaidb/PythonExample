#define __ASM_ARCH_MXC_SYSTEM_H__
extern void mx5_cpu_lp_set(enum mxc_cpu_pwr_mode mode);
static inline void arch_idle(void)
void arch_reset(char mode, const char *cmd);
