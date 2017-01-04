#define __ASM_SH_BITOPS_H
#error only <linux/bitops.h> can be included directly
#elif defined(CONFIG_CPU_SH2A)
#elif defined(CONFIG_CPU_SH4A)
#define smp_mb__before_clear_bit()	smp_mb()
#define smp_mb__after_clear_bit()	smp_mb()
static inline unsigned long ffz(unsigned long word)
static inline unsigned long __ffs(unsigned long word)
static inline unsigned long ffz(unsigned long word)
