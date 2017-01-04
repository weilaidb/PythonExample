#define __ASM_DELAY_H__
static inline void __delay(unsigned long loops)
#define	HZSCALE		(268435456 / (1000000/HZ))
static inline unsigned long __to_delay(unsigned long scale)
static inline void udelay(unsigned long usecs)
static inline void ndelay(unsigned long nsecs)
#define ndelay ndelay
