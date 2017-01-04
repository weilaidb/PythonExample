#define _ASM_RTC_H
extern void __init calibrate_clock(void);
static inline void calibrate_clock(void)
