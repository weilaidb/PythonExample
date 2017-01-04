#define _ASM_IA64_SYNC_BITOPS_H
static inline void sync_set_bit(int nr, volatile void *addr)
static inline void sync_clear_bit(int nr, volatile void *addr)
static inline void sync_change_bit(int nr, volatile void *addr)
static inline int sync_test_and_set_bit(int nr, volatile void *addr)
static inline int sync_test_and_clear_bit(int nr, volatile void *addr)
static inline int sync_test_and_change_bit(int nr, volatile void *addr)
static inline int sync_test_bit(int nr, const volatile void *addr)
#define sync_cmpxchg(ptr, old, new)				\
((__typeof__(*(ptr)))cmpxchg_acq((ptr), (old), (new)))
