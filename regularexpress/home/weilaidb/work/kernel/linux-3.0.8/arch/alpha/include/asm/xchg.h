#error Do not include xchg.h directly!
static inline unsigned long
____xchg(_u8, volatile char *m, unsigned long val)
static inline unsigned long
____xchg(_u16, volatile short *m, unsigned long val)
static inline unsigned long
____xchg(_u32, volatile int *m, unsigned long val)
static inline unsigned long
____xchg(_u64, volatile long *m, unsigned long val)
extern void __xchg_called_with_bad_pointer(void);
static __always_inline unsigned long
____xchg(, volatile void *ptr, unsigned long x, int size)
static inline unsigned long
____cmpxchg(_u8, volatile char *m, unsigned char old, unsigned char new)
static inline unsigned long
____cmpxchg(_u16, volatile short *m, unsigned short old, unsigned short new)
static inline unsigned long
____cmpxchg(_u32, volatile int *m, int old, int new)
static inline unsigned long
____cmpxchg(_u64, volatile long *m, unsigned long old, unsigned long new)
extern void __cmpxchg_called_with_bad_pointer(void);
static __always_inline unsigned long
____cmpxchg(, volatile void *ptr, unsigned long old, unsigned long new,
int size)
