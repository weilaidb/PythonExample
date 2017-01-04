#define _SPARC_BITOPS_H
#error only <linux/bitops.h> can be included directly
extern unsigned long ___set_bit(unsigned long *addr, unsigned long mask);
extern unsigned long ___clear_bit(unsigned long *addr, unsigned long mask);
extern unsigned long ___change_bit(unsigned long *addr, unsigned long mask);
static inline int test_and_set_bit(unsigned long nr, volatile unsigned long *addr)
static inline void set_bit(unsigned long nr, volatile unsigned long *addr)
static inline int test_and_clear_bit(unsigned long nr, volatile unsigned long *addr)
static inline void clear_bit(unsigned long nr, volatile unsigned long *addr)
static inline int test_and_change_bit(unsigned long nr, volatile unsigned long *addr)
static inline void change_bit(unsigned long nr, volatile unsigned long *addr)
#define smp_mb__before_clear_bit()	do  while(0)
#define smp_mb__after_clear_bit()	do  while(0)
