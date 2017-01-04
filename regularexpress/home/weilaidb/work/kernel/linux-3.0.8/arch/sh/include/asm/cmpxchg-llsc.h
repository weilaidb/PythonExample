#define __ASM_SH_CMPXCHG_LLSC_H
static inline unsigned long xchg_u32(volatile u32 *m, unsigned long val)
static inline unsigned long xchg_u8(volatile u8 *m, unsigned long val)
static inline unsigned long
__cmpxchg_u32(volatile int *m, unsigned long old, unsigned long new)
