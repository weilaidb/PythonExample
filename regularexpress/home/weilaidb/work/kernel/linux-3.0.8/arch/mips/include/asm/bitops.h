#define _ASM_BITOPS_H
#error only <linux/bitops.h> can be included directly
#if _MIPS_SZLONG == 32
#define SZLONG_LOG 5
#define SZLONG_MASK 31UL
#define __LL		"ll	"
#define __SC		"sc	"
#define __INS		"ins    "
#define __EXT		"ext    "
#elif _MIPS_SZLONG == 64
#define SZLONG_LOG 6
#define SZLONG_MASK 63UL
#define __LL		"lld	"
#define __SC		"scd	"
#define __INS		"dins    "
#define __EXT		"dext    "
#define smp_mb__before_clear_bit()	smp_mb__before_llsc()
#define smp_mb__after_clear_bit()	smp_llsc_mb()
static inline void set_bit(unsigned long nr, volatile unsigned long *addr)
static inline void clear_bit(unsigned long nr, volatile unsigned long *addr)
static inline void clear_bit_unlock(unsigned long nr, volatile unsigned long *addr)
static inline void change_bit(unsigned long nr, volatile unsigned long *addr)
static inline int test_and_set_bit(unsigned long nr,
volatile unsigned long *addr)
static inline int test_and_set_bit_lock(unsigned long nr,
volatile unsigned long *addr)
static inline int test_and_clear_bit(unsigned long nr,
volatile unsigned long *addr)
static inline int test_and_change_bit(unsigned long nr,
volatile unsigned long *addr)
static inline void __clear_bit_unlock(unsigned long nr, volatile unsigned long *addr)
static inline unsigned long __fls(unsigned long word)
static inline unsigned long __ffs(unsigned long word)
static inline int fls(int x)
static inline int ffs(int word)
