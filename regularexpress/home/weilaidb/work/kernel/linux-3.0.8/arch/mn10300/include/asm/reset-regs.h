#define _ASM_RESET_REGS_H
#define ARCH_HAS_NMI_WATCHDOG
#define WDBC			__SYSREGC(0xc0001000, u8)
#define WDCTR			__SYSREG(0xc0001002, u8)
#define WDCTR_WDCK		0x07
#define WDCTR_WDCK_256th	0x00
#define WDCTR_WDCK_1024th	0x01
#define WDCTR_WDCK_2048th	0x02
#define WDCTR_WDCK_16384th	0x03
#define WDCTR_WDCK_65536th	0x04
#define WDCTR_WDRST		0x40
#define WDCTR_WDCNE		0x80
#define RSTCTR			__SYSREG(0xc0001004, u8)
#define RSTCTR_CHIPRST		0x01
#define RSTCTR_DBFRST		0x02
#define RSTCTR_WDTRST		0x04
#define RSTCTR_WDREN		0x08
static inline void mn10300_proc_hard_reset(void)
extern unsigned int watchdog_alert_counter[];
extern void watchdog_go(void);
extern asmlinkage void watchdog_handler(void);
extern asmlinkage
void watchdog_interrupt(struct pt_regs *, enum exception_code);
