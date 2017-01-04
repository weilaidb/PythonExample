#define AVUTIL_ATOMIC_SUNCC_H
#define avpriv_atomic_int_get atomic_int_get_suncc
static inline int atomic_int_get_suncc(volatile int *ptr)
#define avpriv_atomic_int_set atomic_int_set_suncc
static inline void atomic_int_set_suncc(volatile int *ptr, int val)
#define avpriv_atomic_int_add_and_fetch atomic_int_add_and_fetch_suncc
static inline int atomic_int_add_and_fetch_suncc(volatile int *ptr, int inc)
#define avpriv_atomic_ptr_cas atomic_ptr_cas_suncc
static inline void *atomic_ptr_cas_suncc(void * volatile *ptr,
void *oldval, void *newval)
