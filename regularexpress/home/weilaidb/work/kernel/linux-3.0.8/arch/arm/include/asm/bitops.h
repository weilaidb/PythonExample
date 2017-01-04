#define __ASM_ARM_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define smp_mb__before_clear_bit()	mb()
#define smp_mb__after_clear_bit()	mb()
static inline void ____atomic_set_bit(unsigned int bit, volatile unsigned long *p)
static inline void ____atomic_clear_bit(unsigned int bit, volatile unsigned long *p)
static inline void ____atomic_change_bit(unsigned int bit, volatile unsigned long *p)
static inline int
____atomic_test_and_set_bit(unsigned int bit, volatile unsigned long *p)
static inline int
____atomic_test_and_clear_bit(unsigned int bit, volatile unsigned long *p)
static inline int
____atomic_test_and_change_bit(unsigned int bit, volatile unsigned long *p)
extern void _set_bit(int nr, volatile unsigned long * p);
extern void _clear_bit(int nr, volatile unsigned long * p);
extern void _change_bit(int nr, volatile unsigned long * p);
extern int _test_and_set_bit(int nr, volatile unsigned long * p);
extern int _test_and_clear_bit(int nr, volatile unsigned long * p);
extern int _test_and_change_bit(int nr, volatile unsigned long * p);
extern int _find_first_zero_bit_le(const void * p, unsigned size);
extern int _find_next_zero_bit_le(const void * p, int size, int offset);
extern int _find_first_bit_le(const unsigned long *p, unsigned size);
extern int _find_next_bit_le(const unsigned long *p, int size, int offset);
extern int _find_first_zero_bit_be(const void * p, unsigned size);
extern int _find_next_zero_bit_be(const void * p, int size, int offset);
extern int _find_first_bit_be(const unsigned long *p, unsigned size);
extern int _find_next_bit_be(const unsigned long *p, int size, int offset);
#define ATOMIC_BITOP(name,nr,p)			\
(__builtin_constant_p(nr) ? ____atomic_##name(nr, p) : _##name(nr,p))
#define ATOMIC_BITOP(name,nr,p)		_##name(nr,p)
#define set_bit(nr,p)			ATOMIC_BITOP(set_bit,nr,p)
#define clear_bit(nr,p)			ATOMIC_BITOP(clear_bit,nr,p)
#define change_bit(nr,p)		ATOMIC_BITOP(change_bit,nr,p)
#define test_and_set_bit(nr,p)		ATOMIC_BITOP(test_and_set_bit,nr,p)
#define test_and_clear_bit(nr,p)	ATOMIC_BITOP(test_and_clear_bit,nr,p)
#define test_and_change_bit(nr,p)	ATOMIC_BITOP(test_and_change_bit,nr,p)
#define find_first_zero_bit(p,sz)	_find_first_zero_bit_le(p,sz)
#define find_next_zero_bit(p,sz,off)	_find_next_zero_bit_le(p,sz,off)
#define find_first_bit(p,sz)		_find_first_bit_le(p,sz)
#define find_next_bit(p,sz,off)		_find_next_bit_le(p,sz,off)
#define find_first_zero_bit(p,sz)	_find_first_zero_bit_be(p,sz)
#define find_next_zero_bit(p,sz,off)	_find_next_zero_bit_be(p,sz,off)
#define find_first_bit(p,sz)		_find_first_bit_be(p,sz)
#define find_next_bit(p,sz,off)		_find_next_bit_be(p,sz,off)
#if __LINUX_ARM_ARCH__ < 5
static inline int constant_fls(int x)
static inline int fls(int x)
#define __fls(x) (fls(x) - 1)
#define ffs(x) ()
#define __ffs(x) (ffs(x) - 1)
#define ffz(x) __ffs( ~(x) )
static inline int find_first_zero_bit_le(const void *p, unsigned size)
#define find_first_zero_bit_le find_first_zero_bit_le
static inline int find_next_zero_bit_le(const void *p, int size, int offset)
#define find_next_zero_bit_le find_next_zero_bit_le
static inline int find_next_bit_le(const void *p, int size, int offset)
#define find_next_bit_le find_next_bit_le
#define ext2_set_bit_atomic(lock, nr, p)	\
test_and_set_bit_le(nr, p)
#define ext2_clear_bit_atomic(lock, nr, p)	\
test_and_clear_bit_le(nr, p)
