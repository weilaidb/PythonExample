#define _SPARC64_BITOPS_H
#error only <linux/bitops.h> can be included directly
extern int test_and_set_bit(unsigned long nr, volatile unsigned long *addr);
extern int test_and_clear_bit(unsigned long nr, volatile unsigned long *addr);
extern int test_and_change_bit(unsigned long nr, volatile unsigned long *addr);
extern void set_bit(unsigned long nr, volatile unsigned long *addr);
extern void clear_bit(unsigned long nr, volatile unsigned long *addr);
extern void change_bit(unsigned long nr, volatile unsigned long *addr);
#define smp_mb__before_clear_bit()	barrier()
#define smp_mb__after_clear_bit()	barrier()
extern int ffs(int x);
extern unsigned long __ffs(unsigned long);
extern unsigned long __arch_hweight64(__u64 w);
extern unsigned int __arch_hweight32(unsigned int w);
extern unsigned int __arch_hweight16(unsigned int w);
extern unsigned int __arch_hweight8(unsigned int w);
#define ext2_set_bit_atomic(lock,nr,addr) \
test_and_set_bit((nr) ^ 0x38,(unsigned long *)(addr))
#define ext2_clear_bit_atomic(lock,nr,addr) \
test_and_clear_bit((nr) ^ 0x38,(unsigned long *)(addr))
