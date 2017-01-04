#if defined(hpux) || defined(__hpux) || defined(_hpux)
#  include <sys/pstat.h>
#  ifdef _SC_NPROC_ONLN
#    define _SC_NPROCESSORS_ONLN _SC_NPROC_ONLN
#  elif defined _SC_CRAY_NCPU
#    define _SC_NPROCESSORS_ONLN _SC_CRAY_NCPU
#  endif
int online_cpus(void)
int init_recursive_mutex(pthread_mutex_t *m)
