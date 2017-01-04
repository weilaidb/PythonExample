#define __ASM_AVR32_ARCH_PM_H
#define CPU_SLEEP_IDLE		0
#define CPU_SLEEP_FROZEN	1
#define CPU_SLEEP_STANDBY	2
#define CPU_SLEEP_STOP		3
#define CPU_SLEEP_STATIC	5
extern void cpu_enter_idle(void);
extern void cpu_enter_standby(unsigned long sdramc_base);
extern bool disable_idle_sleep;
static inline void cpu_disable_idle_sleep(void)
static inline void cpu_enable_idle_sleep(void)
static inline void cpu_idle_sleep(void)
void intc_set_suspend_handler(unsigned long offset);
