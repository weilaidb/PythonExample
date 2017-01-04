void
__delay(int loops)
#define LPJ	 cpu_data[smp_processor_id()].loops_per_jiffy
#define LPJ	 loops_per_jiffy
void
udelay(unsigned long usecs)
EXPORT_SYMBOL(udelay);
void
ndelay(unsigned long nsecs)
EXPORT_SYMBOL(ndelay);
