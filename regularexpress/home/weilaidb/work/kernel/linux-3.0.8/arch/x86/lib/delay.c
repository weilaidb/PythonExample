# include <asm/smp.h>
static void delay_loop(unsigned long loops)
static void delay_tsc(unsigned long loops)
static void (*delay_fn)(unsigned long) = delay_loop;
void use_tsc_delay(void)
int __devinit read_current_timer(unsigned long *timer_val)
void __delay(unsigned long loops)
EXPORT_SYMBOL(__delay);
inline void __const_udelay(unsigned long xloops)
EXPORT_SYMBOL(__const_udelay);
void __udelay(unsigned long usecs)
EXPORT_SYMBOL(__udelay);
void __ndelay(unsigned long nsecs)
EXPORT_SYMBOL(__ndelay);
