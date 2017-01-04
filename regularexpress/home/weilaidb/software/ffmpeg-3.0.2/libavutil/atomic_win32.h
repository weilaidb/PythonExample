#define AVUTIL_ATOMIC_WIN32_H
#define WIN32_LEAN_AND_MEAN
#define avpriv_atomic_int_get atomic_int_get_win32
static inline int atomic_int_get_win32(volatile int *ptr)
#define avpriv_atomic_int_set atomic_int_set_win32
static inline void atomic_int_set_win32(volatile int *ptr, int val)
#define avpriv_atomic_int_add_and_fetch atomic_int_add_and_fetch_win32
static inline int atomic_int_add_and_fetch_win32(volatile int *ptr, int inc)
#define avpriv_atomic_ptr_cas atomic_ptr_cas_win32
static inline void *atomic_ptr_cas_win32(void * volatile *ptr,
void *oldval, void *newval)
