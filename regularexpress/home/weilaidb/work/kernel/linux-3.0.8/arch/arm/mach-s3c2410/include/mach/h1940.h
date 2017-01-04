#define __ASM_ARCH_H1940_H
#define H1940_SUSPEND_CHECKSUM		(0x30003ff8)
#define H1940_SUSPEND_RESUMEAT		(0x30081000)
#define H1940_SUSPEND_CHECK		(0x30080000)
extern void h1940_pm_return(void);
extern int h1940_led_blink_set(unsigned gpio, int state,
unsigned long *delay_on, unsigned long *delay_off);
