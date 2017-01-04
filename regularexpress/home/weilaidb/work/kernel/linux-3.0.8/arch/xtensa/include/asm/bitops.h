#define _XTENSA_BITOPS_H
#error only <linux/bitops.h> can be included directly
# error SMP not supported on this architecture
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
#if XCHAL_HAVE_NSA
static inline unsigned long __cntlz (unsigned long x)
static inline int ffz(unsigned long x)
static inline int __ffs(unsigned long x)
static inline int ffs(unsigned long x)
static inline int fls (unsigned int x)
static inline unsigned long __fls(unsigned long word)
# include <asm-generic/bitops/ffs.h>
# include <asm-generic/bitops/__ffs.h>
# include <asm-generic/bitops/ffz.h>
# include <asm-generic/bitops/fls.h>
# include <asm-generic/bitops/__fls.h>
# define ext2_set_bit_atomic(lock,nr,addr)				\
test_and_set_bit((nr), (unsigned long*)(addr))
# define ext2_clear_bit_atomic(lock,nr,addr)				\
test_and_clear_bit((nr), (unsigned long*)(addr))
#elif defined(__XTENSA_EB__)
# define ext2_set_bit_atomic(lock,nr,addr)				\
test_and_set_bit((nr) ^ 0x18, (unsigned long*)(addr))
# define ext2_clear_bit_atomic(lock,nr,addr)				\
test_and_clear_bit((nr) ^ 0x18, (unsigned long*)(addr))
# error processor byte order undefined!
