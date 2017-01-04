#define PWR_
#define PWR_DEEPSLEEP           MBX_PM_DSPIDLE
#define PWR_EMERGENCYDEEPSLEEP  MBX_PM_EMERGENCYSLEEP
#define PWR_WAKEUP              MBX_PM_DSPWAKEUP
extern int pwr_sleep_dsp(const u32 sleep_code, const u32 timeout);
extern int pwr_wake_dsp(const u32 timeout);
extern int pwr_pm_pre_scale(u16 voltage_domain, u32 level);
extern int pwr_pm_post_scale(u16 voltage_domain, u32 level);
