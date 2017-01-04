# ifdef HAVE_PTHREAD_H
#  include <pthread.h>
# endif
#undef _POSIX_THREADS
#define SGI_THREADS
#define SOLARIS_THREADS
#if defined(sun) && !defined(SOLARIS_THREADS)
#define SUN_LWP
#define _POSIX_THREADS
static int thread_debug = 0;
#define dprintf(args)   (void)((thread_debug & 1) && printf args)
#define d2printf(args)  ((thread_debug & 8) && printf args)
#define dprintf(args)
#define d2printf(args)
static int initialized;
static void PyThread__init_thread(void);
void
PyThread_init_thread(void)
static size_t _pythread_stacksize = 0;
#undef _POSIX_THREADS
size_t
PyThread_get_stacksize(void)
int
PyThread_set_stacksize(size_t size)
struct key ;
static struct key *keyhead = NULL;
static PyThread_type_lock keymutex = NULL;
static int nkeys = 0;
static struct key *
find_key(int key, void *value)
int
PyThread_create_key(void)
void
PyThread_delete_key(int key)
int
PyThread_set_key_value(int key, void *value)
void *
PyThread_get_key_value(int key)
void
PyThread_delete_key_value(int key)
void
PyThread_ReInitTLS(void)
