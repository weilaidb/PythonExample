#define AVUTIL_ATOMIC_H
#if HAVE_ATOMICS_NATIVE
#if HAVE_ATOMICS_GCC
#elif HAVE_ATOMICS_WIN32
#elif HAVE_ATOMICS_SUNCC
avpriv_atomic_int_get;
avpriv_atomic_int_set;
avpriv_atomic_int_add_and_fetch;
*avpriv_atomic_ptr_cas;
