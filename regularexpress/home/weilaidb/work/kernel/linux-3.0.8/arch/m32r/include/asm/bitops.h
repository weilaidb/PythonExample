#define _ASM_M32R_BITOPS_H
#error only <linux/bitops.h> can be included directly
static __inline__ void set_bit(int nr, volatile void * addr)
static __inline__ void clear_bit(int nr, volatile void * addr)
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
static __inline__ void change_bit(int nr, volatile void * addr)
static __inline__ int test_and_set_bit(int nr, volatile void * addr)
static __inline__ int test_and_clear_bit(int nr, volatile void * addr)
static __inline__ int test_and_change_bit(int nr, volatile void * addr)
