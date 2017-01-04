#define _CRIS_DELAY_H
extern unsigned long loops_per_usec;
static inline void udelay(unsigned long usecs)
