#define __ASM_ARCH_SYSTEM_H
void (*realview_reset)(char mode);
static inline void arch_idle(void)
static inline void arch_reset(char mode, const char *cmd)
