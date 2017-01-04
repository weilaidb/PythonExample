#define AVUTIL_ATOMIC_H
#if HAVE_ATOMICS_NATIVE
#if HAVE_ATOMICS_GCC
#elif HAVE_ATOMICS_WIN32
#elif HAVE_ATOMICS_SUNCC
int avpriv_atomic_int_get(volatile int *ptr);
void avpriv_atomic_int_set(volatile int *ptr, int val);
int avpriv_atomic_int_add_and_fetch(volatile int *ptr, int inc);
void *avpriv_atomic_ptr_cas(void * volatile *ptr, void *oldval, void *newval);
