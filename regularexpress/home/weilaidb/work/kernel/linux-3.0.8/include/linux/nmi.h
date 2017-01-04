#define LINUX_NMI_H
#if defined(ARCH_HAS_NMI_WATCHDOG) || defined(CONFIG_HARDLOCKUP_DETECTOR)
extern void touch_nmi_watchdog(void);
static inline void touch_nmi_watchdog(void)
static inline bool trigger_all_cpu_backtrace(void)
static inline bool trigger_all_cpu_backtrace(void)
int hw_nmi_is_cpu_stuck(struct pt_regs *);
u64 hw_nmi_get_sample_period(int watchdog_thresh);
extern int watchdog_enabled;
extern int watchdog_thresh;
struct ctl_table;
extern int proc_dowatchdog(struct ctl_table *, int ,
void __user *, size_t *, loff_t *);
