#undef _POSIX_THREADS
static void PyThread__init_thread(void)
struct func_arg ;
static void *
new_func(void *funcarg)
long
PyThread_start_new_thread(void (*func)(void *), void *arg)
long
PyThread_get_thread_ident(void)
void
PyThread_exit_thread(void)
PyThread_type_lock
PyThread_allocate_lock(void)
void
PyThread_free_lock(PyThread_type_lock lock)
int
PyThread_acquire_lock(PyThread_type_lock lock, int waitflag)
void
PyThread_release_lock(PyThread_type_lock lock)
