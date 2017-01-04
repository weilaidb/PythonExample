#define _M68K_BITOPS_H
#error only <linux/bitops.h> can be included directly
#define test_and_set_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_test_and_set_bit(nr, vaddr) : \
__generic_test_and_set_bit(nr, vaddr))
#define __test_and_set_bit(nr,vaddr) test_and_set_bit(nr,vaddr)
static inline int __constant_test_and_set_bit(int nr, unsigned long *vaddr)
static inline int __generic_test_and_set_bit(int nr, unsigned long *vaddr)
#define set_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_set_bit(nr, vaddr) : \
__generic_set_bit(nr, vaddr))
#define __set_bit(nr,vaddr) set_bit(nr,vaddr)
static inline void __constant_set_bit(int nr, volatile unsigned long *vaddr)
static inline void __generic_set_bit(int nr, volatile unsigned long *vaddr)
#define test_and_clear_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_test_and_clear_bit(nr, vaddr) : \
__generic_test_and_clear_bit(nr, vaddr))
#define __test_and_clear_bit(nr,vaddr) test_and_clear_bit(nr,vaddr)
static inline int __constant_test_and_clear_bit(int nr, unsigned long *vaddr)
static inline int __generic_test_and_clear_bit(int nr, unsigned long *vaddr)
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
#define clear_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_clear_bit(nr, vaddr) : \
__generic_clear_bit(nr, vaddr))
#define __clear_bit(nr,vaddr) clear_bit(nr,vaddr)
static inline void __constant_clear_bit(int nr, volatile unsigned long *vaddr)
static inline void __generic_clear_bit(int nr, volatile unsigned long *vaddr)
#define test_and_change_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_test_and_change_bit(nr, vaddr) : \
__generic_test_and_change_bit(nr, vaddr))
#define __test_and_change_bit(nr,vaddr) test_and_change_bit(nr,vaddr)
#define __change_bit(nr,vaddr) change_bit(nr,vaddr)
static inline int __constant_test_and_change_bit(int nr, unsigned long *vaddr)
static inline int __generic_test_and_change_bit(int nr, unsigned long *vaddr)
#define change_bit(nr,vaddr) \
(__builtin_constant_p(nr) ? \
__constant_change_bit(nr, vaddr) : \
__generic_change_bit(nr, vaddr))
static inline void __constant_change_bit(int nr, unsigned long *vaddr)
static inline void __generic_change_bit(int nr, unsigned long *vaddr)
static inline int test_bit(int nr, const unsigned long *vaddr)
static inline int find_first_zero_bit(const unsigned long *vaddr,
unsigned size)
#define find_first_zero_bit find_first_zero_bit
static inline int find_next_zero_bit(const unsigned long *vaddr, int size,
int offset)
#define find_next_zero_bit find_next_zero_bit
static inline int find_first_bit(const unsigned long *vaddr, unsigned size)
#define find_first_bit find_first_bit
static inline int find_next_bit(const unsigned long *vaddr, int size,
int offset)
#define find_next_bit find_next_bit
static inline unsigned long ffz(unsigned long word)
static inline int ffs(int x)
#define __ffs(x) (ffs(x) - 1)
static inline int fls(int x)
static inline int __fls(int x)
static inline void __set_bit_le(int nr, void *addr)
static inline void __clear_bit_le(int nr, void *addr)
static inline int __test_and_set_bit_le(int nr, void *addr)
static inline int test_and_set_bit_le(int nr, void *addr)
static inline int __test_and_clear_bit_le(int nr, void *addr)
static inline int test_and_clear_bit_le(int nr, void *addr)
static inline int test_bit_le(int nr, const void *vaddr)
static inline int find_first_zero_bit_le(const void *vaddr, unsigned size)
#define find_first_zero_bit_le find_first_zero_bit_le
static inline unsigned long find_next_zero_bit_le(const void *addr,
unsigned long size, unsigned long offset)
#define find_next_zero_bit_le find_next_zero_bit_le
static inline int find_first_bit_le(const void *vaddr, unsigned size)
#define find_first_bit_le find_first_bit_le
static inline unsigned long find_next_bit_le(const void *addr,
unsigned long size, unsigned long offset)
#define find_next_bit_le find_next_bit_le
#define ext2_set_bit_atomic(lock, nr, addr)	\
test_and_set_bit_le(nr, addr)
#define ext2_clear_bit_atomic(lock, nr, addr)	\
test_and_clear_bit_le(nr, addr)
