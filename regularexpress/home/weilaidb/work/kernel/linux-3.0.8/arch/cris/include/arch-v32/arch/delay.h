#define _ASM_CRIS_ARCH_DELAY_H
extern void cris_delay10ns(u32 n10ns);
#define udelay(u) cris_delay10ns((u)*100)
#define ndelay(n) cris_delay10ns(((n)+9)/10)
static inline void
__delay(int loops)
