void arch_idle(void);
static inline void arch_reset(char mode, const char *cmd)
extern void (*msm_hw_reset_hook)(void);
