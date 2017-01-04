#if !HAVE_ATOMICS_NATIVE
#if HAVE_PTHREADS
static pthread_mutex_t atomic_lock = PTHREAD_MUTEX_INITIALIZER;
int avpriv_atomic_int_get(volatile int *ptr)
void avpriv_atomic_int_set(volatile int *ptr, int val)
int avpriv_atomic_int_add_and_fetch(volatile int *ptr, int inc)
void *avpriv_atomic_ptr_cas(void * volatile *ptr, void *oldval, void *newval)
#elif !HAVE_THREADS
int avpriv_atomic_int_get(volatile int *ptr)
void avpriv_atomic_int_set(volatile int *ptr, int val)
int avpriv_atomic_int_add_and_fetch(volatile int *ptr, int inc)
void *avpriv_atomic_ptr_cas(void * volatile *ptr, void *oldval, void *newval)
#error "Threading is enabled, but there is no implementation of atomic operations available"
