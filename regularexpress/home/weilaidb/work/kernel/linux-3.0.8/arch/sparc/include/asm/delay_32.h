#define __SPARC_DELAY_H
static inline void __delay(unsigned long loops)
extern void __udelay(unsigned long usecs, unsigned long lpj);
extern void __ndelay(unsigned long nsecs, unsigned long lpj);
#define __udelay_val	cpu_data(smp_processor_id()).udelay_val
#define __udelay_val	loops_per_jiffy
#define udelay(__usecs)	__udelay(__usecs, __udelay_val)
#define ndelay(__nsecs)	__ndelay(__nsecs, __udelay_val)
