#define _M68KNOMMU_DELAY_H
static inline void __delay(unsigned long loops)
#define	HZSCALE		(268435456 / (1000000/HZ))
extern unsigned long loops_per_jiffy;
static inline void _udelay(unsigned long usecs)
extern void udelay(unsigned long usecs);
