#define COMPAT_DISPATCH_SEMAPHORE_SEMAPHORE_H
#define sem_t dispatch_semaphore_t
sem_post              dispatch_semaphore_signal(*psem)
sem_wait              dispatch_semaphore_wait(*psem, DISPATCH_TIME_FOREVER)
sem_timedwait    dispatch_semaphore_wait(*psem, dispatch_walltime(val, 0))
sem_destroy           dispatch_release(*psem)
compat_sem_init
#define sem_init compat_sem_init
