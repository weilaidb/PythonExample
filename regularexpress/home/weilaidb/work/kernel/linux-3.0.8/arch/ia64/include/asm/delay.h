#define _ASM_IA64_DELAY_H
static __inline__ void
ia64_set_itm (unsigned long val)
static __inline__ unsigned long
ia64_get_itm (void)
static __inline__ void
ia64_set_itv (unsigned long val)
static __inline__ unsigned long
ia64_get_itv (void)
static __inline__ void
ia64_set_itc (unsigned long val)
static __inline__ unsigned long
ia64_get_itc (void)
extern void ia64_delay_loop (unsigned long loops);
static __inline__ void
__delay (unsigned long loops)
extern void udelay (unsigned long usecs);
