#define __ASM_GENERIC_BITOPS_H
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
#error only <linux/bitops.h> can be included directly
