#define _S390_BITOPS_H
#error only <linux/bitops.h> can be included directly
extern const char _oi_bitmap[];
extern const char _ni_bitmap[];
extern const char _zb_findmap[];
extern const char _sb_findmap[];
#define __BITOPS_ALIGN		3
#define __BITOPS_WORDSIZE	32
#define __BITOPS_OR		"or"
#define __BITOPS_AND		"nr"
#define __BITOPS_XOR		"xr"
#define __BITOPS_LOOP(__old, __new, __addr, __val, __op_string)	\
asm volatile(						\
"	l	%0,%2\n"			\
"0:	lr	%1,%0\n"			\
__op_string "	%1,%3\n"			\
"	cs	%0,%1,%2\n"			\
"	jl	0b"				\
: "=&d" (__old), "=&d" (__new),			\
"=Q" (*(unsigned long *) __addr)		\
: "d" (__val), "Q" (*(unsigned long *) __addr)	\
: "cc");
#define __BITOPS_ALIGN		7
#define __BITOPS_WORDSIZE	64
#define __BITOPS_OR		"ogr"
#define __BITOPS_AND		"ngr"
#define __BITOPS_XOR		"xgr"
#define __BITOPS_LOOP(__old, __new, __addr, __val, __op_string)	\
asm volatile(						\
"	lg	%0,%2\n"			\
"0:	lgr	%1,%0\n"			\
__op_string "	%1,%3\n"			\
"	csg	%0,%1,%2\n"			\
"	jl	0b"				\
: "=&d" (__old), "=&d" (__new),			\
"=Q" (*(unsigned long *) __addr)		\
: "d" (__val), "Q" (*(unsigned long *) __addr)	\
: "cc");
#define __BITOPS_WORDS(bits) (((bits)+__BITOPS_WORDSIZE-1)/__BITOPS_WORDSIZE)
#define __BITOPS_BARRIER() asm volatile("" : : : "memory")
static inline void set_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline void clear_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline void change_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline int
test_and_set_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline int
test_and_clear_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline int
test_and_change_bit_cs(unsigned long nr, volatile unsigned long *ptr)
static inline void __set_bit(unsigned long nr, volatile unsigned long *ptr)
static inline void
__constant_set_bit(const unsigned long nr, volatile unsigned long *ptr)
#define set_bit_simple(nr,addr) \
(__builtin_constant_p((nr)) ? \
__constant_set_bit((nr),(addr)) : \
__set_bit((nr),(addr)) )
static inline void
__clear_bit(unsigned long nr, volatile unsigned long *ptr)
static inline void
__constant_clear_bit(const unsigned long nr, volatile unsigned long *ptr)
#define clear_bit_simple(nr,addr) \
(__builtin_constant_p((nr)) ? \
__constant_clear_bit((nr),(addr)) : \
__clear_bit((nr),(addr)) )
static inline void __change_bit(unsigned long nr, volatile unsigned long *ptr)
static inline void
__constant_change_bit(const unsigned long nr, volatile unsigned long *ptr)
#define change_bit_simple(nr,addr) \
(__builtin_constant_p((nr)) ? \
__constant_change_bit((nr),(addr)) : \
__change_bit((nr),(addr)) )
static inline int
test_and_set_bit_simple(unsigned long nr, volatile unsigned long *ptr)
#define __test_and_set_bit(X,Y)		test_and_set_bit_simple(X,Y)
static inline int
test_and_clear_bit_simple(unsigned long nr, volatile unsigned long *ptr)
#define __test_and_clear_bit(X,Y)	test_and_clear_bit_simple(X,Y)
static inline int
test_and_change_bit_simple(unsigned long nr, volatile unsigned long *ptr)
#define __test_and_change_bit(X,Y)	test_and_change_bit_simple(X,Y)
#define set_bit             set_bit_cs
#define clear_bit           clear_bit_cs
#define change_bit          change_bit_cs
#define test_and_set_bit    test_and_set_bit_cs
#define test_and_clear_bit  test_and_clear_bit_cs
#define test_and_change_bit test_and_change_bit_cs
#define set_bit             set_bit_simple
#define clear_bit           clear_bit_simple
#define change_bit          change_bit_simple
#define test_and_set_bit    test_and_set_bit_simple
#define test_and_clear_bit  test_and_clear_bit_simple
#define test_and_change_bit test_and_change_bit_simple
static inline int __test_bit(unsigned long nr, const volatile unsigned long *ptr)
static inline int
__constant_test_bit(unsigned long nr, const volatile unsigned long *addr)
#define test_bit(nr,addr) \
(__builtin_constant_p((nr)) ? \
__constant_test_bit((nr),(addr)) : \
__test_bit((nr),(addr)) )
static inline unsigned long __ffz_word_loop(const unsigned long *addr,
unsigned long size)
static inline unsigned long __ffs_word_loop(const unsigned long *addr,
unsigned long size)
static inline unsigned long __ffz_word(unsigned long nr, unsigned long word)
static inline unsigned long __ffs_word(unsigned long nr, unsigned long word)
static inline unsigned long __load_ulong_be(const unsigned long *p,
unsigned long offset)
static inline unsigned long __load_ulong_le(const unsigned long *p,
unsigned long offset)
static inline unsigned long ffz(unsigned long word)
static inline unsigned long __ffs (unsigned long word)
static inline int ffs(int x)
static inline unsigned long find_first_zero_bit(const unsigned long *addr,
unsigned long size)
#define find_first_zero_bit find_first_zero_bit
static inline unsigned long find_first_bit(const unsigned long * addr,
unsigned long size)
#define find_first_bit find_first_bit
static inline int find_next_zero_bit (const unsigned long * addr,
unsigned long size,
unsigned long offset)
#define find_next_zero_bit find_next_zero_bit
static inline int find_next_bit (const unsigned long * addr,
unsigned long size,
unsigned long offset)
#define find_next_bit find_next_bit
static inline int sched_find_first_bit(unsigned long *b)
static inline int find_first_zero_bit_le(void *vaddr, unsigned int size)
#define find_first_zero_bit_le find_first_zero_bit_le
static inline int find_next_zero_bit_le(void *vaddr, unsigned long size,
unsigned long offset)
#define find_next_zero_bit_le find_next_zero_bit_le
static inline unsigned long find_first_bit_le(void *vaddr, unsigned long size)
#define find_first_bit_le find_first_bit_le
static inline int find_next_bit_le(void *vaddr, unsigned long size,
unsigned long offset)
#define find_next_bit_le find_next_bit_le
#define ext2_set_bit_atomic(lock, nr, addr)	\
test_and_set_bit_le(nr, addr)
#define ext2_clear_bit_atomic(lock, nr, addr)	\
test_and_clear_bit_le(nr, addr)
